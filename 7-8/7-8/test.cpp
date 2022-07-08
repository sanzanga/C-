#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <string>
#include <functional>
#include <ctime>

//常用排序算法 reverse
class MyPrint
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};

void test01()
{
	vector<int>v;

	v.push_back(10);
	v.push_back(30);
	v.push_back(50);
	v.push_back(20);
	v.push_back(40);

	cout << "反转前：" << endl;
	for_each(v.begin(), v.end(), MyPrint());
	cout << endl;

	cout << "反转后：" << endl;
	reverse(v.begin(), v.end());
	for_each(v.begin(), v.end(), MyPrint());
	cout << endl;
}

int main() {

	test01();

	system("pause");
	return 0;
}






////常用排序算法 merge
//void myPrint(int val)
//{
//	cout << val << " ";
//}
//
//void test01()
//{
//	vector<int>v1;
//	vector<int>v2;
//
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//		v2.push_back(i + 1);
//	}
//
//	//目标容器
//	vector<int> vTarget;
//	vTarget.resize(v1.size() + v2.size());
//
//	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
//
//	for_each(vTarget.begin(), vTarget.end(), myPrint);
//	cout << endl;
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}






////常用排序算法  random_shuffle
//void MyPrint(int val)
//{
//	cout << val << " ";
//}
//
//void test01()
//{
//	srand((unsigned int)time(NULL));
//
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	//利用洗牌 算法 打乱顺序
//	random_shuffle(v.begin(), v.end());
//
//	for_each(v.begin(), v.end(), MyPrint);
//	cout << endl;
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}





//
////常用排序算法 sort
//
//class Print
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//
//};
//
//void test01()
//{
//	vector<int>v;
//
//	v.push_back(10);
//	v.push_back(30);
//	v.push_back(50);
//	v.push_back(20);
//	v.push_back(40);
//
//	//利用sort进行升序
//	sort(v.begin(), v.end());
//	for_each(v.begin(), v.end(), Print());
//	cout << endl;
//
//	//改变为降序
//	sort(v.begin(), v.end(), greater<int>());
//	for_each(v.begin(), v.end(), Print());
//	cout << endl;
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}





////常用查找算法 count_if
//
//class Greater20
//{
//public:
//	bool operator()(int val)
//	{
//		return val > 20;
//	}
//};
//
////查找内置数据类型
//void test01()
//{
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(40);
//	v.push_back(10);
//	v.push_back(30);
//	v.push_back(20);
//	v.push_back(10);
//
//	int num = count_if(v.begin(), v.end(), Greater20());
//
//	cout << "大于20的有" << num << endl;
//}
//
////查找自定义数据类型
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->age = age;
//		this->name = name;
//	}
//
//	string name;
//	int age;
//};
//
//class Greater10
//{
//public:
//	bool operator()(const Person& p) const
//	{
//		return p.age > 10;
//	}
//};
//
//void test02()
//{
//	vector<Person>v;
//	//创建数据
//	Person p1("aaa", 10);
//	Person p2("bbb", 10);
//	Person p3("ccc", 30);
//	Person p4("ddd", 40);
//
//	//放入到容器中
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//
//	int num = count_if(v.begin(), v.end(), Greater10());
//
//	cout << "年龄大于10岁的有：" << num << endl;
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






//
////常用查找算法 count
//
////统计内置数据类型
//void test01()
//{
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(20);
//	v.push_back(50);
//	v.push_back(10);
//
//	int num = count(v.begin(), v.end(), 40);
//
//	cout << "40的个数为：" << num << endl;
//}
//
////统计自定义数据类型
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->age = age;
//		this->name = name;
//	}
//
//	bool operator==(const Person& p)
//	{
//		if (p.age == this->age)
//		{
//			return true;
//		}
//		return false;
//	}
//
//	string name;
//	int age;
//};
//
//void test02()
//{
//	vector<Person>v;
//	//创建数据
//	Person p1("aaa", 10);
//	Person p2("bbb", 10);
//	Person p3("ccc", 30);
//	Person p4("ddd", 40);
//
//	//放入到容器中
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//
//	Person p("eee", 10);
//
//	int num = count(v.begin(), v.end(), p);
//
//	cout << "和p相同年龄的有：" << num << endl;
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





////常用查找算法 binary_search
//
//void test01()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	v.push_back(2);
//
//	//查找容器中是否有9这个元素
//	//这个容器必须是有序的数列
//	//如果是无序数列，结果是未知的
//	bool ret = binary_search(v.begin(), v.end(), 9);
//
//	if (ret)
//	{
//		cout << "找到了元素" << endl;
//	}
//	else
//	{
//		cout << "没有找到" << endl;
//	}
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}





////常用查找算法 adjacent_find
//void test01()
//{
//	vector<int>v;
//	v.push_back(0);
//	v.push_back(2);
//	v.push_back(0);
//	v.push_back(3);
//	v.push_back(1);
//	v.push_back(4);
//	v.push_back(0);
//	v.push_back(3);
//	v.push_back(2);
//
//	vector<int>::iterator it = adjacent_find(v.begin(), v.end());
//
//	if (it == v.end())
//	{
//		cout << "未找到相邻重复元素" << endl;
//	}
//	else
//	{
//		cout << "找到了相邻重复元素：" << *it << endl;
//	}
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}





////常用查找算法 find_if
//
////1、查找内置类型数据
//class GreaterFive
//{
//public:
//	bool operator()(int val)
//	{
//		return val > 5;
//	}
//};
//
//void test01()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
//
//	if (it == v.end())
//	{
//		cout << "没有找到" << endl;
//	}
//	else
//	{
//		cout << "找到了：" << *it << endl;
//	}
//}
//
////2、查找自定义数据类型
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->age = age;
//		this->name = name;
//	}
//
//	string name;
//	int age;
//};
//
//class Greater
//{
//public:
//	bool operator()(const Person& p) const
//	{
//		return p.age > 20;
//	}
//
//};
//
//void test02()
//{
//	vector<Person>v;
//	//创建数据
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("ccc", 30);
//	Person p4("ddd", 40);
//
//	//放入到容器中
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//
//	//找年龄大于20的人
//	vector<Person>::iterator it = find_if(v.begin(), v.end(), Greater());
//
//	if (it == v.end())
//	{
//		cout << "没有找到" << endl;
//	}
//	else
//	{
//		cout << "找到了：" << endl;
//		cout << "姓名：" << it->name << "  年龄：" << it->age << endl;
//	}
//}
//
//int main() {
//
//	//test01();
//	test02();
//
//	system("pause");
//	return 0;
//}




////常用查找算法 find
//
////查找
//void test01()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	//查找容器中是否有5这个元素存在
//	vector<int>::iterator ret = find(v.begin(), v.end(), 5);
//	if (ret == v.end())
//	{
//		cout << "没有找到" << endl;
//	}
//	else
//	{
//		cout << "找到：" << *ret << endl;
//	}
//}
//
////查找自定义数据类型
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->age = age;
//		this->name = name;
//	}
//
//	//重载==底层find知道如何对比Person类型数据
//	bool operator==(const Person& p)
//	{
//		if (this->age == p.age && this->name == p.name)
//		{
//			return true;
//		}
//		return false;
//	}
//
//	string name;
//	int age;
//};
//
//void test02()
//{
//	vector<Person>v;
//
//	//创建数据
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("ccc", 30);
//	Person p4("ddd", 40);
//
//	//放入到容器中
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//
//	Person pp("bbb", 20);
//
//	vector<Person>::iterator it = find(v.begin(), v.end(), pp);
//	if (it == v.end())
//	{
//		cout << "没有找到" << endl;
//	}
//	else
//	{
//		cout << "找到了：" << endl;
//		cout << "姓名：" << it->name << "  年龄：" << it->age << endl;
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





////常用遍历算法 transform
//
//class Transform
//{
//public:
//	int operator()(int v)
//	{
//		return v + 1000;
//	}
//};
//
//class MyPrint
//{
//public:
//	void operator()(int val)
//	{
//		cout << val  << " ";
//	}
//};
//
//void test01()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	vector<int>vTarget;//目标容器
//	vTarget.resize(v.size());//目标容器要提前开辟空间
//
//	transform(v.begin(), v.end(), vTarget.begin(), Transform());
//
//	for_each(vTarget.begin(), vTarget.end(), MyPrint());
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}





////常用遍历算法
////for_each
//
////普通函数
//void print01(int val)
//{
//	cout << val << " ";
//}
//
////仿函数
//class print02
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//
//void test01()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	for_each(v.begin(), v.end(), print01);
//	cout << endl;
//
//	for_each(v.begin(), v.end(), print02());
//	cout << endl;
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}