#include "speaker.h"

//��������
void Speaker::setName(string name)
{
	this->m_Name = name;
}

//��ȡ����
string Speaker::getName()
{
	return this->m_Name;
}

//���÷���
void Speaker::setScore(double score, int num)
{
	this->m_Score[num] = score;
}

//��ȡ����
double Speaker::getScore(int num)
{
	return this->m_Score[num];
}