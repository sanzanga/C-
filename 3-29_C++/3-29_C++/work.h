#pragma once
#include <iostream>
#include <string>
using namespace std;

//ְ��������
class Work
{
public:

	//��ȡְ����Ϣ
	virtual void Show_Info() = 0;

	//��ȡ���ű��
	virtual string getDeptName() = 0;

	//ְ�����
	int m_Id;
	//ְ������
	string m_Name;
	//���ű��
	int m_DeptId;
};