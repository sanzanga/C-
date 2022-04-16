#include <iostream>
#include <vector>
#include <algorithm>//标准算法的头文件
#include <string>
using namespace std;

//vector容器嵌套容器
void test01()
{
	vector<vector<int>>v;

	//创建小容器
	vector<int> v1;
	vector<int> v2;
	vector<int> v3;
	vector<int> v4;

	//向小容器添加数据
	for (int i = 0; i < 4; i++)
	{
		v1.push_back(i + 1);
		v2.push_back(i + 2);
		v3.push_back(i + 3);
		v4.push_back(i + 4);
	}

	//将小容器插入到大容器
	v.push_back(v1);
	v.push_back(v2);
	v.push_back(v3);
	v.push_back(v4);

	//通过大容器，把所有数据遍历一遍
	for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++)
	{
		//(*it)---容器vector<int>
		for (vector<int>::iterator vit = (*it).begin(); vit != (*it).end(); vit++)
		{
			cout << (*vit) << " ";
		}
		cout << endl;
	}
}

int main() {

	test01();

	system("pause");
	return 0;
}

////vector存放自定义类型
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->name = name;
//		this->age = age;
//	}
//
//	string name;
//	int age;
//};
//
//void test01()
//{
//	vector<Person> v;
//
//	Person p1("aa", 10);
//	Person p2("bb", 20);
//	Person p3("cc", 30);
//	Person p4("dd", 40);
//	Person p5("ee", 50);
//
//	//想容器中插入数据
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//
//	//遍历容器中的数据
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		//cout << "姓名：" << (*it).name << "   年龄：" << (*it).age << endl;
//		cout << "姓名：" << it->name << "   年龄：" << it->age << endl;
//	}
//}
//
////存放自定义类型的指针
//void test02()
//{
//	vector<Person*> v;
//
//	Person p1("aa", 10);
//	Person p2("bb", 20);
//	Person p3("cc", 30);
//	Person p4("dd", 40);
//	Person p5("ee", 50);
//
//	//想容器中插入数据
//	v.push_back(&p1);
//	v.push_back(&p2);
//	v.push_back(&p3);
//	v.push_back(&p4);
//	v.push_back(&p5);
//
//	//遍历容器
//	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << "姓名：" << (*it)->name << "   年龄：" << (*it)->age << endl;
//	}
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

////vector容器存放内置数据类型
//
//void MyPrint(int val)
//{
//	cout << val << endl;
//}
//
//void test01()
//{
//	////创建一个vector容器，数组
//	//vector<int> y;
//
//	////向容器中插入数据
//	//y.push_back(10);
//	//y.push_back(20);
//	//y.push_back(30);
//	//y.push_back(40);
//
//	////通过迭代器访问容器中的数据
//	//vector<int>::iterator itBegin = y.begin();//起始迭代器 指向容器中第一个元素
//	//vector<int>::iterator itEnd = y.end();//结束迭代器 指向容器中最后一个元素的下一个位置
//
//	////第一种遍历方式
//	//while (itBegin != itEnd)
//	//{
//	//	cout << *itBegin << endl;
//	//	itBegin++;
//	//}
//
//	////创建一个vector容器，数组
//	vector<int> v;
//
//	//向容器中插入数据
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//
//	////第二种方式
//	//for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	//{
//	//	cout << *it << endl;
//	//}
//
//	//第三种方式 利用STL提供的遍历算法
//	for_each(v.begin(), v.end(), MyPrint);
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}

//int intAdd(int a, int b);
//double doubleAdd(double a, double b);

////形参类型相同,但个数不同
//int add1(int a, int b, int c);
//int add1(int a, int b);
////形参个数相同，但类型不同
//int add2(int x, int y);
//double add2(double a, double b);
//
////函数不以形参名来区分函数
//int add3(int a1, int b1);
//int add3(int a2, int b2);//这样就是错误的
////函数不以返回值来区分
//int add4(int x, int y);
//void add4(int x, int y);//这样也是错误的

//void test(int a, int b = 10, int c = 20);
//void test(int b);