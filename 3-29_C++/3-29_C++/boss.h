#pragma once
#include <iostream>
#include "work.h"
#include <string>
using namespace std;

class Boss :public Work
{
public:
	//构造函数
	Boss(int id, string name, int dId);

	//获取职工信息
	virtual void Show_Info();

	//获取部门名称
	virtual string getDeptName();
};