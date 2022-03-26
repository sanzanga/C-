#pragma once
#include <iostream>
using namespace std;
#include "work.h"

//老板类
class Boss :public Work
{
public:

	//构造函数
	Boss(int id, string name, int dId);

	//显示个人所有信息
	virtual void showInfo();

	//获取部门名称
	virtual string getDeptName();
};