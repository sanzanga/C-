#include "car.h"

//�ж�����
bool isLeapYear(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		return true;
	else
		return false;
}

//��ȡ��һ��ʱ�������
int getOneDays(int year,int month,int day)
{
	int days = 0;
	days -= day;

	while (month<=12) {
		switch (month)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			days += 31;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			days += 30;
			break;
		case 2:
			if (isLeapYear(year))
				days += 29;
			else
				days += 28;
		default:
			break;
		}
		month++;
	}
	return days;
}

//�����׶ε�����
int getThreeDays(int year, int month, int day)
{
	int days = 0;
	if (day != 1) {
		days += day;
	}

	while (month) {
		month--;
		switch (month)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			days += 31;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			days += 30;
			break;
		case 2:
			if (isLeapYear(year))
				days += 29;
			else
				days += 28;
		default:
			days += day;
			break;
		}
	}
	return days;
}

//��ȡ���ʱ��
int Car::getHours()
{
	int hours = 0;//��¼����ʱ��

	//�����ꡢ�¡���...
	//��ʱ��ηֳ����Σ�����:
	//2019-2-3��2022-3-4
	//��һ�Σ�2019-2-3~2019-12-31
	//�ڶ��Σ�2020-1-1~2021-12-31
	//�����Σ�2022-1-1~2022-3-4
	int oneEndYear = this->getTime.year;
	int oneEndMonth = 12;
	int oneEndDay = 31;

	int twoBeginYear = this->getTime.year + 1;
	int twoBeginMonth = 1;
	int twoBeginDay = 1;

	int twoEndYear = this->leaveTime.year - 1;
	int twoEndMonth = 12;
	int twoEndDay = 31;

	int threeBeginYear = this->leaveTime.year;
	int threeBeginMonth = 1;
	int threeBeginDay = 1;

	int days = 0;

	//��ݲ���ͬ
	if (this->getTime.year != this->leaveTime.year) {
		//���õ���һ�׶ε�����
		days += getOneDays(this->getTime.year, this->getTime.month, this->getTime.day);
		//�õ��ڶ��׶ε�����
		for (int i = this->getTime.year + 1; i <= this->leaveTime.year - 1; i++) {
			if (isLeapYear(i))
				days += 366;
			else
				days += 365;
		}
	}
	//�����ͬ
	else {
		days -= this->getTime.day;
		for (int i = this->getTime.month; i < this->leaveTime.month; i++) {
			if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
				days += 31;
			else if (i == 4 || i == 6 || i == 9 || i == 11)
				days += 30;
			else {
				if (isLeapYear(this->getTime.year))
					days += 29;
				else
					days += 28;
			}
		}
		days += this->leaveTime.day;
	}
	//����һСʱ��һСʱ�շ�
	if (this->leaveTime.minute - this->leaveTime.minute > 0)
		hours++;

	if (this->leaveTime.hour - this->getTime.hour < 0) {
		days--;
		hours += this->leaveTime.hour - this->getTime.hour + 24;

	}
	else {
		hours += this->leaveTime.hour - this->getTime.hour;
	}
	//������Сʱ�����ж� ��û�й�һ��
	if (hours == 24) {
		hours = 0;
		days++;
	}

	//����ʱ��
	return (days * 24 + hours);
}