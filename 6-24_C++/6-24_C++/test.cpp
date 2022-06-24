#include <iostream>
#include <string>
using namespace std;

int main() {



	system("pause");
	return 0;
}



////第一种解决方式，直接包含源文件
////#include "person.cpp"
//
////第二种解决方式，将.h文件和.cpp文件中的内容写到一起，将后缀改为.hpp文件
//#include "person.hpp"
//
//////类模板的分文件编写问题及解决
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
//////构造函数类外实现
////template<class T1, class T2>
////Person<T1, T2>::Person(T1 name, T2 age)
////{
////	this->name = name;
////	this->age = age;
////}
////
//////成员函数类外实现
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
//	Person<string, int>p("张三", 10);
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
////构造函数类外实现
//template<class T1, class T2>
//Person<T1, T2>::Person(T1 name, T2 age)
//{
//	this->name = name;
//	this->age = age;
//}
//
////成员函数类外实现
//template<class T1, class T2>
//void Person<T1, T2>::showPerson()
//{
//	cout << "name:" << this->name << endl;
//	cout << "age:" << this->age << endl;
//}
//
//void test01()
//{
//	Person<string, int>p("张三", 10);
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
////class Son :public Base//错误，必须要知道父类中T的类型，才能继承给子类
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
////如果想灵活的指定父类中T类型，子类也需要变类模板
//template<class T1,class T2>
//class Son2 :public Base<T2>
//{
//public:
//	Son2()
//	{
//		cout << "T1的类型：" << typeid(T1).name() << endl;
//		cout << "T2的类型：" << typeid(T2).name() << endl;
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





////类模板对象做函数参数
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
////1、指定传入类型
//void printPerson1(Person<string, int>& p)
//{
//	p.showPerson();
//}
//
//void test01()
//{
//	Person<string, int>p("张三", 10);
//	printPerson1(p);
//}
//
////2、参数模板化
//template<class T1,class T2>
//void printPerson2(Person<T1,T2>&p)
//{
//	p.showPerson();
//	cout << "T1的类型为：" << typeid(T1).name() << endl;
//	cout << "T2的类型为：" << typeid(T2).name() << endl;
//}
//
//void test02()
//{
//	Person<string, int>p("李四", 20);
//	printPerson2(p);
//}
//
////3、整个类模板化
//template<class T>
//void printPerson3(T &p)
//{
//	p.showPerson();
//	cout << "T的数据类型：" << typeid(T).name() << endl;
//}
//
//void test03()
//{
//	Person<string, int>p("王五", 30);
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



////类模板中成员函数创建时机
////类模板中成员函数在调用时才去创建
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




////类模板和函数模板的区别
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
////类模板没有自动类型推导使用方式
//void test01()
//{
//	//Person p("张三", 10);//错误，无法自动类型推导
//
//	Person<string, int>p("张三", 10);//正确，只能显示指定类型
//
//	p.showPerson();
//}
//
////类模板在模板参数列表中可以有默认参数
//void test02()
//{
//	Person<string>p("李四", 20);
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



////类模板
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
//		cout << "age：" << this->age << endl;
//	}
//
//	NameType name;
//	AgeType age;
//};
//
//void test01()
//{
//	Person<string, int>p1("张三", 20);
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




////模板的局限性
////模板并不是万能的，有些特定的数据类型，需要用具体化方式做特殊实现
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->age = age;
//		this->name = name;
//	}
//
//	//姓名
//	string name;
//	//年龄
//	int age;
//};
//
////对比两个数据是否相等函数
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
////利用具体化Person的版本实现代码，具体化优先调用
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



////普通函数和函数模板的调用规则
////1、如果函数模板和普通函数都可以调用，优先调用普通函数
////2、可以通过空模板参数列表强制调用函数模板
////3、函数模板可以发生函数重载
////4、如果函数模板可以产生更好地匹配，优先调用函数模板
//
//void myPrint(int a, int b)
//{
//	cout << "调用的普通函数" << endl;
//}
//
//template<class T>
//void myPrint(T a, T b)
//{
//	cout << "调用的模板" << endl;
//}
//
//template<class T>
//void myPrint(T a, T b, T c)
//{
//	cout << "调用重载的模板" << endl;
//}
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	//myPrint(a, b);
//
//	//通过空模板参数列表，强制调用函数模板
//	//myPrint<>(a, b);
//
//	//myPrint(a, b, 100);
//
//	//如果函数模板可以产生更好地匹配，优先调用函数模板
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



////普通函数和函数模板的区别
////1、普通函数调用可以发生隐式类型转换
////2、函数模板用自动类型推导，不可以发生隐式类型转换
////3、函数模板用显示指定类型，可以发生隐式类型转换
//
////普通函数
//int myAdd01(int a, int b)
//{
//	return a + b;
//}
//
////函数模板
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
//	//自动类型推导  不会发生隐式类型转换
//	cout << myAdd02(a, b) << endl;//
//	//cout << myAdd02(a, c) << endl;//报错 
//
//	//显示指定类型  会发生隐式类型转换
//	cout << myAdd02<int>(a, c) << endl;//不报错
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}





////函数模板的案例
////利用函数模板封装一个排序的函数，可以对不同数据类型数组进行排序
////排序规则从大到小，排序算法为选择排序
////分别用char数组和int数组进行测试
//
////交换函数模板
//template<class T>
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
////排序算法
//template<class T>
//void mySort(T arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		int max = i;//认定最大值的下标
//		for (int j = i + 1; j < len; j++)
//		{
//			//认定的最大值比我们遍历出来的数值要小
//			//说明j下标的元素才是真正的最大值
//			if (arr[max] < arr[j])
//			{
//				max = j;//更新最大值的下标
//			}
//		}
//		if (max != i)
//		{
//			//交换max和i下标的元素
//			mySwap(arr[max], arr[i]);
//		}
//	}
//}
//
////提供打印的模板函数
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
//	//测试char数组
//	char charArr[] = "shuiscsjc";
//	int num = sizeof(charArr) / sizeof(char);
//	mySort(charArr, num);
//	printArray(charArr, num);
//}
//
//void test02()
//{
//	//测试int数组
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





////函数模板注意事项
//template<typename T>//typename可以替换成class
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
////1、自动类型推导，必须推导出一致的数据类型T才可以使用
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//
//	//mySwap(a, b);//正确
//	//mySwap(a, c);//错误 推到不出一致的T类型
//
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//}
//
////2、模板必须要确定出T的数据类型，才可以使用
//template<class T>
//void func()
//{
//	cout << "func 调用" << endl;
//}
//
//void test02()
//{
//	func<int>();//模板必须要确定出T的数据类型，才可以使用
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





////函数模板
////实现两个整形交换的函数
//void swapInt(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
////交换两个浮点型函数
//void swapDouble(double& a, double& b)
//{
//	double temp = a;
//	a = b;
//	b = temp;
//}
//
////函数模板
//template<typename T>//声明一个模板，告诉编译器后面代码中紧跟着的T不要报错，T是一个通用的数据类型
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
//	//利用函数模板交换
//	//两种方式使用函数模板
//	//1、自动类型推导
//	//mySwap(a, b);
//	
//	//2、显示指定类型
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