#include <iostream>
#include <string>
using namespace std;

int main() {



	system("pause");
	return 0;
}



////��һ�ֽ����ʽ��ֱ�Ӱ���Դ�ļ�
////#include "person.cpp"
//
////�ڶ��ֽ����ʽ����.h�ļ���.cpp�ļ��е�����д��һ�𣬽���׺��Ϊ.hpp�ļ�
//#include "person.hpp"
//
//////��ģ��ķ��ļ���д���⼰���
////template<class T1,class T2>
////class Person
////{
////public:
////	Person(T1 name, T2 age);
////	//{
////	//	this->age = age;
////	//	this->name = name;
////	//}
////
////	void showPerson();
////	//{
////	//	cout << "name:" << this->name << endl;
////	//	cout << "age:" << this->age << endl;
////	//}
////
////	T1 name;
////	T2 age;
////};
////
//////���캯������ʵ��
////template<class T1, class T2>
////Person<T1, T2>::Person(T1 name, T2 age)
////{
////	this->name = name;
////	this->age = age;
////}
////
//////��Ա��������ʵ��
////template<class T1, class T2>
////void Person<T1, T2>::showPerson()
////{
////	cout << "name:" << this->name << endl;
////	cout << "age:" << this->age << endl;
////}
////class Person
////{
////public:
////	Person(T1 name, T2 age)
////	{
////		this->age = age;
////		this->name = name;
////	}
////
////	void showPerson()
////	{
////		cout << "name:" << this->name << endl;
////		cout << "age:" << this->age << endl;
////	}
////
////	T1 name;
////	T2 age;
////};
//
//void test01()
//{
//	Person<string, int>p("����", 10);
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
//	//{
//	//	this->age = age;
//	//	this->name = name;
//	//}
//
//	void showPerson();
//	//{
//	//	cout << "name:" << this->name << endl;
//	//	cout << "age:" << this->age << endl;
//	//}
//
//	T1 name;
//	T2 age;
//};
//
////���캯������ʵ��
//template<class T1, class T2>
//Person<T1, T2>::Person(T1 name, T2 age)
//{
//	this->name = name;
//	this->age = age;
//}
//
////��Ա��������ʵ��
//template<class T1, class T2>
//void Person<T1, T2>::showPerson()
//{
//	cout << "name:" << this->name << endl;
//	cout << "age:" << this->age << endl;
//}
//
//void test01()
//{
//	Person<string, int>p("����", 10);
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
////class Son :public Base//���󣬱���Ҫ֪��������T�����ͣ����ܼ̳и�����
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
////���������ָ��������T���ͣ�����Ҳ��Ҫ����ģ��
//template<class T1,class T2>
//class Son2 :public Base<T2>
//{
//public:
//	Son2()
//	{
//		cout << "T1�����ͣ�" << typeid(T1).name() << endl;
//		cout << "T2�����ͣ�" << typeid(T2).name() << endl;
//	}
//
//	T1 obj;
//};
//
//void test02()
//{
//	Son2<int, char>s2;
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
//template<class T1,class T2>
//class Person
//{
//public:
//	Person(T1 name, T2 age)
//	{
//		this->age = age;
//		this->name = name;
//	}
//
//	void showPerson()
//	{
//		cout << "name:" << this->name << endl;
//		cout << "age:" << this->age << endl;
//	}
//
//	T1 name;
//	T2 age;
//};
//
////1��ָ����������
//void printPerson1(Person<string, int>& p)
//{
//	p.showPerson();
//}
//
//void test01()
//{
//	Person<string, int>p("����", 10);
//	printPerson1(p);
//}
//
////2������ģ�廯
//template<class T1,class T2>
//void printPerson2(Person<T1,T2>&p)
//{
//	p.showPerson();
//	cout << "T1������Ϊ��" << typeid(T1).name() << endl;
//	cout << "T2������Ϊ��" << typeid(T2).name() << endl;
//}
//
//void test02()
//{
//	Person<string, int>p("����", 20);
//	printPerson2(p);
//}
//
////3��������ģ�廯
//template<class T>
//void printPerson3(T &p)
//{
//	p.showPerson();
//	cout << "T���������ͣ�" << typeid(T).name() << endl;
//}
//
//void test03()
//{
//	Person<string, int>p("����", 30);
//	printPerson3(p);
//}
//
//int main() {
//
//	test01();
//
//	test02();
//
//	test03();
//
//	system("pause");
//	return 0;
//}



////��ģ���г�Ա��������ʱ��
////��ģ���г�Ա�����ڵ���ʱ��ȥ����
//
//class Person1
//{
//public:
//	void showPerson1()
//	{
//		cout << "Person1 show" << endl;
//	}
//};
//
//class Person2
//{
//public:
//	void showPerson2()
//	{
//		cout << "Person2 show" << endl;
//	}
//};
//
//template<class T>
//class MyClass
//{
//public:
//
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
//	m.func1();
//	//m.func2();
//}
//
//int main() {
//
//
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
//		this->age = age;
//		this->name = name;
//	}
//
//	void showPerson()
//	{
//		cout << "name:" << this->name << endl;
//		cout << "age:" << this->age << endl;
//	}
//
//	string name;
//	int age;
//};
//
////��ģ��û���Զ������Ƶ�ʹ�÷�ʽ
//void test01()
//{
//	//Person p("����", 10);//�����޷��Զ������Ƶ�
//
//	Person<string, int>p("����", 10);//��ȷ��ֻ����ʾָ������
//
//	p.showPerson();
//}
//
////��ģ����ģ������б��п�����Ĭ�ϲ���
//void test02()
//{
//	Person<string>p("����", 20);
//	p.showPerson();
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
//	Person(NameType name, AgeType age)
//	{
//		this->age = age;
//		this->name = name;
//	}
//
//	void showPerson()
//	{
//		cout << "name:" << this->name << endl;
//		cout << "age��" << this->age << endl;
//	}
//
//	NameType name;
//	AgeType age;
//};
//
//void test01()
//{
//	Person<string, int>p1("����", 20);
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




////ģ��ľ�����
////ģ�岢�������ܵģ���Щ�ض����������ͣ���Ҫ�þ��廯��ʽ������ʵ��
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->age = age;
//		this->name = name;
//	}
//
//	//����
//	string name;
//	//����
//	int age;
//};
//
////�Ա����������Ƿ���Ⱥ���
//template<class T>
//bool myCompare(T& a, T& b)
//{
//	if (a == b)
//	{
//		return true;
//	}
//	return false;
//}
//
////���þ��廯Person�İ汾ʵ�ִ��룬���廯���ȵ���
//template<>bool myCompare(Person& a, Person& b)
//{
//	if (a.age == b.age && a.name == b.name)
//	{
//		return true;
//	}
//	return false;
//}
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//
//	bool ret = myCompare(a, b);
//	
//	if (ret)
//	{
//		cout << "a==b" << endl;
//	}
//	else
//	{
//		cout << "a!=b" << endl;
//	}
//}
//
//void test02()
//{
//	Person p1("Tom", 10);
//	Person p2("Tom", 10);
//
//	bool ret = myCompare(p1, p2);
//	if (ret)
//	{
//		cout << "p1==p2" << endl;
//	}
//	else
//	{
//		cout << "p1!=p2" << endl;
//
//	}
//
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



////��ͨ�����ͺ���ģ��ĵ��ù���
////1���������ģ�����ͨ���������Ե��ã����ȵ�����ͨ����
////2������ͨ����ģ������б�ǿ�Ƶ��ú���ģ��
////3������ģ����Է�����������
////4���������ģ����Բ������õ�ƥ�䣬���ȵ��ú���ģ��
//
//void myPrint(int a, int b)
//{
//	cout << "���õ���ͨ����" << endl;
//}
//
//template<class T>
//void myPrint(T a, T b)
//{
//	cout << "���õ�ģ��" << endl;
//}
//
//template<class T>
//void myPrint(T a, T b, T c)
//{
//	cout << "�������ص�ģ��" << endl;
//}
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	//myPrint(a, b);
//
//	//ͨ����ģ������б�ǿ�Ƶ��ú���ģ��
//	//myPrint<>(a, b);
//
//	//myPrint(a, b, 100);
//
//	//�������ģ����Բ������õ�ƥ�䣬���ȵ��ú���ģ��
//	char c1 = 'a';
//	char c2 = 'b';
//
//	myPrint(c1, c2);
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}



////��ͨ�����ͺ���ģ�������
////1����ͨ�������ÿ��Է�����ʽ����ת��
////2������ģ�����Զ������Ƶ��������Է�����ʽ����ת��
////3������ģ������ʾָ�����ͣ����Է�����ʽ����ת��
//
////��ͨ����
//int myAdd01(int a, int b)
//{
//	return a + b;
//}
//
////����ģ��
//template<class T>
//T myAdd02(T a, T b)
//{
//	return a + b;
//}
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';//a-97 c-99
//
//	cout << myAdd01(a, b) << endl;
//	cout << myAdd01(a, c) << endl;
//
//	//�Զ������Ƶ�  ���ᷢ����ʽ����ת��
//	cout << myAdd02(a, b) << endl;//
//	//cout << myAdd02(a, c) << endl;//���� 
//
//	//��ʾָ������  �ᷢ����ʽ����ת��
//	cout << myAdd02<int>(a, c) << endl;//������
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}





////����ģ��İ���
////���ú���ģ���װһ������ĺ��������ԶԲ�ͬ�������������������
////�������Ӵ�С�������㷨Ϊѡ������
////�ֱ���char�����int������в���
//
////��������ģ��
//template<class T>
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
////�����㷨
//template<class T>
//void mySort(T arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		int max = i;//�϶����ֵ���±�
//		for (int j = i + 1; j < len; j++)
//		{
//			//�϶������ֵ�����Ǳ�����������ֵҪС
//			//˵��j�±��Ԫ�ز������������ֵ
//			if (arr[max] < arr[j])
//			{
//				max = j;//�������ֵ���±�
//			}
//		}
//		if (max != i)
//		{
//			//����max��i�±��Ԫ��
//			mySwap(arr[max], arr[i]);
//		}
//	}
//}
//
////�ṩ��ӡ��ģ�庯��
//template<class T>
//void printArray(T arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	//����char����
//	char charArr[] = "shuiscsjc";
//	int num = sizeof(charArr) / sizeof(char);
//	mySort(charArr, num);
//	printArray(charArr, num);
//}
//
//void test02()
//{
//	//����int����
//	int intArr[] = { 4,6,2,87,4,5,7,0 };
//
//	int num = sizeof(intArr) / sizeof(int);
//	mySort(intArr, num);
//	printArray(intArr, num);
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





////����ģ��ע������
//template<typename T>//typename�����滻��class
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
////1���Զ������Ƶ��������Ƶ���һ�µ���������T�ſ���ʹ��
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//
//	//mySwap(a, b);//��ȷ
//	//mySwap(a, c);//���� �Ƶ�����һ�µ�T����
//
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//}
//
////2��ģ�����Ҫȷ����T���������ͣ��ſ���ʹ��
//template<class T>
//void func()
//{
//	cout << "func ����" << endl;
//}
//
//void test02()
//{
//	func<int>();//ģ�����Ҫȷ����T���������ͣ��ſ���ʹ��
//}
//
//int main() {
//
//	//test01();
//	test02();
//
//	system("pause");
//	return 0;
//}





////����ģ��
////ʵ���������ν����ĺ���
//void swapInt(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
////�������������ͺ���
//void swapDouble(double& a, double& b)
//{
//	double temp = a;
//	a = b;
//	b = temp;
//}
//
////����ģ��
//template<typename T>//����һ��ģ�壬���߱�������������н����ŵ�T��Ҫ����T��һ��ͨ�õ���������
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//
//	//swapInt(a, b);
//	//���ú���ģ�彻��
//	//���ַ�ʽʹ�ú���ģ��
//	//1���Զ������Ƶ�
//	//mySwap(a, b);
//	
//	//2����ʾָ������
//	mySwap<int>(a, b);
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//
//	//double c = 1.1;
//	//double d = 2.2;
//	//swapDouble(c, d);
//	//cout << "c=" << c << endl;
//	//cout << "d=" << d << endl;
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}