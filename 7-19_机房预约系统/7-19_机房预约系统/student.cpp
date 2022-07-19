#include "student.h"

//默认构造
Student::Student()
{

}

//有参构造
Student::Student(int id, string name, string pwd)
{
	//初始化属性
	this->m_Id = id;
	this->setName(name);
	this->setPwd(pwd);

	//初始化机房的信息
	ifstream ifs;
	ifs.open(COMPUTER_FILE, ios::in);

	ComputerRoom com;
	int m_ComId;//机房id号
	int m_MaxNum;//机房最大容量
	while (ifs >> m_ComId && ifs >> m_MaxNum)
	{
		com.setComId(m_ComId);
		com.setMaxNum(m_MaxNum);
		//将读取的信息放到容器中
		vCom.push_back(com);
	}
	ifs.close();
}

//获取学号
int Student::getId()
{
	return this->m_Id;
}

//设置学号
void Student::setId(int id)
{
	this->m_Id = id;
}

//菜单界面
void Student::openMeun()
{
	cout << "欢迎学生代表：" << this->getName() << "登录！" << endl;
	cout << "\t\t----------------------------\n";
	cout << "\t\t|                          |\n";
	cout << "\t\t|      1.申请预约          |\n";
	cout << "\t\t|                          |\n";
	cout << "\t\t|      2.查看我的预约      |\n";
	cout << "\t\t|                          |\n";
	cout << "\t\t|      3.查看所有预约      |\n";
	cout << "\t\t|                          |\n";
	cout << "\t\t|      4.取消预约          |\n";
	cout << "\t\t|                          |\n";
	cout << "\t\t|      0.注销登录          |\n";
	cout << "\t\t|                          |\n";
	cout << "\t\t----------------------------\n";
	cout << "请选择您的操作：";
}

//申请预约
void Student::applyOrder()
{
	cout << "机房开放的时间为周一至周五！" << endl;
	cout << "请输入申请预约的时间：" << endl;
	cout << "    1、周一" << endl;
	cout << "    2、周二" << endl;
	cout << "    3、周三" << endl;
	cout << "    4、周四" << endl;
	cout << "    5、周五" << endl;
	
	int data = 0;//日期
	int interval = 0;//时间段
	int room = 0;//机房编号

	while (true)
	{
		cin >> data;
		if (data >= 1 && data <= 5)
		{
			break;
		}
		cout << "输入有误，请重新输入！" << endl;
	}

	cout << "请输入申请预约的时间段：" << endl;
	cout << "     1、上午" << endl;
	cout << "     2、下午" << endl;
	while (true)
	{
		cin >> interval;
		if (interval >= 1 && interval <= 2)
		{
			break;
		}
		cout << "输入有误，请重新输入！" << endl;
	}

	cout << "请选择机房编号：" << endl;
	for (int i = 0; i < vCom.size(); i++)
	{
		cout << vCom[i].getComId() << "号机房容量为：" << vCom[i].getMaxNum() << endl;
	}
	while (true)
	{
		cin >> room;
		if (room >= 1 && room <= 3)
		{
			break;
		}
		cout << "输入有误，请重新输入！" << endl;
	}

	cout << "预约成功！审核中" << endl;

	ofstream ofs;
	ofs.open(ORDER_FILE, ios::app);

	ofs << "data:" << data << " ";
	ofs << "interval:" << interval << " ";
	ofs << "stuId:" << this->getId() << " ";
	ofs << "stuName:" << this->getName() << " ";
	ofs << "roomId:" << room << " ";
	ofs << "status:" << 1 << endl;

	ofs.close();

	system("pause");
	system("cls");
}

//查看自身预约
void Student::showMyOrder()
{
	OrderFile of;
	if (of.getSize() == 0)
	{
		cout << "无预约记录！" << endl;
		system("pause");
		system("cls");
		return;
	}

	for (int i = 0; i < of.getSize(); i++)
	{
		//string  转  int
		//string 利用 .c_str() 转  const char*
		//再利用  atoi (const char*)转int
		if (this->getId() == atoi(of.m_orderDate[i]["stuId"].c_str()))//找到自身预约
		{
			cout << "预约日期：周" << of.m_orderDate[i]["data"];
			cout << "  时间段：" << (of.m_orderDate[i]["interval"] == "1" ? "上午" : "下午");
			cout << "  机房号：" << of.m_orderDate[i]["roomId"];
			string status = "状态：";
			//1、审核中 2、已预约 -1、预约失败 0、取消预约
			if (of.m_orderDate[i]["status"] == "1")
			{
				status += "审核中";
			}
			else if (of.m_orderDate[i]["status"] == "2")
			{
				status += "预约成功";
			}
			else if (of.m_orderDate[i]["status"] == "-1")
			{
				status += "预约失败";
			}
			else
			{
				status += "取消已预约";
			}
			cout << "  " << status << endl;
		}
	}

	system("pause");
	system("cls");
}

//查看所有预约
void Student::showAllOrder()
{
	OrderFile of;
	if (of.getSize() == 0)
	{
		cout << "无预约记录！" << endl;
		system("pause");
		system("cls");
		return;
	}

	for (int i = 0; i < of.getSize(); i++)
	{
		cout << i + 1 << "、";
		cout << "预约日期：周" << of.m_orderDate[i]["data"];
		cout << "  时间段：" << (of.m_orderDate[i]["interval"] == "1" ? "上午" : "下午");
		cout << "  机房编号：" << of.m_orderDate[i]["roomId"];
		cout << "  学号：" << of.m_orderDate[i]["stuId"];
		cout << "  姓名：" << of.m_orderDate[i]["stuName"];
		cout << "  机房编号：" << of.m_orderDate[i]["roomId"];
		string status = "状态：";
		//1、审核中 2、已预约 -1、预约失败 0、取消预约
		if (of.m_orderDate[i]["status"] == "1")
		{
			status += "审核中";
		}
		else if (of.m_orderDate[i]["status"] == "2")
		{
			status += "预约成功";
		}
		else if (of.m_orderDate[i]["status"] == "-1")
		{
			status += "预约失败";
		}
		else
		{
			status += "取消已预约";
		}
		cout << "  " << status << endl;
	}

	system("pause");
	system("cls");
}

//取消预约
void Student::cancelOrder()
{
	OrderFile of;
	if (of.getSize() == 0)
	{
		cout << "无预约记录！" << endl;
		system("pause");
		system("cls");
		return;
	}

	cout << "审核中或预约成功地记录可以取消，请输入取消的记录" << endl;
	vector<int>v;
	int index = 1;
	for (int i = 0; i < of.getSize(); i++)
	{
		//先判断是自身的学号
		if (this->getId() == atoi(of.m_orderDate[i]["stuId"].c_str()))
		{
			//再筛选状态
			if (of.m_orderDate[i]["status"] == "1" || of.m_orderDate[i]["status"] == "2")
			{
				v.push_back(i);
				cout << index++ << "、";
				cout << "预约日期：周" << of.m_orderDate[i]["data"];
				cout << "  时间段：" << (of.m_orderDate[i]["interval"] == "1" ? "上午" : "下午");
				cout << "  机房编号：" << of.m_orderDate[i]["roomId"];
				string status = "状态：";
				//1、审核中 2、已预约 -1、预约失败 0、取消预约
				if (of.m_orderDate[i]["status"] == "1")
				{
					status += "审核中";
				}
				else if (of.m_orderDate[i]["status"] == "2")
				{
					status += "预约成功";
				}
				cout << "  " << status << endl;
			}
		}
	}
	cout << "请输入取消的记录，0代表返回" << endl;
	int select = 0;

	while (true)
	{
		cin >> select;

		if (select >= 0 && select <= v.size())
		{
			if (select == 0)
			{
				break;
			}
			else
			{
				of.m_orderDate[v[select - 1]]["status"] = "0";

				of.updateOrder();
				cout << "已取消预约" << endl;
			}
		}
		else
		{
			cout << "输入有误，请重新输入" << endl;
		}
	}
	system("pause");
	system("cls");
}
