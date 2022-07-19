#include "computerRoom.h"

//设置机房id号
void ComputerRoom::setComId(int comId)
{
	this->m_ComId = comId;
}

//获取机房id号
int ComputerRoom::getComId()
{
	return this->m_ComId;
}

//设置机房最大容量
void ComputerRoom::setMaxNum(int maxNum)
{
	this->m_MaxNum = maxNum;
}

//获取机房最大容量
int ComputerRoom::getMaxNum()
{
	return this->m_MaxNum;
}