#include <iostream>
using namespace std;

class Base {

private:
    int x;
    int y;

public:
    Base(int x, int y)
    {
        this->x = x;
        this->y = y;
    }

    int getX()
    {
        return x;
    }

    int getY() 
    {
        return y;
    }

    void calculate()
    {
        cout << getX() * getY() << endl;
    }

};

class Sub : public Base
{
    // write your code here......
public:
    Sub(int x, int y) :Base(x, y)
    {

    }
    void calculate()
    {
        if (getY() == 0)
            cout << "Error" << endl;
        else
            cout << getX() / getY() << endl;
    }
};

int main() {

    int x, y, z;
    cin >> x;
    cin >> y;
    Sub sub(x, y);
    sub.calculate();

    return 0;
}

//#include <iostream>
//using namespace std;
//
//class BaseCalculator
//{
//public:
//    int m_A;
//    int m_B;
//    // write your code here......
//    virtual int getResult() = 0;
//};
//
//// 加法计算器类
//class AddCalculator : public BaseCalculator
//{
//    // write your code here......
//    int getResult()
//    {
//        return m_A + m_B;
//    }
//};
//
//// 减法计算器类
//class SubCalculator : public BaseCalculator
//{
//    // write your code here......
//    int getResult()
//    {
//        return m_A - m_B;
//    }
//};
//
//
//int main() {
//
//    BaseCalculator* cal = new AddCalculator;
//    cal->m_A = 10;
//    cal->m_B = 20;
//    cout << cal->getResult() << endl;
//    delete cal;
//
//    cal = new SubCalculator;
//    cal->m_A = 20;
//    cal->m_B = 10;
//    cout << cal->getResult() << endl;
//    delete cal;
//
//    return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//class rectangle
//{
//private:
//	int length, width;
//public:
//	rectangle(int x, int y)
//	{
//		length = x;
//		width = y;
//	}
//	void set(int x, int y)
//	{
//		length = x;
//		width = y;
//	}
//	int getlength() {
//		return length;
//	}
//	int getwidth() 
//	{
//		return width;
//	}
//	// write your code here...
//	virtual int getval()
//	{
//		return width * length;
//	}
//};
//class cuboid :public rectangle 
//{
//private:
//	int height;
//public:
//	cuboid(int x, int y, int z) :rectangle(x, y)
//	{
//		height = z;
//	}
//	// write your code here...
//	int getval()
//	{
//		return getwidth() * getlength() * height;
//	}
//};
//int main() {
//	int x, y, z;
//	cin >> x >> y >> z;
//	cuboid a(x, y, z);
//	rectangle b(x, y);
//
//	rectangle* p = &b;
//	cout << p->getval() << '\n';
//
//	p = &a;
//	cout << p->getval();
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int func(int n)
//{
//    if (n == 1)
//    {
//        return 1;
//    }
//    else if (n == 2)
//    {
//        return 2;
//    }
//    else
//    {
//        return func(n - 1) + func(n - 2);
//    }
//}
//
//int main() {
//
//    int n;
//    int num = 0;
//    cin >> n;
//
//    num = func(n);
//
//    cout << num << endl;
//
//    system("pause");
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//long long func(long long x, int i)
//{
//    if (i == 1)
//    {
//        return x % 10;
//    }
//    else
//    {
//        return x % 10 + func(x / 10, i - 1) * 10;
//    }
//}
//
//int main() {
//
//    long long x;
//    int i;
//    cin >> x >> i;
//
//    long long ret = func(x, i);
//
//    cout << ret << endl;
//
//    system("pause");
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//int Hermite(int a, int b)
//{
//    if (a == 0)
//    {
//        return 1;
//    }
//    else if (a == 1)
//    {
//        return 2 * a;
//    }
//    else
//    {
//        return 2 * b * Hermite(a - 1, b) - 2 * (a - 1) * Hermite(a - 2, b);
//    }
//}
//
//int main() {
//    int a, b;
//    cin >> a >> b;
//
//    int ret = Hermite(a, b);
//
//    cout << ret << endl;
//
//    system("pause");
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//void func(long long num)
//{
//    if (num >= 0 && num <= 9)
//    {
//        cout << num;
//    }
//    else
//    {
//        cout << num % 10;
//        func(num / 10);
//    }
//}
//
//int main() {
//
//    long long num;
//    cin >> num;
//    func(num);
//
//    system("pause");
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//void func(long long num)
//{
//    if (num >= 0 && num <= 9)
//    {
//        cout << num << endl;
//    }
//    else
//    {
//        cout << num % 10 << endl;
//        func(num / 10);
//    }
//}
//
//int main() {
//
//    long long num = 0;
//    func(num);
//
//    system("pause");
//    return 0;
//}

//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int main() {
//
//    int n;
//    int arr[100];
//    cin >> n;
//    for (int i = 0; i < n; i++)
//    {
//        cin >> arr[i];
//    }
//    int num = 0;
//    for (int i = 0; i < n; i++)
//    {
//        bool flag = true;
//        for (int j = 1; j <= sqrt(arr[i]); j++)
//        {
//            if (j * j == arr[i])
//            {
//                flag = false;
//                break;
//            }
//        }
//        if (flag)
//        {
//            int num2 = arr[i];
//            if (arr[i] > num)
//            {
//                int temp = num;
//                num = num2;
//                num2 = temp;
//            }
//        }
//    }
//    cout << num << endl;
//
//    system("pause");
//    return 0;
//}

//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int main() {
//
//    int n;
//    int arr[100];
//    cin >> n;
//    for (int i = 0; i < n; i++)
//    {
//        cin >> arr[i];
//    }
//    int num = 0;
//    for (int i = 0; i < n; i++)
//    {
//        bool flag = true;
//        for (int j = 1; j <= sqrt(arr[i]); j++)
//        {
//            if (j * j == arr[i])
//            {
//                flag = false;
//                break;
//            }
//        }
//        if (flag)
//        {
//            int num2 = arr[i];
//            if (arr[i] > num)
//            {
//                int temp = num;
//                num = num2;
//                num2 = temp;
//            }
//        }
//    }
//    cout << num << endl;
//
//    system("pause");
//    return 0;
//}

//#include <iostream>
//#include <string>
//#include <iomanip>
//#include <cstdio>
//using namespace std;
//
//int main() {
//
//    long num;
//    float a, b, c;
//    scanf("%ld;%f,%f,%f", &num, &a, &b, &c);
//    cout << "The each subject score of No. " << num << " is " << fixed << setprecision(2)
//        << a << ", " << b << ", " << c << "." << endl;
//
//    system("pause");
//    return 0;
//}

//#include <iostream>
//#include <string>
//#include <iomanip>
//using namespace std;
//
//int main() {
//
//    long num;
//    double a, b, c;
//    cin >> num;
//    cin >> a >> b >> c;
//
    /*cout << "The each subject score of No. " << num << " is " << fixed << setprecision(2)
        << a << ", " << b << ", " << c << "." << endl;*/
//
//    system("pause");
//    return 0;
//}

//#include <string>
//using namespace std;
//class Person
//{
//public:
//	Person(int age)
//	{
//		//在堆区开辟空间存储年龄的大小
//		this->age = new int(age);
//	}
//	//析构函数 
//	/*语法：~类名() {}
//	* 1、析构函数没有返回值，也不写void 
//	* 2、析构函数名称与类名相同，前面加~
//	* 3、析构函数不可以有参数，不可以发生重载
//	*/
//	~Person()
//	{
//		//释放堆区开辟的空间
//		if (this->age != NULL)
//		{
//			delete this->age;
//			this->age = NULL;
//		}
//	}
//
//private:
//	int* age;//年龄
//};

//class Person
//{
//public:
//	//利用有参构造函数对成员属性进行赋值
//	Person(string name, int age)
//	{
//		this->name = name;
//		this->age = age;
//	}
//	/* 拷贝构造函数语法：类名（类名 &对象名）*/
//	//声明
//	Person(Person& p);
//
//private:
//	string name;//姓名
//	int age;//年龄
//};
////实现
//Person::Person(Person& p)
//{
//	name = p.name;
//	age = p.age;
//}

////构造函数语法：类名{}
///*
//* 注意：
//* 1、构造函数没有返回值，void也不写
//* 2、构造函数名称和类的名称一样
//* 3、构造函数可以有参数，也可以发生重载
//*/
//
//class Person
//{
//public:
//	/*若没有提供构造函数，编译器会提供一个空实现的构造函数。无参构造函数，也叫默认构造函数*/
//	//Person(){}
//	
//	//对成员属性进行赋值  构造函数
//	Person(string name,int age)
//	{
//		this->name = name;
//		this->age = age;
//	}
//
//private:
//	string name;//姓名
//	int age;//年龄
//};

//int main() {
//
//	Person p(10);
//	
//	//Person p;//默认构造函数调用
//	///*注意在调用默认构造函数的时候，不要加()，因为编译器会认为是一个函数的声明，不会认为是在创建对象*/
//
//	//Person p1(10);//括号法调用有参构造函数
//	//Person p2 = Person(10);//显示法调用有参构造函数
//	//Person p3 = 10;//隐式法调用构造函数  相当于写了Person p3 = Person(10)
//	///*Person(10)是一种匿名对象，其特点是：执行结束后，系统会立即回收掉匿名对象
//	//注意：不要利用拷贝构造函数初始化匿名对象 Person (p3),编译器会当成 Person p3 = Person p3 是一种对象声明*/
//
//	//Person p3(p2);//括号法调用拷贝构造函数
//	//Person p3 = Person(p2);//显示法调用拷贝构造函数
//	//Person p3 = p2;//隐式法调用拷贝构造函数 相当于写了 Person p3 = Person(p1);
//
//
//
//
//	system("pause");
//	return 0;
//}