#include <iostream>
using namespace std;

int main2() {

	//整型：1.short(2)  2.int(4)   3.long(4)   4.long long(8) 
	//可以利用sizeof求出数据类型的大小
	//语法：sizeof(数据类型/变量）
	
	short num1 = 10;
	cout << "short占用内存空间为：" << sizeof(num1) << endl;

	int num2 = 10;
	cout << "int占用内存空间为：" << sizeof(num2) << endl;

	long num3 = 10;
	cout << "long占用内存空间为：" << sizeof(num3) << endl;

	long long num4 = 10;
	cout << "long long占用内存空间为：" << sizeof(num4) << endl;

	//整型大小的比较
	//short<int<=long<long long 

	system("pause");
	return 0;
}