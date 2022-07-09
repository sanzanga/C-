#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <numeric>

//常用的集合算法 set_difference
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
	vector < int>v1;
	vector<int>v2;

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
	}

	vector<int>vTarget;
	//目标容器要提前开辟空间
	//最特殊的情况：两个容器没有交集，取两个容器中大的size作为目标容器开辟空间
	vTarget.resize(max(v1.size(), v2.size()));

	cout << "v1和v2的差集为：" << endl;
	vector<int>::iterator itEnd = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
	for_each(vTarget.begin(), itEnd, MyPrint());
	cout << endl;

	cout << "v2和v1的差集为：" << endl;
	itEnd = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), vTarget.begin());
	for_each(vTarget.begin(), itEnd, MyPrint());
	cout << endl;
}

int main() {

	test01();

	system("pause");
	return 0;
}






////常用集合算法 set_union
//class MyPrint
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
//	vector<int>v1;
//	vector<int>v2;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//		v2.push_back(i + 5);
//	}
//
//	vector<int>vTarget;
// //目标容器提前开辟空间
// //最特殊情况 两个容器没有交集，并集就是两个容器的size相加
//	vTarget.resize(v1.size() + v2.size());
//
//	vector<int>::iterator itEnd = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
//	for_each(vTarget.begin(), itEnd, MyPrint());
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





////常用集合算法 set_intersection
//class MyPrint
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
//	vector<int>v1;
//	vector<int>v2;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//		v2.push_back(i + 5);
//	}
//
//	vector<int>vTarget;
//	//目标容器需要提前开辟空间
//	//最特殊的情况 大容器包含小容器 取小容器的size即可
//	vTarget.resize(min(v1.size(), v2.size()));
//
//	//获取交际
//	vector<int>::iterator itEnd = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
//
//	for_each(vTarget.begin(), itEnd, MyPrint());
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





////常用算术生成算法
//class MyPrint
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
//	v.resize(10);
//
//	//后期
//	fill(v.begin(), v.end(), 100);
//
//	for_each(v.begin(), v.end(), MyPrint());
//	cout <<  endl;
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}





////常用算法生成算法
//void test01()
//{
//	vector<int>v;
//	for (int i = 0; i <= 100; i++)
//	{
//		v.push_back(i);
//	}
//
//	//参数3是一个起始的累加数
//	int total = accumulate(v.begin(), v.end(), 1000);
//	cout << "total=" << total << endl;
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}





////常用拷贝和替换算法
//class MyPrint
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
//	vector<int>v1;
//	vector<int>v2;
//
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//		v2.push_back(i + 1);
//	}
//
//	cout << "交换前：" << endl;
//	for_each(v1.begin(), v1.end(), MyPrint());
//	cout << endl;
//	for_each(v2.begin(), v2.end(), MyPrint());
//	cout << endl;
//
//	swap(v1, v2);
//
//	cout << "交换后：" << endl;
//	for_each(v1.begin(), v1.end(), MyPrint());
//	cout << endl;
//	for_each(v2.begin(), v2.end(), MyPrint());
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





////常用拷贝和替换算法 replace_if
//class MyPrint
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//
//class Greater10
//{
//public:
//	bool operator()(int val)const
//	{
//		return val >= 10;
//	}
//};
//
//void test01()
//{
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(20);
//	v.push_back(20);
//	v.push_back(20);
//	v.push_back(20);
//
//	cout << "替换前：" << endl;
//	for_each(v.begin(), v.end(), MyPrint());
//	cout << endl;
//
//	//将大于10的替换成2000
//	replace_if(v.begin(), v.end(), Greater10(), 2000);
//	cout << "替换后：" << endl;
//	for_each(v.begin(), v.end(), MyPrint());
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





////常用拷贝和替换算法 replace
//class MyPrint
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
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(20);
//	v.push_back(20);
//	v.push_back(20);
//	v.push_back(20);
//	v.push_back(20);
//	v.push_back(20);
//	cout << "替换前：" << endl;
//	for_each(v.begin(), v.end(), MyPrint());
//	cout << endl;
//	cout << "替换后：" << endl;
//	replace(v.begin(), v.end(), 20, 2000);
//	for_each(v.begin(), v.end(), MyPrint());
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





////常用拷贝和替换算法  copy
//class MyPrint
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
//	vector<int>v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//
//	vector<int>v2;
//	v2.resize(v1.size());
//
//	copy(v1.begin(), v1.end(), v2.begin());
//	for_each(v2.begin(), v2.end(), MyPrint());
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