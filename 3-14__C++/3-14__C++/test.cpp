#include <iostream>
#include <string>

using namespace std;

//函数调用运算符重载
class MyPrint
{
public:
	//重载函数调用运算符
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
	myPrint("Hello World");//由于使用起来非常类似于函数调用，因此称为仿函数
	MyPrint02("Hello World");
}

//仿函数非常灵活，没有固定的写法
//加法类
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

	//匿名函数对象
	cout << MyAdd()(100, 100) << endl;
}

int main() {

	//test01();
	test02();

	system("pause");
	return 0;
}

////重载关系运算符
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		m_Name = name;
//		m_Age = age;
//	}
//	//重载==号
//	bool operator==(Person& p)
//	{
//		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
//		{
//			return true;
//		}
//		return false;
//	}
//	//重载！=
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
//		cout << "p1和p2是相等的！" << endl;
//	}
//	else
//	{
//		cout << "p1和p2是不相等的！" << endl;
//	}
//
//	if (p1 != p2)
//	{
//		cout << "p1和p2是不相等的！" << endl;
//	}
//	else
//	{
//		cout << "p1和p2是相等的！" << endl;
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

////赋值运算符重载
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
//	//重载赋值运算符
//	Person& operator=(Person& p)
//	{
//		//编译器提供的是浅拷贝
//		//m_Age = p.m_Age;
//
//		//应该先盘点是否有属性在堆区，如果有先释放干净，然后再深拷贝
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//		//深拷贝
//		m_Age = new int(*p.m_Age);
//		//返回对象本身
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
//	p3 = p2 = p1;//赋值操作
//
//	cout << "p1的年龄为：" << *p1.m_Age << endl;
//	cout << "p2的年龄为：" << *p2.m_Age << endl;
//	cout << "p3的年龄为：" << *p3.m_Age << endl;
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

////实现递增运算符重载
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
//	//前置++
//	MyInteger& operator++()
//	{
//		m_Num++;
//
//		return *this;
//	}
//
//	//后置++
//	MyInteger operator++(int)
//	{
//		//首先记录数字
//		MyInteger temp = *this;
//
//		//在++
//		m_Num++;
//
//		return temp;
//	}
//
//private:
//	int m_Num;
//};
//
////实现左移运算符重载
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