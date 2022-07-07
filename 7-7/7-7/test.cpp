#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <ctime>
#include <map>
#include <algorithm>
#include <functional>//内建函数对象头文件

//内建函数对象-逻辑仿函数
//逻辑非 logical_not

void test01()
{
	vector<bool>v;
	v.push_back(true);
	v.push_back(false);
	v.push_back(true);
	v.push_back(false);
	
	for (vector<bool>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	//利用逻辑非 将容器v搬运到v2中，并执行取反操作
	vector<bool>v2;
	v2.resize(v.size());

	transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());
	for (vector<bool>::iterator it = v2.begin(); it != v2.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

int main() {

	test01();

	system("pause");
	return 0;
}





//class MyCompare
//{
//public:
//	bool operator()(int v1, int v2)
//	{
//		return v1 > v2;
//	}
//};
//
////仿函数 - 关系仿函数
////大于 greater
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
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	//降序
//	//sort(v.begin(), v.end(), MyCompare());
//	sort(v.begin(), v.end(), greater<int>());
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
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




////内建函数对象 算数仿函数
//
////negate一元仿函数 取反仿函数
//void test01()
//{
//	negate<int>m;
//
//	cout << m(50) << endl;
//}
//
////plus 二元仿函数 加法
//void test02()
//{
//	plus<int>p;
//	cout << p(10, 20) << endl;
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





//class MyCompare
//{
//public:
//	bool operator()(int v1, int v2)
//	{
//		return v1 > v2;
//	}
//};
//
////二元谓词
//void test01()
//{
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(30);
//	v.push_back(50);
//	v.push_back(40);
//	v.push_back(60);
//	v.push_back(20);
//
//	sort(v.begin(), v.end());
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	//使用函数对象 改变算法策略 变为排序规则为从大到小
//	sort(v.begin(), v.end(), MyCompare());
//	cout << "----------------" << endl;
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
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





////谓词：返回bool类型的仿函数称为谓词
////一元谓词
//
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
//	//查找容器中 有没有大于5的数字
//	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
//	if (it == v.end())
//	{
//		cout << "没有找到" << endl;
//	}
//	else
//	{
//		cout << "找到了为：" << *it << endl;
//	}
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





////函数对象（仿函数)
///*
//* 函数对象在使用时，可以像普通函数那样调用，可以有参数，可以有返回值
//* 函数对象超出普通函数的概念，函数对象可以有自己的状态
//* 函数对象可以作为参数传递
//*/
//
//class MyAdd
//{
//public:
//	int operator()(int v1, int v2)
//	{
//		return v1 + v2;
//	}
//};
//
////1、函数对象在使用时，可以像普通函数那样调用，可以有参数，可以有返回值
//void test01()
//{
//	MyAdd myAdd;
//	cout << myAdd(10, 10) << endl;
//}
//
////2、函数对象超出普通函数的概念，函数对象可以有自己的状态
//class MyPrint
//{
//public:
//	MyPrint()
//	{
//		this->count = 0;
//	}
//
//	void operator()(string test)
//	{
//		cout << test << endl;
//		this->count++;
//	}
//
//	int count;//每部自己的状态
//};
//
//void test02()
//{
//	MyPrint myPrint;
//	myPrint("hello world");
//	myPrint("hello world");
//	myPrint("hello world");
//	myPrint("hello world");
//	myPrint("hello world");
//	myPrint("hello world");
//
//	cout << "myPrint调用的次数：" << myPrint.count << endl;
//}
//
////3、函数对象可以作为参数传递
//void doPrint(MyPrint &mp,string test)
//{
//	mp(test);
//}
//
//void test03()
//{
//	MyPrint myprint;
//	doPrint(myprint, "Hello C++");
//}
//
//int main() {
//
//	//test01();
//
//	//test02();
//
//	test03();
//
//	system("pause");
//	return 0;
//}





////案例-员工分组
///*
//* 公司今天找招聘了10名员工ABCDEFGHIJ，10名员工进入公司后，需要指派员工在那个部门工作
//* 员工信息有：姓名 工资组成 ；部门有：策划、美术、研发
//* 随机给10名员工分配部门和工资
//* 通过multiset进行信息的插入 key（部门编号）value（员工）
//* 分部门显示员工信息
//*/
//
//#define CEHUA 0
//#define MEISHU 1
//#define YANFA 2
//
//class Worker
//{
//public:
//	string name;
//	int salary;//工资
//};
//
//void creatWoker(vector<Worker>& v)
//{
//	string nameSeed = "ABCDEFGHIJ";
//	for (int i = 0; i < 10; i++)
//	{
//		Worker worker;
//		worker.name = "员工";
//		worker.name += nameSeed[i];
//
//		worker.salary = rand() % 10000 + 10000;
//		v.push_back(worker);//将员工放在容器中
//	}
//}
//
////员工的分组
//void setGroup(vector<Worker>& v, multimap<int, Worker>& m)
//{
//	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		//产生随机部门编号
//		int deptId = rand() % 3;
//
//		//将员工插入到分组中
//		//key部门编号，value具体的员工
//		m.insert(make_pair(deptId, *it));
//	}
//}
//
//void showWorkerByGroup(multimap<int, Worker>& m)
//{
//	cout << "策划部门：" << endl;
//	multimap<int, Worker>::iterator pos = m.find(CEHUA);
//	int count = m.count(CEHUA);//统计具体人数
//	int index = 0;
//	for (; pos != m.end() && index < count; pos++, index++)
//	{
//		cout << "姓名：" << pos->second.name << "  工资：" << pos->second.salary << endl;
//	}
//
//	cout << "-----------------------------" << endl;
//	cout << "美术部门：" << endl;
//	pos = m.find(MEISHU);
//	count = m.count(MEISHU);//统计具体人数
//	index = 0;
//	for (; pos != m.end() && index < count; pos++, index++)
//	{
//		cout << "姓名：" << pos->second.name << "  工资：" << pos->second.salary << endl;
//	}
//
//	cout << "-----------------------------" << endl;
//	cout << "研发部门：" << endl;
//	pos = m.find(YANFA);
//	count = m.count(YANFA);//统计具体人数
//	index = 0;
//	for (; pos != m.end() && index < count; pos++, index++)
//	{
//		cout << "姓名：" << pos->second.name << "  工资：" << pos->second.salary << endl;
//	}
//}
//
//int main() {
//
//	srand((unsigned int)time(NULL));
//
//	//1、创建员工
//	vector<Worker>vWorker;
//	creatWoker(vWorker);
//
//	//员工分组
//	multimap<int, Worker>mWorker;
//	setGroup(vWorker, mWorker);
//
//	//3、分组显示员工
//	showWorkerByGroup(mWorker);
//
//	////测试
//	//for (vector<Worker>::iterator it = vWorker.begin(); it != vWorker.end(); it++)
//	//{
//	//	cout << "姓名：" << it->name << "  工资：" << it->salary << endl;
//	//}
//
//	system("pause");
//	return 0;
//}