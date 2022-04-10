#include <iostream>
using namespace std;
#include <string>

//类模板和友元

//提前让编译器知道Person类存在
template<class T1, class T2>
class Person;

//通过全局函数 打印Person信息

//类外实现
template<class T1, class T2>
void printPerson2(Person<T1, T2>p)
{
	cout << "name:" << p.name << " age:" << p.age << endl;
}

template<class T1,class T2>
class Person
{
	//全局函数 ，类内实现
	friend void printPerson(Person<T1, T2>p)
	{
		cout << "name:" << p.name << " age:" << p.age << endl;
	}

	//全局函数类外实现
	//添加空的参数列表
	//如果全局函数实在类外实现，需要让编译器知道这个函数的存在
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

//1、全局函数在类内的实现
void test01()
{
	Person<string, int>p("Tom", 10);

	printPerson(p);
}

//2、全局函数在类内实现
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

////第一种解决方式，直接包含源文件
////#include "person.cpp"
//
////第二种解决方式，将.h和.cpp文件写到一起，将后缀名改为.hpp文件
//#include "person.hpp"
//
//////类模板分文件编写问题及解决
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
//////构造函数的类外实现
////template<class T1,class T2>
////Person<T1, T2>::Person(T1 name, T2 age)
////{
////	this->name = name;
////	this->age = age;
////}
////
//////成员函数类外实现
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

////类模板成员函数类外实现
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
////构造函数的类外实现
//template<class T1,class T2>
//Person<T1, T2>::Person(T1 name, T2 age)
//{
//	this->name = name;
//	this->age = age;
//}
//
////成员函数类外实现
//template<class T1,class T2>
//void Person<T1, T2>::showPerson()
//{
//	cout << "name: " << this->name << " age: " << this->age << endl;
//}
//
//void test01()
//{
//	Person<string, int> p("张三", 10);
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

////类模板和继承
//template<class T>
//class Base
//{
//	T m;
//};
//
////class Son :public Base//错误，必须要知道父类中的类型，才能继承给子类
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
////如果想灵活指定父类中T的来兴，子类也需要变成类的模板
//template<class T1,class T2>
//class Son2 :public Base<T2>
//{
//public:
//	Son2()
//	{
//		cout << "T1的类型为：" << typeid(T1).name() << endl;
//		cout << "T2的类型为：" << typeid(T2).name() << endl;
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

////类模板对象做函数参数
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
////1、指定传入的类型
//void printPerson1(Person<string, int>&p)
//{
//	p.showPerson();
//}
//
//void test01()
//{
//	Person<string, int> p("张三", 19);
//	printPerson1(p);
//}
//
////2、参数模板化
//template<class T1,class T2>
//void printPerson2(Person<T1, T2>& p)
//{
//	p.showPerson();
//	cout << "T1类型为: " << typeid(T1).name() << endl;
//	cout << "T2的类型为: " << typeid(T2).name() << endl;
//}
//
//void test02()
//{
//	Person<string, int> p("lisi", 19);
//	printPerson2(p);
//}
//
////3、整个类模板化
//template<class T>
//void printPerson3(T& p)
//{
//	p.showPerson();
//	cout << "T的数据类型：" << typeid(T).name() << endl;
//}
//
//void test03()
//{
//	Person<string, int> p("王五", 29);
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

////类模板中成员函数创建时机
////类模板中的成员函数在调用的时候才去创建
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
//	//类模板中的成员函数
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

////类模板和函数模板的区别
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
//	//Person p1("张三", 10);//错误，无法自动类型推导
//
//	Person<string, int> p1("张三", 10);//正确，只能显示指定类型
//	p1.showPerson();
//}
//
////类模板没有自动推导类型使用方法
////类模板在模板参数列表中课有默认参数
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

////类模板
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
//	Person<string, int> p1("张三", 10);
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