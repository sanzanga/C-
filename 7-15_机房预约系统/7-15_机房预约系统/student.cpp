#include "student.h"

//默认构造
Student::Student()
{

}

//有参构造
Student::Student(int id, string name, string pwd)
{
	this->m_Id = id;
	this->setName(name);
	this->setPwd(pwd);
}

//菜单界面
void Student::openMeun()
{

}

//申请预约
void Student::applyOrder()
{

}

//查看自身预约
void Student::showMyOrder()
{

}

//查看所有预约
void Student::showAllOrder()
{

}

//取消预约
void Student::cancelOrder()
{

}
