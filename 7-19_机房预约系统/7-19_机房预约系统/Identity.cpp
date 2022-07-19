#include "Identity.h"

//设置名字
void Identity::setName(string name)
{
	this->m_Name = name;
}

//获取名字
string Identity::getName()
{
	return this->m_Name;
}

//设置密码
void Identity::setPwd(string pwd)
{
	this->m_pwd = pwd;
}

//获取密码
string Identity::getPwd()
{
	return this->m_pwd;
}