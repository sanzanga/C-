#pragma once
#include <iostream>
using namespace std;
#include <string>

//ְ���ĳ������
class Work
{
public:

	//��ʾ����������Ϣ
	virtual void showInfo() = 0;

	//��ȡ��������
	virtual string getDeptName() = 0;

	//ְ�����
	int m_Id;
	//ְ������
	string m_Name;
	//���ű��
	int m_DeptId;
};