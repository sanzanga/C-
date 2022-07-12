#include "speaker.h"

//设置姓名
void Speaker::setName(string name)
{
	this->m_Name = name;
}

//获取姓名
string Speaker::getName()
{
	return this->m_Name;
}

//设置分数
void Speaker::setScore(double score, int num)
{
	this->m_Score[num] = score;
}

//获取分数
double Speaker::getScore(int num)
{
	return this->m_Score[num];
}