#pragma once
#include <iostream>
using namespace std;
#include <string>

//职工的抽象的类
class Work
{
public:

	//显示个人所有信息
	virtual void showInfo() = 0;

	//获取部门名称
	virtual string getDeptName() = 0;

	//职工编号
	int m_Id;
	//职工姓名
	string m_Name;
	//部门编号
	int m_DeptId;
};