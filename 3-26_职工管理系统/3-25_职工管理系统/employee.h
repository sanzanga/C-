#pragma once
//��ͨԱ���ļ�
#include <iostream>
#include "work.h"
using namespace std;

class Employee :public Work
{
public:
	//���캯��
	Employee(int id,string name,int dId);

	//��ʾ����������Ϣ
	virtual void showInfo();

	//��ȡ��������
	virtual string getDeptName();
};