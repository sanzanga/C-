#pragma once
#include <iostream>
#include <string>
using namespace std;
#include "time.h"

//车的父类
class Car
{
	friend class SmallCar;
public:

	//获取车辆类型
	virtual string getCarShape() = 0;

	//获取车辆费用 
	virtual double getMoney() = 0;

	//获取车辆信息
	virtual void showInfo() = 0;

	//获取停车场内的车的信息
	virtual void showParkInfo() = 0;

private:

	string carNum;//车牌号
	string carColor;//颜色
	int carShape;//车型类型编号
	Time getTime;//车辆到达时间
	Time leaveTime;//车辆离开时间
	int money;//车辆在停车场的费用
};