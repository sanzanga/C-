#include <iostream>
using namespace std;
#include <set>
#include <string>
#include <map>



////map��������
//
//class MyCompare
//{
//public:
//	bool operator()(int v1,int v2) const
//	{
//		//����
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




////map���Һ�ͳ��
//
//void test01()
//{
//	//����
//	map<int, int>m;
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(3, 30));
//
//	map<int, int>::iterator pos = m.find(4);
//
//	if (pos != m.end())
//	{
//		cout << "�鵽��Ԫ��key=" << (*pos).first << "  value=" << (*pos).second << endl;
//	}
//	else
//	{
//		cout << "δ�ҵ�Ԫ��" << endl;
//	}
//
//	//ͳ��
//	//map����������ظ���keyԪ�أ�countͳ�ƶ��ԣ����ҪôΪ0Ҫô��1
//	//multimap��countͳ�ƿ��ܴ���1
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




////map�����ɾ��
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
//	//����
//	//��һ��
//	m.insert(pair<int, int>(1, 10));
//
//	//�ڶ���
//	m.insert(make_pair(2, 20));
//
//	//������
//	m.insert(map<int, int>::value_type(3, 30));
//
//	//������
//	m[4] = 40;
//
//	//[]��������룬��;����������key����value
//	//cout << m[4] << endl;
//
//	printMap(m);
//
//	//ɾ��
//	m.erase(m.begin());
//	printMap(m);
//
//	m.erase(3);//����keyɾ��
//	printMap(m);
//
//	m.erase(m.begin(), m.end());
//	printMap(m);//�൱�����
//
//	//���
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




////map��С�ͽ���
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
////��С
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
//		cout << "mΪ��" << endl;
//	}
//	else
//	{
//		cout << "m��Ϊ��" << endl;
//		cout << "m�Ĵ�СΪ��" << m.size() << endl;
//	}
//}
//
////����
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
//	cout << "����ǰ��" << endl;
//	printMap(m);
//	printMap(m2);
//	
//	cout << "������" << endl;
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




////map��������͸�ֵ
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
//	//����map����
//	map<int, int>m;
//
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(3, 30));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(4, 40));
//
//	printMap(m);
//
//	//��������
//	map<int, int>m2(m);
//	printMap(m2);
//
//	//��ֵ
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




////set�������򣬴���Զ�����������
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
//		//�������� ����
//		return p1.age > p2.age;
//	}
//};
//
//void test01()
//{
//	//�Զ������������ ����ָ���������
//	set<Person, MyCompare>s;
//
//	//����Person����
//	Person p1("����1", 24);
//	Person p2("����2", 28);
//	Person p3("����3", 25);
//	Person p4("����4", 21);
//
//	s.insert(p1);
//	s.insert(p2);
//	s.insert(p3);
//	s.insert(p4);
//
//	for (set<Person, MyCompare>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << "������" << it->name << "  ���䣺" << it->age << endl;
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





////set��������
////set����Ĭ����������Ǵ�С����������θı��������
////���÷º��������Ըı��������
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
//	//��������
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
//	//ָ���������Ϊ�Ӵ�С
//	set<int,MyCompare>s2;
//
//	//��������
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




////pair���鴴��
////�ɶԳ��ֵ����ݣ����ö�����Է�����������
///*
//* pair<type,type>p (value1,value2);
//* pair<type,type>p=make_pair(value1,value2);
//*/
//
//void test01()
//{
//	//��һ�ַ�ʽ
//	pair<string, int>p("����", 20);
//	cout << "������" << p.first << "  ���䣺" << p.second << endl;
//
//	//�ڶ��ַ�ʽ
//	pair<string, int>p2 = make_pair("����", 30);
//	cout << "������" << p2.first << "  ���䣺" << p2.second << endl;
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}





////set��multiset����
///*
//* set�����Բ����ظ����ݣ���multi����
//* set�������ݵ�ͬʱ�᷵�ز���������ʾ�ǹ�����ɹ�
//* multiset���������ݣ���˿��Բ����ظ�����
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
//		cout << "��һ�β���ɹ�" << endl;
//	}
//	else
//	{
//		cout << "��һ�β���ʧ��" << endl;
//	}
//
//	ret = s.insert(10);
//	if (ret.second)
//	{
//		cout << "�ڶ��β���ɹ�" << endl;
//	}
//	else
//	{
//		cout << "�ڶ��β���ʧ��" << endl;
//	}
//
//	multiset<int>ms;
//	//��������ظ�ֵ
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




////set�������Һ�ͳ��
///*
//* find(key);//����key�Ƿ���ڣ����ظü���Ԫ�صĵ��������������ڣ�����set.end();
//* count(key);//ͳ��key��Ԫ�ظ���
//*/
//
////����
//void test01()
//{
//	set<int>s1;
//
//	//��������
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(40);
//	s1.insert(50);
//	s1.insert(20);
//
//	//����
//	set<int>::iterator  pos = s1.find(30);
//	if (pos != s1.end())
//	{
//		cout << "�ҵ�Ԫ�أ�" << *pos << endl;
//	}
//	else
//	{
//		cout << "û���ҵ�Ԫ��" << endl;
//	}
//}
//
////ͳ��
//void test02()
//{
//	set<int>s1;
//
//	//��������
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(40);
//	s1.insert(50);
//	s1.insert(20);
//
//	//ͳ��30�ĸ���
//	int num = s1.count(30);
//	//����set���ԣ�ͳ�ƵĽ��Ҫô��0Ҫô��1
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





////set���������ɾ��
///*
//* insert(elem);//�������в���Ԫ��
//* clear();//�������Ԫ��
//* erase(pos);//ɾ��pos��������ָ��Ԫ�أ�������һ��Ԫ�صĵ�����
//* erase(beg,end);//ɾ������[beg,end)������Ԫ�أ�������һ��Ԫ�صĵ�����
//* erase(elem);//ɾ��������ֵΪelem��Ԫ��
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
//	//��������
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(40);
//	s1.insert(50);
//	s1.insert(20);
//
//	//����
//	printSet(s1);
//
//	//ɾ��
//	//��Ϊset�������Զ������������һ�������Ԫ�ز�����С�ģ�ɾ�����ǻ�ɾ������С��Ԫ��
//	s1.erase(s1.begin());
//	printSet(s1);
//
//	//ɾ�����ذ汾
//	s1.erase(30);
//	printSet(s1);
//
//	//���
//	s1.erase(s1.begin(), s1.end());
//	//����
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



////set��С�ͽ���
///*
//* size();//����������Ԫ�ص���Ŀ
//* empty();//�ж������Ƿ�Ϊ��
//* swap();//����������������
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
////��С
//void test01()
//{
//	set<int>s1;
//
//	//��������
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(40);
//	s1.insert(50);
//	s1.insert(20);
//
//	//��ӡ����
//	printSet(s1);
//
//	//�ж��Ƿ�Ϊ��
//	if (s1.empty())
//	{
//		cout << "s1Ϊ��" << endl;
//	}
//	else
//	{
//		cout << "s1��Ϊ��" << endl;
//		cout << "s1Ԫ�ظ���Ϊ��" << s1.size() << endl;
//	}
//}
//
////����
//void test02()
//{
//	set<int>s1;
//
//	//��������
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(40);
//	s1.insert(50);
//	s1.insert(20);
//
//	set<int>s2;
//
//	//��������
//	s2.insert(10);
//	s2.insert(30);
//	s2.insert(40);
//	s2.insert(50);
//
//	cout << "����ǰ��" << endl;
//	printSet(s1);
//	printSet(s2);
//
//	cout << "������" << endl;
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




////set����͸�ֵ
///*
//* set<T> st;//Ĭ�Ϲ��캯��
//* set(const set& st);//�������캯��
//* 
//* set& operator=(const set &st);//���صȺŲ�����
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
//	//�������� ֻ��insert��ʽ
//	s1.insert(10);
//	s1.insert(40);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(30);
//	//set�����ص㣺����Ԫ���ڲ����ʱ����Զ�������
//	//set��������������ظ�ֵ����ʹ��������ͬ��ֵ�����ǲ������ɹ�����ʹ���ᱨ��
//
//	printSet(s1);
//
//	//��������
//	set<int>s2(s1);
//	printSet(s2);
//
//	//��ֵ����
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