#include <iostream>
#include "parkManager.h"
using namespace std;

#include "car.h"
#include "smallCar.h"
#include "time.h"
#include "smallTruck.h"
#include "mediumTruck.h"
#include "bigTruck.h"

int main() {
	//���Դ���
	Car* car = NULL;
	Time t1(2021, 1, 1, 10, 0);
	Time t2(2021, 1, 2, 10, 0);
	//car = new SmallCar("0001", "��ɫ", 1, t1, t2);
 //   //SmallCar::SmallCar(string carNum, string carColor, int carShape, Time getTime, Time leaveTime)
	//car->showInfo();
	//delete car;

	car = new SmallCar("0002", "��ɫ", 1, t1);
	car->showParkInfo();
	delete car;

	//car = new SmallTruck("0003", "��ɫ", 2, t1, t2);
	////SmallCar::SmallCar(string carNum, string carColor, int carShape, Time getTime, Time leaveTime)
	//car->showInfo();
	//delete car;

	car = new SmallTruck("0004", "��ɫ", 2, t1);
	car->showParkInfo();
	delete car;

	//car = new MediumTruck("0005", "��ɫ", 3, t1, t2);
	////SmallCar::SmallCar(string carNum, string carColor, int carShape, Time getTime, Time leaveTime)
	//car->showInfo();
	//delete car;

	car = new MediumTruck("0006", "��ɫ", 3, t1);
	car->showParkInfo();
	delete car;

	//car = new BigTruck("0007", "��ɫ", 4, t1, t2);
	////SmallCar::SmallCar(string carNum, string carColor, int carShape, Time getTime, Time leaveTime)
	//car->showInfo();
	//delete car;

	car = new BigTruck("0008", "��ɫ", 4, t1);
	car->showParkInfo();
	delete car;

	////ʵ�������߶���
	//parkManager pm;

	//int input = 0;//�����洢�û���ѡ��

	//do
	//{
	//	//չʾ�˵�
	//	pm.shouMenu();

	//	cout << "����������ѡ��" << endl;
	//	cin >> input;//�����û���ѡ��

	//	switch (input)
	//	{
	//	case 0://�˳�ϵͳ
	//		pm.ExistSystem();
	//		break;
	//	case 1://���ӳ���
	//		break;
	//	case 2://��ʾ������Ϣ
	//		break;
	//	case 3://�����뿪ͣ����
	//		break;
	//	case 4://ɾ��������Ϣ
	//		break;
	//	case 5://�޸ĳ�����Ϣ
	//		break;
	//	case 6://��ѯ����
	//		break;
	//	case 7://ͳ�Ƴ�����Ϣ
	//		break;
	//	default:
	//		system("cls");
	//		break;
	//	}

	//} while (input);


	system("pause");
	return 0;
}