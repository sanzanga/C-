#pragma once
#include <iostream>
using namespace std;

//������
class ComputerRoom
{
public:
	//���û���id��
	void setComId(int comId);

	//��ȡ����id��
	int getComId();

	//���û����������
	void setMaxNum(int maxNum);

	//��ȡ�����������
	int getMaxNum();

private:
	int m_ComId;//����id��
	int m_MaxNum;//�����������
};