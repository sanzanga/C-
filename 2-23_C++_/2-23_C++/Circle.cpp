#include "Circle.h"

//���ð뾶
void Circle::setR(int r)
{
	m_R = r;
}

//��ȡ�뾶
int Circle::getR()
{
	return m_R;
}

//����Բ��
void Circle::setCenter(Point center)
{
	m_Center = center;
}

//��ȡԲ��
Point Circle::getCenter()
{
	return m_Center;
}

////Բ��
//class Circle
//{
//public:
//
//	//���ð뾶
//	void setR(int r)
//	{
//		m_R = r;
//	}
//
//	//��ȡ�뾶
//	int getR()
//	{
//		return m_R;
//	}
//
//	//����Բ��
//	void setCenter(Point center)
//	{
//		m_Center = center;
//	}
//
//	//��ȡԲ��
//	Point getCenter()
//	{
//		return m_Center;
//	}
//
//private:
//	int m_R;//�뾶
//
//	//�����ܿ�������һ������Ϊ�����еĳ�Ա
//	Point m_Center;//Բ��
//};