#pragma once
#include <iostream>
using namespace std;

class Time
{
	friend class Car;
	friend class SmallCar;
	friend class SmallTruck;
	friend class MediumTruck;
	friend class BigTruck;
public:
	Time(){}

	//构造函数
	Time(int year,int month,int day,int hour,int minute);

private:

	int year;//年份
	int month;//月份
	int day;//日期
	int hour;//小时
	int minute;//分钟
};