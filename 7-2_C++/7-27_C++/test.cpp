#include <iostream>
using namespace std;
#include <vector>

//vector预留空间
void test01()
{
	vector<int>v;

	//利用reserve预留空间
	v.reserve(100000);
	int num = 0;//统计开辟次数
	int* p = NULL;
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);
		if (p != &v[0])
		{
			p = &v[0];
			num++;
		}
	}
	cout << "num=" << num << endl;
}

int main() {

	test01();

	system("pause");
	return 0;
}




////vector容器互换
//
//void printVector(vector<int>& v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << (*it) << " ";
//	}
//	cout << endl;
//}
//
////1、基本使用
//void test01()
//{
//	vector<int>v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	cout << "交换前：" << endl;
//	printVector(v1);
//
//	vector<int>v2;
//	for (int i = 10; i > 0; i--)
//	{
//		v2.push_back(i);
//	}
//	printVector(v2);
//
//	cout << "交换后：" << endl;
//	v1.swap(v2);
//	printVector(v1);
//	printVector(v2);
//}
//
////实际用途
////巧用swap可以收缩内存空间
//void test02()
//{
//	vector<int>v;
//	for (int i = 0; i < 100000; i++)
//	{
//		v.push_back(i);
//	}
//	cout << "v的容量为：" << v.capacity() << endl;
//	cout << "v的大小为：" << v.size() << endl;
//
//	v.resize(3);//重新指定大小
//	cout << "v的容量为：" << v.capacity() << endl;
//	cout << "v的大小为：" << v.size() << endl;
//
//	//巧用swap收缩内存
//	vector<int>(v).swap(v);
//	cout << "v的容量为：" << v.capacity() << endl;
//	cout << "v的大小为：" << v.size() << endl;
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





////vector数据存取
///*
//* at(int idx);//返回索引idx所指的数据
//* operator[];//返回索引idx所指的数据
//* front();//返回容器中第一个数据元素
//* back();//返回容器最后一个元素
//*/
//
//void test01()
//{
//	vector<int>v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//
//	//利用[]方式访问数组中的元素
//	for (int i = 0; i < v1.size(); i++)
//	{
//		cout << v1[i] << " ";
//	}
//	cout << endl;
//	
//	//利用at方式访问元素
//	for (int i = 0; i < v1.size(); i++)
//	{
//		cout << v1.at(i) << " ";
//	}
//	cout << endl;
//	
//	//获取第一个元素
//	cout << "第一个元素为：" << v1.front() << endl;
//	//获取最后一个元素
//	cout << "最后一个元素为：" << v1.back() << endl;
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}




////vector插入和删除
///*
//* push_back(ele);//尾部插入元素ele
//* pop_back();//删除最后一个元素
//* insert(const_iterator pos,ele);//迭代器指向位置pos插入元素ele
//* insert(const_iterator pos,int count,ele);//迭代器指向位置pos插入count个元素ele
//* erase(const_iterator pos);//删除迭代器指向的元素
//* erase(const_iterator start,const_iterator end);//删除迭代器从start到end之间的元素
//* clear();//删除容器中所有元素
//*/
//
//void printVector(vector<int>& v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << (*it) << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	vector<int>v1;
//	//尾插
//	v1.push_back(10);
//	v1.push_back(20);
//	v1.push_back(30);
//	v1.push_back(40);
//	v1.push_back(50);
//	//遍历
//	printVector(v1);
//
//	//尾删
//	v1.pop_back();
//	printVector(v1);
//	//插入 第一个元素是迭代器
//	v1.insert(v1.begin(), 100);
//	printVector(v1);
//	v1.insert(v1.begin(), 2, 100);
//	printVector(v1);
//
//	//删除
//	v1.erase(v1.begin());
//	printVector(v1);
//	//v1.erase(v1.begin(), v1.end());//类似清空
//	v1.clear();
//	printVector(v1);
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}





////vector容器容量和大小
////对vector容器的容量和大小操作
///*
//* empty();//判断容器是否为空
//* capacity();//容器的容量
//* size();//返回容器中元素的个数
//* resize(int num);//重新指定容器的长度为num，若容器边长，则以默认值填充新的位置
//* 若容器变短，则末尾超出容器长度的元素被删除
//* resize(int num,elem);//和上面差不多，除了若容器变长，则以elem填充新的位置，其他保持不变
//*/
//
//void printVector(vector<int>& v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << (*it) << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	vector<int>v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printVector(v1);
//
//	if (v1.empty())//为真代表容器为空
//	{
//		cout << "v1为空" << endl;
//	}
//	else
//	{
//		cout << "v1不为空" << endl;
//		cout << "v1的容量为：" << v1.capacity() << endl;
//		cout << "v1的大小为：" << v1.size() << endl;
//	}
//
//	//重新指定大小
//	//v1.resize(15);
//	v1.resize(15, 100);//利用重载版本，可以指定默认填充值，参数2
//	printVector(v1);//如果重新指定的比原来的长乐，默认用0来填充
//
//	v1.resize(5);
//	printVector(v1);
//	//如果重新指定的比原来的短了，超出部分就会删除掉
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}




////vector赋值操作
///*
//* vector& operator=(const vector &vec);//重载等号操作符
//* assign(beg,end);//将[beg,end)区间中的数据拷贝赋值给本身
//* assign(n,elem);//将n个elem拷贝赋值给本身
//*
//
//void printVector(vector<int>& v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << (*it) << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	vector<int>v1;
//
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printVector(v1);
//
//	//赋值操作
//	vector<int>v2;
//	v2 = v1;
//	printVector(v2);
//
//	//assign
//	vector<int>v3;
//	v3.assign(v2.begin(), v2.end());
//	printVector(v3);
//
//	//n个elem方式赋值
//	vector<int>v4;
//	v4.assign(10, 100);
//	printVector(v4);
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}




////vector容器构造
///*
//* vector<T> v;//采用模板实现类实现，默认构造函数
//* vector(v.begin(),v.end());//将v[begin(),end())区间中的元素拷贝给本身
//* vector(n,elem);//构造函数将n个elem拷贝给本身
//* vector(const vector &vec);//拷贝构造函数
//*/
//
//void printVector(vector<int>&v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << (*it) << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	vector<int>v1;//默认构造，无参构造
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printVector(v1);
//
//	//通过区间方式进行构造
//	vector<int>v2(v1.begin(), v1.end());
//	printVector(v2);
//
//	//n个elem方式构造
//	vector<int>v3(10, 100);
//	printVector(v3);
//
//	//拷贝构造
//	vector<int>v4(v3);
//	printVector(v4);
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}