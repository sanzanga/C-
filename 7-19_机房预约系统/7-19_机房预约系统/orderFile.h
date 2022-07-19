#pragma once
#include <iostream>
using namespace std;
#include <map>
#include "globalFile.h"
#include <fstream>
#include <string>

class OrderFile
{
public:
	//构造函数
	OrderFile();

	//更新预约记录
	void updateOrder();

	//获取预约条数
	int getSize();

	//记录所有预约信息的容器
	map<int, map<string, string>>m_orderDate;
	//key记录条数  value具体记录键值对信息

private:
	//记录预约条数
	int m_Size;
};
