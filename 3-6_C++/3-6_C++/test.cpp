#include <iostream>
#include <string>

using namespace std;

int main() {



	system("pause");

	return 0;
}

//class Building
//{
//	//goodFȫ�ֺ�����Building�����ѣ����Է���˽�г�Ա
//	friend void goodF(Building* building);
//
//public:
//	Building()
//	{
//		m_SittingRoom = "����";
//		m_BedRoom = "����";
//	}
//
//public:
//	string m_SittingRoom;//����
//
//private:
//	string m_BedRoom;//����
//};
//
////ȫ�ֺ���
//void goodF(Building * building)
//{
//	cout << "�����ѵ�ȫ�ֺ��� ���ڷ��ʣ� " << building->m_SittingRoom << endl;
//
//	cout << "�����ѵ�ȫ�ֺ��� ���ڷ��ʣ� " << building->m_BedRoom << endl;
//}
//
//void test01()
//{
//	Building building;
//	goodF(&building);
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

////������
//class Person
//{
//public:
//
//	//thisָ�뱾�� ��ָ�볣�� ָ���ָ���ǲ������޸ĵ�
//	//const Person * const * this
//	//�ڳ�Ա�����������const�������ε���thisָ����ָ��ָ���ֵҲ�������޸�
//	void showPerson() const
//	{
//		this->m_B = 100;
//		//this->m_A = 100;
//		//this = NULL;//thisָ�벻�����޸�ָ���ָ��
//	}
//
//	void func()
//	{
//
//	}
//
//	int m_A;
//	mutable int m_B;//�����������ʹ�ڳ������У�Ҳ�����޸����ֵ,���Ϲؼ���mutable
//};
//
//void test01()
//{
//	Person p;
//	p.showPerson();
//}
//
////������
//void test02()
//{
//	const Person p;//�ڶ���ǰ�����const����Ϊ������
//	//p.m_A = 100;
//	p.m_B = 100;//m_B������ֵ���ڳ���������Ҳ�����޸�
//
//	//������ֻ�ܵ��ó�����
//	p.showPerson();
//	//p.func();//�����󲻿��Ե�����ͨ�ĳ�Ա��������Ϊ��ͨ��Ա���������޸�����
//}
//
//int main() {
//
//
//
//	system("pause");
//
//	return 0;
//}

////��ָ����ó�Ա����
//
//class Person
//{
//public:
//	void showClassName()
//	{
//		cout << "this is Person class" << endl;
//	}
//
//	void showPersonAge()
//	{
//		//����ԭ�򣺴����ָ��Ϊ��
//		if (this == NULL)
//		{
//			return;
//		}
//
//		cout << "age = " << m_Age << endl;
//	}
//
//	int m_Age;
//};
//
//void test01()
//{
//	Person* p = NULL;
//
//	p->showClassName();
//
//	p->showPersonAge();
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

//class Person
//{
//public:
//	Person(int age)
//	{
//		//thisָ��ָ����Ǳ����õĳ�Ա������������
//		this->age = age;
//	}
//
//	Person& PersonAddPerson(Person &p)
//	{
//		this->age += p.age;
//
//		//thisָ��p2��ָ�룬��this*ָ��ľ���p2���������
//		return *this;
//	}
//
//	int age;
//};
//
////������Ƴ�ͻ
//void test01()
//{
//	Person p1(18);
//
//	cout << "p1������Ϊ�� " << p1.age << endl;
//}
//
////���ض������� *this
//void test02()
//{
//	Person p1(10);
//
//	Person p2(10);
//
//	//��ʽ���˼��
//	p2.PersonAddPerson(p1).PersonAddPerson(p1).PersonAddPerson(p1);
//
//	cout << "p2������Ϊ��" << p2.age << endl;
//}
//
//int main() {
//
//	//test01();
//
//	test02();
//
//	system("pause");
//
//	return 0;
//}

////��Ա���� �� ��Ա���� �Ƿֿ��洢��
//
//class Person
//{
//
//	int m_A;//�Ǿ�̬��Ա����  ������Ķ�����
//
//	static int m_B;//��̬��Ա������������Ķ�����
//
//	void func(){}//�Ǿ�̬��Ա���� ��������Ķ���
//
//	static void func2(){}//��̬��Ա���� ��������Ķ�����
//}; 
//
//int Person::m_B = 0;
//
//void test01()
//{
//	Person p;
//
//	//�ն���ռ�ÿռ�Ϊ1
//	//C++���������ÿ������Ҳ����һ���ֽڿռ䣬��Ϊ�����ֿն���ռ���ڴ�ռ��λ��
//	//ÿ���ն���ҲӦ����һ����һ�޶����ڴ��ַ
//	//��һ���ֽ���Ϊ����
//	cout << "sizeof p = " << sizeof(p) << endl;
//}
//
//void test02()
//{
//	Person p;
//	cout << "sizeof p = " << sizeof(p) << endl;
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