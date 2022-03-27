#pragma once
//普通员工文件
#include <iostream>
#include "work.h"
using namespace std;

class Employee :public Work
{
public:
	//构造函数
	Employee(int id,string name,int dId);

	//显示个人所有信息
	virtual void showInfo();

	//获取部门名称
	virtual string getDeptName();
};