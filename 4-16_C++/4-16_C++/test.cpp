#include <iostream>
#include <vector>
#include <algorithm>//��׼�㷨��ͷ�ļ�
#include <string>
using namespace std;

//vector����Ƕ������
void test01()
{
	vector<vector<int>>v;

	//����С����
	vector<int> v1;
	vector<int> v2;
	vector<int> v3;
	vector<int> v4;

	//��С�����������
	for (int i = 0; i < 4; i++)
	{
		v1.push_back(i + 1);
		v2.push_back(i + 2);
		v3.push_back(i + 3);
		v4.push_back(i + 4);
	}

	//��С�������뵽������
	v.push_back(v1);
	v.push_back(v2);
	v.push_back(v3);
	v.push_back(v4);

	//ͨ�������������������ݱ���һ��
	for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++)
	{
		//(*it)---����vector<int>
		for (vector<int>::iterator vit = (*it).begin(); vit != (*it).end(); vit++)
		{
			cout << (*vit) << " ";
		}
		cout << endl;
	}
}

int main() {

	test01();

	system("pause");
	return 0;
}

////vector����Զ�������
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
//	vector<Person> v;
//
//	Person p1("aa", 10);
//	Person p2("bb", 20);
//	Person p3("cc", 30);
//	Person p4("dd", 40);
//	Person p5("ee", 50);
//
//	//�������в�������
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//
//	//���������е�����
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		//cout << "������" << (*it).name << "   ���䣺" << (*it).age << endl;
//		cout << "������" << it->name << "   ���䣺" << it->age << endl;
//	}
//}
//
////����Զ������͵�ָ��
//void test02()
//{
//	vector<Person*> v;
//
//	Person p1("aa", 10);
//	Person p2("bb", 20);
//	Person p3("cc", 30);
//	Person p4("dd", 40);
//	Person p5("ee", 50);
//
//	//�������в�������
//	v.push_back(&p1);
//	v.push_back(&p2);
//	v.push_back(&p3);
//	v.push_back(&p4);
//	v.push_back(&p5);
//
//	//��������
//	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << "������" << (*it)->name << "   ���䣺" << (*it)->age << endl;
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

////vector�������������������
//
//void MyPrint(int val)
//{
//	cout << val << endl;
//}
//
//void test01()
//{
//	////����һ��vector����������
//	//vector<int> y;
//
//	////�������в�������
//	//y.push_back(10);
//	//y.push_back(20);
//	//y.push_back(30);
//	//y.push_back(40);
//
//	////ͨ�����������������е�����
//	//vector<int>::iterator itBegin = y.begin();//��ʼ������ ָ�������е�һ��Ԫ��
//	//vector<int>::iterator itEnd = y.end();//���������� ָ�����������һ��Ԫ�ص���һ��λ��
//
//	////��һ�ֱ�����ʽ
//	//while (itBegin != itEnd)
//	//{
//	//	cout << *itBegin << endl;
//	//	itBegin++;
//	//}
//
//	////����һ��vector����������
//	vector<int> v;
//
//	//�������в�������
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//
//	////�ڶ��ַ�ʽ
//	//for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	//{
//	//	cout << *it << endl;
//	//}
//
//	//�����ַ�ʽ ����STL�ṩ�ı����㷨
//	for_each(v.begin(), v.end(), MyPrint);
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}

//int intAdd(int a, int b);
//double doubleAdd(double a, double b);

////�β�������ͬ,��������ͬ
//int add1(int a, int b, int c);
//int add1(int a, int b);
////�βθ�����ͬ�������Ͳ�ͬ
//int add2(int x, int y);
//double add2(double a, double b);
//
////���������β��������ֺ���
//int add3(int a1, int b1);
//int add3(int a2, int b2);//�������Ǵ����
////�������Է���ֵ������
//int add4(int x, int y);
//void add4(int x, int y);//����Ҳ�Ǵ����

//void test(int a, int b = 10, int c = 20);
//void test(int b);