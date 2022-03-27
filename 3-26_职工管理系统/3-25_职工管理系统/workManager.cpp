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
	//cout << "ְ��������Ϊ��" << num << endl;
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

			//�ж�����id�Ƿ��Ѿ�����
			bool b = true;
			while (b)
			{
				b = false;
				if (this->m_FileIsEmpty)
				{
					b = false;
				}
				else
				{
					for (int i = 0; i < this->m_EmpNum; i++)
					{
						if (id == this->m_EmpArray[i]->m_Id)
						{
							b = true;
							break;
						}
					}
				}
				if (b)
				{
					cout << "�����ְ������Ѿ����ڣ�����������ְ����ţ�" << endl;
					cin >> id;
				}
			}

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

//��ʾְ��
void WorkManager::Show_Emp()
{
	//�ж��ļ��Ƿ�Ϊ��
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ�գ�" << endl;
	}
	else
	{
		for (int i = 0; i < m_EmpNum; i++)
		{
			//���ö�̬���ýӿ�
			this->m_EmpArray[i]->showInfo();
		}
	}
	//�����������
	system("pause");
	system("cls");
}

//ɾ��ְ��
void WorkManager::Del_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��߼�¼Ϊ�գ�" << endl;
	}
	else
	{
		//����ְ���ı��ɾ��
		cout << "��������Ҫɾ����ְ����ţ�" << endl;
		int id = 0;
		cin >> id;
		int index = this->IsExist(id);
		if (index != -1)//˵��ְ�����ڲ���Ҫɾ����indexλ�õ�ְ��
		{
			//����ǰ��
			for (int i = index; i < this->m_EmpNum - 1; i++)
			{
				this->m_EmpArray[i] = this->m_EmpArray[i + 1];
			}
			this->m_EmpNum--;//���������еļ�¼��Ա����
			//ͬ�����µ��ļ���
			this->save();
			cout << "ɾ���ɹ�" << endl;
		}
		else
		{
			cout << "ɾ��ʧ�ܣ�δ�ҵ���ְ��" << endl;
		}
	}
	//�����������
	system("pause");
	system("cls");
}

//�ж�ְ���Ƿ����  ������ھͷ���ְ�����������е�λ�ã������ڷ���-1
int WorkManager::IsExist(int id)
{
	int index = -1;

	for (int i = 0; i < this->m_EmpNum; i++)
	{
		if (this->m_EmpArray[i]->m_Id == id)
		{
			//�ҵ�ְ��
			index = i;
			break;
		}
	}
	return index;
}

//�޸�ְ��
void WorkManager::Mod_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��߼�¼Ϊ�գ�" << endl;
	}
	else
	{
		cout << "�������޸ĵ�ְ���ı�ţ�" << endl;
		int id;
		cin >> id;

		int ret = this->IsExist(id);
		if (ret != -1)
		{
			//�鵽�˱�ŵ�ְ��
			delete this->m_EmpArray[ret];

			int newId = 0;
			string newName;
			int dSelect = 0;

			cout << "�鵽" << id << "��ְ�����������µ�ְ���ţ�" << endl;
			cin >> newId;

			cout << "�������µ�������" << endl;
			cin >> newName;

			cout << "�������λ��" << endl;
			cout << "1����ְͨ��" << endl;
			cout << "2������" << endl;
			cout << "3���ϰ�" << endl;
			cin >> dSelect;

			Work* work = NULL;
			switch (dSelect)
			{
			case 1:
				work = new Employee(newId, newName, dSelect);
				break;
			case 2:
				work = new Manager(newId, newName, dSelect);
				break;
			case 3:
				work = new Boss(newId, newName, dSelect);
				break;
			default :
				break;
			}

			//�������ݵ�������
			this->m_EmpArray[ret] = work;

			cout << "�޸ĳɹ���" << endl;

			//���浽�ļ���
			this->save();
		}
		else
		{
			cout << "�޸�ʧ�ܣ����޴��ˣ�" << endl;
		}
	}
	system("pause");
	system("cls");
}

//����ְ��
void WorkManager::Find_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��߼�¼Ϊ�գ�" << endl;
	}
	else
	{
		cout << "��������ҵķ�ʽ��" << endl;
		cout << "1������ְ����Ų���" << endl;
		cout << "2������ְ����������" << endl;

		int select = 0;
		cin >> select;

		if (select == 1)
		{
			//���ձ�Ų�
			int id;
			cout << "��������ҵ�ְ�����" << endl;
			cin >> id;

			int ret = IsExist(id);
			if (ret != -1)
			{
				//�ҵ�ְ��
				cout << "�鵽�ɹ�����ְ������Ϣ���£�" << endl;
				this->m_EmpArray[ret]->showInfo();
			}
			else
			{
				cout << "����ʧ�ܣ����޴��ˣ�" << endl;
			}
		}
		else if (select == 2)
		{
			//����������
			string name;
			cout << "��������ҵ�������" << endl;
			cin >> name;

			//�����ж��Ƿ�鵽�ı�־
			bool flag = false;//Ĭ���������û�в��ҵ�

			for (int i = 0; i < this->m_EmpNum; i++)
			{
				if (this->m_EmpArray[i]->m_Name == name)
				{
					cout << "���ҳɹ���ְ�����Ϊ"
						<< this->m_EmpArray[i]->m_Id
						<< "��ְ����Ϣ���£�" << endl;

					flag = true;

					this->m_EmpArray[i]->showInfo();
				}
			}
			if (flag == false)
			{
				cout << "����ʧ�ܣ����޴���!" << endl;
			}
		}
		else
		{
			cout << "����ѡ������" << endl;
		}
	}
	system("pause");
	system("cls");
}

//����ְ��
void WorkManager::Sort_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��߼�¼Ϊ�գ�" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		cout << "��ѡ������ʽ��" << endl;
		cout << "1������ְ����Ž�������" << endl;
		cout << "2������ְ����Ž��н���" << endl;

		int select = 0;
		cin >> select;
		for (int i = 0; i < m_EmpNum; i++)
		{
			int minOrMax = i;//�������ֵ����Сֵ���±�
			for (int j = i + 1; j < this->m_EmpNum; j++)
			{
				if (select == 1)//��������
				{
					if (this->m_EmpArray[minOrMax]->m_Id > this->m_EmpArray[j]->m_Id)
					{
						minOrMax = j;
					}
				}
				else//������
				{
					if (this->m_EmpArray[minOrMax]->m_Id < this->m_EmpArray[j]->m_Id)
					{
						minOrMax = j;
					}
				}
			}
			//�ж�һ��ʼ�϶� ��Сֵ�������ֵ �����򽻻�����
			if (i != minOrMax)
			{
				Work* temp = this->m_EmpArray[i];
				this->m_EmpArray[i] = this->m_EmpArray[minOrMax];
				this->m_EmpArray[minOrMax] = temp;
			}
		}
	}
	cout << "����ɹ��������Ľ��Ϊ��" << endl;
	this->save();//�������������
	this->Show_Emp();//չʾ����Ա��
}

//����ļ�
void WorkManager::Clean_Emp()
{
	cout << "ȷ����գ�" << endl;
	cout << "1��ȷ��" << endl;
	cout << "2������" << endl;

	int select = 0;
	cin >> select;
	
	if (select == 1)
	{
		//����ļ�
		ofstream ofs(FILENAME, ios::trunc);//ɾ���ļ������´���
		ofs.close();

		if (this->m_EmpArray != NULL)
		{
			//ɾ��������ÿ��ְ������
			for (int i = 0; i < m_EmpNum; i++)
			{
				delete this->m_EmpArray[i];
				this->m_EmpArray[i] = NULL;
			}
			//ɾ����������ָ��
			delete[]this->m_EmpArray;
			this->m_EmpArray = NULL;
			this->m_EmpNum = 0;
			this->m_FileIsEmpty = true;
		}
		cout << "��ճɹ���" << endl;
	}
	system("pause");
	system("cls");
}

WorkManager::~WorkManager()
{
	if (this->m_EmpArray != NULL)
	{
		for (int i = 0; i < this->m_EmpNum; i++)
		{
			if (this->m_EmpArray[i] != NULL)
			{
				delete this->m_EmpArray[i];
			}
		}
		delete[] this->m_EmpArray;
	}
}