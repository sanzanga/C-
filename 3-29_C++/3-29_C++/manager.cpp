#include "manager.h"
//构造函数
Manager::Manager(int id, string name, int dId)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = dId;
}

//获取职工信息
void Manager::Show_Info()
{
	cout << "职工编号：" << this->m_Id
		<< "\t职工姓名：" << this->m_Name
		<< "\t岗位：" << this->getDeptName() 
		<< "\t岗位职责：给普通员工分配任务并且完成老板交给的任务" << endl;
}

//获取部门编号
string Manager::getDeptName()
{
	return string("经理");
}