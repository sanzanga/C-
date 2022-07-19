#pragma once
#include <iostream>
using namespace std;
#include "Identity.h"
#include <string>
#include <fstream>
#include "globalFile.h"
#include "student.h"
#include "teacher.h"
#include <vector>
#include <algorithm>
#include "computerRoom.h"

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

	//��ʼ������
	void initVector();

	//����ظ�
	//����1�����ѧ�Ż���ְ���� ����2���������
	bool checkRepeat(int id, int type);

private:
	//ѧ������
	vector<Student>vStu;

	//��ʦ����
	vector<Teacher>vTea;

	//������Ϣ����
	vector<ComputerRoom>vCom;
};