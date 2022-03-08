#include <iostream>
#include <cstring>
#include <string>
#pragma warning(disable : 4996)
//#include<bits/stdc++.h>
using namespace std;

//int main(){
//	
//	cout<<"hello world!"<<endl;
//	
//	system("pause");
//	
//	return 0;
//} 

//// Person类
//class Person {
//    public:
//        string name;    // 姓名
//        int age;    // 年龄
//
//        // write your code here......
//        Person(string m_Name,int m_Age)
//        {
//            name=m_Name;
//            age=m_Age;
//        }
//
//        void showPerson() {
//            cout << name << " " << age << endl;
//        }
//};
//
//int main() {
//
//    string name;
//    int age;
//
//    cin >> name;
//    cin >> age;
//
//    Person p(name, age);
//    p.showPerson();
//
//    return 0;
//}

//class Person {
//
//    public:
//        char* name; // 姓名
//        int age;    // 年龄
//
//        Person(const char* name, int age) {
//            this->name = new char[strlen(name) + 1];
//            strcpy(this->name, name);
//            this->age = age;
//        }
//
//        // write your code here......
//        Person(const Person& p)
//        {
//            this->name=new char[strlen(p.name)+1];
//            strcpy(this->name,p.name);//拷贝名字
//            this->age=p.age;//拷贝年龄 
//        }
//
//        void showPerson() {
//            cout << name << " " << age << endl;
//        }
//
//        ~Person() {
//            if (name != nullptr) {
//                delete[] name;
//                name = nullptr;
//            }
//        }
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


//class Array{
//	private:
//		int n;//数组大小 
//		int *a;//数组 
//	public:
//		// write your code here......
//        Array()
//        {
//            cin>>n;
//            a=new int[n];
//            for(int i=0;i<n;i++)
//            {
//                cin>>a[i];
//            }
//        }
//		~Array(){
//			delete []a;
//		}
//		void show(){
//			for (int i=0;i<n;i++) cout<<a[i]<<' ';
//		}
//};
//int main(){
//	Array a;
//	a.show();
//	return 0;
//}

//class Array{
//	private:
//		int n;//数组大小 
//		int *a;//数组 
//	public:
//		Array(){
//			cin>>n;
//			a=new int [n];
//			for (int i=0;i<n;i++) cin>>a[i];
//		}
//		~Array(){
//			delete []a;
//		}
//		int getlen(){
//			return n;
//		}
//		int get(int i){
//			return a[i];
//		}
//		// write your code here......
//        Array(const Array &c)
//        {
//            delete []a;
//            a=new int[c.n];
//            n=c.n;
//            for(int i=0;i<n;i++)
//            {
//                a[i]=c.a[i];
//            }
//        }
//    
//		void show(){
//			for (int i=0;i<n;i++) cout<<a[i]<<' ';
//		}
//};
//int main(){
//	Array a;
//	Array b=a; 
//	b.show();
//	return 0;
//}

//class Person {
//    // write your code here......
//    friend void showAge(Person& p);
//
//    public:
//        Person(int age) {
//            this->age = age;
//        }
//
//    private:
//        int age;
//};
//
//void showAge(Person& p) {
//    cout << p.age << endl;
//}
//
//int main() {
//
//    Person p(10);
//    showAge(p);
//
//    return 0;
//}

//class phone{
//	// write your code here......
//	friend class myphone;
//	private:
//		int price;
//	public:
//		phone(int x){
//			price=x;
//		}
//}; 
//class myphone{
//	private:
//		phone a;
//	public:
//		myphone(int x):a(x){
//		}
//		int getprice(){
//			return a.price;
//		}
//};
//int main(){
//	int p;
//	cin>>p;
//	myphone a(p);
//	cout<<a.getprice();
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
//    Time operator+(Time& p)
//    {
//        Time temp;
//        temp.hours = this->hours + p.hours;
//        temp.minutes = this->minutes + p.minutes;
//        temp.hours += temp.minutes / 60;
//        temp.minutes %= 60;
//        return temp;
//    }
//
//};
//
//int main() {
//
//    int h, m;
//    cin >> h;
//    cin >> m;
//
//    Time t1(h, m);
//    Time t2(2, 20);
//
//    Time t3 = t1 + t2;
//    t3.show();
//
//    return 0;
//}

////重载递增运算符
//
////自定义类型
//class MyInteger
//{
//
//	friend ostream& operator<<(ostream& cout, MyInteger myint);
//
//public:
//	MyInteger()
//	{
//		m_Num = 0;
//	}
//
//	//重载前置++运算符
//	MyInteger& operator++()//返回应用是为了对一个数字进行操作
//	{
//		//先进行++的操作，在返回本身
//		m_Num++;
//		return *this;
//	}
//
//	//重载后置++运算符
//	//void operator++(int) int代表占位参数，可以用于区分前置和后置递增
//	MyInteger operator++(int)
//	{
//		//先 记录结果
//		MyInteger temp = *this;
//
//		//后 递增
//		m_Num++;
//
//		//最后将记录的值给返回
//		return temp;
//	}
//
//private:
//	int m_Num;
//};
//
////重载一下左移运算符、
//ostream& operator<<(ostream& cout, MyInteger myint)
//{
//	cout << myint.m_Num;
//	return cout;
//}
//
//void test01()
//{
//	MyInteger myint;
//
//	cout << ++myint << endl;
//}
//
//void test02()
//{
//	MyInteger myint;
//
//	cout << myint++ << endl;
//	cout << myint << endl;
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


////自己实现递减运算符
//class MyInteger
//{
//	friend ostream& operator<<(ostream& cout, MyInteger myint);
//
//public:
//	MyInteger()
//	{
//		m_Num = 0;
//	}
//
//	//实现前置--的重载
//	MyInteger& operator--()
//	{
//		m_Num--;
//		return *this;
//	}
//
//	//实现后置--;
//	MyInteger operator--(int)
//	{
//		//先 记录本身的值
//		MyInteger temp = *this;
//
//		//后 递减
//		m_Num--;
//
//		//返回原来的值
//		return temp;
//	}
//
//private:
//	int m_Num;
//};
//
////实现左移运算符的重载
//ostream& operator<<(ostream& cout, MyInteger myint)
//{
//	cout << myint.m_Num;
//	return cout;
//}
//
//void test01()
//{
//	MyInteger myint;
//
//	cout << --myint << endl;
//
//	cout << myint << endl;
//}
//
//void test02()
//{
//	MyInteger myint;
//
//	cout << myint-- << endl;
//
//	cout << myint << endl;
//}
//
//int main() {
//
//	//test01();
//
//	test02();
//
//	system("pause");
//
//	return 0;
//}

int main() {




	system("pause");

	return 0;
}