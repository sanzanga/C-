#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <ctime>
#include <map>
#include <algorithm>
#include <functional>//�ڽ���������ͷ�ļ�

//�ڽ���������-�߼��º���
//�߼��� logical_not

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

	//�����߼��� ������v���˵�v2�У���ִ��ȡ������
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
////�º��� - ��ϵ�º���
////���� greater
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
//	//����
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




////�ڽ��������� �����º���
//
////negateһԪ�º��� ȡ���º���
//void test01()
//{
//	negate<int>m;
//
//	cout << m(50) << endl;
//}
//
////plus ��Ԫ�º��� �ӷ�
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
////��Ԫν��
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
//	//ʹ�ú������� �ı��㷨���� ��Ϊ�������Ϊ�Ӵ�С
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





////ν�ʣ�����bool���͵ķº�����Ϊν��
////һԪν��
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
//	//���������� ��û�д���5������
//	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
//	if (it == v.end())
//	{
//		cout << "û���ҵ�" << endl;
//	}
//	else
//	{
//		cout << "�ҵ���Ϊ��" << *it << endl;
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





////�������󣨷º���)
///*
//* ����������ʹ��ʱ����������ͨ�����������ã������в����������з���ֵ
//* �������󳬳���ͨ�����ĸ����������������Լ���״̬
//* �������������Ϊ��������
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
////1������������ʹ��ʱ����������ͨ�����������ã������в����������з���ֵ
//void test01()
//{
//	MyAdd myAdd;
//	cout << myAdd(10, 10) << endl;
//}
//
////2���������󳬳���ͨ�����ĸ����������������Լ���״̬
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
//	int count;//ÿ���Լ���״̬
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
//	cout << "myPrint���õĴ�����" << myPrint.count << endl;
//}
//
////3���������������Ϊ��������
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





////����-Ա������
///*
//* ��˾��������Ƹ��10��Ա��ABCDEFGHIJ��10��Ա�����빫˾����Ҫָ��Ա�����Ǹ����Ź���
//* Ա����Ϣ�У����� ������� �������У��߻����������з�
//* �����10��Ա�����䲿�ź͹���
//* ͨ��multiset������Ϣ�Ĳ��� key�����ű�ţ�value��Ա����
//* �ֲ�����ʾԱ����Ϣ
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
//	int salary;//����
//};
//
//void creatWoker(vector<Worker>& v)
//{
//	string nameSeed = "ABCDEFGHIJ";
//	for (int i = 0; i < 10; i++)
//	{
//		Worker worker;
//		worker.name = "Ա��";
//		worker.name += nameSeed[i];
//
//		worker.salary = rand() % 10000 + 10000;
//		v.push_back(worker);//��Ա������������
//	}
//}
//
////Ա���ķ���
//void setGroup(vector<Worker>& v, multimap<int, Worker>& m)
//{
//	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		//����������ű��
//		int deptId = rand() % 3;
//
//		//��Ա�����뵽������
//		//key���ű�ţ�value�����Ա��
//		m.insert(make_pair(deptId, *it));
//	}
//}
//
//void showWorkerByGroup(multimap<int, Worker>& m)
//{
//	cout << "�߻����ţ�" << endl;
//	multimap<int, Worker>::iterator pos = m.find(CEHUA);
//	int count = m.count(CEHUA);//ͳ�ƾ�������
//	int index = 0;
//	for (; pos != m.end() && index < count; pos++, index++)
//	{
//		cout << "������" << pos->second.name << "  ���ʣ�" << pos->second.salary << endl;
//	}
//
//	cout << "-----------------------------" << endl;
//	cout << "�������ţ�" << endl;
//	pos = m.find(MEISHU);
//	count = m.count(MEISHU);//ͳ�ƾ�������
//	index = 0;
//	for (; pos != m.end() && index < count; pos++, index++)
//	{
//		cout << "������" << pos->second.name << "  ���ʣ�" << pos->second.salary << endl;
//	}
//
//	cout << "-----------------------------" << endl;
//	cout << "�з����ţ�" << endl;
//	pos = m.find(YANFA);
//	count = m.count(YANFA);//ͳ�ƾ�������
//	index = 0;
//	for (; pos != m.end() && index < count; pos++, index++)
//	{
//		cout << "������" << pos->second.name << "  ���ʣ�" << pos->second.salary << endl;
//	}
//}
//
//int main() {
//
//	srand((unsigned int)time(NULL));
//
//	//1������Ա��
//	vector<Worker>vWorker;
//	creatWoker(vWorker);
//
//	//Ա������
//	multimap<int, Worker>mWorker;
//	setGroup(vWorker, mWorker);
//
//	//3��������ʾԱ��
//	showWorkerByGroup(mWorker);
//
//	////����
//	//for (vector<Worker>::iterator it = vWorker.begin(); it != vWorker.end(); it++)
//	//{
//	//	cout << "������" << it->name << "  ���ʣ�" << it->salary << endl;
//	//}
//
//	system("pause");
//	return 0;
//}