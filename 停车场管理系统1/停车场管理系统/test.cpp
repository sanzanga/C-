#include <iostream>
#include "parkManager.h"
using namespace std;

#include "car.h"
#include "smallCar.h"
#include "time.h"

int main() {
	//测试代码
	Car* car = NULL;
	Time t1(2021, 1, 1, 10, 0);
	Time t2(2021, 1, 1, 11, 0);
	car = new SmallCar("0001", "黑色", 1, t1, t2);
    //SmallCar::SmallCar(string carNum, string carColor, int carShape, Time getTime, Time leaveTime)
	car->showInfo();
	delete car;

	car = new SmallCar("002", "白色", 1, t1);
	car->showParkInfo();
	delete car;

	////实例管理者对象
	//parkManager pm;

	//int input = 0;//用来存储用户的选择

	//do
	//{
	//	//展示菜单
	//	pm.shouMenu();

	//	cout << "请输入您的选择：" << endl;
	//	cin >> input;//接收用户的选择

	//	switch (input)
	//	{
	//	case 0://退出系统
	//		pm.ExistSystem();
	//		break;
	//	case 1://增加车辆
	//		break;
	//	case 2://显示车辆信息
	//		break;
	//	case 3://车辆离开停车场
	//		break;
	//	case 4://删除车辆信息
	//		break;
	//	case 5://修改车辆信息
	//		break;
	//	case 6://查询车辆
	//		break;
	//	case 7://统计车辆信息
	//		break;
	//	default:
	//		system("cls");
	//		break;
	//	}

	//} while (input);


	system("pause");
	return 0;
}