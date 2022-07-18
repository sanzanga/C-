#pragma once
#include <iostream>
using namespace std;

//机房类
class ComputerRoom
{
public:
	//设置机房id号
	void setComId(int comId);

	//获取机房id号
	int getComId();

	//设置机房最大容量
	void setMaxNum(int maxNum);

	//获取机房最大容量
	int getMaxNum();

private:
	int m_ComId;//机房id号
	int m_MaxNum;//机房最大容量
};