#include <iostream>
using namespace std;
#include "workManager.h"

//#include "work.h"
//#include "boss.h"
//#include "employee.h"
//#include "manager.h"

int main() {

	//���Դ���
	/*Work* work = NULL;
	work = new Employee(1, "zhangsan", 1);
	work->Show_Info();
	delete work;

	work = new Manager(2, "lisi", 2);
	work->Show_Info();
	delete work;

	work = new Boss(3, "wangwu", 3);
	work->Show_Info();
	delete work;*/

	WorkManager wm;

	int choice = 0;
	while (true)
	{
		wm.Show_Menu();

		cout << "����������ѡ��" << endl;
		cin >> choice;

		switch (choice)
		{
		case 0://�˳�ϵͳ
			wm.ExistSystem();
			break;
		case 1://���ְ��
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
		case 7:
			wm.Clean_Emp();
			break;
		default :
			break;
		}
	}

	system("pause");
	return 0;
}