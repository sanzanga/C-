#pragma once
#include <iostream>
using namespace std;

class Time
{
	friend class Car;
	friend class SmallCar;
public:
	Time(){}

	//���캯��
	Time(int year,int month,int day,int hour,int minute);

private:

	int year;//���
	int month;//�·�
	int day;//����
	int hour;//Сʱ
	int minute;//����
};