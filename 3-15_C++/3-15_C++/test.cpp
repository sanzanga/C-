#include <iostream>

using namespace std;

int mian() {



	system("pause");
	return 0;
}

////��ͨʵ��ҳ��
////Javaҳ��
//class Java
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ���¼��ע��..." << endl;
//	}
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ...(�����ײ�)" << endl;
//	}
//	void left()
//	{
//		cout << "Java��Python��C++...(����������Ϣ)" << endl;
//	}
//	void content()
//	{
//		cout << "Javaѧ����Ƶ" << endl;
//	}
//};
//
////Pythonҳ��
//class Python
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ���¼��ע��..." << endl;
//	}
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ...(�����ײ�)" << endl;
//	}
//	void left()
//	{
//		cout << "Java��Python��C++...(����������Ϣ)" << endl;
//	}
//	void content()
//	{
//		cout << "Pythonѧ����Ƶ" << endl;
//	}
//};
//
////C++ҳ��
//class _C
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ���¼��ע��..." << endl;
//	}
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ...(�����ײ�)" << endl;
//	}
//	void left()
//	{
//		cout << "Java��Python��C++...(����������Ϣ)" << endl;
//	}
//	void content()
//	{
//		cout << "C++ѧ����Ƶ" << endl;
//	}
//};

//�̳�ʵ��ҳ��
//����ҳ����
//class BasePage
//{
//public:
//    void header()
//	{
//		cout << "��ҳ�������Ρ���¼��ע��..." << endl;
//	}
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ...(�����ײ�)" << endl;
//	}
//	void left()
//	{
//		cout << "Java��Python��C++...(����������Ϣ)" << endl;
//	}
//};
//
////Javaҳ��
//class Java :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Javaѧ������" << endl;
//	}
//};
//
////Pythonҳ��
//class Python :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Pythonѧ������" << endl;
//	}
//};
//
////C++ҳ��
//class _C :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "C++ѧ������" << endl;
//	}
//};
//
////�̳кô��������ظ�����
////�﷨��class ����:�̳з�ʽ ����
////����Ҳ��Ϊ������
////����Ҳ��Ϊ����
//
//void test01()
//{
//	cout << "Java��ҳ���������£�" << endl;
//	Java ja;
//	ja.header();
//	ja.footer();
//	ja.left();
//	ja.left();
//	cout << "-----------------" << endl;
//	cout << "Python��ҳ���������£�" << endl;
//	Python py;
//	py.header();
//	py.footer();
//	py.left();
//	py.content();
//	cout << "-----------------" << endl;
//	cout << "C++��ҳ���������£�" << endl;
//	_C c;
//	c.header();
//	c.footer();
//	c.left();
//	c.content();
//}
//
//int main() {
//	test01();
//
//	system("pause");
//	return 0;
//}

//class Time {
//
//public:
//    int hours;      // Сʱ
//    int minutes;    // ����
//
//    Time() {
//        hours = 0;
//        minutes = 0;
//    }
//
//    Time(int h, int m) {
//        this->hours = h;
//        this->minutes = m;
//    }
//
//    void show() {
//        cout << hours << " " << minutes << endl;
//    }
//
//    // write your code here......
//    bool operator<(Time t)
//    {
//        if (this->hours * 60 + this->minutes >= t.hours * 60 + t.minutes)
//        {
//            return false;
//        }
//        else
//        {
//            return true;
//        }
//    }
//
//};
//
//int main() {
//    int h, m;
//    cin >> h;
//    cin >> m;
//
//    Time t1(h, m);
//    Time t2(6, 6);
//
//    if (t1 < t2) cout << "yes"; else cout << "no";
//    return 0;
//}

//#include <iostream>
//#include <cstring>
//#pragma warning(disable : 4996)
//using namespace std;
//
//class Person {
//
//public:
//    char* name; // ����
//    int age;    // ����
//
//    Person(const char* name, int age) {
//        this->name = new char[strlen(name) + 1];
//        strcpy(this->name, name);
//        this->age = age;
//    }
//
//    // write your code here......
//    Person(const Person& p)
//    {
//        this->name = new char[strlen(p.name) + 1];
//        strcpy(this->name, p.name);//��������
//        this->age = p.age;
//    }
//
//    void showPerson() {
//        cout << name << " " << age << endl;
//    }
//
//    ~Person() {
//        if (name != nullptr) {
//            delete[] name;
//            name = nullptr;
//        }
//    }
//
//};
//
//int main() {
//
//    char name[100] = { 0 };
//    int age;
//
//    cin >> name;
//    cin >> age;
//
//    Person p1(name, age);
//    Person p2 = p1;
//
//    p2.showPerson();
//
//    return 0;
//}

//int main(){
//int n;
//cin >> n;
//// write your code here......
//int arr[n][n];
//for (int i = 0; i < n; i++)
//{
//    for (int j = 0; j < n; j++)
//    {
//        arr[i][j] = i + j;
//    }
//}
//for (int i = 0; i < n; i++)
//{
//    for (int j = 0; j < n; j++)
//    {
//        cout << arr[i][j] << " ";
//    }
//    cout << endl;
//}
//return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//class Array {
//private:
//	int n;//�����С 
//	int* a;//���� 
//public:
//	// write your code here......
//	Array()
//	{
//		cin >> n;
//		a = new int[n];
//		for (int i = 0; i < n; i++)
//		{
//			cin >> a[i];
//		}
//	}
//	~Array() {
//		delete[]a;
//	}
//	void show() {
//		for (int i = 0; i < n; i++) cout << a[i] << ' ';
//	}
//};
//int main() {
//	Array a;
//	a.show();
//	return 0;
//}