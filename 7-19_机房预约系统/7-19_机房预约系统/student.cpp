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

	//��ʼ����������Ϣ
	ifstream ifs;
	ifs.open(COMPUTER_FILE, ios::in);

	ComputerRoom com;
	int m_ComId;//����id��
	int m_MaxNum;//�����������
	while (ifs >> m_ComId && ifs >> m_MaxNum)
	{
		com.setComId(m_ComId);
		com.setMaxNum(m_MaxNum);
		//����ȡ����Ϣ�ŵ�������
		vCom.push_back(com);
	}
	ifs.close();
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
	cout << "�������ŵ�ʱ��Ϊ��һ�����壡" << endl;
	cout << "����������ԤԼ��ʱ�䣺" << endl;
	cout << "    1����һ" << endl;
	cout << "    2���ܶ�" << endl;
	cout << "    3������" << endl;
	cout << "    4������" << endl;
	cout << "    5������" << endl;
	
	int data = 0;//����
	int interval = 0;//ʱ���
	int room = 0;//�������

	while (true)
	{
		cin >> data;
		if (data >= 1 && data <= 5)
		{
			break;
		}
		cout << "�����������������룡" << endl;
	}

	cout << "����������ԤԼ��ʱ��Σ�" << endl;
	cout << "     1������" << endl;
	cout << "     2������" << endl;
	while (true)
	{
		cin >> interval;
		if (interval >= 1 && interval <= 2)
		{
			break;
		}
		cout << "�����������������룡" << endl;
	}

	cout << "��ѡ�������ţ�" << endl;
	for (int i = 0; i < vCom.size(); i++)
	{
		cout << vCom[i].getComId() << "�Ż�������Ϊ��" << vCom[i].getMaxNum() << endl;
	}
	while (true)
	{
		cin >> room;
		if (room >= 1 && room <= 3)
		{
			break;
		}
		cout << "�����������������룡" << endl;
	}

	cout << "ԤԼ�ɹ��������" << endl;

	ofstream ofs;
	ofs.open(ORDER_FILE, ios::app);

	ofs << "data:" << data << " ";
	ofs << "interval:" << interval << " ";
	ofs << "stuId:" << this->getId() << " ";
	ofs << "stuName:" << this->getName() << " ";
	ofs << "roomId:" << room << " ";
	ofs << "status:" << 1 << endl;

	ofs.close();

	system("pause");
	system("cls");
}

//�鿴����ԤԼ
void Student::showMyOrder()
{
	OrderFile of;
	if (of.getSize() == 0)
	{
		cout << "��ԤԼ��¼��" << endl;
		system("pause");
		system("cls");
		return;
	}

	for (int i = 0; i < of.getSize(); i++)
	{
		//string  ת  int
		//string ���� .c_str() ת  const char*
		//������  atoi (const char*)תint
		if (this->getId() == atoi(of.m_orderDate[i]["stuId"].c_str()))//�ҵ�����ԤԼ
		{
			cout << "ԤԼ���ڣ���" << of.m_orderDate[i]["data"];
			cout << "  ʱ��Σ�" << (of.m_orderDate[i]["interval"] == "1" ? "����" : "����");
			cout << "  �����ţ�" << of.m_orderDate[i]["roomId"];
			string status = "״̬��";
			//1������� 2����ԤԼ -1��ԤԼʧ�� 0��ȡ��ԤԼ
			if (of.m_orderDate[i]["status"] == "1")
			{
				status += "�����";
			}
			else if (of.m_orderDate[i]["status"] == "2")
			{
				status += "ԤԼ�ɹ�";
			}
			else if (of.m_orderDate[i]["status"] == "-1")
			{
				status += "ԤԼʧ��";
			}
			else
			{
				status += "ȡ����ԤԼ";
			}
			cout << "  " << status << endl;
		}
	}

	system("pause");
	system("cls");
}

//�鿴����ԤԼ
void Student::showAllOrder()
{
	OrderFile of;
	if (of.getSize() == 0)
	{
		cout << "��ԤԼ��¼��" << endl;
		system("pause");
		system("cls");
		return;
	}

	for (int i = 0; i < of.getSize(); i++)
	{
		cout << i + 1 << "��";
		cout << "ԤԼ���ڣ���" << of.m_orderDate[i]["data"];
		cout << "  ʱ��Σ�" << (of.m_orderDate[i]["interval"] == "1" ? "����" : "����");
		cout << "  ������ţ�" << of.m_orderDate[i]["roomId"];
		cout << "  ѧ�ţ�" << of.m_orderDate[i]["stuId"];
		cout << "  ������" << of.m_orderDate[i]["stuName"];
		cout << "  ������ţ�" << of.m_orderDate[i]["roomId"];
		string status = "״̬��";
		//1������� 2����ԤԼ -1��ԤԼʧ�� 0��ȡ��ԤԼ
		if (of.m_orderDate[i]["status"] == "1")
		{
			status += "�����";
		}
		else if (of.m_orderDate[i]["status"] == "2")
		{
			status += "ԤԼ�ɹ�";
		}
		else if (of.m_orderDate[i]["status"] == "-1")
		{
			status += "ԤԼʧ��";
		}
		else
		{
			status += "ȡ����ԤԼ";
		}
		cout << "  " << status << endl;
	}

	system("pause");
	system("cls");
}

//ȡ��ԤԼ
void Student::cancelOrder()
{
	OrderFile of;
	if (of.getSize() == 0)
	{
		cout << "��ԤԼ��¼��" << endl;
		system("pause");
		system("cls");
		return;
	}

	cout << "����л�ԤԼ�ɹ��ؼ�¼����ȡ����������ȡ���ļ�¼" << endl;
	vector<int>v;
	int index = 1;
	for (int i = 0; i < of.getSize(); i++)
	{
		//���ж��������ѧ��
		if (this->getId() == atoi(of.m_orderDate[i]["stuId"].c_str()))
		{
			//��ɸѡ״̬
			if (of.m_orderDate[i]["status"] == "1" || of.m_orderDate[i]["status"] == "2")
			{
				v.push_back(i);
				cout << index++ << "��";
				cout << "ԤԼ���ڣ���" << of.m_orderDate[i]["data"];
				cout << "  ʱ��Σ�" << (of.m_orderDate[i]["interval"] == "1" ? "����" : "����");
				cout << "  ������ţ�" << of.m_orderDate[i]["roomId"];
				string status = "״̬��";
				//1������� 2����ԤԼ -1��ԤԼʧ�� 0��ȡ��ԤԼ
				if (of.m_orderDate[i]["status"] == "1")
				{
					status += "�����";
				}
				else if (of.m_orderDate[i]["status"] == "2")
				{
					status += "ԤԼ�ɹ�";
				}
				cout << "  " << status << endl;
			}
		}
	}
	cout << "������ȡ���ļ�¼��0������" << endl;
	int select = 0;

	while (true)
	{
		cin >> select;

		if (select >= 0 && select <= v.size())
		{
			if (select == 0)
			{
				break;
			}
			else
			{
				of.m_orderDate[v[select - 1]]["status"] = "0";

				of.updateOrder();
				cout << "��ȡ��ԤԼ" << endl;
			}
		}
		else
		{
			cout << "������������������" << endl;
		}
	}
	system("pause");
	system("cls");
}
