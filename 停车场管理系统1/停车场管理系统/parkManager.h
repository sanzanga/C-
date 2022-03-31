#pragma once//防止头文件重复包含
#include <iostream>//包含输入输出流头文件
using namespace std;//使用标准命名空间

class parkManager
{
public:
	//构造函数
	parkManager();

	//展示菜单
	void shouMenu();

	//退出系统
	void ExistSystem();

	//析构函数
	~parkManager();
};