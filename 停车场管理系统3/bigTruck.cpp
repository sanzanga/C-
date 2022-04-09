#include "bigTruck.h"

//构造函数
BigTruck::BigTruck(string carNum, string carColor, int carShape, Time getTime)
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

BigTruck::BigTruck(string carNum, string carColor, int carShape, Time getTime, Time leaveTime)
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

//获取车辆类型
string BigTruck::getCarShape()
{
	return string("大卡");
}

//获取车辆费用 
double BigTruck::getMoney()
{
	double money = 0;
	int hours = getHours();
	if (hours <= 1)
		money = 0;
	else
		money = hours * 2;
	return money;
}

//获取车辆信息
void BigTruck::showInfo()
{
	/*cout << "车牌号\t\t颜色\t车型\t进入时间\t离开时间\t费用(元)\t" << endl;
	cout << this->carNum << "\t\t"
		<< this->carColor << "\t"
		<< this->getCarShape() << "\t"
		<< this->getTime.year << "." << this->getTime.month << "." << this->getTime.day
		<< "." << this->getTime.hour << "." << this->getTime.minute << "\t"
		<< this->leaveTime.year << "." << this->leaveTime.month << "." << this->leaveTime.day
		<< "." << this->leaveTime.hour << "." << this->leaveTime.minute << "\t"
		<< this->getMoney() << endl;*/
	cout << "车牌号：" << this->carNum
		<< "\t颜色：" << this->carColor
		<< "\t车型：" << this->getCarShape()
		<< "\t进入时间：" << this->getTime.year << "." << this->getTime.month << "." << this->getTime.day
		<< "." << this->getTime.hour << "." << this->getTime.minute
		<< "\t离开时间：" << this->leaveTime.year << "." << this->leaveTime.month << "." << this->leaveTime.day
		<< "." << this->leaveTime.hour << "." << this->leaveTime.minute
		<< "\t费用：" << this->getMoney();
}

//获取停车场内的车的信息
void BigTruck::showParkInfo()
{
	//cout << "车牌号\t\t颜色\t车型\t进入时间\t" << endl;
	cout << this->carNum << "\t\t"
		<< this->carColor << "\t"
		<< this->getCarShape() << "\t"
		<< this->getTime.year << "." << this->getTime.month << "." << this->getTime.day
		<< "." << this->getTime.hour << "." << this->getTime.minute << "\t" << endl;
}