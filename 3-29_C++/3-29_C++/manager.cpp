#include "manager.h"
//���캯��
Manager::Manager(int id, string name, int dId)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = dId;
}

//��ȡְ����Ϣ
void Manager::Show_Info()
{
	cout << "ְ����ţ�" << this->m_Id
		<< "\tְ��������" << this->m_Name
		<< "\t��λ��" << this->getDeptName() 
		<< "\t��λְ�𣺸���ͨԱ����������������ϰ彻��������" << endl;
}

//��ȡ���ű��
string Manager::getDeptName()
{
	return string("����");
}