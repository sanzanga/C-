#include <iostream>
#include "workManager.h"
using namespace std;

//#include "work.h"
//#include "employee.h"
//#include "manager.h"
//#include "boss.h"

int main() {

	////测试代码
	//Work* work = NULL;
	//work = new Employee(1, "张三", 1);
	//work->showInfo();
	//delete work;

	//work = new Manager(2, "李四", 2);
	//work->showInfo();
	//delete work;

	//work = new Boss(3, "王五", 3);
	//work->showInfo();
	//delete work;

	//实例化管理者对象
	WorkManager wm;

	int choice = 0;//用来存储用户的选项

	while (true)
	{
		//调用展示菜单的成员函数
		wm.Show_Menu();

		cout << "请输入您的选择：" << endl;
		cin >> choice;//接收用户的选择

		switch (choice)
		{
		case 0://退出系统
			wm.ExistSystem();
			break;
		case 1://增加职工
			wm.Add_Emp();
			break;
		case 2://显示职工
			break;
		case 3://删除职工
			break;
		case 4://修改职工
			break;
		case 5://查找职工
			break;
		case 6://排序职工
			break;
		case 7://清空文档
			break;
		default:
			system("cls");//清屏
			break;
		}
	}

	system("pause");
	return 0;
}