#include "parkManager.h"

parkManager::parkManager()
{

}

//展示菜单
void parkManager::shouMenu()
{
	cout << "************************************" << endl;
	cout << "****** 欢迎使用停车场管理系统！******" << endl;
	cout << "********* 0.退出管理程序 ***********" << endl;
	cout << "********* 1.增加车辆信息 ***********" << endl;
	cout << "********* 2.显示车辆信息 ***********" << endl;
	cout << "********* 3.车辆离开停车场 *********" << endl;
	cout << "********* 4.删除车辆记录 ***********" << endl;
	cout << "********* 5.修改车辆信息 ***********" << endl;
	cout << "********* 6.查询车辆信息 ***********" << endl;
	cout << "********* 7.统计车辆信息 ***********" << endl;
	cout << "*********   8.收费标准   ***********" << endl;
	cout << "************************************" << endl;
}

//退出系统
void parkManager::ExistSystem()
{
	cout << "欢迎下次使用！" << endl;
	system("pause");
	exit(0);
}

//展示收费标准
void parkManager::showRates()
{
	cout << "停车场收费标准如下：" << endl;
	cout << "1、任何车辆一个小时内不收费。" << endl;
	cout << "2、超过一个小时后，小汽车一小时1元，小卡一小时1元，中卡一小时1.5元，大卡一小时2元。" << endl;
	cout << "3、不足一小时按一小时收费。" << endl;
}

parkManager::~parkManager()
{

}