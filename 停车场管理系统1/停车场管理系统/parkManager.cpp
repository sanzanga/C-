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
	cout << "************************************" << endl;
}

//退出系统
void parkManager::ExistSystem()
{
	cout << "欢迎下次使用！" << endl;
	system("pause");
	exit(0);
}

parkManager::~parkManager()
{

}