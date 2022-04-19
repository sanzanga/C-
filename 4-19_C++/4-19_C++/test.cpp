#include <iostream>
using namespace std;

#define PI 3.14

//�麯��û�к���ʵ�ֲ��֣��������ݾ�����������ʵ�֣�
//����һ��������ĺ�������Ҫ��ʵ�ֲ��֣���ʹ�Ǹ��պ���
//���ҳ���һ�õ����캯���ļ̳�
//���������Shape�ಢ���ý��й��캯���ĸ�ֵ����������ĸ�ֵ����������������
class Shape
{
	friend class Rectangle;
	friend class Circle;
	friend class Square;
public:
	//��ȡ���
	virtual double getS() = 0;

private:
	double length;//��
	double width;//��
	double r;//�뾶
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

	//����
	Rectangle rec1(3, 4);
	cout << "�߳�Ϊ3��4�ľ������Ϊ��";
	cout << rec1.getS() << endl;

	//Բ
	Circle circle(2);
	cout << "�뾶Ϊ2��Բ���Ϊ��";
	cout << circle.getS() << endl;

	//������
	Square sq(3);
	cout << "�߳�Ϊ3�������ε����Ϊ��";
	cout << sq.getS() << endl;

	system("pause");
	return 0;
}


//#include <iostream>
//using namespace std;
//#define PI 3.14
////����Shape
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
//	//�ֱ��ȡ����Ͱ뾶
//	double getLength() { return length; }
//	double getWidth() { return width; }
//	double getR() { return r; }
//	//��������ĺ���
//	double getS(){}
//
//private:
//	double r;//�뾶
//	double length;//��
//	double width;//��
//};
//
////������
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
//	//��ȡ�߳�
//	double getA() { return a; }
//	
//	//��������ĺ���
//	double getS()
//	{
//		return Shape::getLength() * Shape::getWidth();
//	}
//private:
//	double a;//�����
//};
//
////Բ��
//class Circle:public Shape
//{
//public:
//	Circle(double r) :Shape(r)
//	{
//
//	}
//	//��������ĺ���
//	double getS() 
//	{
//		return PI * Shape::getR() * Shape::getR();
//	}
//};
//
////��������
//class Square:public Rectangle
//{
//public:
//	Square(double length) :Rectangle(length)
//	{
//
//	}
//	//��������ĺ���
//	double getS()
//	{
//		return Rectangle::getA() * Rectangle::getA();
//	}
//};
//
//int main() {
//
//	//����
//	Rectangle rec1(3, 4);
//	cout << "�߳�Ϊ3��4�ľ������Ϊ��";
//	cout << rec1.getS() << endl;
//
//	//Բ
//	Circle circle(2);
//	cout << "�뾶Ϊ2��Բ���Ϊ��";
//	cout << circle.getS() << endl;
//
//	//������
//	Square sq(3);
//	cout << "�߳�Ϊ3�������ε����Ϊ��";
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

////��Ķ���
///*
//* �﷨��class ���� { ����Ȩ�� : ���� ��Ϊ }
//* �������Ժ���Ϊͳһ��Ϊ��Ա
//* �����ֳƳ�Ա���Ժͳ�Ա����
//* ��Ϊ�ֳƳ�Ա�����ͳ�Ա����
//*/
//
////����
//class Person
//{
//public:   //�ⲿ�ӿ�
//	//��Person���Խ��и�ֵ
//	void setPerson(string name, int age)   //��Ϊ ��Ա����
//	{
//		//�����this->name��ʾ���ǵ��õ�ʱ����ö����name���ԣ������Ǻ�������
//		//��ֹname=name����������Ϊ��һ��name�ǲ���
//		//������this�����ڸ������ͳ�Ա����ȡ���ֵ�ʱ����һ����һ��������
//		this->name = name;
//		this->age = age;
//	}
//	//չʾPerson����Ϣ    
//    void showPerson()   //��Ϊ  ��Ա����
//	{
//		cout << "������" << this->name << "  ���䣺" << this->age << endl;
//	}
//
//private:   //˽��Ȩ�� 
//	string name;//����
//	int age;//����
//};
//
//////��Ա����������ʵ��
/////*
////* �﷨   ����ֵ���� ����::������Ա��(������)
////*        {
////*             ������;
////*        }
////*/
//////��Person���Խ��и�ֵ
////void Person::setPerson(string name, int age)
////{
////	this->name = name;
////	this->age = age;
////}
//////չʾPerson����Ϣ    
////void Person::showPerson()
////{
////	cout << "������" << this->name << "  ���䣺" << this->age << endl;
////}
//
//int main() {
//
//	//����һ��Person�����
//	//���� ������
//	Person p;
//
//	//ͨ�����������ʳ�Ա
//	//����.��Ա��
//	p.setPerson("����", 20);
//	p.showPerson();
//
//	system("pause");
//	return 0;
//}