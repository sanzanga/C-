#pragma once
#include <iostream>
using namespace std;
#include "work.h"

class Manager :public Work
{
public:

	//构造函数
	Manager(int id, string name, int dId);

	//显示个人所有信息
	virtual void showInfo();

	//获取部门名称
	virtual string getDeptName();
};