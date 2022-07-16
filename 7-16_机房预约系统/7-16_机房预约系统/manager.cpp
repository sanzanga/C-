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

	//��ʼ������ ��ȡ�������ļ��� ѧ������ʦ��Ϣ
	this->initVector();

	//��ʼ����������Ϣ
	ifstream ifs;
	ifs.open(COMPUTER_FILE, ios::in);

	ComputerRoom com;
	int comId;
	int maxNum;
	while (ifs >> comId && ifs >> maxNum)
	{
		com.setComId(comId);
		com.setMaxNum(maxNum);
		vCom.push_back(com);
	}
	ifs.close();
	cout << "����������Ϊ��" << vCom.size() << endl;
}

//�˵�����
void Manager::openMeun()
{
	cout << "��ӭ����Ա��" << this->getName() << "��¼��" << endl;
	cout << "\t\t------------------------\n";
	cout << "\t\t|                      |\n";
	cout << "\t\t|      1.����˺�      |\n";
	cout << "\t\t|                      |\n";
	cout << "\t\t|      2.�鿴�˺�      |\n";
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
	cout << "0��������һ������" << endl;

	string fileName;//�����ļ���
	string tip;//��ʾid��
	string errorTip;//�ظ�������ʾ

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
			errorTip = "ѧ���ظ�������������";
			break;
		}
		else if (select == 2)
		{
			//��ӵ��ǽ�ʦ
			fileName = TEACHER_FILE;
			tip = "������ְ����ţ�";
			errorTip = "ְ�����ظ�������������";
			break;
		}
		else if (select == 0)
		{
			system("cls");
			return;
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

	cout << tip << endl;

	while (true)
	{
		cin >> id;
		bool ret = this->checkRepeat(id, select);
		if (ret)
		{
			cout << errorTip << endl;
		}
		else
		{
			break;
		}
	}

	cout << "������������";
	cin >> name;

	cout << "���������룺";
	cin >> pwd;

	//���ļ����������
	ofs << id << " " << name << " " << pwd << " " << endl;
	cout << "��ӳɹ���" << endl;

	system("pause");
	system("cls");

	ofs.close();

	//���ó�ʼ���ӿڣ����»�ȡ�ļ��е�����
	this->initVector();
}

class MyPrintS
{
public:
	void operator()(Student &s)
	{
		cout << "ѧ�ţ�" << s.getId() << "  ������" << s.getName() << "  ���룺" << s.getPwd() << endl;
	}
};

class MyPrintT
{
public:
	void operator()(Teacher& s)
	{
		cout << "ְ����ţ�" << s.getEmpId() << "  ������" << s.getName() << "  ���룺" << s.getPwd() << endl;
	}
};

//�鿴�˺�
void Manager::showPerson()
{
	cout << "��ѡ��鿴�����ݣ�" << endl;
	cout << "1���鿴���е�ѧ��" << endl;
	cout << "2���鿴���е���ʦ" << endl;
	cout << "0��������һ������" << endl;

	int select = 0;//�����û���ѡ��
	cin >> select;

	while (true)
	{
		if (select == 1)
		{
			//�鿴ѧ��
			cout << "���е�ѧ������Ϣ���£�" << endl;
			for_each(vStu.begin(), vStu.end(), MyPrintS());
			break;
		}
		else if (select == 2)
		{
			//�鿴��ʦ
			cout << "���е���ʦ����Ϣ���£�" << endl;
			for_each(vTea.begin(), vTea.end(), MyPrintT());
			break;
		}
		else
		{
			system("cls");
			return;
		}
	}

	system("pause");
	system("cls");
}

//�鿴������Ϣ
void Manager::showComputer()
{
	cout << "��������Ϣ���£�" << endl;

	for (vector<ComputerRoom>::iterator it = vCom.begin(); it != vCom.end(); it++)
	{
		cout << "�����ı�ţ�" << it->getComId() << "  �������������" << it->getMaxNum() << endl;
	}

	system("pause");
	system("cls");
}

//���ԤԼ��Ϣ
void Manager::cleanFile()
{
	ofstream ofs(ORDER_FILE, ios::trunc);
	ofs.close();

	cout << "��ճɹ���" << endl;
	system("pause");
	system("cls");
}

//��ʼ������
void Manager::initVector()
{
	//ȷ�����������״̬
	vStu.clear();
	vTea.clear();

	//��ȡ��Ϣ ѧ��
	ifstream ifs;
	ifs.open(STUDENT_FILE, ios::in);
	if (!ifs.is_open())
	{
		cout << "�ļ���ȡʧ��" << endl;
		return;
	}

	Student s;
	int id;
	string name;
	string pwd;
	while (ifs >> id && ifs >> name && ifs >> pwd)
	{
		s.setId(id);
		s.setName(name);
		s.setPwd(pwd);
		vStu.push_back(s);
	}

	cout << "��ǰѧ��������Ϊ��" << vStu.size() << endl;
	ifs.close();

	//��ȡ��Ϣ ��ʦ
	ifs.open(TEACHER_FILE, ios::in);
	if (!ifs.is_open())
	{
		cout << "�ļ���ȡʧ��" << endl;
		return;
	}

	Teacher t;
	while (ifs >> id && ifs >> name && ifs >> pwd)
	{
		t.setEmpId(id);
		t.setName(name);
		t.setPwd(pwd);
		vTea.push_back(t);
	}

	cout << "��ǰ��ʦ������Ϊ��" << vTea.size() << endl;
	ifs.close();
}

//����ظ�
//����1�����ѧ�Ż���ְ���� ����2���������
bool Manager::checkRepeat(int id, int type)
{
	if (type == 1)
	{
		//���ѧ��
		for (vector<Student>::iterator it = vStu.begin(); it != vStu.end(); it++)
		{
			if (id == it->getId())
			{
				return true;
			}
		}
	}
	else 
	{
		//�����ʦ
		for (vector<Teacher>::iterator it = vTea.begin(); it != vTea.end(); it++)
		{
			if (id == it->getEmpId())
			{
				return true;
			}
		}
	}

	return false;
}
