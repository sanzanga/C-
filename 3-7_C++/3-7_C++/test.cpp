#include <iostream>
#include <string>

using namespace std;

//�������������
class Person
{
	friend ostream& operator<<(ostream& cout, Person& p);

public:
	Person(int a, int b)
	{
		m_A = a;
		m_B = b;
	}

private:

	//���ó�Ա�������� ��������� p.operator<<(cout)  �򻯰汾  p<<cout
	//�������ó�Ա��������<<���������Ϊ�޷�ʵ��cout�����
	/*void operator<<()
	{

	}*/

	int m_A;
	int m_B;
};

//ֻ������ȫ�ֺ����������������
ostream & operator<<(ostream& cout, Person& p)//���� operator<<(cout , p)  ��  cout<<p
{
	cout << "m_A=" << p.m_A << endl;
	cout << "m_B=" << p.m_B;
	return cout;
}

void test01()
{
	Person p(10, 10);
	/*p.m_A = 10;
	p.m_B = 10;*/

	cout << p << endl;
}

int main() {

	test01();


	system("pause");

	return 0;
}

////�Ӻ����������
//class Person
//{
//public:
//	//1����Ա��������+
//	/*Person operator+(Person& p)
//	{
//		Person temp;
//		temp.m_A = this->m_A + p.m_A;
//		temp.m_B = this->m_B + p.m_B;
//		return temp;
//	}*/
//
//	int m_A;
//	int m_B;
//};
//
////2��ȫ�ֺ�������+
//Person operator+(Person& p1, Person& p2)
//{
//	Person temp;
//	temp.m_A = p1.m_A + p2.m_A;
//	temp.m_B = p1.m_B + p2.m_B;
//	return temp;
//}
//
////�������صİ汾
//Person operator+(Person& p1, int a)
//{
//	Person temp;
//	temp.m_A = p1.m_A + a;
//	temp.m_B = p1.m_B + a;
//	return temp;
//}
//
//void test01()
//{
//	Person p1;
//	p1.m_A = 10;
//	p1.m_B = 10;
//	Person p2;
//	p2.m_A = 10;
//	p2.m_B = 10;
//
//	//��Ա�������ر��ʵ���
//	//Person p3 = p1.operator+(p2);
//	
//	//ȫ�ֺ������ر���
//	//Person p3 = operator+(p1, p2);
//
//	Person p3 = p1 + p2;
//	//���������Ҳ���Է�����������
//
//	Person p4 = p1 + 10;
//	//Person + int
//
//	cout << "p3.m_A=" << p3.m_A << endl;
//	cout << "p3.m_B=" << p3.m_B << endl;
//
//	cout << "p4.m_A=" << p4.m_A << endl;
//	cout << "p4.m_B=" << p4.m_B << endl;
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}

////��Ա��������Ԫ
//
//class Building;
//
//class GoodFriend
//{
//public:
//	GoodFriend();
//
//	void visit();//���Է���Building��˽�еĳ�Ա
//	void visit2();//��������Է���
//
//	Building* building;
//};
//
//class Building
//{
//	//���߱����� GoodFriend���µ�visit��Ա������Ϊ����ĺ����ѣ����Է���˽������
//	friend void GoodFriend::visit();
//
//public:
//	Building();
//
//public:
//	string m_SittingRoom;
//
//private:
//	string m_BedRoom;
//};
//
////����ʵ�ֳ�Ա����
//Building::Building()
//{
//	m_SittingRoom = "����";
//
//	m_BedRoom = "����";
//}
//
//GoodFriend::GoodFriend()
//{
//	building = new Building;
//}
//
//void GoodFriend::visit()
//{
//	cout << "visit�������ڷ��ʣ�" << building->m_SittingRoom << endl;
//
//	cout << "visit�������ڷ��ʣ�" << building->m_BedRoom << endl;
//}
//
//void GoodFriend::visit2()
//{
//	cout << "visit2�������ڷ��ʣ�" << building->m_SittingRoom << endl;
//
//	//cout << "visit2�������ڷ��ʣ�" << building->m_BedRoom << endl;
//}
//
//void test01()
//{
//	GoodFriend gf;
//	gf.visit();
//	gf.visit2();
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}

////������Ԫ
//
//class Building;
//
//class GoodFri
//{
//public:
//
//	GoodFri();
//
//	void visit();//�ιۺ��� ����Building�е�����
//
//	Building* building;
//
//};
//
//class Building
//{
//	//GoodFri���Ǳ����ĺ����ѣ����Է��ʱ�����˽�еĶ���
//	friend class GoodFri;
//
//public:
//	Building();
//
//public:
//
//	string m_SittingRoom;
//
//private:
//
//	string m_BedRoom;
//};
//
////����д��Ա����
//Building::Building()
//{
//	m_SittingRoom = "����";
//	m_BedRoom = "����";
//}
//
//GoodFri::GoodFri()
//{
//	//����һ�����������
//	building = new Building;
//}
//
//void GoodFri::visit()
//{
//	cout << "���������ڷ��ʣ� " << building->m_SittingRoom << endl;
//
//	cout << "���������ڷ��ʣ� " << building->m_BedRoom << endl;
//}
//
//void test01()
//{
//	GoodFri gg;
//	gg.visit();
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}