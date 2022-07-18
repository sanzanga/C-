#pragma once//防止头文件的重复包含
#include <iostream>
using namespace std;
#include <string>

//身份抽象基类
class Identity
{
public:
	//操作菜单 纯虚函数
	virtual void openMeun() = 0;

	//设置名字
	void setName(string name);

	//获取名字
	string getName();

	//设置密码
	void setPwd(string pwd);

	//获取密码
	string getPwd();

private:
	//用户名
	string m_Name;

	//密码
	string m_pwd;
};
