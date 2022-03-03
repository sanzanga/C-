#include <iostream>
#include <string>

using namespace std;

//静态成员函数
//所有对象共享同一个函数
//静态成员函数只能访问静态成员变量

class Person
{
public:

	//静态成员函数
	static void func()
	{
		m_A = 100;//静态成员函数可以访问静态成员变量
		//m_B = 100;//静态成员函数不可以访问 非静态成员变量，无法区分到底是哪个对象的m_B
		cout << "static void func的调用" << endl;
	}

	static int m_A;//静态成员变量

	int m_B;//非静态成员变量

	//静态成员函数也是有访问权限的
private:
	static void func2()
	{
		cout << "static void func2的调用" << endl;
	}
};

//有两种的访问方式
void test01()
{
	//1、通过对象访问
	Person p;

	//2、通过类名访问
	Person::func();

	//Person::func2();//类外不可以访问到私有的静态成员函数
}

int main() {

	test01();

	system("pause");
	return 0;
}

////类对象作为类成员
//
////手机类
//class Phone
//{
//public:
//
//	Phone(string pName)
//	{
//		cout << "Phone构造函数的调用" << endl;
//		m_PName = pName;
//	}
//
//	~Phone()
//	{
//		cout << "Phone的析构函数的调用" << endl;
//	}
//
//	//手机品牌名称
//	string m_PName;
//};
//
////人类
//class Person
//{
//public:
//
//	//Phone m_Phone = pName;  隐式转换法
//	Person(string name, string pName):m_Name(name),m_Phone(pName)
//	{
//		cout << "Person构造函数的调用" << endl;
//	}
//
//	~Person()
//	{
//		cout << "Person的析构函数调用" << endl;
//	}
//
//	//姓名
//	string m_Name;
//	//手机
//	Phone m_Phone;
//};
//
////当其他的类作为本类成员，构造时候先构造类的对象，在构造自身，
////析构的顺序与构造相反
//
//void test01()
//{
//	Person p("张三", "苹果");
//
//	cout << p.m_Name << "拿着: " << p.m_Phone.m_PName << endl;
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}

////初始化列表
//
//class Person
//{
//public:
//
//	//传统初始化
//	/*Person(int a, int b, int c)
//	{
//		m_A = a;
//		m_B = b;
//		m_C = c;
//	}*/
//
//	//初始化列表初始化属性
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

////深拷贝和浅拷贝
//
//class Person
//{
//public:
//
//	Person()
//	{
//		cout << "Person的默认构造函数的调用" << endl;
//	}
//
//	Person(int age,int height)
//	{
//		m_Age = age;
//		m_Height = new int(height);
//		cout << "Person的有参构造函数的调用" << endl;
//	}
//
//	//自己写一个拷贝构造函数，解决浅拷贝带来的问题
//	Person(const Person& p)
//	{
//		cout << "Person拷贝函数的调用" << endl;
//		m_Age = p.m_Age;
//		//m_Height = p.m_Height;编译器默认实现这行代码
//		//深拷贝操作
//
//		m_Height = new int(*p.m_Height);
//
//	}
//
//	~Person()
//	{
//		//析构代码，将堆区开辟数据做释放操作
//		if (m_Height != NULL)
//		{
//			delete m_Height;
//			m_Height = NULL;
//		}
//		cout << "Person的默认析构函数的调用" << endl;
//	}
//
//	int m_Age;
//	int* m_Height;//身高
//};
//
//void test01()
//{
//	Person p1(18, 160);
//
//	cout << "p1的年龄为： " << p1.m_Age << "身高为： " << *p1.m_Height << endl;
//
//	Person p2(p1);
//
//	cout << "p1的年龄为： " << p1.m_Age << "身高为： " << *p2.m_Height << endl;
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}

////构造函数的调用规则
////1、创建一个类，c++编译器会给每个类都添加至少3个函数
////默认构造（空实现）
////有参构造 （空实现）
////拷贝构造（值拷贝）
//
////2、如果我们写了有参构造函数，编译器就不再提供默认构造函数，依然提供拷贝构造函数
////如果我们写了拷贝构造函数，编译器就不再提供其他的普通构造函数
//
//class Person
//{
//public:
//
//	/*Person()
//	{
//		cout << "Person默认构造函数调用" << endl;
//	}*/
//
//	Person(int age)
//	{
//		cout << "Person有参构造函数调用" << endl;
//		m_Age = age;
//	}
//
//	/*Person(const Person& p)
//	{
//		cout << "Person拷贝构造函数调用" << endl;
//		m_Age = p.m_Age;
//	}*/
//
//	~Person()
//	{
//		cout << "Person默认构造函数调用" << endl;
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
////	cout << "p2的年龄为: " << p2.m_Age << endl;
////}
//
//void test02()
//{
//	Person p(28);
//
//	Person p2(p);
//
//	cout << "p2的年龄为: " << p2.m_Age << endl;
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

////拷贝构造函数调用时机
//
//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person默认构造函数调用" << endl;
//	}
//
//	Person(int age)
//	{
//		cout << "Person有参构造函数调用" << endl;
//		m_Age = age;
//	}
//
//	Person(const Person& p)
//	{
//		cout << "Person拷贝构造函数调用" << endl;
//		m_Age = p.m_Age;
//	}
//
//	~Person()
//	{
//		cout << "Person默认析构函数调用" << endl;
//	}
//
//	int m_Age;
//};
//
////1、使用一个已经创建完毕的对象来初始化一个新对象
//void test01()
//{
//	Person p1(20);
//	Person p2(p1);
//
//	cout << "p2的年龄为： " << p2.m_Age << endl;
//}
//
////2、值传递的方式给函数参数传值
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
////3、值方式返回局部对象
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