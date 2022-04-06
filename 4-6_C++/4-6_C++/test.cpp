#include <iostream>
#include <string>
using namespace std;

//模板的局限性
//模板并不是万能的，有些特定的数据类型，需要用具体化方式做特殊实现\

class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	//姓名
	string m_Name;
	//年龄
	int m_Age;
};

//对比两个数是否相等的函数
template<class T>
bool myCompare(T& a, T& b)
{
	if (a == b)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//利用具体化Person的版本是现代吗，具体化优先调用
template<> bool myCompare(Person& a, Person& b)
{
	if (a.m_Name == b.m_Name && a.m_Age == b.m_Age)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void test01()
{
	int a = 10;
	int b = 20;

	bool ret = myCompare(a, b);

	if (ret == true)
	{
		cout << "a=b" << endl;
	}
	else
	{
		cout << "a!=b" << endl;
	}
}

void test02()
{
	Person p1("Tom", 10);
	Person p2("Tom", 20);

	bool ret = myCompare(p1, p2);
	if (ret)
	{
		cout << "p1==p2" << endl;
	}
	else
	{
		cout << "p1!=p2" << endl;
	}
}

int main() {

	test01();

	test02();

	system("pause");
	return 0;
}

////普通函数和函数模板的调用规则
////1、如果函数模板和普通函数都可以调用，优先调用普通函数
////2、可以通过空模板的参数列表调用函数模板
////3、函数模板可以发生函数重载
////4、如果函数模板可以发生更好地匹配，优先调用函数模板
//
//void myPrint(int a, int b)
//{
//	cout << "调用的普通函数" << endl;
//}
//
//template<class T>
//void myPrint(T a, T b)
//{
//	cout << "调用函数的模板" << endl;
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
//
//	//myPrint(a, b);
//
//	//通过空模板参数列表，强制调用函数模板
//	//myPrint<>(a, b);
//
//	//myPrint(a, b, 100);
//
//	//如果函数模板产生更好地匹配，优先调用函数模板
//	char a1 = 'a';
//	char b1 = 'b';
//
//	myPrint(a1, b1);
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
////1、普通函数调用可以发生隐式类型转化
////2、函数模板 用自动类型推导 不可以发生隐式类型转换
////3、函数模板 用显示指定类型 可以发生隐式类型转换
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
//	cout << myAdd01(a, c) << endl;//将字符型隐式转换成int类型
//
//	//自动类型推导
//	cout << myAdd02(a, b) << endl;
//	//cout << myAdd02(a, c) << endl;//错误，不知道是转成int类型还是char类型
//
//	//显示类型转换
//	cout << myAdd02<int>(a, c) << endl;//都当成int类型，即使c不是int类型也换成int类型
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}

////函数模板案例
////实现一个通用的对数组进行排序
////从大到小 选择排序
////测试 char int 这两个数组
//
////实现交换的模板
//template<class T>
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
////排序算法
//template<class T>
//void mySort(T arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		int max = i;//认定最大值的下标
//		for (int j = i + 1; j < len; j++)
//		{
//			if (arr[max] < arr[j])//我们认定的最大值比遍历出的数值药效，说明j下标的元素才是真正的最大值
//			{
//				max = j;//更新最大值的小标
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
////提供打印的模板
//template<class T>
//void printArray(T arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << arr[i] << " ";
//	}
//}
//
//void test01()
//{
//	//测试char数组
//	char charArr[] = "bdecaf";
//	int num = sizeof(charArr) / sizeof(charArr[0]);
//	mySort(charArr, num);
//	printArray(charArr, num);
//}
//
//void test02()
//{
//	//测试int数组
//	int intArr[] = { 2,1,4,3,6,5 };
//	int num = sizeof(intArr) / sizeof(intArr[0]);
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
////1、自动类型推导，必须推导出一致的数据类型才可以
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//	mySwap(a, b);//正确
//	//mySwap(a, c);//错误 推导不出一致的T类型
//
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//}
//
////2、模板必须要确定出T的类型，才可以使用
//template<class T>
//void func()
//{
//	cout << "func调用" << endl;
//}
//
//void test02()
//{
//	func<int>();
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

////函数模板
////两个整形交换函数
//void swapInt(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
////交换两个浮点型函数
//void swapDouble(double& a, double& b)
//{
//	double temp = a;
//	a = b;
//	b = temp;
//}
//
////函数模板
//template<typename T>//声明一个模板，告诉编译器后面代码中紧跟的T不要报错，T是一个通用数据类型
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
//	//利用函数模板进行交换
//	//两种方式使用函数模板
//	//1、自动类型推到
//	mySwap(a, b);
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//
//	double c = 1.1;
//	double d = 2.2;
//	//swapDouble(c, d);
//	//2、显示指定类型
//	mySwap<double>(c, d);
//	cout << "c=" << c << endl;
//	cout << "d=" << d << endl;
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}