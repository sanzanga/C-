#include "student.h"

//Ĭ�Ϲ���
Student::Student()
{

}

//�вι���
Student::Student(int id, string name, string pwd)
{
	//��ʼ������
	this->m_Id = id;
	this->setName(name);
	this->setPwd(pwd);
}

//��ȡѧ��
int Student::getId()
{
	return this->m_Id;
}

//����ѧ��
void Student::setId(int id)
{
	this->m_Id = id;
}

//�˵�����
void Student::openMeun()
{
	cout << "��ӭѧ������" << this->getName() << "��¼��" << endl;
	cout << "\t\t----------------------------\n";
	cout << "\t\t|                          |\n";
	cout << "\t\t|      1.����ԤԼ          |\n";
	cout << "\t\t|                          |\n";
	cout << "\t\t|      2.�鿴�ҵ�ԤԼ      |\n";
	cout << "\t\t|                          |\n";
	cout << "\t\t|      3.�鿴����ԤԼ      |\n";
	cout << "\t\t|                          |\n";
	cout << "\t\t|      4.ȡ��ԤԼ          |\n";
	cout << "\t\t|                          |\n";
	cout << "\t\t|      0.ע����¼          |\n";
	cout << "\t\t|                          |\n";
	cout << "\t\t----------------------------\n";
	cout << "��ѡ�����Ĳ�����";
}

//����ԤԼ
void Student::applyOrder()
{

}

//�鿴����ԤԼ
void Student::showMyOrder()
{

}

//�鿴����ԤԼ
void Student::showAllOrder()
{

}

//ȡ��ԤԼ
void Student::cancelOrder()
{

}
