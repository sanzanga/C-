#pragma once
#include <iostream>
using namespace std;
#include "car.h"

class SmallCar :public Car
{
public:
	//构造函数
	SmallCar(string carNum, string carColor, int carShape, Time getTime);
	//因为在停车场和车辆离开停车场所显示的信息不相同，开始初始化的值也不相同
	//所以在构造函数中的参数的个数并不相同
	//所以可以根据函数的重载定义两个构造函数来分别用于不同时候
	SmallCar(string carNum, string carColor, int carShape, Time getTime,Time leaveTime);

	//获取车辆类型
	virtual string getCarShape();

	//获取车辆费用 
	virtual double getMoney();

	//获取车辆信息
	virtual void showInfo();

	//获取停车场内的车的信息
	virtual void showParkInfo();
};