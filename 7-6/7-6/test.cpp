#include <iostream>
using namespace std;
#include <set>
#include <string>
#include <map>



////map容器排序
//
//class MyCompare
//{
//public:
//	bool operator()(int v1,int v2) const
//	{
//		//降序
//		return v1 > v2;
//	}
//};
//
//void test01()
//{
//	map<int, int,MyCompare>m;
//	m.insert(make_pair(1, 10));
//	m.insert(make_pair(2, 20));
//	m.insert(make_pair(5, 50));
//	m.insert(make_pair(3, 30));
//	m.insert(make_pair(4, 40));
//	
//
//	for (map<int, int, MyCompare>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key=" << it->first << "  value=" << it->second << endl;
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




////map查找和统计
//
//void test01()
//{
//	//查找
//	map<int, int>m;
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(3, 30));
//
//	map<int, int>::iterator pos = m.find(4);
//
//	if (pos != m.end())
//	{
//		cout << "查到了元素key=" << (*pos).first << "  value=" << (*pos).second << endl;
//	}
//	else
//	{
//		cout << "未找到元素" << endl;
//	}
//
//	//统计
//	//map不允许插入重复的key元素，count统计而言，结果要么为0要么是1
//	//multimap的count统计可能大于1
//	int num = m.count(3);
//	cout << "num=" << num << endl;
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}




////map插入和删除
//
//void printMap(map<int, int>& m)
//{
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key=" << (*it).first << "  value=" << (*it).second << endl;
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	map<int, int>m;
//
//	//插入
//	//第一种
//	m.insert(pair<int, int>(1, 10));
//
//	//第二种
//	m.insert(make_pair(2, 20));
//
//	//第三种
//	m.insert(map<int, int>::value_type(3, 30));
//
//	//第四种
//	m[4] = 40;
//
//	//[]不建议插入，用途：可以利用key访问value
//	//cout << m[4] << endl;
//
//	printMap(m);
//
//	//删除
//	m.erase(m.begin());
//	printMap(m);
//
//	m.erase(3);//按照key删除
//	printMap(m);
//
//	m.erase(m.begin(), m.end());
//	printMap(m);//相当于清空
//
//	//清空
//	m.clear();
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}




////map大小和交换
//
//void printMap(map<int, int>& m)
//{
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key=" << (*it).first << "  value=" << (*it).second << endl;
//	}
//	cout << endl;
//}
//
////大小
//void test01()
//{
//	map<int, int>m;
//
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(3, 30));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(4, 40));
//
//	if (m.empty())
//	{
//		cout << "m为空" << endl;
//	}
//	else
//	{
//		cout << "m不为空" << endl;
//		cout << "m的大小为：" << m.size() << endl;
//	}
//}
//
////交换
//void test02()
//{
//	map<int, int>m;
//
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(3, 30));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(4, 40));
//
//	map<int, int>m2;
//
//	m2.insert(pair<int, int>(5, 100));
//	m2.insert(pair<int, int>(6, 300));
//	m2.insert(pair<int, int>(7, 200));
//
//	cout << "交换前：" << endl;
//	printMap(m);
//	printMap(m2);
//	
//	cout << "交换后：" << endl;
//	m.swap(m2);
//	printMap(m);
//	printMap(m2);
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




////map容器构造和赋值
//
//void printMap(map<int, int>& m)
//{
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key=" << (*it).first << "  value=" << (*it).second << endl;
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	//创建map容器
//	map<int, int>m;
//
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(3, 30));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(4, 40));
//
//	printMap(m);
//
//	//拷贝构造
//	map<int, int>m2(m);
//	printMap(m2);
//
//	//赋值
//	map<int, int>m3;
//	m3 = m2;
//	printMap(m3);
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}




////set容器排序，存放自定义数据类型
//
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
//class MyCompare
//{
//public:
//	bool operator()(const Person& p1,const Person& p2) const
//	{
//		//按照年龄 降序
//		return p1.age > p2.age;
//	}
//};
//
//void test01()
//{
//	//自定义的数据类型 都会指定排序规则
//	set<Person, MyCompare>s;
//
//	//创建Person对象
//	Person p1("张三1", 24);
//	Person p2("张三2", 28);
//	Person p3("张三3", 25);
//	Person p4("张三4", 21);
//
//	s.insert(p1);
//	s.insert(p2);
//	s.insert(p3);
//	s.insert(p4);
//
//	for (set<Person, MyCompare>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << "姓名：" << it->name << "  年龄：" << it->age << endl;
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





////set容器排序
////set容器默认排序规则是从小到大，掌握如何改变排序规则
////利用仿函数，可以改变排序规则
//
//class MyCompare
//{
//public:
//	bool operator()(int v1,int v2) const
//	{
//		return v1 > v2;
//	}
//};
//
//void test01()
//{
//	set<int>s1;
//
//	//插入数据
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(40);
//	s1.insert(50);
//	s1.insert(20);
//
//	for (set<int>::iterator it = s1.begin(); it != s1.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	//指定排序规则为从大到小
//	set<int,MyCompare>s2;
//
//	//插入数据
//	s2.insert(10);
//	s2.insert(30);
//	s2.insert(40);
//	s2.insert(50);
//	s2.insert(20);
//
//	for (set<int,MyCompare>::iterator it = s2.begin(); it != s2.end(); it++)
//	{
//		cout << *it << " ";
//	}
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




////pair对组创建
////成对出现的数据，利用对组可以返回两个数据
///*
//* pair<type,type>p (value1,value2);
//* pair<type,type>p=make_pair(value1,value2);
//*/
//
//void test01()
//{
//	//第一种方式
//	pair<string, int>p("张三", 20);
//	cout << "姓名：" << p.first << "  年龄：" << p.second << endl;
//
//	//第二种方式
//	pair<string, int>p2 = make_pair("李四", 30);
//	cout << "姓名：" << p2.first << "  年龄：" << p2.second << endl;
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}





////set和multiset区别
///*
//* set不可以插入重复数据，而multi可以
//* set插入数据的同时会返回插入结果，表示是够插入成功
//* multiset不会检测数据，因此可以插入重复数据
//*/
//
//void test01()
//{
//	set<int>s;
//
//	pair<set<int>::iterator, bool> ret = s.insert(10);
//
//	if (ret.second)
//	{
//		cout << "第一次插入成功" << endl;
//	}
//	else
//	{
//		cout << "第一次插入失败" << endl;
//	}
//
//	ret = s.insert(10);
//	if (ret.second)
//	{
//		cout << "第二次插入成功" << endl;
//	}
//	else
//	{
//		cout << "第二次插入失败" << endl;
//	}
//
//	multiset<int>ms;
//	//允许插入重复值
//	ms.insert(10);
//	ms.insert(10);
//	ms.insert(10);
//	ms.insert(10);
//	ms.insert(10);
//
//	for (multiset<int>::iterator it = ms.begin(); it != ms.end(); it++)
//	{
//		cout << *it << " ";
//	}
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




////set容器查找和统计
///*
//* find(key);//查找key是否粗在，返回该键的元素的迭代器，若不存在，返回set.end();
//* count(key);//统计key的元素个数
//*/
//
////查找
//void test01()
//{
//	set<int>s1;
//
//	//插入数据
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(40);
//	s1.insert(50);
//	s1.insert(20);
//
//	//查找
//	set<int>::iterator  pos = s1.find(30);
//	if (pos != s1.end())
//	{
//		cout << "找到元素：" << *pos << endl;
//	}
//	else
//	{
//		cout << "没有找到元素" << endl;
//	}
//}
//
////统计
//void test02()
//{
//	set<int>s1;
//
//	//插入数据
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(40);
//	s1.insert(50);
//	s1.insert(20);
//
//	//统计30的个数
//	int num = s1.count(30);
//	//对于set而言，统计的结果要么是0要么是1
//	cout << "num=" << num << endl;
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





////set容器插入和删除
///*
//* insert(elem);//在容器中插入元素
//* clear();//清除所有元素
//* erase(pos);//删除pos迭代器所指的元素，返回下一个元素的迭代器
//* erase(beg,end);//删除区间[beg,end)的所有元素，返回下一个元素的迭代器
//* erase(elem);//删除容器中值为elem的元素
//*/
//
//void printSet(set<int>& s)
//{
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	set<int>s1;
//
//	//插入数据
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(40);
//	s1.insert(50);
//	s1.insert(20);
//
//	//遍历
//	printSet(s1);
//
//	//删除
//	//因为set容器会自动的排序，如果第一个插入的元素不是最小的，删除还是会删除掉最小的元素
//	s1.erase(s1.begin());
//	printSet(s1);
//
//	//删除重载版本
//	s1.erase(30);
//	printSet(s1);
//
//	//清空
//	s1.erase(s1.begin(), s1.end());
//	//或者
//	//s1.clear();
//	printSet(s1);
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}



////set大小和交换
///*
//* size();//返回容器中元素的数目
//* empty();//判断容器是否为空
//* swap();//交换两个集合容器
//*/
//
//void printSet(set<int>& s)
//{
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
////大小
//void test01()
//{
//	set<int>s1;
//
//	//插入数据
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(40);
//	s1.insert(50);
//	s1.insert(20);
//
//	//打印容器
//	printSet(s1);
//
//	//判断是否为空
//	if (s1.empty())
//	{
//		cout << "s1为空" << endl;
//	}
//	else
//	{
//		cout << "s1不为空" << endl;
//		cout << "s1元素个数为：" << s1.size() << endl;
//	}
//}
//
////交换
//void test02()
//{
//	set<int>s1;
//
//	//插入数据
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(40);
//	s1.insert(50);
//	s1.insert(20);
//
//	set<int>s2;
//
//	//插入数据
//	s2.insert(10);
//	s2.insert(30);
//	s2.insert(40);
//	s2.insert(50);
//
//	cout << "交换前：" << endl;
//	printSet(s1);
//	printSet(s2);
//
//	cout << "交换后：" << endl;
//	s1.swap(s2);
//	printSet(s1);
//	printSet(s2);
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




////set构造和赋值
///*
//* set<T> st;//默认构造函数
//* set(const set& st);//拷贝构造函数
//* 
//* set& operator=(const set &st);//重载等号操作符
//*/
//
//void printSet(set<int>& s)
//{
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	set<int>s1;
//
//	//插入数据 只有insert方式
//	s1.insert(10);
//	s1.insert(40);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(30);
//	//set容器特点：所有元素在插入的时候会自动被排序
//	//set容器不允许插入重复值，即使插入了相同的值，但是不会插入成功，即使不会报错
//
//	printSet(s1);
//
//	//拷贝构造
//	set<int>s2(s1);
//	printSet(s2);
//
//	//赋值操作
//	set<int>s3;
//	s3 = s2;
//	printSet(s3);
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}