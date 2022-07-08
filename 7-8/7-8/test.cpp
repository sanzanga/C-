#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <string>
#include <functional>
#include <ctime>

//���������㷨 reverse
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

	cout << "��תǰ��" << endl;
	for_each(v.begin(), v.end(), MyPrint());
	cout << endl;

	cout << "��ת��" << endl;
	reverse(v.begin(), v.end());
	for_each(v.begin(), v.end(), MyPrint());
	cout << endl;
}

int main() {

	test01();

	system("pause");
	return 0;
}






////���������㷨 merge
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
//	//Ŀ������
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






////���������㷨  random_shuffle
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
//	//����ϴ�� �㷨 ����˳��
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
////���������㷨 sort
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
//	//����sort��������
//	sort(v.begin(), v.end());
//	for_each(v.begin(), v.end(), Print());
//	cout << endl;
//
//	//�ı�Ϊ����
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





////���ò����㷨 count_if
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
////����������������
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
//	cout << "����20����" << num << endl;
//}
//
////�����Զ�����������
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
//	//��������
//	Person p1("aaa", 10);
//	Person p2("bbb", 10);
//	Person p3("ccc", 30);
//	Person p4("ddd", 40);
//
//	//���뵽������
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//
//	int num = count_if(v.begin(), v.end(), Greater10());
//
//	cout << "�������10����У�" << num << endl;
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
////���ò����㷨 count
//
////ͳ��������������
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
//	cout << "40�ĸ���Ϊ��" << num << endl;
//}
//
////ͳ���Զ�����������
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
//	//��������
//	Person p1("aaa", 10);
//	Person p2("bbb", 10);
//	Person p3("ccc", 30);
//	Person p4("ddd", 40);
//
//	//���뵽������
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//
//	Person p("eee", 10);
//
//	int num = count(v.begin(), v.end(), p);
//
//	cout << "��p��ͬ������У�" << num << endl;
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





////���ò����㷨 binary_search
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
//	//�����������Ƿ���9���Ԫ��
//	//����������������������
//	//������������У������δ֪��
//	bool ret = binary_search(v.begin(), v.end(), 9);
//
//	if (ret)
//	{
//		cout << "�ҵ���Ԫ��" << endl;
//	}
//	else
//	{
//		cout << "û���ҵ�" << endl;
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





////���ò����㷨 adjacent_find
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
//		cout << "δ�ҵ������ظ�Ԫ��" << endl;
//	}
//	else
//	{
//		cout << "�ҵ��������ظ�Ԫ�أ�" << *it << endl;
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





////���ò����㷨 find_if
//
////1������������������
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
//		cout << "û���ҵ�" << endl;
//	}
//	else
//	{
//		cout << "�ҵ��ˣ�" << *it << endl;
//	}
//}
//
////2�������Զ�����������
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
//	//��������
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("ccc", 30);
//	Person p4("ddd", 40);
//
//	//���뵽������
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//
//	//���������20����
//	vector<Person>::iterator it = find_if(v.begin(), v.end(), Greater());
//
//	if (it == v.end())
//	{
//		cout << "û���ҵ�" << endl;
//	}
//	else
//	{
//		cout << "�ҵ��ˣ�" << endl;
//		cout << "������" << it->name << "  ���䣺" << it->age << endl;
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




////���ò����㷨 find
//
////����
//void test01()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	//�����������Ƿ���5���Ԫ�ش���
//	vector<int>::iterator ret = find(v.begin(), v.end(), 5);
//	if (ret == v.end())
//	{
//		cout << "û���ҵ�" << endl;
//	}
//	else
//	{
//		cout << "�ҵ���" << *ret << endl;
//	}
//}
//
////�����Զ�����������
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->age = age;
//		this->name = name;
//	}
//
//	//����==�ײ�find֪����ζԱ�Person��������
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
//	//��������
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("ccc", 30);
//	Person p4("ddd", 40);
//
//	//���뵽������
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
//		cout << "û���ҵ�" << endl;
//	}
//	else
//	{
//		cout << "�ҵ��ˣ�" << endl;
//		cout << "������" << it->name << "  ���䣺" << it->age << endl;
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





////���ñ����㷨 transform
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
//	vector<int>vTarget;//Ŀ������
//	vTarget.resize(v.size());//Ŀ������Ҫ��ǰ���ٿռ�
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





////���ñ����㷨
////for_each
//
////��ͨ����
//void print01(int val)
//{
//	cout << val << " ";
//}
//
////�º���
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