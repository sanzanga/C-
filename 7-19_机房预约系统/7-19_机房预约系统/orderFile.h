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
	//���캯��
	OrderFile();

	//����ԤԼ��¼
	void updateOrder();

	//��ȡԤԼ����
	int getSize();

	//��¼����ԤԼ��Ϣ������
	map<int, map<string, string>>m_orderDate;
	//key��¼����  value�����¼��ֵ����Ϣ

private:
	//��¼ԤԼ����
	int m_Size;
};
