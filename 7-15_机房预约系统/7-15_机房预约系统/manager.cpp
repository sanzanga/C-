#include "manager.h"

//Ĭ�Ϲ���
Manager::Manager()
{

}

//�вι���
Manager::Manager(string name, string pwd)
{
	//��ʼ������Ա����Ϣ
	this->setName(name);
	this->setPwd(pwd);
}

//�˵�����
void Manager::openMeun()
{
	cout << "��ӭ����Ա��" << this->getName() << "��¼��" << endl;
	cout << "\t\t------------------------\n";
	cout << "\t\t|      1.����˺�      |\n";
	cout << "\t\t|                      |\n";
	cout << "\t\t|      2.�鿴�˺�       |\n";
	cout << "\t\t|                      |\n";
	cout << "\t\t|      3.�鿴����      |\n";
	cout << "\t\t|                      |\n";
	cout << "\t\t|      4.���ԤԼ      |\n";
	cout << "\t\t|                      |\n";
	cout << "\t\t|      0.�˳�ϵͳ      |\n";
	cout << "\t\t|                      |\n";
	cout << "\t\t------------------------\n";
	cout << "��ѡ�����Ĳ�����";
}

//����˺�
void Manager::addPerson()
{
	cout << "����������˺�����" << endl;
	cout << "1�����ѧ��" << endl;
	cout << "2����ӽ�ʦ" << endl;

	string fileName;//�����ļ���
	string tip;//��ʾid��

	ofstream ofs;//�ļ���������

	int select = 0;

	while (true)
	{
		cin >> select;//�����û���ѡ��

		if (select == 1)
		{
			//��ӵ���ѧ��
			fileName = STUDENT_FILE;
			tip = "������ѧ�ţ�";
			break;
		}
		else if (select == 2)
		{
			//��ӵ��ǽ�ʦ
			fileName = TEACHER_FILE;
			tip = "������ְ����ţ�";
			break;
		}
		else
		{
			cout << "ѡ���������������룡" << endl;
		}
	}

	//����׷�ӵķ�ʽд�ļ�
	ofs.open(fileName, ios::out | ios::app);

	int id;//ѧ�Ż���ְ����
	string name;//����
	string pwd;//����

	cout << tip;
	cin >> id;

	cout << "������������";
	cin >> name;

	cout << "���������룺";
	cin >> pwd;

	//���ļ����������
	ofs << id << " " << name << " " << pwd << " " << endl;
	cout << "��ӳɹ���" << endl;

	system("pause");
	system("cls");
}

//�鿴�˺�
void Manager::showPerson()
{

}

//�鿴������Ϣ
void Manager::showComputer()
{

}

//���ԤԼ��Ϣ
void Manager::cleanFile()
{

}
