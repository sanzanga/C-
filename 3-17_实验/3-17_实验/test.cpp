#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;

class Date
{
	friend class Person;
public:
	Date(){}
	//利用构造函数给Date赋值
    Date(int m_Year, int m_Month, int m_Day);
	~Date(){}

private:
	int year;
	int month;
	int day;
};

class Person
{
public:
	Person(const char* number, Date birthday, const char* id, const char* sex = "男");
	Person(const Person& p)
	{
		this->number = new char[strlen(p.number) + 1];
		strcpy(this->number, p.number);
		this->birthday.year = p.birthday.year;
		this->birthday.month = p.birthday.month;
		this->birthday.day = p.birthday.day;
		this->id = new char[strlen(p.id) + 1];
		strcpy(this->id, p.id);
		this->sex = new char[strlen(p.sex) + 1];
		strcpy(this->sex, p.sex);

	}
	void showPerson()
	{
		cout << "编号\t" << "出生日期\t" << "身份证号\t\t" << "性别\t" << endl;
		cout << number << "\t"
			<< birthday.year << "." << birthday.month << "." << birthday.day
			<< "\t" << id << "\t\t" << sex << "\t" << endl;
	}
	~Person()
	{
		if (number != NULL)
		{
			delete[] number;
			number = NULL;
		}
		if (id != NULL)
		{
			delete[] id;
			id = NULL;
		}
	}

private:
	char* number = 0;//编号
	Date birthday;//生日
	char* id = 0;//身份证号
	char* sex = 0;
};

Date::Date(int m_Year, int m_Month, int m_Day)
{
	year = m_Year;
	month = m_Month;
	day = m_Day;
}

Person::Person(const char* number, Date birthday, const char* id, const char* sex)
{
	this->number = new char[strlen(number) + 1];
	strcpy(this->number, number);
	this->birthday.year = birthday.year;
	this->birthday.month = birthday.month;
	this->birthday.day = birthday.day;
	this->id = new char[strlen(id) + 1];
	strcpy(this->id, id);
	this->sex = new char[strlen(sex) + 1];
	strcpy(this->sex, sex);
}

int main() {
	
	char number[100] = { 0 };
	char id[100] = { 0 };
	char sex[10] = { 0 };
	int year, month, day;
	cout << "请输入人员的编号" << endl;
	cin >> number;
	cout << "请输入人员的出生年月日" << endl;
	cin >> year >> month >> day;
	cout << "请输入人员的身份证号" << endl;
	cin >> id;
	cout << "请输入人员的性别" << endl;
	cin >> sex;
	Date birthday(year, month, day);
	Person p1(number, birthday, id);
	Person p2 = p1;
	p2.showPerson();

	system("pause");
	return 0;
}