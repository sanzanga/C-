#include "workManager.h"

WorkManager::WorkManager()
{
	//1���ļ�������
	ifstream ifs;
	ifs.open(FILENAME, ios::in);//���ļ�
	if (!ifs.is_open())
	{
		//cout << "�ļ�������" << endl;
		//��ʼ������
		//��ʼ����¼����
		this->m_EmpNum = 0;
		//��ʼ������ָ��
		this->m_EmpArray = NULL;
		//��ʼ���ʼ��Ƿ�Ϊ��
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}
	//2���ļ����� ����Ϊ��
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		//�ļ�Ϊ��
		//cout << "�ļ�Ϊ��" << endl;
		//��ʼ����¼����
		this->m_EmpNum = 0;
		//��ʼ������ָ��
		this->m_EmpArray = NULL;
		//��ʼ���ʼ��Ƿ�Ϊ��
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}

	//3�����ļ����ڣ����Ҽ�¼����
	int num = this->get_EmpNum();
	cout << "ְ��������Ϊ��" << num << endl;
	this->m_EmpNum = num;

	this->m_EmpArray = new Work * [this->m_EmpNum];
	//���ļ��е����ݣ��浽������
	this->init_Emp();

	//���Դ���
	/*for (int i = 0; i < this->m_EmpNum; i++)
	{
		cout << "ְ����ţ�" << this->m_EmpArray[i]->m_Id
			<< "ְ��������" << this->m_EmpArray[i]->m_Name
			<< "���ű�ţ�" << this->m_EmpArray[i]->m_DeptId << endl;
	}*/
}

//չʾ�˵�
void WorkManager::Show_Menu()
{
	cout << "************************************" << endl;
	cout << "****** ��ӭʹ��ְ������ϵͳ�� ******" << endl;
	cout << "********* 0.�˳�������� ***********" << endl;
	cout << "********* 1.����ְ����Ϣ ***********" << endl;
	cout << "********* 2.��ʾְ����Ϣ ***********" << endl;
	cout << "********* 3.ɾ����ְԱ�� ***********" << endl;
	cout << "********* 4.�޸�ְ����Ϣ ***********" << endl;
	cout << "********* 5.����ְ����Ϣ ***********" << endl;
	cout << "********* 6.���ձ������ ***********" << endl;
	cout << "********* 7.��������ĵ� ***********" << endl;
	cout << "************************************" << endl;
}

//�˳�ϵͳ
void WorkManager::ExistSystem()
{
	cout << "��ӭ�´�ʹ�ã�" << endl;
	system("pause");
	exit(0);//�˳�����
}

//���ְ��
void WorkManager::Add_Emp()
{
	cout << "���������ְ����������" << endl;

	int addNum = 0;//�����û�����������
	cin >> addNum;
	if (addNum > 0)
	{
		//���
		//��������µĿռ��С
		int newSize = this->m_EmpNum + addNum;//�µĿռ��С=ԭ����¼����+��������
		
		//�����µĿռ�
		Work** newSpace = new Work* [newSize];

		//��ԭ���ռ��µ����ݿ������µĿռ���
		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				newSpace[i] = this->m_EmpArray[i];
			}
		}

		//���������
		for (int i = 0; i < addNum; i++)
		{
			int id;//ְ�����
			string name;//ְ������
			int dSelect;//����ѡ��

			cout << "�������" << i + 1 << "����ְ����ţ�" << endl;
			cin >> id;

			cout << "�������" << i + 1 << "����ְ��������" << endl;
			cin >> name;

			cout << "��ѡ���ְ���ĸ�λ��" << endl;
			cout << "1����ְͨ��" << endl;
			cout << "2������" << endl;
			cout << "3���ϰ�" << endl;
			cin >> dSelect;

			Work* work = NULL;
			switch (dSelect)
			{
			case 1:
				work = new Employee(id, name, 1);
				break;
			case 2:
				work = new Manager(id, name, 2);
				break;
			case 3:
				work = new Boss(id, name, 3);
				break;
			default:
				break;
			}

			//��������ְ��ְ�𣬱��浽������
			newSpace[this->m_EmpNum + i] = work;
		}
		//���ͷ�ԭ�еĿռ�
		delete[] this->m_EmpArray;

		//�����¿ռ��ָ��
		this->m_EmpArray = newSpace;

		//�����µ�ְ������
		this->m_EmpNum = newSize;

		//����ְ����Ϊ�յı�־
		this->m_FileIsEmpty = false;

		//��ʾ��ӳɹ�
		cout << "�ɹ����" << addNum << "����ְ����" << endl;

		//�������ݵ��ļ���
		this->save();
	}
	else
	{
		cout << "������������" << endl;
	}

	//��������������ص��ϻ�Ŀ¼
	system("pause");
	system("cls");
}

//�����ļ�
void WorkManager::save()
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out);//������ķ�ʽ���ļ� -- д�ļ�

	//��ÿ��������д�뵽�ļ���
	for (int i = 0; i < this->m_EmpNum; i++)
	{
		ofs << this->m_EmpArray[i]->m_Id << " "
			<< this->m_EmpArray[i]->m_Name << " "
			<< this->m_EmpArray[i]->m_DeptId << endl;
	}

	//�ر��ļ�
	ofs.close();
}

//ͳ���ļ��е�����
int WorkManager::get_EmpNum()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);//���ļ� ��

	int id;
	string name;
	int dId;

	int num = 0;

	while (ifs >> id && ifs >> name && ifs >> dId)
	{
		//ͳ����������
		num++;
	}
	return num;
}

//��ʼ��Ա��
void WorkManager::init_Emp()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	int id;
	string name;
	int dId;

	int index = 0;
	while (ifs >> id && ifs >> name && ifs >> dId)
	{
		Work* work = NULL;

		if (dId == 1)//��ְͨ��
		{
			work = new Employee(id, name, dId);
		}
		else if (dId == 2)
		{
			work = new Manager(id, name, dId);
		}
		else
		{
			work = new Boss(id, name, dId);
		}
		this->m_EmpArray[index] = work;
		index++;
	}

	//�ر��ļ�
	ifs.close();
}

WorkManager::~WorkManager()
{
	if (this->m_EmpArray != NULL)
	{
		delete[]this->m_EmpArray;
		this->m_EmpArray = NULL;
	}
}