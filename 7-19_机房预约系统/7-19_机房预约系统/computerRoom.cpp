#include "computerRoom.h"

//���û���id��
void ComputerRoom::setComId(int comId)
{
	this->m_ComId = comId;
}

//��ȡ����id��
int ComputerRoom::getComId()
{
	return this->m_ComId;
}

//���û����������
void ComputerRoom::setMaxNum(int maxNum)
{
	this->m_MaxNum = maxNum;
}

//��ȡ�����������
int ComputerRoom::getMaxNum()
{
	return this->m_MaxNum;
}