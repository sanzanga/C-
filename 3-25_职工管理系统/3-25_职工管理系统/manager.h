#pragma once
#include <iostream>
using namespace std;
#include "work.h"

class Manager :public Work
{
public:

	//���캯��
	Manager(int id, string name, int dId);

	//��ʾ����������Ϣ
	virtual void showInfo();

	//��ȡ��������
	virtual string getDeptName();
};