#include <iostream>
#include "workManager.h"
using namespace std;

//#include "work.h"
//#include "employee.h"
//#include "manager.h"
//#include "boss.h"

int main() {

	////���Դ���
	//Work* work = NULL;
	//work = new Employee(1, "����", 1);
	//work->showInfo();
	//delete work;

	//work = new Manager(2, "����", 2);
	//work->showInfo();
	//delete work;

	//work = new Boss(3, "����", 3);
	//work->showInfo();
	//delete work;

	//ʵ���������߶���
	WorkManager wm;

	int choice = 0;//�����洢�û���ѡ��

	while (true)
	{
		//����չʾ�˵��ĳ�Ա����
		wm.Show_Menu();

		cout << "����������ѡ��" << endl;
		cin >> choice;//�����û���ѡ��

		switch (choice)
		{
		case 0://�˳�ϵͳ
			wm.ExistSystem();
			break;
		case 1://����ְ��
			wm.Add_Emp();
			break;
		case 2://��ʾְ��
			wm.Show_Emp();
			break;
		case 3://ɾ��ְ��
		//{
		//	//����
		//	int ret = wm.IsExist(5);
		//	if (ret != -1)
		//	{
		//		cout << "ְ������" << endl;
		//	}
		//	else
		//	{
		//		cout << "ְ��������" << endl;
		//	}
		//	break;
		//}
			wm.Del_Emp();
			break;
		case 4://�޸�ְ��
			wm.Mod_Emp();
			break;
		case 5://����ְ��
			wm.Find_Emp();
			break;
		case 6://����ְ��
			wm.Sort_Emp();
			break;
		case 7://����ĵ�
			wm.Clean_Emp();
			break;
		default:
			system("cls");//����
			break;
		}
	}

	system("pause");
	return 0;
}