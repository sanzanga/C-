#pragma once
//��ͨԱ���ļ�
#include <iostream>
#include "work.h"
#include <string>
using namespace std;

class Employee:public Work
{
public:
	//���캯��
	Employee(int id, string name, int dId);

	//��ȡְ����Ϣ
	virtual void Show_Info();

	//��ȡ��������
	virtual string getDeptName();
};