#include "teacher.h"

//Ĭ�Ϲ���
Teacher::Teacher()
{

}

//�вι���
Teacher::Teacher(int empId, string name, string pwd)
{
	this->m_EmpId = empId;
	this->setName(name);
	this->setPwd(pwd);
}

//����ְ�����
void Teacher::setEmpId(int empId)
{
	this->m_EmpId = empId;
}

//��ȡְ�����
int Teacher::getEmpId()
{
	return this->m_EmpId;
}

//�˵�����
void Teacher::openMeun()
{

}

//�鿴����ѧ��ԤԼ
void Teacher::showAllOrder()
{

}

//���
void Teacher::validOrder()
{

}