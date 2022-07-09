#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <numeric>

//���õļ����㷨 set_difference
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
	//Ŀ������Ҫ��ǰ���ٿռ�
	//��������������������û�н�����ȡ���������д��size��ΪĿ���������ٿռ�
	vTarget.resize(max(v1.size(), v2.size()));

	cout << "v1��v2�ĲΪ��" << endl;
	vector<int>::iterator itEnd = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
	for_each(vTarget.begin(), itEnd, MyPrint());
	cout << endl;

	cout << "v2��v1�ĲΪ��" << endl;
	itEnd = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), vTarget.begin());
	for_each(vTarget.begin(), itEnd, MyPrint());
	cout << endl;
}

int main() {

	test01();

	system("pause");
	return 0;
}






////���ü����㷨 set_union
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
// //Ŀ��������ǰ���ٿռ�
// //��������� ��������û�н�����������������������size���
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





////���ü����㷨 set_intersection
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
//	//Ŀ��������Ҫ��ǰ���ٿռ�
//	//���������� ����������С���� ȡС������size����
//	vTarget.resize(min(v1.size(), v2.size()));
//
//	//��ȡ����
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





////�������������㷨
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
//	//����
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





////�����㷨�����㷨
//void test01()
//{
//	vector<int>v;
//	for (int i = 0; i <= 100; i++)
//	{
//		v.push_back(i);
//	}
//
//	//����3��һ����ʼ���ۼ���
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





////���ÿ������滻�㷨
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
//	cout << "����ǰ��" << endl;
//	for_each(v1.begin(), v1.end(), MyPrint());
//	cout << endl;
//	for_each(v2.begin(), v2.end(), MyPrint());
//	cout << endl;
//
//	swap(v1, v2);
//
//	cout << "������" << endl;
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





////���ÿ������滻�㷨 replace_if
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
//	cout << "�滻ǰ��" << endl;
//	for_each(v.begin(), v.end(), MyPrint());
//	cout << endl;
//
//	//������10���滻��2000
//	replace_if(v.begin(), v.end(), Greater10(), 2000);
//	cout << "�滻��" << endl;
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





////���ÿ������滻�㷨 replace
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
//	cout << "�滻ǰ��" << endl;
//	for_each(v.begin(), v.end(), MyPrint());
//	cout << endl;
//	cout << "�滻��" << endl;
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





////���ÿ������滻�㷨  copy
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