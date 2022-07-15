#include "manager.h"

//默认构造
Manager::Manager()
{

}

//有参构造
Manager::Manager(string name, string pwd)
{
	//初始化管理员的信息
	this->setName(name);
	this->setPwd(pwd);
}

//菜单界面
void Manager::openMeun()
{
	cout << "欢迎管理员：" << this->getName() << "登录！" << endl;
	cout << "\t\t------------------------\n";
	cout << "\t\t|      1.添加账号      |\n";
	cout << "\t\t|                      |\n";
	cout << "\t\t|      2.查看账号       |\n";
	cout << "\t\t|                      |\n";
	cout << "\t\t|      3.查看机房      |\n";
	cout << "\t\t|                      |\n";
	cout << "\t\t|      4.清空预约      |\n";
	cout << "\t\t|                      |\n";
	cout << "\t\t|      0.退出系统      |\n";
	cout << "\t\t|                      |\n";
	cout << "\t\t------------------------\n";
	cout << "请选择您的操作：";
}

//添加账号
void Manager::addPerson()
{
	cout << "请输入添加账号类型" << endl;
	cout << "1、添加学生" << endl;
	cout << "2、添加教师" << endl;

	string fileName;//操作文件名
	string tip;//提示id号

	ofstream ofs;//文件操作对象

	int select = 0;

	while (true)
	{
		cin >> select;//接收用户的选择

		if (select == 1)
		{
			//添加的是学生
			fileName = STUDENT_FILE;
			tip = "请输入学号：";
			break;
		}
		else if (select == 2)
		{
			//添加的是教师
			fileName = TEACHER_FILE;
			tip = "请输入职工编号：";
			break;
		}
		else
		{
			cout << "选择有误，请重新输入！" << endl;
		}
	}

	//利用追加的方式写文件
	ofs.open(fileName, ios::out | ios::app);

	int id;//学号或者职工号
	string name;//姓名
	string pwd;//密码

	cout << tip;
	cin >> id;

	cout << "请输入姓名：";
	cin >> name;

	cout << "请输入密码：";
	cin >> pwd;

	//向文件中添加数据
	ofs << id << " " << name << " " << pwd << " " << endl;
	cout << "添加成功！" << endl;

	system("pause");
	system("cls");
}

//查看账号
void Manager::showPerson()
{

}

//查看机房信息
void Manager::showComputer()
{

}

//清空预约信息
void Manager::cleanFile()
{

}
