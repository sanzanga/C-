#pragma once
#include <iostream>
#include "work.h"
#include <string>
using namespace std;

class Manager :public Work
{
public:
	//���캯��
	Manager(int id, string name, int dId);

	//��ȡְ����Ϣ
	virtual void Show_Info();

	//��ȡ��������
	virtual string getDeptName();
};