#include <iostream>
#include <string>

using namespace std;

//左移运算符重载
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

	//利用成员函数重载 左移运算符 p.operator<<(cout)  简化版本  p<<cout
	//不会利用成员函数重载<<运算符，因为无法实现cout在左侧
	/*void operator<<()
	{

	}*/

	int m_A;
	int m_B;
};

//只能利用全局函数重载左移运算符
ostream & operator<<(ostream& cout, Person& p)//本质 operator<<(cout , p)  简化  cout<<p
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

////加号运算符重载
//class Person
//{
//public:
//	//1、成员函数重载+
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
////2、全局函数重载+
//Person operator+(Person& p1, Person& p2)
//{
//	Person temp;
//	temp.m_A = p1.m_A + p2.m_A;
//	temp.m_B = p1.m_B + p2.m_B;
//	return temp;
//}
//
////函数重载的版本
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
//	//成员函数重载本质调用
//	//Person p3 = p1.operator+(p2);
//	
//	//全局函数重载本质
//	//Person p3 = operator+(p1, p2);
//
//	Person p3 = p1 + p2;
//	//运算符重载也可以发生函数重载
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

////成员函数做友元
//
//class Building;
//
//class GoodFriend
//{
//public:
//	GoodFriend();
//
//	void visit();//可以访问Building中私有的成员
//	void visit2();//这个不可以访问
//
//	Building* building;
//};
//
//class Building
//{
//	//告诉编译器 GoodFriend类下的visit成员函数作为本类的好朋友，可以访问私有内容
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
////类外实现成员函数
//Building::Building()
//{
//	m_SittingRoom = "客厅";
//
//	m_BedRoom = "卧室";
//}
//
//GoodFriend::GoodFriend()
//{
//	building = new Building;
//}
//
//void GoodFriend::visit()
//{
//	cout << "visit函数正在访问：" << building->m_SittingRoom << endl;
//
//	cout << "visit函数正在访问：" << building->m_BedRoom << endl;
//}
//
//void GoodFriend::visit2()
//{
//	cout << "visit2函数正在访问：" << building->m_SittingRoom << endl;
//
//	//cout << "visit2函数正在访问：" << building->m_BedRoom << endl;
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

////类做友元
//
//class Building;
//
//class GoodFri
//{
//public:
//
//	GoodFri();
//
//	void visit();//参观函数 访问Building中的属性
//
//	Building* building;
//
//};
//
//class Building
//{
//	//GoodFri类是本来的好朋友，可以访问本类中私有的对象
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
////类外写成员函数
//Building::Building()
//{
//	m_SittingRoom = "客厅";
//	m_BedRoom = "卧室";
//}
//
//GoodFri::GoodFri()
//{
//	//创建一个建筑物对象
//	building = new Building;
//}
//
//void GoodFri::visit()
//{
//	cout << "好朋友正在访问： " << building->m_SittingRoom << endl;
//
//	cout << "好朋友正在访问： " << building->m_BedRoom << endl;
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