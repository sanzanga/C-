#pragma once
#include <iostream>
using namespace std;
#include "work.h"

//�ϰ���
class Boss :public Work
{
public:

	//���캯��
	Boss(int id, string name, int dId);

	//��ʾ����������Ϣ
	virtual void showInfo();

	//��ȡ��������
	virtual string getDeptName();
};