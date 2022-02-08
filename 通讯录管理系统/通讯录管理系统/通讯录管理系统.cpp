#include <iostream>
using namespace std;

#include <string>

#define MAX 1000


//�˵�����
void showMenu()
{
	cout << "************************" << endl;
	cout << "***** 1�������ϵ�� *****" << endl;
	cout << "***** 2����ʾ��ϵ�� *****" << endl;
	cout << "***** 3��ɾ����ϵ�� *****" << endl;
	cout << "***** 4��������ϵ�� *****" << endl;
	cout << "***** 5���޸���ϵ�� *****" << endl;
	cout << "***** 6�������ϵ�� *****" << endl;
	cout << "***** 0���˳�ͨ��¼ *****" << endl;
	cout << "************************" << endl;
}

//�����ϵ�˵Ľṹ��
struct Person
{
	//����
	string m_Name;
	//�Ա� 1 ��  2 Ů
	int m_Sex;
	//����
	int age;
	//�绰
	string m_Phone;
	//��ַ
	string m_Addr;
};

//���ͨѶ¼�Ľṹ��
struct Addressbooks
{
	//ͨ��¼�б������ϵ������
	struct Person personArray[MAX];

	//ͨѶ¼��ǰ��¼��ϵ�˸���
	int m_Size;
};

void addPerson(struct Addressbooks* abs)
{
	//�ж�ͨѶ¼�Ƿ��Ѿ����ˣ�������˾Ͳ��������
	if (abs->m_Size == MAX)
	{
		cout << "ͨ��¼�������޷���ӣ�" << endl;
		return;
	}
	else
	{
		//��Ӿ�����ϵ��
		//����
		string name;
		cout << "������������ " << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;
		//�Ա�
		cout << "�������Ա� " << endl;
		cout << "1 --- ��" << endl;
		cout << "2 --- Ů" << endl;
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			cout << "������������������" << endl;
		}
		//����
		cout << "���������䣺 " << endl;
		int age = 0;
		cin >> age;
		abs->personArray[abs->m_Size].age = age;
		//�绰
		cout << "��������ϰ�绰�� " << endl;
		string phone;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;
		//סַ
		cout << "�������ͥ��ַ�� " << endl;
		string address;
		cin >> address;
		abs->personArray[abs->m_Size].m_Addr = address;

		//����ͨѶ¼����
		abs->m_Size++;

		cout << "��ӳɹ�" << endl;

		system("pause");//�밴���������
		system("cls");//��������
		showMenu();

	}
}

//��ʾ������ϵ��
void showPerson(struct Addressbooks* abs)
{
	//�ж�ͨѶ¼�����Ƿ�Ϊ0
	if (abs->m_Size == 0)
	{
		cout << "��ǰͨѶ¼Ϊ��" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "������ " << abs->personArray[i].m_Name << "\t";
			cout << "�Ա� " << (abs->personArray[i].m_Sex == 1 ? "��":"Ů") << "\t";
			cout << "���䣺 " << abs->personArray[i].age << "\t";
			cout << "�绰" << abs->personArray[i].m_Phone << "\t";
			cout << "סַ�� " << abs->personArray[i].m_Addr << endl;
		}
	}
	system("pause");
	system("cls");
	showMenu();
}

//�����ϵ���Ƿ���ڣ�������ڣ�������ϵ�����������еľ���λ�ã������ڷ���-1
int isExist(struct Addressbooks* abs, string name)
{
	for (int i = 0; i < abs->m_Size; i++)
	{
		//�ҵ����û������������
		if (abs->personArray[i].m_Name == name)
		{
			return i;
		}
	}
	//�����������û���ҵ�����-1
	return -1;
}

//ɾ��ָ������ϵ��
void deletePerson(Addressbooks* abs)
{
	cout << "��������Ҫɾ������ϵ��" << endl;
	string name;
	cin >> name;

	int ret = isExist(abs, name);

	//ret == -1 δ�鵽
	//ret != -1 �鵽��
	if (ret != -1)
	{
		for (int i = ret; i < abs->m_Size; i++)
		{
			//����ǰ��
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_Size--;
		cout << "ɾ���ɹ�" << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}

	system("pause");
	system("cls");

	showMenu();
}

//����ָ������ϵ����Ϣ
void findPerson(struct Addressbooks* abs)
{
	cout << "��������Ҫ���ҵ���ϵ��" << endl;
	string name;
	cin >> name;

	//�ж�ָ������ϵ���Ƿ����ͨ��¼��
	int ret = isExist(abs, name);

	if (ret != -1)
	{
		cout << "������ " << abs->personArray[ret].m_Name << '\t';
		cout << "�Ա� " << abs->personArray[ret].m_Sex << '\t';
		cout << "���䣺 " << abs->personArray[ret].age << '\t';
		cout << "�绰�� " << abs->personArray[ret].m_Phone << '\t';
		cout << "סַ�� " << abs->personArray[ret].m_Addr << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}

	system("pause");
	system("cls");

	showMenu();

}

//�޸���ϵ����Ϣ
void modifyPerson(struct Addressbooks* abs)
{
	cout << "��������Ҫ�޸ĵ���ϵ��" << endl;
	string name;
	cin >> name;

	int ret = isExist(abs, name);
	if (ret != -1)
	{
		//����
		string name;
		cout << "������������ " << endl;
		cin >> name;
		abs->personArray[ret].m_Name = name;
		//�Ա�
		cout << "�������Ա� " << endl;
		cout << "1 --- ��" << endl;
		cout << "2 --- Ů" << endl;
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[ret].m_Sex = sex;
				break;
			}
			cout << "������������������" << endl;
		}
		//����
		cout << "���������䣺 " << endl;
		int age = 0;
		cin >> age;
		abs->personArray[ret].age = age;
		//�绰
		cout << "��������ϰ�绰�� " << endl;
		string phone;
		cin >> phone;
		abs->personArray[ret].m_Phone = phone;
		//סַ
		cout << "�������ͥ��ַ�� " << endl;
		string address;
		cin >> address;
		abs->personArray[ret].m_Addr = address;

		cout << "�޸ĳɹ�" << endl;

	}
	else
	{
		cout << "���޴���" << endl;
	}

	system("pause");
	system("cls");

	showMenu();

}

//���������ϵ��
void cleanPerson(struct Addressbooks* abs)
{
	abs->m_Size = 0;//�����ڼ�¼��ϵ����������Ϊ0 ���߼���ղ���
	cout << "ͨѶ¼�����" << endl;

	system("pause");
	system("cls");

	showMenu();

}

int main()
{
	//����ͨ��¼�ṹ�����
	Addressbooks abs;
	//��ʼ��ͨѶ¼�е�ǰ��Ա����
	abs.m_Size = 0;

	//����һ���û�ѡ��ı���
	int select = 0;

	//�˵��ĵ���
	showMenu();

	while (true)
	{
		cin >> select;

		switch (select)
		{
		case 1://�����ϵ��
			addPerson(&abs);//���õ�ַ���ݿ�������ʵ��
			break;
		case 2://��ʾ��ϵ��
			showPerson(&abs);
			break;
		case 3://ɾ����ϵ��
		/*{
			cout << "������ɾ����ϵ�������� " << endl;
			string name;
			cin >> name;
			if (isExist(&abs, name) == 1)
			{
				cout << "���޴���" << endl;
			}
			else
			{
			    cout << "ɾ���ɹ�" << endl;
			}
		}*/
			deletePerson(&abs);
			break;
		case 4://������ϵ��
			findPerson(&abs);
			break;
		case 5://�޸���ϵ��
			modifyPerson(&abs);
			break;
		case 6://�����ϵ��
			cleanPerson(&abs);
			break;
		case 0://�˳�ͨ��¼
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;
			break;
		default:
			cout << "ѡ������������ѡ��" << endl;
			break;
		}
	}

	system("pause");
	return 0;
}