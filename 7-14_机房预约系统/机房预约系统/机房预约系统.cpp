#include <iostream>
using namespace std;

int main()
{
	int select = 0;//用于接收用户的选择

	while (true)
	{
		cout << "=============== 欢迎进入机房预约系统 ===============" << endl;
		cout << endl << "请输入您的的身份" << endl;
		cout << "\t\t------------------------\n";
		cout << "\t\t|      1.学生代表      |\n";
		cout << "\t\t|                      |\n";
		cout << "\t\t|      2.老   师       |\n";
		cout << "\t\t|                      |\n";
		cout << "\t\t|      3.管 理 员      |\n";
		cout << "\t\t|                      |\n";
		cout << "\t\t|      0.退出系统      |\n";
		cout << "\t\t|                      |\n";
		cout << "\t\t------------------------\n";
		cout << "输入您的选择：";

		cin >> select;//接收用户的选择

		switch (select)//根据用户的选择 实现不同的接口
		{
		case 1://学生身份
			break;
		case 2://老师的身份
			break;
		case 3://管理员身份
			break;
		case 0://退出系统
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
			break;
		default:
			cout << "输入有误！请重新选择！" << endl;
			system("pause");
			system("cls");
			break;
		}
	}

	system("pause");
	return 0;
}