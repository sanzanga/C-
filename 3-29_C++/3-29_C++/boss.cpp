#include "boss.h"

//���캯��
Boss::Boss(int id, string name, int dId)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = dId;
}

//��ȡְ����Ϣ
void Boss::Show_Info()
{
	cout << "ְ����ţ�" << this->m_Id
		<< "\tְ��������" << this->m_Name
		<< "\t��λ��" << this->getDeptName()
		<< "\t��λְ�𣺹���˾��������" << endl; 
}

//��ȡ���ű��
string Boss::getDeptName()
{
	return string("�ϰ�");
}