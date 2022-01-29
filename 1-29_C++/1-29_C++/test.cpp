#include <iostream>
using namespace std;

#include <string>
#include "swap.h"

//int main() {
//
//	//数组名用途
//	//1、可以通过数组名统计整个数组占用内存的大小
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	cout << "整个数组占用内存空间为：" << sizeof(arr) << endl;
//	cout << "每个元素占用内存空间为：" << sizeof(arr[0]) << endl;
//	cout << "数组中元素个数为：" << sizeof(arr) / sizeof(arr[0]) << endl;
//
//	//2、可以通过数组名查看数组首地址
//	cout << "数组的首地址为：" << (int)arr << endl;
//	cout << "数组中第一个元素的地址为：" << (int)&arr[0] << endl;
//	cout << "数组中第二个元素的地址为：" << (int)&arr[1] << endl;
//
//	//数组名是常量，不可以进行赋值操作
//	//arr=100;//err.
//
//	system("pause");
//
//	return 0;
//}

//int main() {
//
//	//判断一个数组里面的最大值
//	int arr[5] = { 300,350,200,400,250 };
//	int max = 0;
//	for (int i = 0; i < 5; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	cout << "最大值为：" << max << endl;
//
//
//	system("pause");
//
//	return 0;
//}

//int main() {
//
//	////数组元素的逆置
//	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//int left = 0;
//	//int right = sz - 1;
//	//while (left < right)
//	//{
//	//	int temp = arr[left];
//	//	arr[left] = arr[right];
//	//	arr[right] = temp;
//	//	left++;
//	//	right--;
//	//}
//	//for (int i = 0; i < sz; i++)
//	//{
//	//	cout << arr[i];
//	//}
//
//	//数组元素的逆置
//	int arr[5] = { 1,2,3,4,5 };
//	cout << "数组逆置之前：" << endl;
//	for (int i = 0; i < 5; i++)
//	{
//		cout << arr[i] << endl;
//	}
//	int start = 0;
//	int end = sizeof(arr) / sizeof(arr[0]) - 1;
//	while (start < end)
//	{
//		int temp = arr[start];
//		arr[start] = arr[end];
//		arr[end] = temp;
//		start++;
//		end--;
//	}
//	cout << "数组逆置之后：" << endl;
//	for (int i = 0; i < 5; i++)
//	{
//		cout << arr[i] << endl;
//	}
//
//	system("pause");
//
//	return 0;
//}

//int main() {
//
//	//冒泡排序
//	int arr[] = { 4,2,8,0,5,7,1,3,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//进行升序排序
//	for (int i = 0; i < sz - 1; i++)
//	{
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		cout << arr[i] << " ";
//	}
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	//二维数组的定义方式
//	//1、数据类型 数组名[行数][列数]
//	//int arr[2][3];
//	//arr[0][0] = 1;
//	//arr[0][1] = 2;
//	//arr[0][2] = 3;
//	//arr[1][0] = 4;
//	//arr[1][1] = 5;
//	//arr[1][2] = 6;
//
//	///*cout << arr[0][0] << endl;
//	//cout << arr[0][1] << endl;
//	//cout << arr[0][2] << endl;
//	//cout << arr[1][0] << endl;
//	//cout << arr[1][2] << endl;
//	//cout << arr[1][2] << endl;*/
//
//	//for (int i = 0; i < 2; i++)
//	//{
//	//	for (int j = 0; j < 3; j++)
//	//	{
//	//		cout << arr[i][j] << " ";
//	//	}
//	//	cout << endl;
//	//}
//
//	//2、
//	/*int arr2[2][3] = 
//	{ 
//		{1,2,3},
//		{4,5,6} 
//	};
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			cout << arr2[i][j] << " ";
//		}
//		cout << endl;
//	}*/
//
//	//3
//	/*int arr3[2][3] = { 1,2,3,4,5,6 }; for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			cout << arr3[i][j] << " ";
//		}
//		cout << endl;
//	}*/
//
//	//4
//	int arr4[][3] = { 1,2,3,4,5,6 };
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 3; j++)bn 
//		{
//			cout << arr4[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	//二维数组名称的用途
//
//	//1、可以查看占用内存空间大小
//	int arr[2][3] =
//	{
//		{1,2,3},
//		{4,5,6}
//	};
//	cout << "二维数组占用的内存是：" << sizeof(arr) << endl;
//	cout << "二维数组第一行占用内存为：" << sizeof(arr[0]) << endl;
//	cout << "二维数组第一个元素占用内存为：" << sizeof(arr[0][0]) << endl;
//
//	cout << "二维数组的行数为：" << sizeof(arr) / sizeof(arr[0]) << endl;
//	cout << "二维数组的列数为：" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;
//
//	//2、可以查看二维数组的首地址
//	cout << "二维数组首地址为：" << (int)arr << endl;
//	cout << "二维数组第一行首地址为：" << (int)arr[0] << endl;
//	cout << "二维数组第二行首地址为：" << (int)arr[1] << endl;
//
//	cout << "二维数组第一个元素的地址为：" << (int)&arr[0][0] << endl;
//	cout << "二维数组第二个元素的地址为：" << (int)&arr[0][1] << endl;
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	int score[3][3] =
//	{
//		{100,100,100},
//		{90,50,100},
//		{60,70,80}
//	};
//	int sum = 0;
//	string names[3] = { "张三","李四","王五" };
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			sum += score[i][j];
//		}
//		cout << names[i] << "的总分为:" << sum << endl;
//		sum = 0;
//	}
//
//	system("pause");
//	return 0;
//}

//函数的定义
//语法
//返回值类型 函数名 （参数列表） {函数体语句 return表达式}
//int Add(int x, int y)
//{
//	//函数定义的时候，x和y并没有真的是数据，他只是一个形式上的参数，简称形参
//	int z = x + y;
//	return z;
//}
//
//int main() {
//
//	int a = 10;
//	int b = 20;
//	//a和b称为实际参数，简称实参
//	//当调用函数的时候，实参的值会传递给形参
//	int ret = Add(a, b);
//	cout << ret << endl;
//
//	system("pause");
//	return 0;
//}

//定义函数，实现两个数字进行交换
//void swap(int num1, int num2)
//{
//	cout << "交换前：" << endl;
//	cout << "num = " << num1 << endl;
//	cout << "num2 = " << num2 << endl;
//
//	int temp = num1;
//	num1 = num2;
//	num2 = temp;
//
//	cout << "交换后：" << endl;
//	cout << "num = " << num1 << endl;
//	cout << "num2 = " << num2 << endl;
//}
//
//int main() {
//
//	int a = 10;
//	int b = 20;
//	
//	cout << "a = " << endl;
//	cout << "b = " << endl;
//
//	//当我们做值传递的时候，函数的形参发生改变的，并不会影响实参
//	swap(a, b);
//
//	cout << "a = " << endl;
//	cout << "b = " << endl;
//
//	system("pause");
//	return 0;
//}

//函数常见形式
//1、无参无返
//void test01()
//{
//	cout << "this is teat01" << endl;
//}
//
////2、有参无返
//void test02(int a)
//{
//	cout << "this is test02 a = " << a << endl;
//}
//
////3、无参有返
//int test03()
//{
//	cout << "this is test03" << endl;
//	return 100;
//}
//
////4、有参无返
//int test04(int a)
//{
//	cout << "this is test04 a = " << a << endl;
//	return 1000;
//}
//
//int main() {
//
//	//无参无返函数的调用
//	test01();
//
//	//有参无返函数调用
//	test02(100);
//
//	//无参有返函数调用
//	int num1 = test03();
//	cout << "num1 = " << num1 << endl;
//
//	//有参无返函数的调用
//	int num2 = test04(1);
//	cout << "num2 = " << num2 << endl;
//
//	system("pause");
//	return 0;
//}

//函数的声明
//比较函数，实现两个整形数字进行比较，返回一个较大的值

//函数声明
//提前告诉编译器的存在，可以利用函数的声明
//声明可以写多次，但是定义只能写一次
//int max(int a, int b);
//
//int main() {
//
//	int a = 10;
//	int b = 20;
//
//	cout << max(a, b) << endl;
//
//	system("pause");
//	return 0;
//}
//
////函数定义
//int max(int a, int b)
//{
//	return a > b ? a : b;
//}


//函数的份文件编写
//实现两个数字进行交换

//1、创建一个.h后缀的头文件
//2、创建一个.cpp后缀的源文件
//3、在头文件中写函数的声明
//4、在源文件中先函数的定义

int main() {

	int a = 10;
	int b = 20;

	swap(a, b);

	system("pause");
	return 0;
}