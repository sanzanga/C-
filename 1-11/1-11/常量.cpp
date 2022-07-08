#include <iostream>
using namespace std;

//常量
//1、#define 宏常量
//2、const修饰的常量

//1、#define 宏常量
#define Day 7

int main4()
{
	//Day = 14;//Day是常量，一旦修改就会报错
	cout << "一周共有：" << Day << "天" << endl;
	//2、const修饰的变量
	const int month = 12;
	//month = 24;//const修饰的变量也称为常量
	cout << "一年总共有：" << month << "月" << endl;
	system("pause");
	return 0;
}