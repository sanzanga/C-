#include <iostream>
#include <string>

using namespace std;

int main() {



	system("pause");

	return 0;
}

//class Building
//{
//	//goodF全局函数是Building好朋友，可以访问私有成员
//	friend void goodF(Building* building);
//
//public:
//	Building()
//	{
//		m_SittingRoom = "客厅";
//		m_BedRoom = "卧室";
//	}
//
//public:
//	string m_SittingRoom;//客厅
//
//private:
//	string m_BedRoom;//卧室
//};
//
////全局函数
//void goodF(Building * building)
//{
//	cout << "好朋友的全局函数 正在访问： " << building->m_SittingRoom << endl;
//
//	cout << "好朋友的全局函数 正在访问： " << building->m_BedRoom << endl;
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

////常函数
//class Person
//{
//public:
//
//	//this指针本质 是指针常量 指针的指向是不可以修改的
//	//const Person * const * this
//	//在成员函数后面加上const，是修饰的是this指向，让指针指向的值也不可以修改
//	void showPerson() const
//	{
//		this->m_B = 100;
//		//this->m_A = 100;
//		//this = NULL;//this指针不可以修改指针的指向
//	}
//
//	void func()
//	{
//
//	}
//
//	int m_A;
//	mutable int m_B;//特殊变量，即使在常函数中，也可以修改这个值,加上关键字mutable
//};
//
//void test01()
//{
//	Person p;
//	p.showPerson();
//}
//
////常对象
//void test02()
//{
//	const Person p;//在对象前面加上const，变为常对象
//	//p.m_A = 100;
//	p.m_B = 100;//m_B是特殊值，在常对象下面也可以修改
//
//	//常对象只能调用常函数
//	p.showPerson();
//	//p.func();//常对象不可以调用普通的成员函数，因为普通成员函数可以修改属性
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

////空指针调用成员函数
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
//		//报错原因：传入的指针为空
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
//		//this指针指向的是被调用的成员函数所属对象
//		this->age = age;
//	}
//
//	Person& PersonAddPerson(Person &p)
//	{
//		this->age += p.age;
//
//		//this指向p2的指针，而this*指向的就是p2这个对象本体
//		return *this;
//	}
//
//	int age;
//};
//
////解决名称冲突
//void test01()
//{
//	Person p1(18);
//
//	cout << "p1的年龄为： " << p1.age << endl;
//}
//
////返回对象本身用 *this
//void test02()
//{
//	Person p1(10);
//
//	Person p2(10);
//
//	//链式编程思想
//	p2.PersonAddPerson(p1).PersonAddPerson(p1).PersonAddPerson(p1);
//
//	cout << "p2的年龄为：" << p2.age << endl;
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

////成员变量 和 成员函数 是分开存储的
//
//class Person
//{
//
//	int m_A;//非静态成员变量  属于类的对象上
//
//	static int m_B;//静态成员变量不属于类的对象上
//
//	void func(){}//非静态成员函数 不属于类的对象
//
//	static void func2(){}//静态成员函数 不属于类的对象上
//}; 
//
//int Person::m_B = 0;
//
//void test01()
//{
//	Person p;
//
//	//空对象占用空间为1
//	//C++编译器会给每个对象也分配一个字节空间，是为了区分空对象占用内存空间的位置
//	//每个空对象也应该有一个独一无二的内存地址
//	//给一个字节作为区分
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