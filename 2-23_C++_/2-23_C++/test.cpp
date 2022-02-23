#include <iostream>
using namespace std;

#include "Circle.h"
#include "Point.h"

//封装案例：判断一个圆和一个点的关系

////点类
//class Point
//{
//public:
//	//设置X
//	void setX(int x)
//	{
//		m_X = x;
//	}
//
//	//获取X
//	int getX()
//	{
//		return m_X;
//	}
//
//	//设置Y
//	void setY(int y)
//	{
//		m_Y = y;
//	}
//
//	//获取Y
//	int getY()
//	{
//		return m_Y;
//	}
//
//private:
//	int m_X;
//	int m_Y;
//};

////圆类
//class Circle
//{
//public:
//
//	//设置半径
//	void setR(int r)
//	{
//		m_R = r;
//	}
//
//	//获取半径
//	int getR()
//	{
//		return m_R;
//	}
//
//	//设置圆心
//	void setCenter(Point center)
//	{
//		m_Center = center;
//	}
//
//	//获取圆心
//	Point getCenter()
//	{
//		return m_Center;
//	}
//
//private:
//	int m_R;//半径
//
//	//在类总可以让另一个类作为本来中的成员
//	Point m_Center;//圆心
//};

//判断点和圆得关系
void isInCircle(Circle& c, Point& p)
{
	//计算两点之间的距离 平方
	int distance =
		((c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX())) +
		((c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY()));

	//计算半径的平方
	int rDistance =
		c.getR() * c.getR();

	//判断关系
	if (distance == rDistance)
	{
		cout << "点在圆上" << endl;
	}
	else if (distance > rDistance)
	{
		cout << "点在圆外" << endl;
	}
	else
	{
		cout << "点在园内" << endl;
	}
}

int main() {

	//创建一个圆
	Circle c;
	c.setR(10);
	Point center;
	center.setX(10);
	center.setY(0);
	c.setCenter(center);

	//创建一个点
	Point p;
	//圆上
	p.setX(10);
	p.setY(10);

	//园内
	//p.setX(10);
	//p.setY(9);

	//圆外
	//p.setX(10);
	//p.setY(11);

	//判断关系
	isInCircle(c, p);

	system("pause");

	return 0;

}

////封装的案例：设计立方体类
////设计立方体类
////求出立方体的面积和体积
////分别用全局函数和成员函数判断两个立方体是否相等
//
////创建立方体的类
//class Cube
//{
//public:
//	
//	//设置长
//	void setL(int l)
//	{
//		m_L = l;
//	}
//
//	//获取长
//	int getL()
//	{
//		return m_L;
//	}
//
//	//设置宽
//	void setW(int w)
//	{
//		m_W = w;
//	}
//
//	//获取宽
//	int getW()
//	{
//		return m_W;
//	}
//
//	//设置高
//	void setH(int h)
//	{
//		m_H = h;
//	}
//
//	//获取高
//	int getH()
//	{
//		return m_H;
//	}
//
//	//获取立方体的面积
//	int calculateS()
//	{
//		return 2 * m_L * m_W + 2 * m_L * m_H + 2 * m_W * m_H;
//	}
//
//	//获取立方体的体积
//	int calculateV()
//	{
//		return m_L * m_W * m_H;
//	}
//
//	//利用成员函数来判断俩个立方体是否相等
//	bool isSameByClass(Cube& c)
//	{
//		if (m_L == c.getL() && m_W == c.getW() && m_H == c.getH())
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//
//
//private:
//
//	int m_L;//长
//	int m_W;//宽
//	int m_H;//高
//};
//
////设计属性
//
////设计行为，获取立方体的体积和面积
//
////分别用全局函数和成员函数判断两个立方体是否相等
//
////利用全局函数
//bool isSame(Cube &c1, Cube &c2)
//{
//	if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH())
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
//int main() {
//
//	//创建立方体的对象
//	Cube c1;
//	c1.setL(10);
//	c1.setW(10);
//	c1.setH(10);
//
//	cout << "c1的面积为： " << c1.calculateS() << endl;
//
//	cout << "c1的体积为： " << c1.calculateV() << endl;
//
//	//创建第二个立方体
//	Cube c2;
//	c2.setL(10);
//	c2.setW(10);
//	c2.setH(10);
//
//	//利用全局函数来判断
//	bool ret = isSame(c1, c2);
//	if (ret)
//	{
//		cout << "c1和c2是相等的" << endl;
//	}
//	else
//	{
//		cout << "c1和c2不相等" << endl;
//	}
//
//	//利用成员函数来判断
//	ret = c1.isSameByClass(c2);
//	if (ret)
//	{
//		cout << "成员函数判断： c1和c2是相等的" << endl;
//	}
//	else
//	{
//		cout << "成员函数判断： c1和c2不相等" << endl;
//	}
//
//	system("pause");
//
//	return 0;
//
//}


//#include <string>

//成员属性设置为私有
//1、可以自己控制读写权限
//2、对于写可以检测数据的有效性

//设计人类
//class Person
//{
//public:
//
//	//写姓名
//	void setName(string name)
//	{
//		m_Name = name;
//	}
//	//获取姓名
//	string getName()
//	{
//		return m_Name;
//	}
//
//	//获取年龄 可读可写 如果想修改年龄（年龄的方位必须是0——150之间）
//	int getAge()
//	{
//		//m_Age = 0;//初始化
//		return m_Age;
//	}
//
//	//设置年龄
//	void setAge(int age)
//	{
//		if (age < 0 || age > 150)
//		{
//			m_Age = 0;
//			cout << "您输入的年龄不正常！" << endl;
//			return;
//		}
//		m_Age = age;
//	}
//
//	//只写
//	void setLover(string lover)
//	{
//		m_Lover = lover;
//	}
//
//private:
//	//姓名  可读可写
//	string m_Name;
//	//年龄  只读
//	int m_Age;
//	// 只写
//	string m_Lover;
//};
//
//int main() {
//
//	Person p;
//	p.setName("张三");
//
//	cout << "姓名为： " << p.getName() << endl;
//
//	//p.m_Age = 18;
//	//p.setAge(18);
//	p.setAge(1000);
//	cout << "年龄为： " << p.getAge() << endl;
//
//	p.setLover("zhangsan");
//	//cout << "情人为： " << p.setLover() << endl;
//	//是不可以访问的
//
//
//
//	system("pause");
//	return 0;
//}

//class C1
//{
////public:
//	int m_A;//默认权限是私有
//};
//
//struct C2
//{
//	int m_A;//默认权限是公共权限
//};
//
//int main() {
//
//	//struct和class区别
//	//struct 默认权限是 公共 public
//	//class 默认权限是私有的 private
//
//	C1 c1;
//	//c1.m_A = 100;
//
//	C2 c2;
//	c2.m_A = 100;//
//
//	system("pause");
//	return 0;
//}

//访问权限
//三种
//公共权限 public  成员类内可以访问  类外也可以访问
//保护权限 protected   成员类内可以访问  类外不可以访问  儿子可以访问父亲中的保护内容
//私有权限 private   成员类内可以访问  类外不可以访问  儿子不可以访问父亲的私有内容

//class Person
//{
//public:
//	//公共权限
//	string m_Name;//姓名
//
//protected:
//	//保护权限
//	string m_Car;//汽车
//
//private:
//	//私有权限
//	string m_Password;//银行卡密码
//
//public:
//	void func()
//	{
//		m_Name = "张三";
//		m_Car = "拖拉机";
//		m_Password = "123456";
//	}
//};
//
//int main() {
//
//	//实例化具体的对象
//	Person p1;
//
//	p1.m_Name = "lisi";
//	//p1.m_Car = "奔驰";//保护权限的内容，在类外是访问不到的
//	//p1.m_Password = "123";//私有权限内容，类外访问不到
//
//	system("pause");
//	return 0;
//}