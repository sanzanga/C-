#include <iostream>
#include "parkManager.h"
using namespace std;

//#include "car.h"
//#include "smallCar.h"
//#include "time.h"
//#include "smallTruck.h"
//#include "mediumTruck.h"
//#include "bigTruck.h"

int main() {
	////测试代码
	//Car* car = NULL;
	//Time t1(2021, 1, 1, 10, 0);
	//Time t2(2021, 1, 2, 10, 0);
	////car = new SmallCar("0001", "黑色", 1, t1, t2);
 //   //SmallCar::SmallCar(string carNum, string carColor, int carShape, Time getTime, Time leaveTime)
	////car->showInfo();
	////delete car;

	//car = new SmallCar("0002", "白色", 1, t1);
	//car->showParkInfo();
	//delete car;

	////car = new SmallTruck("0003", "黑色", 2, t1, t2);
	//////SmallCar::SmallCar(string carNum, string carColor, int carShape, Time getTime, Time leaveTime)
	////car->showInfo();
	////delete car;

	//car = new SmallTruck("0004", "白色", 2, t1);
	//car->showParkInfo();
	//delete car;

	////car = new MediumTruck("0005", "黑色", 3, t1, t2);
	//////SmallCar::SmallCar(string carNum, string carColor, int carShape, Time getTime, Time leaveTime)
	////car->showInfo();
	////delete car;

	//car = new MediumTruck("0006", "白色", 3, t1);
	//car->showParkInfo();
	//delete car;

	////car = new BigTruck("0007", "黑色", 4, t1, t2);
	//////SmallCar::SmallCar(string carNum, string carColor, int carShape, Time getTime, Time leaveTime)
	////car->showInfo();
	////delete car;

	//car = new BigTruck("0008", "白色", 4, t1);
	//car->showParkInfo();
	//delete car;

	//实例管理者对象
	parkManager pm;

	int input = 0;//用来存储用户的选择

	do
	{
		//展示菜单
		pm.shouMenu();

		cout << "请输入您的选择：" << endl;
		cin >> input;//接收用户的选择

		switch (input)
		{
		case 0://退出系统
			pm.ExistSystem();
			break;
		case 1://增加车辆
			pm.addCarInfo();
			break;
		case 2://显示车辆信息
			pm.showCarInfo();
			break;
		case 3://车辆离开停车场
			pm.carLeave();
			break;
		case 4://删除车辆信息
			pm.DelCar();
			break;
		case 5://修改车辆信息
			pm.ModCarInfo();
			break;
		case 6://查询车辆信息
			pm.searchInfo();
			break;
		case 7://统计车辆信息

			break;
		case 8://展示收费标准
			pm.showRates();
			break;
		default:
			system("cls");
			break;
		}

	} while (input);


	system("pause");
	return 0;
}