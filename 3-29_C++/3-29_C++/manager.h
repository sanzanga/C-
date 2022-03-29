#pragma once
#include <iostream>
#include "work.h"
#include <string>
using namespace std;

class Manager :public Work
{
public:
	//构造函数
	Manager(int id, string name, int dId);

	//获取职工信息
	virtual void Show_Info();

	//获取部门名称
	virtual string getDeptName();
};