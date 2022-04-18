#include "smallCar.h"

//���캯��
SmallCar::SmallCar(string carNum, string carColor, int carShape, Time getTime)
{
	this->carNum = carNum;
	this->carColor = carColor;
	this->carShape = carShape;
	this->getTime.year = getTime.year;
	this->getTime.month = getTime.month;
	this->getTime.day = getTime.day;
	this->getTime.hour = getTime.hour;
	this->getTime.minute = getTime.minute;
	/*this->leaveTime.year = leaveTime.year;
	this->leaveTime.month = leaveTime.month;
	this->leaveTime.day = leaveTime.day;
	this->leaveTime.hour = leaveTime.hour;
	this->leaveTime.minute = leaveTime.minute;*/
}

SmallCar::SmallCar(string carNum, string carColor, int carShape, Time getTime, Time leaveTime)
{
	this->carNum = carNum;
	this->carColor = carColor;
	this->carShape = carShape;
	this->getTime.year = getTime.year;
	this->getTime.month = getTime.month;
	this->getTime.day = getTime.day;
	this->getTime.hour = getTime.hour;
	this->getTime.minute = getTime.minute;
	this->leaveTime.year = leaveTime.year;
	this->leaveTime.month = leaveTime.month;
	this->leaveTime.day = leaveTime.day;
	this->leaveTime.hour = leaveTime.hour;
	this->leaveTime.minute = leaveTime.minute;
}

//��ȡ��������
string SmallCar::getCarShape()
{
	return string("С����");
}

//��ȡ�������� 
double SmallCar::getMoney()
{
	double money = 0;
	int hours = getHours();
	if (hours <= 1)
		money = 0;
	else
		money = hours * 1;
	return money;
}

//��ȡ������Ϣ
void SmallCar::showInfo()
{
	/*cout << "���ƺ�\t\t��ɫ\t����\t����ʱ��\t�뿪ʱ��\t����(Ԫ)\t" << endl;
	cout << this->carNum << "\t\t"
		<< this->carColor << "\t"
		<< this->getCarShape() << "\t"
		<< this->getTime.year << "." << this->getTime.month << "." << this->getTime.day
		<< "." << this->getTime.hour << "." << this->getTime.minute << "\t"
		<< this->leaveTime.year << "." << this->leaveTime.month << "." << this->leaveTime.day
		<< "." << this->leaveTime.hour << "." << this->leaveTime.minute << "\t"
		<< this->getMoney() << endl;*/
	cout << "���ƺţ�" << this->carNum
		<< " ��ɫ��" << this->carColor
		<< " ���ͣ�" << this->getCarShape()
		<< " ����ʱ�䣺" << this->getTime.year << "." << this->getTime.month << "." << this->getTime.day
		<< "." << this->getTime.hour << "." << this->getTime.minute
		<< " �뿪ʱ�䣺" << this->leaveTime.year << "." << this->leaveTime.month << "." << this->leaveTime.day
		<< "." << this->leaveTime.hour << "." << this->leaveTime.minute
		<< " ���ã�" << this->getMoney() << endl;
}

//��ȡͣ�����ڵĳ�����Ϣ
void SmallCar::showParkInfo()
{
	//cout << "���ƺ�\t\t��ɫ\t����\t����ʱ��\t" << endl;
	cout << this->carNum << "\t\t"
		<< this->carColor << "\t"
		<< this->getCarShape() << "\t"
		<< this->getTime.year << "." << this->getTime.month << "." << this->getTime.day
		<< "." << this->getTime.hour << "." << this->getTime.minute << "\t" << endl;
}