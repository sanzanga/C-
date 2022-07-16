#pragma once
#include <iostream>
using namespace std;
#include "Identity.h"
#include <string>

//学生类
class Student:public Identity
{
public:
	//默认构造
	Student();

	//有参构造
	Student(int id, string name, string pwd);

	//菜单界面
	virtual void openMeun();

	//申请预约
	void applyOrder();

	//查看自身预约
	void showMyOrder();

	//查看所有预约
	void showAllOrder();

	//取消预约
	void cancelOrder();

	//获取学号
	int getId();

	//设置学号
	void setId(int id);

private:
	//学生学号
	int m_Id;
};