#include "workManager.h"

WorkManager::WorkManager()
{
	//1、文件不存在
	ifstream ifs;
	ifs.open(FILENAME, ios::in);//读文件
	if (!ifs.is_open())
	{
		//cout << "文件不存在" << endl;
		//初始化属性
		//初始化记录人数
		this->m_EmpNum = 0;
		//初始化数组指针
		this->m_EmpArray = NULL;
		//初始化问价是否为空
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}
	//2、文件存在 数据为空
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		//文件为空
		//cout << "文件为空" << endl;
		//初始化记录人数
		this->m_EmpNum = 0;
		//初始化数组指针
		this->m_EmpArray = NULL;
		//初始化问价是否为空
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}

	//3、当文件存在，并且记录数据
	int num = this->get_EmpNum();
	cout << "职工的人数为：" << num << endl;
	this->m_EmpNum = num;

	this->m_EmpArray = new Work * [this->m_EmpNum];
	//将文件中的数据，存到数组中
	this->init_Emp();

	//测试代码
	/*for (int i = 0; i < this->m_EmpNum; i++)
	{
		cout << "职工编号：" << this->m_EmpArray[i]->m_Id
			<< "职工姓名：" << this->m_EmpArray[i]->m_Name
			<< "部门编号：" << this->m_EmpArray[i]->m_DeptId << endl;
	}*/
}

//展示菜单
void WorkManager::Show_Menu()
{
	cout << "************************************" << endl;
	cout << "****** 欢迎使用职工管理系统！ ******" << endl;
	cout << "********* 0.退出管理程序 ***********" << endl;
	cout << "********* 1.增加职工信息 ***********" << endl;
	cout << "********* 2.显示职工信息 ***********" << endl;
	cout << "********* 3.删除离职员工 ***********" << endl;
	cout << "********* 4.修改职工信息 ***********" << endl;
	cout << "********* 5.查找职工信息 ***********" << endl;
	cout << "********* 6.按照编号排序 ***********" << endl;
	cout << "********* 7.清空所有文档 ***********" << endl;
	cout << "************************************" << endl;
}

//退出系统
void WorkManager::ExistSystem()
{
	cout << "欢迎下次使用！" << endl;
	system("pause");
	exit(0);//退出程序
}

//添加职工
void WorkManager::Add_Emp()
{
	cout << "请输入添加职工的数量：" << endl;

	int addNum = 0;//保存用户的输入数量
	cin >> addNum;
	if (addNum > 0)
	{
		//添加
		//计算添加新的空间大小
		int newSize = this->m_EmpNum + addNum;//新的空间大小=原来记录人数+新增人数
		
		//开辟新的空间
		Work** newSpace = new Work* [newSize];

		//将原来空间下的数据拷贝到新的空间下
		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				newSpace[i] = this->m_EmpArray[i];
			}
		}

		//添加新数据
		for (int i = 0; i < addNum; i++)
		{
			int id;//职工编号
			string name;//职工姓名
			int dSelect;//部门选择

			cout << "请输入第" << i + 1 << "个新职工编号：" << endl;
			cin >> id;

			cout << "请输入第" << i + 1 << "个新职工姓名：" << endl;
			cin >> name;

			cout << "请选择该职工的岗位：" << endl;
			cout << "1、普通职工" << endl;
			cout << "2、经理" << endl;
			cout << "3、老板" << endl;
			cin >> dSelect;

			Work* work = NULL;
			switch (dSelect)
			{
			case 1:
				work = new Employee(id, name, 1);
				break;
			case 2:
				work = new Manager(id, name, 2);
				break;
			case 3:
				work = new Boss(id, name, 3);
				break;
			default:
				break;
			}

			//将创建的职工职责，保存到数组中
			newSpace[this->m_EmpNum + i] = work;
		}
		//先释放原有的空间
		delete[] this->m_EmpArray;

		//更改新空间的指向
		this->m_EmpArray = newSpace;

		//更改新的职工人数
		this->m_EmpNum = newSize;

		//更新职工不为空的标志
		this->m_FileIsEmpty = false;

		//提示添加成功
		cout << "成功添加" << addNum << "名新职工！" << endl;

		//保存数据到文件中
		this->save();
	}
	else
	{
		cout << "输入数据有误！" << endl;
	}

	//按任意键后清屏回到上机目录
	system("pause");
	system("cls");
}

//保存文件
void WorkManager::save()
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out);//用输出的方式打开文件 -- 写文件

	//将每个人数据写入到文件中
	for (int i = 0; i < this->m_EmpNum; i++)
	{
		ofs << this->m_EmpArray[i]->m_Id << " "
			<< this->m_EmpArray[i]->m_Name << " "
			<< this->m_EmpArray[i]->m_DeptId << endl;
	}

	//关闭文件
	ofs.close();
}

//统计文件中的人数
int WorkManager::get_EmpNum()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);//打开文件 读

	int id;
	string name;
	int dId;

	int num = 0;

	while (ifs >> id && ifs >> name && ifs >> dId)
	{
		//统计人数变量
		num++;
	}
	return num;
}

//初始化员工
void WorkManager::init_Emp()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	int id;
	string name;
	int dId;

	int index = 0;
	while (ifs >> id && ifs >> name && ifs >> dId)
	{
		Work* work = NULL;

		if (dId == 1)//普通职工
		{
			work = new Employee(id, name, dId);
		}
		else if (dId == 2)
		{
			work = new Manager(id, name, dId);
		}
		else
		{
			work = new Boss(id, name, dId);
		}
		this->m_EmpArray[index] = work;
		index++;
	}

	//关闭文件
	ifs.close();
}

WorkManager::~WorkManager()
{
	if (this->m_EmpArray != NULL)
	{
		delete[]this->m_EmpArray;
		this->m_EmpArray = NULL;
	}
}