#include <iostream>
using namespace std;

#define PI 3.14

//虚函数没有函数实现部分，子类会根据具体的情况进行实现，
//程序一中求面积的函数必须要有实现部分，即使是个空函数
//并且程序一用到构造函数的继承
//程序二父类Shape类并不用进行构造函数的赋值操作，具体的赋值根据子类的情况而定
class Shape
{
	friend class Rectangle;
	friend class Circle;
	friend class Square;
public:
	//获取面积
	virtual double getS() = 0;

private:
	double length;//长
	double width;//宽
	double r;//半径
};

class Rectangle :public Shape
{
public:
	Rectangle() {}
	Rectangle(double length, double width)
	{
		this->length = length;
		this->width = width;
	}
	double getS()
	{
		return length * width;
	}
};

class Circle :public Shape
{
public:
	Circle(double r)
	{
		this->r = r;
	}
	double getS()
	{
		return PI * r * r;
	}
};

class Square :public Rectangle
{
public:
	Square(double a)
	{
		this->length = a;
	}
	double getS()
	{
		return length * length;
	}
};

int main() {

	//矩形
	Rectangle rec1(3, 4);
	cout << "边长为3和4的矩形面积为：";
	cout << rec1.getS() << endl;

	//圆
	Circle circle(2);
	cout << "半径为2的圆面积为：";
	cout << circle.getS() << endl;

	//正方形
	Square sq(3);
	cout << "边长为3的正方形的面积为：";
	cout << sq.getS() << endl;

	system("pause");
	return 0;
}


//#include <iostream>
//using namespace std;
//#define PI 3.14
////父类Shape
//class Shape
//{
//public:
//	Shape(){}
//	Shape(double length, double width)
//	{
//		this->length = length;
//		this->width = width;
//	}
//	Shape(double r)
//	{
//		this->r = r;
//	}
//	//分别获取长宽和半径
//	double getLength() { return length; }
//	double getWidth() { return width; }
//	double getR() { return r; }
//	//计算面积的函数
//	double getS(){}
//
//private:
//	double r;//半径
//	double length;//长
//	double width;//宽
//};
//
////矩形类
//class Rectangle:public Shape
//{
//public:
//	Rectangle(double length, double width) :Shape(length, width)
//	{
//
//	}
//	Rectangle(double width)
//	{
//		this->a = width;
//	}
//	//获取边长
//	double getA() { return a; }
//	
//	//计算面积的函数
//	double getS()
//	{
//		return Shape::getLength() * Shape::getWidth();
//	}
//private:
//	double a;//长或宽
//};
//
////圆类
//class Circle:public Shape
//{
//public:
//	Circle(double r) :Shape(r)
//	{
//
//	}
//	//计算面积的函数
//	double getS() 
//	{
//		return PI * Shape::getR() * Shape::getR();
//	}
//};
//
////正方形类
//class Square:public Rectangle
//{
//public:
//	Square(double length) :Rectangle(length)
//	{
//
//	}
//	//计算面积的函数
//	double getS()
//	{
//		return Rectangle::getA() * Rectangle::getA();
//	}
//};
//
//int main() {
//
//	//矩形
//	Rectangle rec1(3, 4);
//	cout << "边长为3和4的矩形面积为：";
//	cout << rec1.getS() << endl;
//
//	//圆
//	Circle circle(2);
//	cout << "半径为2的圆面积为：";
//	cout << circle.getS() << endl;
//
//	//正方形
//	Square sq(3);
//	cout << "边长为3的正方形的面积为：";
//	cout << sq.getS() << endl;
//
//	system("pause");
//	return 0;
//}

//class Clock
//{
//public:
//	void setTime(int newH = 0, int newM = 0, int newS = 0);
//	void showTime();
//private:
//	int hour, minute, second;
//};
//
//void Clock::setTime(int newH, int newM, int newS)
//{
//	hour = newH;
//	minute = newM;
//	second = newS;
//}
//
//void Clock::showTime()
//{
//	cout << hour << ":" << minute << ":" << second << endl;
//}
//
//int main() {
//
//	Clock MyClock;
//	cout << "First time set and output:" << endl;
//	MyClock.setTime();
//	MyClock.showTime();
//	cout << "Second time set and output:" << endl;
//	MyClock.setTime(8, 30, 30);
//	MyClock.showTime();
//
//	system("pause");
//	return 0;
//}

////类的定义
///*
//* 语法：class 类名 { 访问权限 : 属性 行为 }
//* 类中属性和行为统一称为成员
//* 属性又称成员属性和成员变量
//* 行为又称成员函数和成员方法
//*/
//
////人类
//class Person
//{
//public:   //外部接口
//	//给Person属性进行赋值
//	void setPerson(string name, int age)   //行为 成员函数
//	{
//		//这里的this->name表示的是调用的时候调用对象的name属性，并不是函数参数
//		//防止name=name编译器会认为第一个name是参数
//		//若不用this，则在给参数和成员变量取名字的时候，起一个不一样的名字
//		this->name = name;
//		this->age = age;
//	}
//	//展示Person的信息    
//    void showPerson()   //行为  成员函数
//	{
//		cout << "姓名：" << this->name << "  年龄：" << this->age << endl;
//	}
//
//private:   //私有权限 
//	string name;//姓名
//	int age;//年龄
//};
//
//////成员函数的类外实现
/////*
////* 语法   返回值类型 类名::函数成员名(参数表)
////*        {
////*             函数体;
////*        }
////*/
//////给Person属性进行赋值
////void Person::setPerson(string name, int age)
////{
////	this->name = name;
////	this->age = age;
////}
//////展示Person的信息    
////void Person::showPerson()
////{
////	cout << "姓名：" << this->name << "  年龄：" << this->age << endl;
////}
//
//int main() {
//
//	//声明一个Person类对象
//	//类名 对象名
//	Person p;
//
//	//通过对象来访问成员
//	//对象.成员名
//	p.setPerson("张三", 20);
//	p.showPerson();
//
//	system("pause");
//	return 0;
//}