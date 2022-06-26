#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>//标准算法的头文件
#include <string>

//字符串查找和替换
//

int main() {



	system("pause");
	return 0;
}




////string字符串拼接
///*
//* string& operator+=(const char* str);//重载+=操作符
//* string& operator+=(const char c);//重载+=操作符
//* string& operator+=(const string& str);//重载+=操作符
//* string& append(const char* s);//把字符串s连接到当前字符串结尾
//* string& append(const char* s,int n);//把字符串s的前n个字符连接到当前字符串结尾
//* string& append(const string& s);//同operator+=(const string& str)
//* string& append(const string& s,int pos,int n);//字符串s从pos开始前n个字符连接到字符串结尾
//*/
//
//void test01()
//{
//	string str1 = "我";
//	str1 += "爱玩游戏";
//	cout << "str1=" << str1 << endl;
//
//	str1 += ':';
//	cout << "str1=" << str1 << endl;
//
//	string str2 = "LOL";
//	str1 += str2;
//	cout << "str1=" << str1 << endl;
//
//	string str3 = "I";
//	str3.append(" love ");
//	cout << "str3=" << str3 << endl;
//
//	str3.append("game aaaaa", 4);
//	cout << "str3=" << str3 << endl;
//
//	//str3.append(str2);
//	str3.append(str2, 0, 3);//这个根据要求想从哪里截取截取多少个
//	//参数2从哪个位置开始截取  参数3是截取的字符个数
//	cout << "str3=" << str3 << endl;
//
//	
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}




////string的赋值操作
///*
//* string& operator=(const char* s);//char*类型字符串赋值给当前的字符串
//* string& operator=(const string &s);//把字符串s赋值给当前的字符串
//* string& operator=(char c);//字符赋值给当前字符串
//* string& assign(const char* s);//把字符串s赋给当前字符串
//* string& assign(const char* s,int n);//把字符串s的前n个字符赋给当前的字符串
//* string& assign(const string& s);//把字符串s赋给当前字符串
//* string& assign(int n,char c);//用n个字符赋给当前字符串
//*/
//
//void test01()
//{
//	string str1;
//	str1 = "hello world";
//	cout << "str1=" << str1 << endl;
//
//	string str2;
//	str2 = str1;
//	cout << "str2=" << str2 << endl;
//
//	string str3;
//	str3 = 'a';
//	cout << "str3=" << str3 << endl;
//
//	string str4;
//	str4.assign("hello C++");
//	cout << "str4=" << str4 << endl;
//
//	string str5;
//	str5.assign("hello C++", 5);
//	cout << "str5=" << str5 << endl;
//
//	string str6;
//	str6.assign(str5);
//	cout << "str6=" << str6 << endl;
//
//	string str7;
//	str7.assign(10, 'a');
//	cout << "str7=" << str7 << endl;
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}



////string构造函数
//void test01()
//{
//	string s1;//默认构造
//	
//	const char* str = "hello world";
//	string s2(str);
//	cout << "s2=" << s2 << endl;
//
//	string s3(s2);
//	cout << "s3=" << s3 << endl;
//
//	string s4(10, 'a');
//	cout << "s4=" << s4 << endl;
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}




////vector容器嵌套容器
//void test01()
//{
//	vector<vector<int>>v;
//
//	//创建小容器
//	vector<int>v1;
//	vector<int>v2;
//	vector<int>v3;
//	vector<int>v4;
//
//	//向小容器中添加数据
//	for (int i = 0; i < 4; i++)
//	{
//		v1.push_back(i + 1);
//		v2.push_back(i + 2);
//		v3.push_back(i + 3);
//		v4.push_back(i + 4);
//	}
//
//	//将小容器插入到大的容器
//	v.push_back(v1);
//	v.push_back(v2);
//	v.push_back(v3);
//	v.push_back(v4);
//
//	//通过大容器将所有的数据都遍历一遍
//	for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		//(*it)就是一个容器 vector<int>
//		for (vector<int>::iterator vit = (*it).begin(); vit != (*it).end(); vit++)
//		{
//			cout << *vit << " ";
//		}
//		cout << endl;
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




////vector容器存放自定义数据类型
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
//	vector<Person>v;
//
//	Person p1("a", 10);
//	Person p2("b", 20);
//	Person p3("c", 30);
//	Person p4("d", 40);
//	Person p5("e", 50);
//
//	//向容器中添加数据
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << "name:" << (*it).name << "   age:" << (*it).age << endl;
//		cout << "name:" << it->name << "   age:" << it->age << endl;
//	}
//}
//
//void test02()
//{
//	vector<Person*>v;
//
//	Person p1("a", 10);
//	Person p2("b", 20);
//	Person p3("c", 30);
//	Person p4("d", 40);
//	Person p5("e", 50);
//
//	//向容器中添加数据
//	v.push_back(&p1);
//	v.push_back(&p2);
//	v.push_back(&p3);
//	v.push_back(&p4);
//	v.push_back(&p5);
//
//	//遍历容器
//	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << "name:" << (*it)->name << "   age:" << (*it)->age << endl;
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
//void myPrint(int val)
//{
//	cout << val << endl;
//}
//
//void test01()
//{
//	//创建了一个vector容器，现阶段可以直接当做是数组
//	vector<int> v;
//
//	//向容器中插入数组
//	v.push_back(10);//尾插
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	////通过迭代器访问容器中的数据
//	//vector<int>::iterator itBegin = v.begin();//起始迭代器  指向容器中第一个元素
//	//vector<int>::iterator itEnd = v.end();//结束迭代器  指向容器中最后一个元素的下一个位置
//
//	////第一种访问方式
//	//while (itBegin != itEnd)
//	//{
//	//	cout << *itBegin << endl;
//	//	itBegin++;
//	//}
//
//	//第二种遍历方式
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << endl;
//	}
//
//	//第三种遍历方式
//	//利用STL提供的遍历算法
//	for_each(v.begin(), v.end(), myPrint);
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}