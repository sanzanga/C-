#pragma once
#include <iostream>
using namespace std;
#include "Identity.h"

//����Ա��
class Manager:public Identity
{
public:
	//Ĭ�Ϲ���
	Manager();
	
	//�вι���
	Manager(string name, string pwd);

	//�˵�����
	virtual void openMeun();

	//����˺�
	void addPerson();

	//�鿴�˺�
	void showPerson();

	//�鿴������Ϣ
	void showComputer();

	//���ԤԼ��Ϣ
	void cleanFile();

};