#include <iostream>
using namespace std;
#include "MyArray.hpp"
#include <string>

void printIntArrar(MyArray<int>&arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << arr[i] << endl;
	}
}

//类模板案例
//实现一个通用的数组类
void test01()
{
	MyArray<int>arr1(5);

	for (int i = 0; i < 5; i++)
	{
		//利用尾插法想数组中插入数据
		arr1.Push_Back(i);
	}

	cout << "arr1的打印输出为：" << endl;
	printIntArrar(arr1);

	cout << "arr1的容量为：" << arr1.getCapacity() << endl;
	cout << "arr1的大小为：" << arr1.getSize() << endl;

	MyArray<int>arr2(arr1);
	printIntArrar(arr1);

	//尾删
	arr2.Pop_Back();
	cout << "arr2为尾删后：" << endl;
	cout << "arr2的容量：" << arr2.getCapacity() << endl;
	cout << "arr2的大小：" << arr2.getSize() << endl;

	/*MyArray<int>arr1(5);

	MyArray<int>arr2(arr1);

	MyArray<int>arr3(100);
	arr3 = arr1;*/
}

//测试自定义类型
class Person
{
public:
	Person(){}
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	string m_Name;
	int m_Age;
};

void printPersonArray(MyArray<Person>& arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << "姓名：" << arr[i].m_Name << " 年龄：" << arr[i].m_Age << endl;
	}
}

void test02()
{
	MyArray<Person>arr(10);

	Person p1("张三", 10);
	Person p2("李四", 20);
	Person p3("王五", 30);

	//将数据插入到数据中
	arr.Push_Back(p1);
	arr.Push_Back(p2);
	arr.Push_Back(p3);

	//打印数组
	printPersonArray(arr);

	//输出容量和大小
	cout << "arr的容量：" << arr.getCapacity() << endl;
	cout << "arr的大小：" << arr.getSize() << endl;
}

int main() {

	//test01();

	test02();

	system("pause");
	return 0;
}