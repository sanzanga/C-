#include "teacher.h"

//默认构造
Teacher::Teacher()
{

}

//有参构造
Teacher::Teacher(int empId, string name, string pwd)
{
	this->m_EmpId = empId;
	this->setName(name);
	this->setPwd(pwd);
}

//设置职工编号
void Teacher::setEmpId(int empId)
{
	this->m_EmpId = empId;
}

//获取职工编号
int Teacher::getEmpId()
{
	return this->m_EmpId;
}

//菜单界面
void Teacher::openMeun()
{

}

//查看所有学生预约
void Teacher::showAllOrder()
{

}

//审核
void Teacher::validOrder()
{

}