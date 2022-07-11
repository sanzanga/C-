#pragma once
#include <iostream>
using namespace std;
#include <string>

//选手类
class Speaker
{
public:
	//设置姓名
	void setName(string name);

	//获取姓名
	string getName();

	//设置分数
	void setScore(double score, int num);

	//获取分数
	double getScore(int num);

private:
	string m_Name;//姓名
	double m_Score[2];//分数 最多有两轮得分
};