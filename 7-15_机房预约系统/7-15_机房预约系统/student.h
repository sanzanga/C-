#pragma once
#include <iostream>
using namespace std;
#include "Identity.h"

//ѧ����
class Student:public Identity
{
public:
	//Ĭ�Ϲ���
	Student();

	//�вι���
	Student(int id, string name, string pwd);

	//�˵�����
	virtual void openMeun();

	//����ԤԼ
	void applyOrder();

	//�鿴����ԤԼ
	void showMyOrder();

	//�鿴����ԤԼ
	void showAllOrder();

	//ȡ��ԤԼ
	void cancelOrder();

private:
	//ѧ��ѧ��
	int m_Id;
};