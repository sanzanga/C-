#include <iostream>
using namespace std;
#include <string>

//��ģ�����Ԫ

//��ǰ�ñ�����֪��Person�����
template<class T1, class T2>
class Person;

//ͨ��ȫ�ֺ��� ��ӡPerson��Ϣ

//����ʵ��
template<class T1, class T2>
void printPerson2(Person<T1, T2>p)
{
	cout << "name:" << p.name << " age:" << p.age << endl;
}

template<class T1,class T2>
class Person
{
	//ȫ�ֺ��� ������ʵ��
	friend void printPerson(Person<T1, T2>p)
	{
		cout << "name:" << p.name << " age:" << p.age << endl;
	}

	//ȫ�ֺ�������ʵ��
	//��ӿյĲ����б�
	//���ȫ�ֺ���ʵ������ʵ�֣���Ҫ�ñ�����֪����������Ĵ���
	friend void printPerson2<>(Person<T1, T2>p);

public:
	Person(T1 name, T2 age)
	{
		this->name = name;
		this->age = age;
	}

private:
	T1 name;
	T2 age;
};

//1��ȫ�ֺ��������ڵ�ʵ��
void test01()
{
	Person<string, int>p("Tom", 10);

	printPerson(p);
}

//2��ȫ�ֺ���������ʵ��
void test02()
{
	Person<string, int>p("tom", 12);
	printPerson2(p);
}

int main() {

	test01();

	test02();

	system("pause");
	return 0;
}

////��һ�ֽ����ʽ��ֱ�Ӱ���Դ�ļ�
////#include "person.cpp"
//
////�ڶ��ֽ����ʽ����.h��.cpp�ļ�д��һ�𣬽���׺����Ϊ.hpp�ļ�
//#include "person.hpp"
//
//////��ģ����ļ���д���⼰���
////template<class T1,class T2>
////class Person
////{
////public:
////	Person(T1 name, T2 age);
////
////	void showPerson();
////
////	T1 name;
////	T2 age;
////};
//
//////���캯��������ʵ��
////template<class T1,class T2>
////Person<T1, T2>::Person(T1 name, T2 age)
////{
////	this->name = name;
////	this->age = age;
////}
////
//////��Ա��������ʵ��
////template<class T1,class T2>
////void Person<T1, T2>::showPerson()
////{
////	cout << "name: " << this->name << " age: " << this->age << endl;
////}
//
//void test01()
//{
//	Person<string, int> p("Tom", 19);
//	p.showPerson();
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}

////��ģ���Ա��������ʵ��
//template<class T1,class T2>
//class Person
//{
//public:
//	Person(T1 name, T2 age);
//	/*{
//		this->name = name;
//		this->age = age;
//	}*/
//
//	void showPerson();
//	/*{
//		cout << "name: " << this->name << " age: " << this->age << endl;
//	}*/
//
//	T1 name;
//	T2 age;
//};
//
////���캯��������ʵ��
//template<class T1,class T2>
//Person<T1, T2>::Person(T1 name, T2 age)
//{
//	this->name = name;
//	this->age = age;
//}
//
////��Ա��������ʵ��
//template<class T1,class T2>
//void Person<T1, T2>::showPerson()
//{
//	cout << "name: " << this->name << " age: " << this->age << endl;
//}
//
//void test01()
//{
//	Person<string, int> p("����", 10);
//	p.showPerson();
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}

////��ģ��ͼ̳�
//template<class T>
//class Base
//{
//	T m;
//};
//
////class Son :public Base//���󣬱���Ҫ֪�������е����ͣ����ܼ̳и�����
//class Son:public Base<int>
//{
//
//};
//
//void test01()
//{
//	Son s1;
//}
//
////��������ָ��������T�����ˣ�����Ҳ��Ҫ������ģ��
//template<class T1,class T2>
//class Son2 :public Base<T2>
//{
//public:
//	Son2()
//	{
//		cout << "T1������Ϊ��" << typeid(T1).name() << endl;
//		cout << "T2������Ϊ��" << typeid(T2).name() << endl;
//	}
//
//	T1 obj;
//};
//
//void test02()
//{
//	Son2 <int, char>s2;
//}
//
//int main() {
//
//	test01();
//
//	test02();
//
//	system("pause");
//	return 0;
//}

////��ģ���������������
//template<class T1, class T2>
//class Person
//{
//public:
//	Person(T1 name, T2 age)
//	{
//		this->name = name;
//		this->age = age;
//	}
//
//	void showPerson()
//	{
//		cout << "name: " << this->name << " age: " << this->age << endl;
//	}
//
//	T1 name;
//	T2 age;
//};
////1��ָ�����������
//void printPerson1(Person<string, int>&p)
//{
//	p.showPerson();
//}
//
//void test01()
//{
//	Person<string, int> p("����", 19);
//	printPerson1(p);
//}
//
////2������ģ�廯
//template<class T1,class T2>
//void printPerson2(Person<T1, T2>& p)
//{
//	p.showPerson();
//	cout << "T1����Ϊ: " << typeid(T1).name() << endl;
//	cout << "T2������Ϊ: " << typeid(T2).name() << endl;
//}
//
//void test02()
//{
//	Person<string, int> p("lisi", 19);
//	printPerson2(p);
//}
//
////3��������ģ�廯
//template<class T>
//void printPerson3(T& p)
//{
//	p.showPerson();
//	cout << "T���������ͣ�" << typeid(T).name() << endl;
//}
//
//void test03()
//{
//	Person<string, int> p("����", 29);
//	printPerson3(p);
//}
//
//int main() {
//
//	//test01();
//
//	//test02();
//
//	test03();
//	system("pause");
//	return 0;
//}

////��ģ���г�Ա��������ʱ��
////��ģ���еĳ�Ա�����ڵ��õ�ʱ���ȥ����
//class Person1
//{
//public:
//	void showPerson1()
//	{
//		cout << "Perosn1 show" << endl;
//	}
//};
//
//class Person2
//{
//public:
//	void showPerson2()
//	{
//		cout << "Perosn2 show" << endl;
//	}
//};
//
//template<class T>
//class MyClass
//{
//public:
//	T obj;
//
//	//��ģ���еĳ�Ա����
//	void func1()
//	{
//		obj.showPerson1();
//	}
//
//	void func2()
//	{
//		obj.showPerson2();
//	}
//};
//
//void test01()
//{
//	MyClass<Person1>m;
//	//m.func1();
//	//m.func2();
//	m.func1();
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}

////��ģ��ͺ���ģ�������
//template<class NameType,class AgeType = int>
//class Person
//{
//public:
//	Person(NameType name, AgeType age)
//	{
//		this->name = name;
//		this->age = age;
//	}
//
//	void showPerson()
//	{
//		cout << "name:" << this->name << " age:" << this->age << endl;
//	}
//
//	NameType name;
//	AgeType age;
//};
//
//void test01()
//{
//	//Person p1("����", 10);//�����޷��Զ������Ƶ�
//
//	Person<string, int> p1("����", 10);//��ȷ��ֻ����ʾָ������
//	p1.showPerson();
//}
//
////��ģ��û���Զ��Ƶ�����ʹ�÷���
////��ģ����ģ������б��п���Ĭ�ϲ���
//
//void test02()
//{
//	Person<string> p2("lisi", 20);
//	p2.showPerson();
//}
//
//int main() {
//
//	test01();
//
//	test02();
//
//	system("pause");
//	return 0;
//}

////��ģ��
//template<class NameType,class AgeType>
//class Person
//{
//public:
//	Perosn(NameType name, AgeType age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	void showPerson()
//	{
//		cout << "name:" << this->m_Name << " age:" << this->m_Age << endl;
//	}
//
//	NameType m_Name;
//	AgeType m_Age;
//};
//
//void test01()
//{
//	Person<string, int> p1("����", 10);
//	p1.showPerson();
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}