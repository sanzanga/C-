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
	ofs << "interval:" << data << " ";
	ofs << "stuId:" << this->getId() << " ";
	ofs << "stuName:" << this->getName() << " ";
	ofs << "roomId:" << data << " ";
	ofs << "status:" << 1 << endl;

	ofs.close();

	system("pause");
	system("cls");
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
