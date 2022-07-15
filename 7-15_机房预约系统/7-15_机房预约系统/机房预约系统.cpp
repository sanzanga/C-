#include <iostream>
using namespace std;
#include "Identity.h"
#include <fstream>
#include <string>
#include "globalFile.h"
#include "student.h"
#include "teacher.h"
#include "manager.h"

//�������Ա���Ӳ˵�����
void managerMenu(Identity*& manager)
{
	while (true)
	{
		//���ù���Ա���Ӳ˵�
		manager->openMeun();

		//�������ָ��ת��Ϊ����ָ�� ���������������ӿ�
		Manager* man = (Manager*)manager;

		int select = 0;

		cin >> select;

		if (select == 1)//����˺�
		{
			cout << "����˺�" << endl;
			man->addPerson();
		}
		else if (select == 2)//�鿴�˺�
		{
			cout << "�鿴�˺�" << endl;
			man->showPerson();
		}
		else if (select == 3)//�鿴������Ϣ
		{
			cout << "�鿴����" << endl;
			man->showComputer();
		}
		else if (select == 4)//���ԤԼ
		{
			cout << "���ԤԼ" << endl;
			man->cleanFile();
		}
		else
		{
			//ע��ģ��
			delete manager;//���ٵ������Ķ���
			cout << "ע���ɹ���" << endl;
			system("pause");
			system("cls");
			return;
		}
	}
}

//��¼����  ����1�������ļ�����   ����2�������������
void LoginIn(string fileName, int type)
{
	//����ָ�룬����ָ���������
	Identity* person = NULL;

	//���ļ�
	ifstream ifs;
	ifs.open(fileName, ios::in);

	//�ж��ļ��Ƿ����
	if (!ifs.is_open())
	{
		cout << "�ļ�������" << endl;
		ifs.close();
		return;
	}

	//׼�������û���Ϣ
	int id = 0;
	string name;
	string pwd;

	//�ж����
	if (type == 1)//ѧ�����
	{
		cout << "���������ѧ�ţ�";
		cin >> id;
	}
	else if (type == 2)
	{
		cout << "����������ְ���ţ�";
		cin >> id;
	}

	cout << "�������û�����";
	cin >> name;

	cout << "���������룺";
	cin >> pwd;

	if (type == 1)
	{
		//ѧ�������֤
		int fId;//���ļ��ж�ȡ��ID��
		string fName;//���ļ��л�ȡ������
		string fPwd;//���ļ��л�ȡ������
		while (ifs >> fId && ifs >> fName && ifs >> fPwd)
		{
			/*cout << fId << endl;
			cout << fName << endl;
			cout << fPwd << endl;
			cout << endl;*/

			//���û�����Ϣ���жԱ�
			if (fId == id && fName == name && fPwd == pwd)
			{
				cout << "ѧ����֤��¼�ɹ���" << endl;
				system("pause");
				system("cls");
				person = new Student(id, name, pwd);
				//����ѧ�����Ӳ˵�

				return;
			}
		}
	}
	else if (type == 2)
	{
		//��ʦ�������֤

		int fId;//���ļ��ж�ȡ��ID��
		string fName;//���ļ��л�ȡ������
		string fPwd;//���ļ��л�ȡ������

		while (ifs >> fId && ifs >> fName && ifs >> fPwd)
		{
			/*cout << fId << endl;
			cout << fName << endl;
			cout << fPwd << endl;
			cout << endl;*/

			//���û�����Ϣ���жԱ�
			if (fId == id && fName == name && fPwd == pwd)
			{
				cout << "��ʦ��֤��¼�ɹ���" << endl;
				system("pause");
				system("cls");
				person = new Teacher(id, name, pwd);
				//�����ʦ���Ӳ˵�

				return;
			}
		}
	}
	else if (type == 3)
	{
		//����Ա��ݵ���֤

		string fName;//���ļ��л�ȡ������
		string fPwd;//���ļ��л�ȡ������

		while (ifs >> fName && ifs >> fPwd)
		{
			/*cout << fId << endl;
			cout << fName << endl;
			cout << fPwd << endl;
			cout << endl;*/

			//���û�����Ϣ���жԱ�
			if (fName == name && fPwd == pwd)
			{
				cout << "����Ա��֤��¼�ɹ���" << endl;
				system("pause");
				system("cls");
				person = new Manager(name, pwd);
				//�������Ա���Ӳ˵�
				managerMenu(person);

				return;
			}
		}
	}

	cout << "��֤��¼ʧ�ܣ�" << endl;
	system("pause");
	system("cls");
	return;
}

int main()
{
	int select = 0;//���ڽ����û���ѡ��

	while (true)
	{
		cout << "=============== ��ӭ�������ԤԼϵͳ ===============" << endl;
		cout << endl << "���������ĵ����" << endl;
		cout << "\t\t------------------------\n";
		cout << "\t\t|      1.ѧ������      |\n";
		cout << "\t\t|                      |\n";
		cout << "\t\t|      2.��   ʦ       |\n";
		cout << "\t\t|                      |\n";
		cout << "\t\t|      3.�� �� Ա      |\n";
		cout << "\t\t|                      |\n";
		cout << "\t\t|      0.�˳�ϵͳ      |\n";
		cout << "\t\t|                      |\n";
		cout << "\t\t------------------------\n";
		cout << "��������ѡ��";

		cin >> select;//�����û���ѡ��

		switch (select)//�����û���ѡ�� ʵ�ֲ�ͬ�Ľӿ�
		{
		case 1://ѧ�����
			LoginIn(STUDENT_FILE, 1);
			break;
		case 2://��ʦ�����
			LoginIn(TEACHER_FILE, 2);
			break;
		case 3://����Ա���
			LoginIn(ADMIN_FILE, 3);
			break;
		case 0://�˳�ϵͳ
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;
			break;
		default:
			cout << "��������������ѡ��" << endl;
			system("pause");
			system("cls");
			break;
		}
	}

	system("pause");
	return 0;
}