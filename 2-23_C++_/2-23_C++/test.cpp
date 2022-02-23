#include <iostream>
using namespace std;

#include "Circle.h"
#include "Point.h"

//��װ�������ж�һ��Բ��һ����Ĺ�ϵ

////����
//class Point
//{
//public:
//	//����X
//	void setX(int x)
//	{
//		m_X = x;
//	}
//
//	//��ȡX
//	int getX()
//	{
//		return m_X;
//	}
//
//	//����Y
//	void setY(int y)
//	{
//		m_Y = y;
//	}
//
//	//��ȡY
//	int getY()
//	{
//		return m_Y;
//	}
//
//private:
//	int m_X;
//	int m_Y;
//};

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

//�жϵ��Բ�ù�ϵ
void isInCircle(Circle& c, Point& p)
{
	//��������֮��ľ��� ƽ��
	int distance =
		((c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX())) +
		((c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY()));

	//����뾶��ƽ��
	int rDistance =
		c.getR() * c.getR();

	//�жϹ�ϵ
	if (distance == rDistance)
	{
		cout << "����Բ��" << endl;
	}
	else if (distance > rDistance)
	{
		cout << "����Բ��" << endl;
	}
	else
	{
		cout << "����԰��" << endl;
	}
}

int main() {

	//����һ��Բ
	Circle c;
	c.setR(10);
	Point center;
	center.setX(10);
	center.setY(0);
	c.setCenter(center);

	//����һ����
	Point p;
	//Բ��
	p.setX(10);
	p.setY(10);

	//԰��
	//p.setX(10);
	//p.setY(9);

	//Բ��
	//p.setX(10);
	//p.setY(11);

	//�жϹ�ϵ
	isInCircle(c, p);

	system("pause");

	return 0;

}

////��װ�İ����������������
////�����������
////������������������
////�ֱ���ȫ�ֺ����ͳ�Ա�����ж������������Ƿ����
//
////�������������
//class Cube
//{
//public:
//	
//	//���ó�
//	void setL(int l)
//	{
//		m_L = l;
//	}
//
//	//��ȡ��
//	int getL()
//	{
//		return m_L;
//	}
//
//	//���ÿ�
//	void setW(int w)
//	{
//		m_W = w;
//	}
//
//	//��ȡ��
//	int getW()
//	{
//		return m_W;
//	}
//
//	//���ø�
//	void setH(int h)
//	{
//		m_H = h;
//	}
//
//	//��ȡ��
//	int getH()
//	{
//		return m_H;
//	}
//
//	//��ȡ����������
//	int calculateS()
//	{
//		return 2 * m_L * m_W + 2 * m_L * m_H + 2 * m_W * m_H;
//	}
//
//	//��ȡ����������
//	int calculateV()
//	{
//		return m_L * m_W * m_H;
//	}
//
//	//���ó�Ա�������ж������������Ƿ����
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
//	int m_L;//��
//	int m_W;//��
//	int m_H;//��
//};
//
////�������
//
////�����Ϊ����ȡ���������������
//
////�ֱ���ȫ�ֺ����ͳ�Ա�����ж������������Ƿ����
//
////����ȫ�ֺ���
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
//	//����������Ķ���
//	Cube c1;
//	c1.setL(10);
//	c1.setW(10);
//	c1.setH(10);
//
//	cout << "c1�����Ϊ�� " << c1.calculateS() << endl;
//
//	cout << "c1�����Ϊ�� " << c1.calculateV() << endl;
//
//	//�����ڶ���������
//	Cube c2;
//	c2.setL(10);
//	c2.setW(10);
//	c2.setH(10);
//
//	//����ȫ�ֺ������ж�
//	bool ret = isSame(c1, c2);
//	if (ret)
//	{
//		cout << "c1��c2����ȵ�" << endl;
//	}
//	else
//	{
//		cout << "c1��c2�����" << endl;
//	}
//
//	//���ó�Ա�������ж�
//	ret = c1.isSameByClass(c2);
//	if (ret)
//	{
//		cout << "��Ա�����жϣ� c1��c2����ȵ�" << endl;
//	}
//	else
//	{
//		cout << "��Ա�����жϣ� c1��c2�����" << endl;
//	}
//
//	system("pause");
//
//	return 0;
//
//}


//#include <string>

//��Ա��������Ϊ˽��
//1�������Լ����ƶ�дȨ��
//2������д���Լ�����ݵ���Ч��

//�������
//class Person
//{
//public:
//
//	//д����
//	void setName(string name)
//	{
//		m_Name = name;
//	}
//	//��ȡ����
//	string getName()
//	{
//		return m_Name;
//	}
//
//	//��ȡ���� �ɶ���д ������޸����䣨����ķ�λ������0����150֮�䣩
//	int getAge()
//	{
//		//m_Age = 0;//��ʼ��
//		return m_Age;
//	}
//
//	//��������
//	void setAge(int age)
//	{
//		if (age < 0 || age > 150)
//		{
//			m_Age = 0;
//			cout << "����������䲻������" << endl;
//			return;
//		}
//		m_Age = age;
//	}
//
//	//ֻд
//	void setLover(string lover)
//	{
//		m_Lover = lover;
//	}
//
//private:
//	//����  �ɶ���д
//	string m_Name;
//	//����  ֻ��
//	int m_Age;
//	// ֻд
//	string m_Lover;
//};
//
//int main() {
//
//	Person p;
//	p.setName("����");
//
//	cout << "����Ϊ�� " << p.getName() << endl;
//
//	//p.m_Age = 18;
//	//p.setAge(18);
//	p.setAge(1000);
//	cout << "����Ϊ�� " << p.getAge() << endl;
//
//	p.setLover("zhangsan");
//	//cout << "����Ϊ�� " << p.setLover() << endl;
//	//�ǲ����Է��ʵ�
//
//
//
//	system("pause");
//	return 0;
//}

//class C1
//{
////public:
//	int m_A;//Ĭ��Ȩ����˽��
//};
//
//struct C2
//{
//	int m_A;//Ĭ��Ȩ���ǹ���Ȩ��
//};
//
//int main() {
//
//	//struct��class����
//	//struct Ĭ��Ȩ���� ���� public
//	//class Ĭ��Ȩ����˽�е� private
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

//����Ȩ��
//����
//����Ȩ�� public  ��Ա���ڿ��Է���  ����Ҳ���Է���
//����Ȩ�� protected   ��Ա���ڿ��Է���  ���ⲻ���Է���  ���ӿ��Է��ʸ����еı�������
//˽��Ȩ�� private   ��Ա���ڿ��Է���  ���ⲻ���Է���  ���Ӳ����Է��ʸ��׵�˽������

//class Person
//{
//public:
//	//����Ȩ��
//	string m_Name;//����
//
//protected:
//	//����Ȩ��
//	string m_Car;//����
//
//private:
//	//˽��Ȩ��
//	string m_Password;//���п�����
//
//public:
//	void func()
//	{
//		m_Name = "����";
//		m_Car = "������";
//		m_Password = "123456";
//	}
//};
//
//int main() {
//
//	//ʵ��������Ķ���
//	Person p1;
//
//	p1.m_Name = "lisi";
//	//p1.m_Car = "����";//����Ȩ�޵����ݣ��������Ƿ��ʲ�����
//	//p1.m_Password = "123";//˽��Ȩ�����ݣ�������ʲ���
//
//	system("pause");
//	return 0;
//}