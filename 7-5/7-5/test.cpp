#include <iostream>
using namespace std;
#include <stack>
#include <queue>
#include <string>
#include <list>

//������
//������������Person�Զ����������ͽ�������Person�����������������䣬���
//������򣺰�����������������������ͬ������߽��н���
class Person
{
public:
	Person(string name, int age, int height)
	{
		this->age = age;
		this->height = height;
		this->name = name;
	}

	string name;
	int age;
	int height;
};

//ָ���������
bool comparePerson(Person& p1,Person& p2)
{
	//��������
	if (p1.age == p2.age)
	{
		//������ͬ
		return p1.height > p2.height;
	}
	else
	{
		return p1.age < p2.age;
	}
	
}

void test01()
{
	list<Person>L;//��������
	
	//׼������
	Person p1("����1", 35, 175);
	Person p2("����2", 45, 180);
	Person p3("����3", 40, 170);
	Person p4("����4", 25, 190);
	Person p5("����5", 35, 160);
	Person p6("����6", 35, 200);

	//��������
	L.push_back(p1);
	L.push_back(p2);
	L.push_back(p3);
	L.push_back(p4);
	L.push_back(p5);
	L.push_back(p6);

	for (list<Person>::iterator it = L.begin(); it != L.end(); it++)
	{
		cout << "������" << (*it).name << "  ���䣺" << (*it).age << "  ��ߣ�" << (*it).height << endl;

	}
	cout << "-------------------------------" << endl;
	cout << "�����" << endl;

	L.sort(comparePerson);

	for (list<Person>::iterator it = L.begin(); it != L.end(); it++)
	{
		cout << "������" << (*it).name << "  ���䣺" << (*it).age << "  ��ߣ�" << (*it).height << endl;
	}
}

int main() {

	test01();

	system("pause");
	return 0;
}




////list������ת������
//void printList(const list<int>& L)
//{
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	//��ת
//	list<int>L1;
//	L1.push_back(20);
//	L1.push_back(10);
//	L1.push_back(50);
//	L1.push_back(40);
//	L1.push_back(30);
//
//	cout << "��תǰ��" << endl;
//	printList(L1);
//
//	//��ת
//	L1.reverse();
//	cout << "��ת��" << endl;
//	printList(L1);
//}
//
//bool myCompare(int v1,int v2)
//{
//	//���� ���õ�һ����>�ڶ�����
//	return v1 > v2;
//}
//
////����
//void test02()
//{
//	list<int>L1;
//	L1.push_back(20);
//	L1.push_back(10);
//	L1.push_back(50);
//	L1.push_back(40);
//	L1.push_back(30);
//
//	cout << "����ǰ��" << endl;
//	printList(L1);
//
//	cout << "�����" << endl;
//	//L1.sort(L1.begin(),L1.end());
//	//���в�֧��������ʵ��������������������ñ�׼�㷨
//	//��֧��������ʵ��������������ڲ����ṩ��ӦһЩ�㷨
//
//	L1.sort();//Ĭ��������򣺴�С���� ����
//	printList(L1);
//
//	L1.sort(myCompare);//����
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



////list���ݴ�ȡ
//
//void test01()
//{
//	list<int>L1;
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//	L1.push_back(50);
//
//	//L1[0]��������[]����list�����е�Ԫ��
//	//L1.at(0);//����������at����list�����е�Ԫ��
//	//ԭ��list���������������������Կռ�洢���ݣ�������Ҳ�ǲ�֧��������ʵ�
//
//	cout << "��һ��Ԫ�أ�" << L1.front() << endl;
//	cout << "���һ��Ԫ�أ�" << L1.back() << endl;
//
//	//��֤�������ǲ�֧��������ʵ�
//	list<int>::iterator it = L1.begin();
//	it++;//֧��˫��
//	//it=it+1;//�������Ǵ�� ��֧���������
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




////list�����ɾ��
//
//void printList(const list<int>& L)
//{
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	list<int>L;
//
//	//β��
//	L.push_back(10);
//	L.push_back(20);
//	L.push_back(30);
//
//	//ͷ��
//	L.push_front(100);
//	L.push_front(200);
//	L.push_front(300);
//
//	//300 200 100 10 20 30
//	printList(L);
//
//	//βɾ
//	L.pop_back();
//	//300 200 100 10 20 
//	printList(L);
//
//	//ͷɾ
//	L.pop_front();
//	//200 100 10 20
//	printList(L);
//
//	//insert ����
//	list<int>::iterator it = L.begin();
//	it++;
//	L.insert(it, 1000);
//	//200 1000 100 10 20
//	printList(L);
//
//	//ɾ��
//	it = L.begin();
//	L.erase(it);
//	//1000 100 10 20
//	printList(L);
//
//	//�Ƴ�
//	L.push_back(10000);
//	L.push_back(10000);
//	L.push_back(10000);
//	L.push_back(10000);
//	L.push_back(10000);
//	printList(L);
//	L.remove(10000);
//	printList(L);
//
//	//���
//	L.clear();
//	printList(L);
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}




////list��С����
//
//void printList(const list<int>& L)
//{
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	list<int>L1;
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//
//	printList(L1);
//
//	//�ж������Ƿ�Ϊ��
//	if (L1.empty())
//	{
//		cout << "����L1Ϊ��" << endl;
//	}
//	else
//	{
//		cout << "����L1��Ϊ��" << endl;
//		cout << "L1��Ԫ�ظ�����" << L1.size() << endl;
//	}
//
//	//����ָ����С
//	L1.resize(10,1000);
//	printList(L1);
//
//	L1.resize(2);
//	printList(L1);
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}




////list������ֵ�ͽ���
//
//void printList(const list<int>& L)
//{
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
////��ֵ
//void test01()
//{
//	list<int>L1;
//	
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//
//	printList(L1);
//
//	list<int>L2;
//	L2 = L1;//operator=��ֵ
//	printList(L2);
//
//	list<int>L3;
//	L3.assign(L2.begin(), L2.end());
//	printList(L3);
//
//	list<int>L4;
//	L4.assign(10, 100);
//	printList(L4);
//}
//
////����
//void test02()
//{
//	list<int>L1;
//
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//
//	list<int>L2;
//	L2.assign(10, 100);
//
//	cout << "����ǰ��" << endl;
//	printList(L1);
//	printList(L2);
//
//	cout << "������" << endl;
//	L1.swap(L2);
//	printList(L1);
//	printList(L2);
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





////list���캯��
//
//void printList(const list<int>& L)
//{
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	//����list����
//	list<int>L1;//Ĭ�Ϲ���
//
//	//�������
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//
//	//��������
//	printList(L1);
//
//	//����������й���
//	list<int>L2(L1.begin(), L1.end());
//	printList(L2);
//
//	//��������
//	list<int>L3(L2);
//	printList(L3);
//
//	//n��elem
//	list<int>L4(10, 1000);
//	printList(L4);
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}




////��������queue���ýӿ�
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
//	//��������
//	queue<Person>q;
//	//׼������
//	Person p1("����", 10);
//	Person p2("����", 20);
//	Person p3("����", 30);
//	Person p4("����", 40);
//	//���
//	q.push(p1);
//	q.push(p2);
//	q.push(p3);
//	q.push(p4);
//	cout << "���д�С��" << q.size() << endl;
//	//�ж϶��в�Ϊ�գ��鿴��ͷ���鿴��λ������
//	while (!q.empty())
//	{
//		//�鿴��ͷ
//		cout << "��ͷԪ�ء���������������" << q.front().name << "   ���䣺" << q.front().age << endl;
//		//�鿴��β
//		cout << "��βԪ�ء���������������" << q.back().name << "   ���䣺" << q.back().age << endl;
//		//����
//		q.pop();
//	}
//	cout << "���д�С��" << q.size() << endl;
//}
//
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}



////ջstack�����ĳ��ýӿ�
//
//void test01()
//{
//	//�ص㣺�����Ƚ���������ݽṹ
//	stack<int>s;
//	//��ջ
//	s.push(10);
//	s.push(20);
//	s.push(30);
//	s.push(40);
//
//	cout << "ջ�Ĵ�С��" << s.size() << endl;
//
//	//ֻҪջ��Ϊ�գ��鿴ջ��������ִ�г�ջ����
//	while (!s.empty())
//	{
//		//�鿴ջ��Ԫ��
//		cout << "ջ��Ԫ��Ϊ��" << s.top() << endl;
//		//��ջ
//		s.pop();
//	}
//	cout << "ջ�Ĵ�С��" << s.size() << endl;
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}