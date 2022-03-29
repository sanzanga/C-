#include <iostream>
using namespace std;
#include "workManager.h"

//#include "work.h"
//#include "boss.h"
//#include "employee.h"
//#include "manager.h"

int main() {

	//测试代码
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

		cout << "请输入您的选择：" << endl;
		cin >> choice;

		switch (choice)
		{
		case 0://退出系统
			wm.ExistSystem();
			break;
		case 1://添加职工
			wm.Add_Emp();
			break;
		case 2://显示职工
			wm.Show_Emp();
			break;
		case 3://删除职工
			//{
		//	//测试
		//	int ret = wm.IsExist(5);
		//	if (ret != -1)
		//	{
		//		cout << "职工存在" << endl;
		//	}
		//	else
		//	{
		//		cout << "职工不存在" << endl;
		//	}
		//	break;
		//}
			wm.Del_Emp();
			break;
		case 4://修改职工
			wm.Mod_Emp();
			break;
		case 5://查找职工
			wm.Find_Emp();
			break;
		case 6://排序职工
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