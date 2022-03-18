#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//动物类
class Animal
{
public:
	int m_Age;
};

//利用虚继承解决菱形继承的问题
// 继承之前加上关键字virtual变为虚继承
// Animal称为虚基类
//羊类
class Sheep:virtual public Animal{};

//驼类
class Tuo:virtual public Animal{};

//羊驼类
class SheepTuo:public Sheep,public Tuo{};

void test01()
{
	SheepTuo st;
	st.Sheep::m_Age = 18;
	st.Tuo::m_Age = 28;
	//当菱形继承，两个父类拥有相同的数据，需要加以作用域区分
	cout << "st.Sheep::m_Age = " << st.Sheep::m_Age << endl;
	cout << "st.Tuo::m_Age = " << st.Tuo::m_Age << endl;
	cout << "st.m_Age = " << st.m_Age << endl;

	//这份数据我们知道，只要有一分就可以，菱形继承导致数据有两份，资源浪费
}

int main() {

	test01();

	system("pause");
	return 0;
}

////多继承语法
//class Base1
//{
//public:
//	Base1()
//	{
//		m_A = 100;
//	}
//
//	int m_A;
//};
//
//class Base2
//{
//public:
//	Base2()
//	{
//		m_A = 200;
//	}
//
//	int m_A;
//};
//
////子类 需要继承Base1和Base2
////语法： class 子类 : 继承方式 父类1, 继承方式 父类2 ...
//class Son :public Base1, public Base2
//{
//public:
//	Son()
//	{
//		m_C = 300;
//		m_D = 400;
//	}
//
//	int m_C;
//	int m_D;
//};
//
//void test01()
//{
//	Son s;
//	cout << "size of Son = " << sizeof(s) << endl;
//	//当父类中出现同名成员，需要加作用域区分
//	cout << "Base1::m_A = " << s.Base1::m_A << endl;
//	cout << "Base2::m_A = " << s.Base2::m_A << endl;
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	int a = 2, b = -1, c = 2;
//	if (a < b)
//		if (b < 0) c = 0;
//		else c = c + 1;
//	cout << c << endl;
//
//	system("pause");
//	return 0;
//}

////继承中的同名静态成员处理方式
//class Base
//{
//public:
//	static int m_A;
//	static void func()
//	{
//		cout << "Base---static void func()" << endl;
//	}
//	static void func(int a)
//	{
//		cout << "Base---static void func(int a)" << endl;
//	}
//};
//
//int Base::m_A = 100;
//
//class Son :public Base
//{
//public:
//	static int m_A;
//	static void func()
//	{
//		cout << "Son---static void func()" << endl;
//	}
//};
//
//int Son::m_A = 200;
//
////同名静态成员属性
//void test01()
//{
//	//1、通过对象访问
//	cout << "通过对象访问" << endl;
//	Son s;
//	cout << "Son 下 m_A = " << s.m_A << endl;
//	cout << "Base 下 m_A = " << s.Base::m_A << endl;
//	//2、通过类名来访问
//	cout << "通过类名来访问" << endl;
//	cout << "Son 下 m_A  = " << Son::m_A << endl;
//	//第一个::代表通过类名的方式访问 第二个::代表访问父类作用域下
//	cout << "Base 下 m_B = " << Son::Base::m_A << endl;
//}
//
////同名的静态成员函数
//void test02()
//{
//	//1、通过对象来访问
//	cout << "通过对象来访问" << endl;
//	Son s;
//	s.func();
//	s.Base::func();
//	//2、通过类名来访问
//	cout << "通过类名来访问" << endl;
//	Son::func();
//	Son::Base::func();
//
//	//子类出现和父类同名静态成员函数，也会隐藏父类中所有同名成员函数
//	//如果想访问父类中被隐藏的同名成员，需要加作用域
//	Son::Base::func(100);
//}
//
//int main() {
//
//	//test01();
//	test02();
//
//	system("pause");
//	return 0;
//}

////继承中同名成员处理方式
//class Base
//{
//public:
//	Base()
//	{
//		m_A = 100;
//	}
//
//	void func()
//	{
//		cout << "Base---func()调用" << endl;
//	}
//	void func(int a)
//	{
//		cout << "Base---func(int a)调用" << endl;
//	}
//
//	int m_A = 100;
//};
//
//class Son :public Base
//{
//public:
//	Son()
//	{
//		m_A = 200;
//	}
//
//	void func()
//	{
//		cout << "Son---func（）调用" << endl;
//	}
//
//	int m_A;
//};
//
////同名成员属性的处理方式
//void test01()
//{
//	Son s;
//	cout << "Son下m_A = " << s.m_A << endl;
//	//如果通过子类对象 访问到父类中同名成员，需要加作用域
//	cout << "Base下m_A = " << s.Base::m_A << endl;
//}
//
////同名成员函数处理方式
//void test02()
//{
//	Son s;
//	s.func();//直接调用 调用的子类中的同名成员
//	s.Base::func();
//
//	//如果子类中出现和父类同名的成员函数，子类的同名成员会隐藏掉父类中所有同名成员函数
//	//如果想访问到父类中被隐藏的同名成员函数，需要加上作用域
//	s.Base::func(100);
//}
//
//int main() {
//
//	//test01();
//	test02();
//
//	system("pause");
//	return 0;
//}

////继承中构造和析构函数的顺序
//class Base
//{
//public:
//	Base()
//	{
//		cout << "Base构造函数" << endl;
//	}
//	~Base()
//	{
//		cout << "Base析构函数" << endl;
//	}
//};
//
//class Son :public Base
//{
//public:
//	Son()
//	{
//		cout << "Son构造函数" << endl;
//	}
//	~Son()
//	{
//		cout << "Son析构函数" << endl;
//	}
//};
//
//void test01()
//{
//	//继承中的构造和析构的顺序如下：
//	// 先构造父类，在构造子类
//	// 析构的顺序和构造相反
//	//Base b;
//	Son s;
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}

////继承中的对象模型
//class Base
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//class Son :public Base
//{
//public:
//	int m_D;
//};
//
//void test01()
//{
//	//16
//	//父类中所有非静态成员属性都会被子类继承下去
//	//父类中私有成员属性是被编译器隐藏了，因此是访问不到，但是确实被继承下去了
//	cout << "size of Son = " << sizeof(Son) << endl;
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}

////继承方式
////公共继承
//class Base1
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//class Son1 :public Base1
//{
//public:
//	void func()
//	{
//		m_A = 10;//父类中的公共权限成员 到子类依然可以是公共权限
//		m_A = 10;//父类中的保护权限成员 到子类依然是保护权限
//		//m_C = 10;//父类中的私有权限成员 子类访问不到
//	}
//};
//
//void test01()
//{
//	Son1 s1;
//	s1.m_A = 100;
//	//s1.m_B = 100;//到了Son1中m_B是保护权限，类外是访问不到的
//}
//
////保护继承
//class Base2
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//class Son2 :protected Base2
//{
//public:
//	void func()
//	{
//		m_A = 100;//父类中的公共成员，到子类变成了保护权限
//		m_B = 100;//父类中的保护成员，到子类变成类保护权限
//		//m_C = 100;//父类中的私有成员，子类访问不到
//	}
//};
//
//void test02()
//{
//	Son2 s2;
//	//s2.m_A = 1000;//在Son2中m_A变成了保护权限，因此在类外是访问不到的
//	//s2.m_B = 1000;//在Son2中m_B依旧是保护权限，因此在类外是访问不到的
//}
//
////私有继承
//class Base3
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//class Son3 :private Base3
//{
//public:
//	void func()
//	{
//		m_A = 100;//父类中的公共成员，到了子类变成了私有成员
//		m_B = 100;//父类中的保护成员，到了子类变成了私有成员
//		//m_C = 100;//父类中的私有成员，子类访问不到
//	}
//};
//
//class GrandSon3 :public Son3
//{
//public:
//	void func()
//	{
//		//m_A = 1000;//到了Son3中m_A就变成了私有成员，即使现在的类继承Son3，也是访问不到的
//		//m_B = 1000;//到了Son3中m_A就变成了私有成员，即使现在的类继承Son3，也是访问不到的
//	}
//};
//
//void test03()
//{
//	Son3 s1;
//	//s1.m_A = 1000;//到了Son3就变成了私有成员，类外访问不到
//	//s1.m_B = 1000;//到了Son3就变成了私有成员，类外访问不到
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	cout << "请输入温度值和单位:";
//	int a;
//	char ch;
//	cin >> a >> ch;
//	if (ch == 'F')
//	{
//		if (a > 500 || a < -500)
//			cout << "数据输入有误!" << endl;
//		else
//		{
//			cout << a << ch << "=" << (5.0 / 9 * (a - 32)) << "C" << endl;
//		}
//	}
//	else if (ch == 'C')
//	{
//		if (a > 200 || a < -200)
//			cout << "数据输入有误!" << endl;
//		else
//			cout << a << ch << "=" << (a * 9.0 / 5 + 32) << "F" << endl;
//	}
//	else
//		cout << "输入错误!" << endl;
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	int a, b, c;
//	cin >> a >> b >> c;
//	if (a == 0)
//		cout << "该方程不是一元二次方程" << endl;
//	else
//	{
//		double p = (double)b * b - 4.0 * a * c;
//		if (p > 0)
//			cout <<((-b + sqrt(p)) / (2.0 * a)) << " " << ((-b - sqrt(p)) / (2.0 * a)) << endl;
//		else if (p == 0)
//			cout << (-b / (2.0 * a)) << endl;
//		else
//			cout << ((-b + sqrt(-b)) / (2.0 * a)) << "i " << ((-b - sqrt(-b)) / (2.0 * a)) << "i" << endl;
//	}
//
//	system("pause");
//	return 0;
//}