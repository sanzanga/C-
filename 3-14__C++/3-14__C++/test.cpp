#include <iostream>
#include <string>

using namespace std;

//�����������������
class MyPrint
{
public:
	//���غ������������
	void operator()(string test)
	{
		cout << test << endl;
	}
};

void MyPrint02(string test)
{
	cout << test << endl;
}

void test01()
{
	MyPrint myPrint;
	myPrint("Hello World");//����ʹ�������ǳ������ں������ã���˳�Ϊ�º���
	MyPrint02("Hello World");
}

//�º����ǳ���û�й̶���д��
//�ӷ���
class MyAdd
{
public:
	int operator()(int num1, int num2)
	{
		return num1 + num2;
	}
};

void test02()
{
	MyAdd myAdd;
	int ret = myAdd(100, 100);
	cout << "ret=" << ret << endl;

	//������������
	cout << MyAdd()(100, 100) << endl;
}

int main() {

	//test01();
	test02();

	system("pause");
	return 0;
}

////���ع�ϵ�����
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		m_Name = name;
//		m_Age = age;
//	}
//	//����==��
//	bool operator==(Person& p)
//	{
//		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
//		{
//			return true;
//		}
//		return false;
//	}
//	//���أ�=
//	bool operator!=(Person& p)
//	{
//		if (this->m_Age == p.m_Age && this->m_Name == p.m_Name)
//		{
//			return false;
//		}
//		return true;
//	}
//
//	string m_Name;
//	int m_Age;
//};
//
//void test01()
//{
//	Person p1("Tom", 18);
//	Person p2("Tom", 18);
//	if (p1 == p2)
//	{
//		cout << "p1��p2����ȵģ�" << endl;
//	}
//	else
//	{
//		cout << "p1��p2�ǲ���ȵģ�" << endl;
//	}
//
//	if (p1 != p2)
//	{
//		cout << "p1��p2�ǲ���ȵģ�" << endl;
//	}
//	else
//	{
//		cout << "p1��p2����ȵģ�" << endl;
//	}
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}

////��ֵ���������
//
//class Person
//{
//public:
//	Person(int age)
//	{
//		m_Age = new int(age);
//	}
//
//	~Person()
//	{
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//	}
//
//	//���ظ�ֵ�����
//	Person& operator=(Person& p)
//	{
//		//�������ṩ����ǳ����
//		//m_Age = p.m_Age;
//
//		//Ӧ�����̵��Ƿ��������ڶ�������������ͷŸɾ���Ȼ�������
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//		//���
//		m_Age = new int(*p.m_Age);
//		//���ض�����
//		return *this;
//	}
//
//	int* m_Age;
//};
//
//void test01()
//{
//	Person p1(18);
//	Person p2(20);
//	Person p3(30);
//
//	p3 = p2 = p1;//��ֵ����
//
//	cout << "p1������Ϊ��" << *p1.m_Age << endl;
//	cout << "p2������Ϊ��" << *p2.m_Age << endl;
//	cout << "p3������Ϊ��" << *p3.m_Age << endl;
//}
//
//int main() {
//
//	test01();
//
//	/*int a = 10;
//	int b = 20;
//	int c = 30;
//	c = b = a;
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//	cout << "c=" << c << endl;*/
//
//	system("pause");
//
//	return 0;
//}

////ʵ�ֵ������������
//class MyInteger
//{
//	friend ostream& operator<<(ostream& cout, MyInteger myint);
//
//public:
//	MyInteger()
//	{
//		m_Num = 0;
//	}
//
//	//ǰ��++
//	MyInteger& operator++()
//	{
//		m_Num++;
//
//		return *this;
//	}
//
//	//����++
//	MyInteger operator++(int)
//	{
//		//���ȼ�¼����
//		MyInteger temp = *this;
//
//		//��++
//		m_Num++;
//
//		return temp;
//	}
//
//private:
//	int m_Num;
//};
//
////ʵ���������������
//ostream& operator<<(ostream& cout, MyInteger myint)
//{
//	cout << myint.m_Num;
//
//	return cout;
//}
//
//void test01()
//{
//	MyInteger myint;
//
//	cout << myint << endl;
//
//	cout << ++myint << endl;
//
//	cout << myint++ << endl;
//
//	cout << myint << endl;
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}