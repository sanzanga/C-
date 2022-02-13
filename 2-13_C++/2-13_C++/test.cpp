#include <iostream>
using namespace std;

#include <string>

//设计一个学生类。属性有姓名和学号，可以给姓名和学号赋值，可以显示学生的姓名和学号

class Student
{
public://公共权限

	//类中的属性和行为 我们统一称为成员
	//属性  成员属性   成员变量
	//行为  成员函数   成员方法

	//属性
	string name;
	int m_Id;

	//行为
	//显示学生姓名和学号的函数
	void showStudent()
	{
		cout << "姓名： " << name << " 学号： " << m_Id << endl;
	}

	//给姓名赋值
	void setName(string m_name)
	{
		name = m_name;
	}

	//给学号进行赋值
	void setId(int id)
	{
		m_Id = id;
	}
};

int main() {

	//创建一个具体的学生  实例化对象
	Student s1;
	//给s1对象 进行属性赋值操作
	//s1.name = "张三";
	s1.setName("张三");
	//s1.m_Id = 1;
	s1.setId(1);

	//显示学生信息
	s1.showStudent();

	Student s2;
	s2.name = "lisi";
	s2.m_Id = 2;
	s2.showStudent();

	system("pause");
	return 0;
}

//class Student
//{
//	//访问权限
//public:
//
//	//属性
//	string name;
//	string id;
//
//	//打印学生的姓名和学号
//	void print(string str1,string str2)
//	{
//		cout << "学生的姓名是： " << str1 << "学号是： " << str2 << endl;
//	}
//};
//
//int main() {
//
//	Student stu;
//	stu.name = "张三";
//	stu.id = "123456";
//
//	stu.print(stu.name,stu.id);
//
//	system("pause");
//	return 0;
//}

//const double PI = 3.14;
//
////设计一个圆类，求圆的周长
//
////class 代表设计一个类，类后面紧跟着的就是类的名称
//class Circle
//{
//	//访问权限
//	//公共权限
//public:
//
//	//属性
//	//半径
//	int m_r;
//
//	//行为
//	//获取圆的周长
//	double calculateZC()
//	{
//		return 2 * PI * m_r;
//	}
//};
//
//int main() {
//
//	//通过圆类 创建具体的圆（对象）
//	//实例化 （通过一个类 创建一个对象的过程）
//	Circle c1;
//	//给圆对象的属性进行赋值
//	c1.m_r = 10;
//
//	cout << "圆的周长为： " << c1.calculateZC() << endl;
//
//	system("pause");
//	return 0;
//}

////函数重载的注意事项
////1、引用作为重载的条件
//void func(int& a)//int &a=10;不合法的
//{
//	cout << "fun (int& a) 调用" << endl;
//}
//
//void func(const int& a)//const int &a = 10;合法的
//{
//	cout << "fun (const int& a) 调用" << endl;
//}
//
////2、函数重载碰到默认参数
//void func2(int a,int b = 10)
//{
//	cout << "func2 (int a, int b) 的调用 " << endl;
//}
//
//void func2(int a)
//{
//	cout << "func2 (int a) 的调用 " << endl;
//}
//
//int main() {
//
//	/*int a = 10;
//	func(a);*/
//
//	//func(10);
//
//	//func(10);//报错
//
//	system("pause");
//	return 0;
//}

////函数重载
////可以让函数名相同，提高复用性
//
////函数重载的满足条件
////1、同一个作用域下
////2、函数名称相同
////3、函数参数类型不同，或者个数不同，或者顺序不同
//void func()
//{
//	cout << "func 的调用" << endl;
//}
//
//void func(int a)
//{
//	cout << "func (int a) 的调用!" << endl;
//}
//
//void func(double a)
//{
//	cout << "func (double a) 的调用!" << endl;
//}
//
//void func(int a, double b)
//{
//	cout << "func (int a, double b) 的调用" << endl;
//}
//
//void func(double a, int b)
//{
//	cout << "func (double a, int b) 的调用" << endl;
//}
//
////注意事项
////函数的返回值不可以作为函数重载的条件
////int func(double a, int b)
////{
////	cout << "func (double a, int b) 的调用" << endl;
////}
//
//int main() {
//
//	//func();
//	//func(10);
//	//func(3.14);
//	//func(10, 3.14);
//	func(3.14, 10);
//
//	system("pause");
//	return 0;
//}

////占位参数
////返回值类型  函数名 （数据类型）{}
//
////目前阶段的占位参数，我们还用不到，后面的课程中会用到
////占位参数还可以有默认参数
//void func(int a , int = 10)
//{
//	cout << "tihs is func " << endl;
//}
//
//int main() {
//
//	func(10);
//
//	system("pause");
//	return 0;
//}

////函数的默认参数
//
////如果我们自己传入数据，就用自己的数据，如果没有，那么用默认值
////语法：返回值类型 函数名 (形参 = 默认值) {}
//int func(int a, int b = 20, int c = 30)
//{
//	return a + b + c;
//}
//
////注意事项：
////1、如果某个位置已经有了默认参数，那么从这个位置往后，从左到右都必须是右默认值
////int func2(int a, int b = 10, int c)
////{
////	return a + b + c;
////}
//
////2、如果函数的声明有默认值，函数的实现就不能有默认值
////声明和实现只能有一个有默认参数
//int func2(int a, int b);
//
//int func2(int a = 20, int b = 20)
//{
//	return a + b;
//}
//
//int main() {
//
//	//cout << func(10, 30) << endl;
//
//	cout << func2() << endl;
//
//	system("pause");
//	return 0;
//}