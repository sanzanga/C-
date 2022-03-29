#pragma once
#include <iostream>
#include <string>
using namespace std;

//职工抽象类
class Work
{
public:

	//获取职工信息
	virtual void Show_Info() = 0;

	//获取部门编号
	virtual string getDeptName() = 0;

	//职工编号
	int m_Id;
	//职工姓名
	string m_Name;
	//部门编号
	int m_DeptId;
};