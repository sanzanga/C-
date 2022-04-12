#pragma once//防止头文件重复包含
#include <iostream>//包含输入输出流头文件
using namespace std;//使用标准命名空间
#include "car.h"
#include "time.h"
#include "bigTruck.h"
#include "mediumTruck.h"
#include "smallCar.h"
#include "smallTruck.h"
#include "access.h"

#define MAX 3
#define FILENAME1 "carInfo.txt"
#define FILENAME2 "carInfo2.txt"
#include <fstream>

class parkManager
{
public:
	//构造函数
	parkManager();

	//展示菜单
	void shouMenu();

	//退出系统
	void ExistSystem();

	//展示收费标准
	void showRates();

	//增加车辆信息
	void addCarInfo();

	//记录停车场的内的车辆数量
	int m_CarNum;

	//保存车辆信息的数组
	Car** carInfoArray;

	//保存车辆信息
	void save();

	//判断文件是否为空
	bool fileIsEmpty;

	//获取文件中的数据条数
	int getCarInfoNum();

	//初始化指针数组
	void init_Car();

	//显示车辆信息
	void showCarInfo();

	//保存通道上的车辆信息的数组
	Access** carInAccessInfo;

	//记录通道上的车的数量
	int carNumInAccess;

	//获得通道上车的数量
	int getCarInAccessNum();

	//保存通道上的车辆信息
	void save1();

	//初始化通道数组
	void initAccess();

	//汽车离开停车场
	void carLeave();

	//判断查找的车牌号是否存在
	int carNumIsExist(string carNum);

	//删除车辆信息
	void DelCar();

	//用函数重载在汽车离开的时候删除信息
	void DelCar(string carNum);

	//通道上的车辆进入停车场
	void accessToPark();

	//修改车辆信息
	void ModCarInfo();

	//查询车辆
	void searchInfo();

	//析构函数
	~parkManager();
};