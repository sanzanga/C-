#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>//��׼�㷨��ͷ�ļ�
#include <string>

//�ַ������Һ��滻
//

int main() {



	system("pause");
	return 0;
}




////string�ַ���ƴ��
///*
//* string& operator+=(const char* str);//����+=������
//* string& operator+=(const char c);//����+=������
//* string& operator+=(const string& str);//����+=������
//* string& append(const char* s);//���ַ���s���ӵ���ǰ�ַ�����β
//* string& append(const char* s,int n);//���ַ���s��ǰn���ַ����ӵ���ǰ�ַ�����β
//* string& append(const string& s);//ͬoperator+=(const string& str)
//* string& append(const string& s,int pos,int n);//�ַ���s��pos��ʼǰn���ַ����ӵ��ַ�����β
//*/
//
//void test01()
//{
//	string str1 = "��";
//	str1 += "������Ϸ";
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
//	str3.append(str2, 0, 3);//�������Ҫ����������ȡ��ȡ���ٸ�
//	//����2���ĸ�λ�ÿ�ʼ��ȡ  ����3�ǽ�ȡ���ַ�����
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




////string�ĸ�ֵ����
///*
//* string& operator=(const char* s);//char*�����ַ�����ֵ����ǰ���ַ���
//* string& operator=(const string &s);//���ַ���s��ֵ����ǰ���ַ���
//* string& operator=(char c);//�ַ���ֵ����ǰ�ַ���
//* string& assign(const char* s);//���ַ���s������ǰ�ַ���
//* string& assign(const char* s,int n);//���ַ���s��ǰn���ַ�������ǰ���ַ���
//* string& assign(const string& s);//���ַ���s������ǰ�ַ���
//* string& assign(int n,char c);//��n���ַ�������ǰ�ַ���
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



////string���캯��
//void test01()
//{
//	string s1;//Ĭ�Ϲ���
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




////vector����Ƕ������
//void test01()
//{
//	vector<vector<int>>v;
//
//	//����С����
//	vector<int>v1;
//	vector<int>v2;
//	vector<int>v3;
//	vector<int>v4;
//
//	//��С�������������
//	for (int i = 0; i < 4; i++)
//	{
//		v1.push_back(i + 1);
//		v2.push_back(i + 2);
//		v3.push_back(i + 3);
//		v4.push_back(i + 4);
//	}
//
//	//��С�������뵽�������
//	v.push_back(v1);
//	v.push_back(v2);
//	v.push_back(v3);
//	v.push_back(v4);
//
//	//ͨ�������������е����ݶ�����һ��
//	for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		//(*it)����һ������ vector<int>
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




////vector��������Զ�����������
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
//	//���������������
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
//	//���������������
//	v.push_back(&p1);
//	v.push_back(&p2);
//	v.push_back(&p3);
//	v.push_back(&p4);
//	v.push_back(&p5);
//
//	//��������
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



////vector�������������������
//
//void myPrint(int val)
//{
//	cout << val << endl;
//}
//
//void test01()
//{
//	//������һ��vector�������ֽ׶ο���ֱ�ӵ���������
//	vector<int> v;
//
//	//�������в�������
//	v.push_back(10);//β��
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	////ͨ�����������������е�����
//	//vector<int>::iterator itBegin = v.begin();//��ʼ������  ָ�������е�һ��Ԫ��
//	//vector<int>::iterator itEnd = v.end();//����������  ָ�����������һ��Ԫ�ص���һ��λ��
//
//	////��һ�ַ��ʷ�ʽ
//	//while (itBegin != itEnd)
//	//{
//	//	cout << *itBegin << endl;
//	//	itBegin++;
//	//}
//
//	//�ڶ��ֱ�����ʽ
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << endl;
//	}
//
//	//�����ֱ�����ʽ
//	//����STL�ṩ�ı����㷨
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