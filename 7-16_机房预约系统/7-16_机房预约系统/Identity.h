#pragma once//��ֹͷ�ļ����ظ�����
#include <iostream>
using namespace std;
#include <string>

//��ݳ������
class Identity
{
public:
	//�����˵� ���麯��
	virtual void openMeun() = 0;

	//��������
	void setName(string name);

	//��ȡ����
	string getName();

	//��������
	void setPwd(string pwd);

	//��ȡ����
	string getPwd();

private:
	//�û���
	string m_Name;

	//����
	string m_pwd;
};
