#include <iostream>
#include <string>

using namespace std;

//��̬��Ա����
//���ж�����ͬһ������
//��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����

class Person
{
public:

	//��̬��Ա����
	static void func()
	{
		m_A = 100;//��̬��Ա�������Է��ʾ�̬��Ա����
		//m_B = 100;//��̬��Ա���������Է��� �Ǿ�̬��Ա�������޷����ֵ������ĸ������m_B
		cout << "static void func�ĵ���" << endl;
	}

	static int m_A;//��̬��Ա����

	int m_B;//�Ǿ�̬��Ա����

	//��̬��Ա����Ҳ���з���Ȩ�޵�
private:
	static void func2()
	{
		cout << "static void func2�ĵ���" << endl;
	}
};

//�����ֵķ��ʷ�ʽ
void test01()
{
	//1��ͨ���������
	Person p;

	//2��ͨ����������
	Person::func();

	//Person::func2();//���ⲻ���Է��ʵ�˽�еľ�̬��Ա����
}

int main() {

	test01();

	system("pause");
	return 0;
}

////�������Ϊ���Ա
//
////�ֻ���
//class Phone
//{
//public:
//
//	Phone(string pName)
//	{
//		cout << "Phone���캯���ĵ���" << endl;
//		m_PName = pName;
//	}
//
//	~Phone()
//	{
//		cout << "Phone�����������ĵ���" << endl;
//	}
//
//	//�ֻ�Ʒ������
//	string m_PName;
//};
//
////����
//class Person
//{
//public:
//
//	//Phone m_Phone = pName;  ��ʽת����
//	Person(string name, string pName):m_Name(name),m_Phone(pName)
//	{
//		cout << "Person���캯���ĵ���" << endl;
//	}
//
//	~Person()
//	{
//		cout << "Person��������������" << endl;
//	}
//
//	//����
//	string m_Name;
//	//�ֻ�
//	Phone m_Phone;
//};
//
////������������Ϊ�����Ա������ʱ���ȹ�����Ķ����ڹ�������
////������˳���빹���෴
//
//void test01()
//{
//	Person p("����", "ƻ��");
//
//	cout << p.m_Name << "����: " << p.m_Phone.m_PName << endl;
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}

////��ʼ���б�
//
//class Person
//{
//public:
//
//	//��ͳ��ʼ��
//	/*Person(int a, int b, int c)
//	{
//		m_A = a;
//		m_B = b;
//		m_C = c;
//	}*/
//
//	//��ʼ���б��ʼ������
//	Person(int a, int b, int c) :m_A(a), m_B(b), m_C(c)
//	{
//
//	}
//
//	int m_A;
//	int m_B;
//	int m_C;
//};
//
//void test01()
//{
//	//Person p(10, 20, 30);
//
//	Person p(30, 20, 10);
//
//	cout << "m_A=" << p.m_A << "m_B=" << p.m_B << "m_C=" << p.m_C << endl;
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}

////�����ǳ����
//
//class Person
//{
//public:
//
//	Person()
//	{
//		cout << "Person��Ĭ�Ϲ��캯���ĵ���" << endl;
//	}
//
//	Person(int age,int height)
//	{
//		m_Age = age;
//		m_Height = new int(height);
//		cout << "Person���вι��캯���ĵ���" << endl;
//	}
//
//	//�Լ�дһ���������캯�������ǳ��������������
//	Person(const Person& p)
//	{
//		cout << "Person���������ĵ���" << endl;
//		m_Age = p.m_Age;
//		//m_Height = p.m_Height;������Ĭ��ʵ�����д���
//		//�������
//
//		m_Height = new int(*p.m_Height);
//
//	}
//
//	~Person()
//	{
//		//�������룬�����������������ͷŲ���
//		if (m_Height != NULL)
//		{
//			delete m_Height;
//			m_Height = NULL;
//		}
//		cout << "Person��Ĭ�����������ĵ���" << endl;
//	}
//
//	int m_Age;
//	int* m_Height;//���
//};
//
//void test01()
//{
//	Person p1(18, 160);
//
//	cout << "p1������Ϊ�� " << p1.m_Age << "���Ϊ�� " << *p1.m_Height << endl;
//
//	Person p2(p1);
//
//	cout << "p1������Ϊ�� " << p1.m_Age << "���Ϊ�� " << *p2.m_Height << endl;
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}

////���캯���ĵ��ù���
////1������һ���࣬c++���������ÿ���඼�������3������
////Ĭ�Ϲ��죨��ʵ�֣�
////�вι��� ����ʵ�֣�
////�������죨ֵ������
//
////2���������д���вι��캯�����������Ͳ����ṩĬ�Ϲ��캯������Ȼ�ṩ�������캯��
////�������д�˿������캯�����������Ͳ����ṩ��������ͨ���캯��
//
//class Person
//{
//public:
//
//	/*Person()
//	{
//		cout << "PersonĬ�Ϲ��캯������" << endl;
//	}*/
//
//	Person(int age)
//	{
//		cout << "Person�вι��캯������" << endl;
//		m_Age = age;
//	}
//
//	/*Person(const Person& p)
//	{
//		cout << "Person�������캯������" << endl;
//		m_Age = p.m_Age;
//	}*/
//
//	~Person()
//	{
//		cout << "PersonĬ�Ϲ��캯������" << endl;
//	}
//
//	int m_Age;
//};
//
////void test01()
////{
////	Person p;
////	p.m_Age = 18;
////
////	Person p2(p);
////
////	cout << "p2������Ϊ: " << p2.m_Age << endl;
////}
//
//void test02()
//{
//	Person p(28);
//
//	Person p2(p);
//
//	cout << "p2������Ϊ: " << p2.m_Age << endl;
//}
//
//int main() {
//
//	//test01();
//
//	test02();
//
//	system("pause");
//	return 0;
//}

////�������캯������ʱ��
//
//class Person
//{
//public:
//	Person()
//	{
//		cout << "PersonĬ�Ϲ��캯������" << endl;
//	}
//
//	Person(int age)
//	{
//		cout << "Person�вι��캯������" << endl;
//		m_Age = age;
//	}
//
//	Person(const Person& p)
//	{
//		cout << "Person�������캯������" << endl;
//		m_Age = p.m_Age;
//	}
//
//	~Person()
//	{
//		cout << "PersonĬ��������������" << endl;
//	}
//
//	int m_Age;
//};
//
////1��ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
//void test01()
//{
//	Person p1(20);
//	Person p2(p1);
//
//	cout << "p2������Ϊ�� " << p2.m_Age << endl;
//}
//
////2��ֵ���ݵķ�ʽ������������ֵ
//void doWork(Person p)
//{
//
//}
//
//void test02()
//{
//	Person p;
//	doWork(p);
//}
//
////3��ֵ��ʽ���ؾֲ�����
//Person doWork02()
//{
//	Person p1;
//	cout << (int*)&p1 << endl;
//	return p1;
//}
//
//void test03()
//{
//	Person p = doWork02();
//	cout << (int*)&p << endl;
//}
//
//int main() {
//
//	//test01();
//
//	//test02();
//
//	test03();
//
//	system("pause");
//	return 0;
//}