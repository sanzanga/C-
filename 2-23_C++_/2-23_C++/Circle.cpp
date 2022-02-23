#include "Circle.h"

//设置半径
void Circle::setR(int r)
{
	m_R = r;
}

//获取半径
int Circle::getR()
{
	return m_R;
}

//设置圆心
void Circle::setCenter(Point center)
{
	m_Center = center;
}

//获取圆心
Point Circle::getCenter()
{
	return m_Center;
}

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