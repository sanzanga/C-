#include "Identity.h"

//��������
void Identity::setName(string name)
{
	this->m_Name = name;
}

//��ȡ����
string Identity::getName()
{
	return this->m_Name;
}

//��������
void Identity::setPwd(string pwd)
{
	this->m_pwd = pwd;
}

//��ȡ����
string Identity::getPwd()
{
	return this->m_pwd;
}