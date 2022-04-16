#pragma once
#include <iostream>
using namespace std;
#include <string>

//通道类
class Access
{
	friend class parkManager;

public:
	//构造函数
	Access(string carNum, string carColor, int carShapeNum);

private:
	string carNum;//车牌号
	string carColor;//车的颜色
	int carShapeNum;//车型
};