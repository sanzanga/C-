#pragma once
//普通员工文件
#include <iostream>
#include "work.h"
#include <string>
using namespace std;

class Employee:public Work
{
public:
	//构造函数
	Employee(int id, string name, int dId);

	//获取职工信息
	virtual void Show_Info();

	//获取部门名称
	virtual string getDeptName();
};