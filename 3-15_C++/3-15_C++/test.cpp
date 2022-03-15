#include <iostream>

using namespace std;

int mian() {



	system("pause");
	return 0;
}

////普通实现页面
////Java页面
//class Java
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登录、注册..." << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图...(公共底部)" << endl;
//	}
//	void left()
//	{
//		cout << "Java、Python、C++...(公共分类信息)" << endl;
//	}
//	void content()
//	{
//		cout << "Java学科视频" << endl;
//	}
//};
//
////Python页面
//class Python
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登录、注册..." << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图...(公共底部)" << endl;
//	}
//	void left()
//	{
//		cout << "Java、Python、C++...(公共分类信息)" << endl;
//	}
//	void content()
//	{
//		cout << "Python学科视频" << endl;
//	}
//};
//
////C++页面
//class _C
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登录、注册..." << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图...(公共底部)" << endl;
//	}
//	void left()
//	{
//		cout << "Java、Python、C++...(公共分类信息)" << endl;
//	}
//	void content()
//	{
//		cout << "C++学科视频" << endl;
//	}
//};

//继承实现页面
//公共页面类
//class BasePage
//{
//public:
//    void header()
//	{
//		cout << "首页、公开课、登录、注册..." << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图...(公共底部)" << endl;
//	}
//	void left()
//	{
//		cout << "Java、Python、C++...(公共分类信息)" << endl;
//	}
//};
//
////Java页面
//class Java :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Java学科内容" << endl;
//	}
//};
//
////Python页面
//class Python :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Python学科内容" << endl;
//	}
//};
//
////C++页面
//class _C :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "C++学科内容" << endl;
//	}
//};
//
////继承好处：减少重复代码
////语法：class 子类:继承方式 父类
////子类也称为派生类
////父类也称为基类
//
//void test01()
//{
//	cout << "Java的页面内容如下：" << endl;
//	Java ja;
//	ja.header();
//	ja.footer();
//	ja.left();
//	ja.left();
//	cout << "-----------------" << endl;
//	cout << "Python的页面内容如下：" << endl;
//	Python py;
//	py.header();
//	py.footer();
//	py.left();
//	py.content();
//	cout << "-----------------" << endl;
//	cout << "C++的页面内容如下：" << endl;
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
//    int hours;      // 小时
//    int minutes;    // 分钟
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
//    char* name; // 姓名
//    int age;    // 年龄
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
//        strcpy(this->name, p.name);//拷贝名字
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
//	int n;//数组大小 
//	int* a;//数组 
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