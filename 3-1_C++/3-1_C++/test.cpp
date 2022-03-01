#include <iostream>
using namespace std;

//构造函数的分类及调用
//分类
//按照参数分类 无参构造（默认构造）和有参构造
//按照类型分类 普通构造  拷贝构造
class Person
{
public:

	//构造函数
	Person()
	{
		cout << "Person 的无参构造函数的调用" << endl;
	}

	Person(int a)
	{
		age = a;
		cout << "Person 的有参构造函数的调用" << endl;
	}

	//拷贝构造
	Person(const Person &p)
	{
		//将传入的这个人身上的所有属性拷贝到现在的这个人身上
		cout << "Person 的拷贝构造函数的调用" << endl;
		age = p.age;
	}

	//析构函数
	~Person()
	{
		cout << "Person 的析构函数的调用" << endl;
	}

	int age;
};

//调用
void test01()
{
	//括号法
	//Person p;//默认函数的调用
	//Person p1(10);//有参构造函数
	////拷贝构造
	//Person p2(p1);

	//注意事项
	//调用默认的构造函数时候，不要加（）
	//Person p1();
	//上面这行代码，编译器会认为是一个函数声明

	/*cout << "p1的年龄为： " << p1.age << endl;
	cout << "p2的年龄为： " << p2.age << endl;*/
	
	//显示法
	Person p1;
	Person p2 = Person(10);//有参构造
	Person p3 = Person(p2);//拷贝构造

	//Person(10);//匿名对象 特点：当前执行结束后，系统会立即回收掉匿名对象
	//cout << "aaaa" << endl;

	//注意事项2
	//不要利用拷贝构造函数 初始化对象
	//Person(p3);//编译器认为Person(p3) === Person p3;对象的声明

	//隐式转换法
	Person p4 = 10;//相当于 写了 Person p4 = Person(10); 有参构造
	Person p5 = p3;//拷贝构造

}

int main() {

	test01();

	system("pause");

	return 0;

}

////对象的初始化和清理
////1、构造函数：进行初始化操作
//class Person
//{
//public:
//
//	//1、构造函数
//	//没有返回值也不写void
//	//函数名 与类名相同
//	//构造函数可以有参数 可以发生重载
//	//创建对象的时候。构造函数会自动调用，而且只调用一次
//	Person()
//	{
//		cout << "Person 构造函数的调用" << endl;
//	}
//
//	//2、析构函数：进行清理的操作
//	//没有返回值 也不写void
//	//函数名与类名相同 在名称前面加~
//	//析构函数不可以有参数的，不可以发生重载
//	//对象在销毁前 会自动调用析构函数，而且只会调用一次
//	~Person()
//	{
//		cout << "Person 的析构函数调用" << endl;
//	}
//
//};
//
////构造函数和析构函数是必须有的实现，如果我们自己不提供，编译器会提供一个空实现的构造和析构
//
//void test01()
//{
//	Person p;//在栈上的数据，test01执行完毕后，释放这个对象
//}
//
//int main() {
//
//	//Person p;
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}