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

	//初始化容器 获取到所有文件中 学生、老师信息
	this->initVector();

	//初始化机房的信息
	ifstream ifs;
	ifs.open(COMPUTER_FILE, ios::in);

	ComputerRoom com;
	int comId;
	int maxNum;
	while (ifs >> comId && ifs >> maxNum)
	{
		com.setComId(comId);
		com.setMaxNum(maxNum);
		vCom.push_back(com);
	}
	ifs.close();
	cout << "机房的数量为：" << vCom.size() << endl;
}

//菜单界面
void Manager::openMeun()
{
	cout << "欢迎管理员：" << this->getName() << "登录！" << endl;
	cout << "\t\t------------------------\n";
	cout << "\t\t|                      |\n";
	cout << "\t\t|      1.添加账号      |\n";
	cout << "\t\t|                      |\n";
	cout << "\t\t|      2.查看账号      |\n";
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
	cout << "0、返回上一步操作" << endl;

	string fileName;//操作文件名
	string tip;//提示id号
	string errorTip;//重复错误提示

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
			errorTip = "学号重复，请重新输入";
			break;
		}
		else if (select == 2)
		{
			//添加的是教师
			fileName = TEACHER_FILE;
			tip = "请输入职工编号：";
			errorTip = "职工号重复，请重新输入";
			break;
		}
		else if (select == 0)
		{
			system("cls");
			return;
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

	cout << tip << endl;

	while (true)
	{
		cin >> id;
		bool ret = this->checkRepeat(id, select);
		if (ret)
		{
			cout << errorTip << endl;
		}
		else
		{
			break;
		}
	}

	cout << "请输入姓名：";
	cin >> name;

	cout << "请输入密码：";
	cin >> pwd;

	//向文件中添加数据
	ofs << id << " " << name << " " << pwd << " " << endl;
	cout << "添加成功！" << endl;

	system("pause");
	system("cls");

	ofs.close();

	//调用初始化接口，重新获取文件中的数据
	this->initVector();
}

class MyPrintS
{
public:
	void operator()(Student &s)
	{
		cout << "学号：" << s.getId() << "  姓名：" << s.getName() << "  密码：" << s.getPwd() << endl;
	}
};

class MyPrintT
{
public:
	void operator()(Teacher& s)
	{
		cout << "职工编号：" << s.getEmpId() << "  姓名：" << s.getName() << "  密码：" << s.getPwd() << endl;
	}
};

//查看账号
void Manager::showPerson()
{
	cout << "请选择查看的内容：" << endl;
	cout << "1、查看所有的学生" << endl;
	cout << "2、查看所有的老师" << endl;
	cout << "0、返回上一步操作" << endl;

	int select = 0;//接收用户的选择
	cin >> select;

	while (true)
	{
		if (select == 1)
		{
			//查看学生
			cout << "所有的学生的信息如下：" << endl;
			for_each(vStu.begin(), vStu.end(), MyPrintS());
			break;
		}
		else if (select == 2)
		{
			//查看老师
			cout << "所有的老师的信息如下：" << endl;
			for_each(vTea.begin(), vTea.end(), MyPrintT());
			break;
		}
		else
		{
			system("cls");
			return;
		}
	}

	system("pause");
	system("cls");
}

//查看机房信息
void Manager::showComputer()
{
	cout << "机房的信息如下：" << endl;

	for (vector<ComputerRoom>::iterator it = vCom.begin(); it != vCom.end(); it++)
	{
		cout << "机房的编号：" << it->getComId() << "  机房最大容量：" << it->getMaxNum() << endl;
	}

	system("pause");
	system("cls");
}

//清空预约信息
void Manager::cleanFile()
{
	ofstream ofs(ORDER_FILE, ios::trunc);
	ofs.close();

	cout << "清空成功！" << endl;
	system("pause");
	system("cls");
}

//初始化容器
void Manager::initVector()
{
	//确保容器是清空状态
	vStu.clear();
	vTea.clear();

	//读取信息 学生
	ifstream ifs;
	ifs.open(STUDENT_FILE, ios::in);
	if (!ifs.is_open())
	{
		cout << "文件读取失败" << endl;
		return;
	}

	Student s;
	int id;
	string name;
	string pwd;
	while (ifs >> id && ifs >> name && ifs >> pwd)
	{
		s.setId(id);
		s.setName(name);
		s.setPwd(pwd);
		vStu.push_back(s);
	}

	cout << "当前学生的数量为：" << vStu.size() << endl;
	ifs.close();

	//读取信息 教师
	ifs.open(TEACHER_FILE, ios::in);
	if (!ifs.is_open())
	{
		cout << "文件读取失败" << endl;
		return;
	}

	Teacher t;
	while (ifs >> id && ifs >> name && ifs >> pwd)
	{
		t.setEmpId(id);
		t.setName(name);
		t.setPwd(pwd);
		vTea.push_back(t);
	}

	cout << "当前教师的数量为：" << vTea.size() << endl;
	ifs.close();
}

//检测重复
//参数1：检测学号或者职工号 参数2：检测类型
bool Manager::checkRepeat(int id, int type)
{
	if (type == 1)
	{
		//检测学生
		for (vector<Student>::iterator it = vStu.begin(); it != vStu.end(); it++)
		{
			if (id == it->getId())
			{
				return true;
			}
		}
	}
	else 
	{
		//检测老师
		for (vector<Teacher>::iterator it = vTea.begin(); it != vTea.end(); it++)
		{
			if (id == it->getEmpId())
			{
				return true;
			}
		}
	}

	return false;
}
