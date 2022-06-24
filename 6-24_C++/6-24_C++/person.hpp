#pragma once
#include <iostream>
using namespace std;
#include <string>

template<class T1, class T2>
class Person
{
public:
	Person(T1 name, T2 age);
	//{
	//	this->age = age;
	//	this->name = name;
	//}

	void showPerson();
	//{
	//	cout << "name:" << this->name << endl;
	//	cout << "age:" << this->age << endl;
	//}

	T1 name;
	T2 age;
};

//���캯������ʵ��
template<class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age)
{
	this->name = name;
	this->age = age;
}

//��Ա��������ʵ��
template<class T1, class T2>
void Person<T1, T2>::showPerson()
{
	cout << "name:" << this->name << endl;
	cout << "age:" << this->age << endl;
}