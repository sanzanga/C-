#include <iostream>
using namespace std;

//打印数据的函数
void showValue(const int &val)
{
	//val = 1000;
	cout << "val=" << val << endl;
}

int main() {

	//常量引用
	//使用场景：用来修饰形参，防止误操作

	//int a = 10;
	//const int& ref = 10;//引用必须引一块合法的内存空间
	////加上const之后，编译器将代码修改为：int temp = 10;const int & ref = temp;
	//ref = 20;//加上const之后变为只读，不可以进行修改

	int a = 100;
	showValue(a);

	system("pause");
	return 0;
}

////发现是引用 转换为 int* const ref = &a;
//void func(int& ref)
//{
//	ref = 100;//ref是引用，转换为 *ref = 100；
//}
//
//int main() {
//
//	int a = 10;
//
//	//自动转换为 int* const ref = &a;
//	//指针常量是指针指向不可改，也说明为什么引用不可以更改
//	int& ref = a;
//	ref = 20;//内部发现ref是引用，自动转换成 *ref = 20;
//
//	cout << "a=" << a << endl;
//	cout << "ref=" << ref << endl;
//
//	system("pause");
//	return 0;
//}

////引用做函数的返回值
////1、不要返回局部变量的引用
//int& test01()
//{
//	int a = 10;//局部变量存放在四区中的栈区
//	return a;
//}
//
////2、函数的调用可以作为左值
//int& test02()
//{
//	static int a = 10;//静态变量，存放在全局区，全局区上的数据在程序结束后系统释放
//	return a;
//}
//
//int main() {
//
//	//int& ref = test01();
//
//	//cout << "ref=" << ref << endl;//第一次结果正确，编译器做了保留
//	//cout << "ref=" << ref << endl;//第二次结果错误，因为a已经释放
//
//	int& ref2 = test02();
//
//	cout << "ref2=" << ref2 << endl;
//	cout << "ref2=" << ref2 << endl;
//	cout << "ref2=" << ref2 << endl;
//
//	test02() = 1000;//如果函数的返回值是引用，这个函数调用可以作为左值
//
//	cout << "ref2=" << ref2 << endl;
//	cout << "ref2=" << ref2 << endl;
//
//	system("pause");
//	return 0;
//}

////交换函数
//
////1、值传递
//void mySwap01(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//
//	cout << "swap01a=" << a << endl;
//	cout << "swap01b=" << b << endl;
//
//}
//
////2、地址传递
//void mySwap02(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
////引用传递
//void mySwap03(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//int main() {
//
//	int a = 10;
//	int b = 20;
//
//	//mySwap01(a, b);//值传递，形参不会修饰实参
//	//mySwap02(&a, &b);//地址传递，形参会修饰实参
//	mySwap03(a, b);//引用传递，形参会修饰形参
//
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	int a = 10;
//	//int& b = a;
//	//1、引用必须初始化
//	//int& b;//err
//	int& b = a;
//
//	//2、引用初始化后，不可以改变
//	int c = 20;
//	b = c;//赋值操作。而不是更改引用
//
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//	cout << "c=" << c << endl;
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	//引用基本语法
//	//数据类型 &别名 = 原名
//
//	int a = 10;
//	//创建引用
//	int& b = a;
//
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//
//	b = 100;
//
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//
//	system("pause");
//	return 0;
//}