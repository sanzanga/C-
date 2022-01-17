#include <iostream>
using namespace std;

int main() {

	//数组

	/*
	1、数据类型 数组名 [数组长度];
	2、数据类型 数组名 [数组长度] = {值1，值2 ...};
	3、数据类型 数组名 [] = { 值1,值2 ... }；
	*/

	//1、数据类型 数组名 [数组长度];
	int arr[5];
	////给数组中的元素赋值
	////数组的下标是从0开始的
	arr[0] = 10;
	arr[1] = 10;
	arr[2] = 10;
	arr[3] = 10;
	arr[4] = 10;

	////访问数据的元素
	//cout << arr[0] << endl;
	//cout << arr[1] << endl;
	//cout << arr[2] << endl;
	//cout << arr[3] << endl;
	//cout << arr[4] << endl;

	//2、数据类型 数组名 [数组长度] = {值1，值2 ...};
	//如果在初始化的数据的时候，没有完全初始化，会来用0来填补数据
	int arr2[5] = { 10,20,30,40,50 };

	///*cout << arr[0] << endl;
	//cout << arr2[1] << endl;
	//cout << arr2[2] << endl;
	//cout << arr2[3] << endl;
	//cout << arr2[4] << endl;*/

	////利用循环 输出数组中的元素
	/*for (int i = 0; i < 5; i++)
	{
		cout << arr2[i] << endl;
	}*/

	//3、数据类型 数组名 [] = { 值1,值2 ... }；
	//定义数组的时候，必须有初始的长度
	int arr3[] = { 1,2,3,4,5,6,7,8,9 };
	for (int i = 0; i < 9; i++)
	{
		cout << arr3[i] << endl;
	}


	system("pause");
	return 0;
}