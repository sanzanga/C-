#pragma once
#include <iostream>
using namespace std;
#include "Identity.h"

//��ʦ��
class Teacher:public Identity
{
public:
	//Ĭ�Ϲ���
	Teacher();

	//�вι���
	Teacher(int empId, string name, string pwd);

	//�˵�����
	virtual void openMeun();

	//�鿴����ѧ��ԤԼ
	void showAllOrder();

	//���
	void validOrder();

private:
	//ְ�����
	int m_EmpId;
};