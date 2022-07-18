#pragma once
#include <iostream>
using namespace std;
#include "Identity.h"

//老师类
class Teacher:public Identity
{
public:
	//默认构造
	Teacher();

	//有参构造
	Teacher(int empId, string name, string pwd);

	//菜单界面
	virtual void openMeun();

	//查看所有学生预约
	void showAllOrder();

	//审核
	void validOrder();

	//设置职工编号
	void setEmpId(int empId);

	//获取职工编号
	int getEmpId();

private:
	//职工编号
	int m_EmpId;
};