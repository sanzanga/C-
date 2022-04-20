#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int arr[3];
	int flag[3];
	//赋值
	for (int i = 0; i < 3; i++){
		int a, b, c;
		cout << "请输入第" << i + 1 << "个学生三科的成绩：";
		cin >> a >> b >> c;
		arr[i] = a + b + c;
		flag[i] = arr[i];
	}
	//排序 降序
	for (int i = 0; i < 2; i++){
		for (int j = 0; j < 2 - i; j++){
			if (flag[j] < flag[j + 1]) {
				int temp = flag[j];
				flag[j] = flag[j + 1];
				flag[j + 1] = temp;
			}
		}
	}
	//比较
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (arr[i] == flag[j]) {
				cout << "第" << i + 1 << "名学生总成绩为：" << arr[i] << " 第" << j + 1 << "名" << endl;
				break;
			}
		}
	}


	/*if (arr[0] == arr[1]){
		if (arr[0] == arr[2]) {
			flag[0] = 1; flag[1] = 1; flag[2] = 1;
		}
		else if (arr[0] > arr[2]) {
			flag[0] = 1; flag[1] = 1; flag[2] = 2;
		}
		else {
			flag[0] = 2; flag[1] = 2; flag[2] = 1;
		}
	}
	else if(arr[0] > arr[1])*/

	system("pause");
	return 0;
}

//int main() {
//
//	int a;
//	cin >> a;
//	while (a)
//	{
//		bool flag = true;
//		for (int i = 2; i <= sqrt(a); i++)
//		{
//			if (a % i == 0)
//			{
//				flag = false;
//				break;
//			}
//		}
//		if (flag)
//		{
//			cout << a << endl;
//			break;
//		}
//		a++;
//	}
//
//	system("pause");
//	return 0;
//}

//#include <iostream>
//using namespace std;
//#define PI 3.14
////父类Shape
//class Shape
//{
//public:
//	Shape()
//	{
//		cout << "Shape构造函数" << endl;
//	}
//	virtual double getS(double length, double width);
//	virtual double getS(double r);
//	~Shape()
//	{
//		cout << "Shape的析构函数" << endl;
//	}
//};
//
//class Rectangle :public Shape
//{
//public:
//	Rectangle()
//	{
//		cout << "Rectangle的构造函数" << endl;
//	}
//	~Rectangle()
//	{
//		cout << "rectangle的析构函数" << endl;
//	}
//};
//
//class Circle :public Shape
//{
//public:
//	Circle()
//	{
//		cout << "Circle的构造函数" << endl;
//	}
//	~Circle()
//	{
//		cout << "Circle的析构函数" << endl;
//	}
//};
//
//class Square :public Rectangle
//{
//public:
//	Square()
//	{
//		cout << "Square的构造函数" << endl;
//	}
//
//	~Square()
//	{
//		cout << "Square的析构函数" << endl;
//	}
//};
//
//double Shape::getS(double length, double width)
//{
//	return length * width;
//}
//double Shape::getS(double r)
//{
//	return PI * r * r;
//}
//
//int main() {
//
//	cout << "矩形：" << endl;
//	Rectangle re;
//	cout << "边长为2和1的矩形面积为：" << re.getS(1, 2) << endl;
//	cout << "--------------------------" << endl;
//	cout << "圆形：" << endl;
//	Circle c;
//	cout << "半径为2的圆的面积为：" << c.getS(2) << endl;
//	cout << "--------------------------" << endl;
//	cout << "正方形：" << endl;
//	Square sq;
//	cout << "边长为2的正方形面积为：" << sq.getS(2, 2) << endl;
//	system("pause");
//	cout << "--------------------------" << endl;
//	return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//class Mammal
//{
//public:
//	virtual void move() = 0;
//	virtual void eat() = 0;
//	virtual void speak() = 0;
//	virtual void dispaly()
//	{
//		cout << "展示信息" << endl;
//	}
//};
//
//class Dog :public Mammal
//{
//public:
//	Dog(string name,int age,double weight)
//	{
//		this->name = name;
//		this->age = age;
//		this->weight = weight;
//	}
//
//	void move()
//	{
//		cout << "小狗正在移动" << endl;
//	}
//	void eat()
//	{
//		cout << "小狗正在吃东西" << endl;
//	}
//	void speak()
//	{
//		cout << "小狗正在叫" << endl;
//	}
//	void dispaly()
//	{
//		cout << "小狗：" << endl;
//		cout << "姓名：" << this->name << "  年龄:" << this->age << "  重量：" << this->weight << endl;
//	}
//
//private:
//	string name;//姓名
//	int age;//年龄
//	double weight;//重量
//};
//
//class Cat :public Mammal
//{
//public:
//	Cat(string name, int age, double weight)
//	{
//		this->name = name;
//		this->age = age;
//		this->weight = weight;
//	}
//
//	void move()
//	{
//		cout << "小猫正在移动" << endl;
//	}
//	void eat()
//	{
//		cout << "小猫正在吃东西" << endl;
//	}
//	void speak()
//	{
//		cout << "小猫正在叫" << endl;
//	}
//	void dispaly()
//	{
//		cout << "小猫：" << endl;
//		cout << "姓名：" << this->name << "  年龄:" << this->age << "  重量：" << this->weight << endl;
//	}
//
//private:
//	string name;//姓名
//	int age;//年龄
//	double weight;//重量
//};
//
//class Horse :public Mammal
//{
//public:
//	Horse(string name, int age, double weight)
//	{
//		this->name = name;
//		this->age = age;
//		this->weight = weight;
//	}
//
//	void move()
//	{
//		cout << "马正在移动" << endl;
//	}
//	void eat()
//	{
//		cout << "马正在吃东西" << endl;
//	}
//	void speak()
//	{
//		cout << "马正在叫" << endl;
//	}
//	void dispaly()
//	{
//		cout << "马：" << endl;
//		cout << "姓名：" << this->name << "  年龄:" << this->age << "  重量：" << this->weight << endl;
//	}
//
//private:
//	string name;//姓名
//	int age;//年龄
//	double weight;//重量
//};
//
//
//class Pig :public Mammal
//{
//public:
//	Pig(string name, int age, double weight)
//	{
//		this->name = name;
//		this->age = age;
//		this->weight = weight;
//	}
//
//	void move()
//	{
//		cout << "小猪正在移动" << endl;
//	}
//	void eat()
//	{
//		cout << "小猪正在吃东西" << endl;
//	}
//	void speak()
//	{
//		cout << "小猪正在叫" << endl;
//	}
//	void dispaly()
//	{
//		cout << "小猪：" << endl;
//		cout << "姓名：" << this->name << "  年龄:" << this->age << "  重量：" << this->weight << endl;
//	}
//
//private:
//	string name;//姓名
//	int age;//年龄
//	double weight;//重量
//};
//
//int main() {
//
//	Mammal* ma1 = new Dog("小狗", 2, 20);
//	Mammal* ma2 = new Cat("小猫", 3, 29);
//	Mammal* ma3 = new Horse("小马", 5, 30);
//	Mammal* ma4 = new Pig("小猪", 3, 30);
//	Mammal* maArr[4] = { ma1,ma2,ma3,ma4 };
//
//	for (int i = 0; i < 4; i++)
//	{
//		maArr[i]->dispaly();
//		maArr[i]->eat();
//		maArr[i]->move();
//		maArr[i]->speak();
//	}
//
//	delete ma1, ma2, ma3, ma4;
//
//	system("pause");
//	return 0;
//}

//#include <iostream>
//using namespace std;
//#define pi 3.14
//class shape
//{
//public:
//	//获取面积
//	virtual double gets() = 0;
//};
//
//class rectangle:public shape
//{
//public:
//	rectangle(){}
//	rectangle(double length, double width)
//	{
//		this->length = length;
//		this->width = width;
//	}
//	virtual double gets()
//	{
//		return this->length * this->width;
//	}
//
//private:
//	double length;//长
//	double width;//宽
//};
//
//class circle:public shape
//{
//public:
//	circle(double r)
//	{
//		this->r = r;
//	}
//	double gets()
//	{
//		return pi * this->r * this->r;
//	}
//
//private:
//	double r;//半径
//};
//
//class square:public rectangle
//{
//public:
//	square(double a)
//	{
//		this->length = a;
//	}
//	double gets()
//	{
//		return this->length * this->length;
//	}
//private:
//	double length;//长
//};
//
//int main() {
//
//	//矩形
//	rectangle rec1(3, 4);
//	cout << "边长为3和4的矩形面积为：";
//	cout << rec1.gets() << endl;
//
//	//圆
//	circle circle(2);
//	cout << "半径为2的圆面积为：";
//	cout << circle.gets() << endl;
//
//	//正方形
//	square sq(3);
//	cout << "边长为3的正方形的面积为：";
//	cout << sq.gets() << endl;
//
//	system("pause");
//	return 0;
//}


//#include <iostream>
//using namespace std;
//#define PI 3.14
//
////虚函数没有函数实现部分，子类会根据具体的情况进行实现，
////程序一中求面积的函数必须要有实现部分，即使是个空函数
////并且程序一用到构造函数的继承
////程序二父类Shape类并不用进行构造函数的赋值操作，具体的赋值根据子类的情况而定
//class Shape
//{
//	friend class Rectangle;
//	friend class Circle;
//	friend class Square;
//public:
//	//获取面积
//	virtual double getS();
//
//private:
//	double length;//长
//	double width;//宽
//	double r;//半径
//};
//
//class Rectangle:public Shape
//{
//public:
//	Rectangle(){}
//	Rectangle(double length, double width)
//	{
//		this->length = length;
//		this->width = width;
//	}
//	double getS()
//	{
//		return this->length * this->width;
//	}
//};
//
//class Circle:public Shape
//{
//public:
//	Circle(double r)
//	{
//		this->r = r;
//	}
//	double getS()
//	{
//		return PI * this->r * this->r;
//	}
//};
//
//class Square:public Rectangle
//{
//public:
//	Square(double a)
//	{
//		this->length = a;
//	}
//	double getS()
//	{
//		return this->length * this->length;
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

//#include <iostream>
//using namespace std;
//#define PI 3.14
////父类Shape
//class Shape
//{
//public:
//	Shape()
//	{
//		cout << "Shape构造函数" << endl;
//	}
//	double getS(double length, double width)
//	{
//		return length * width;
//	}
//	double getS(double r)
//	{
//		return PI * r * r;
//	}
//	~Shape()
//	{
//		cout << "Shape的析构函数" << endl;
//	}
//};
//
//class Rectangle:public Shape
//{
//public:
//	Rectangle()
//	{
//		cout << "Rectangle的构造函数" << endl;
//	}
//	~Rectangle()
//	{
//		cout << "rectangle的析构函数" << endl;
//	}
//};
//
//class Circle:public Shape
//{
//public:
//	Circle()
//	{
//		cout << "Circle的构造函数" << endl;
//	}
//	~Circle()
//	{
//		cout << "Circle的析构函数" << endl;
//	}
//};
//
//class Square:public Rectangle
//{
//public:
//	Square()
//	{
//		cout << "Square的构造函数" << endl;
//	}
//
//	~Square()
//	{
//		cout << "Square的析构函数" << endl;
//	}
//};
//
//int main() {
//
//	cout << "矩形：" << endl;
//	Rectangle re;
//	cout << "边长为2和1的矩形面积为：" << re.getS(1, 2) << endl;
//	cout << "--------------------------" << endl;
//	cout << "圆形：" << endl;
//	Circle c;
//	cout << "半径为2的圆的面积为：" << c.getS(2) << endl;
//	cout << "--------------------------" << endl;
//	cout << "正方形：" << endl;
//	Square sq;
//	cout << "边长为2的正方形面积为：" << sq.getS(2,2) << endl;
//	system("pause");
//	cout << "--------------------------" << endl;
//	return 0;
//}

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

//#include <iostream> 
//using namespace std;
///***************定义Employee类********************/
//class Employee
//{
//public:
//	Employee(char* theName, float thePayRate);
//	char* getName() const;
//	float getPayRate() const;
//	float pay(float hoursWorked) const;
//protected:
//	char* name; //雇员名称
//	float payRate; //薪水等级
//};
//Employee::Employee(char* theName, float thePayRate)
//{
//	name = theName;
//	payRate = thePayRate;
//}
//char* Employee::getName() const
//{
//	return name;
//}
//float Employee::getPayRate() const
//{
//	return payRate;
//}
//float Employee::pay(float hoursWorked) const
//{
//	return hoursWorked * payRate;
//}
///***** 管理人员是普通雇员的一种 定义Manager类*************/
//class Manager : public Employee
//{
//public:
//	/*参数isSalaried代表付薪方式：true 付薪固定工资，false按小时付薪*/
//	Manager(char* theName, float thePayRate, bool isSalaried);
//	bool getSalaried() const;
//	float pay(float hoursWorked) const;
//protected:
//	bool salaried;
//};
//Manager::Manager(char* theName, float thePayRate, bool isSalaried) : Employee(theName, thePayRate)
//{
//	salaried = isSalaried;
//}
//bool Manager::getSalaried() const
//{
//		return salaried;
//}
//float Manager::pay(float hoursWorked) const
//{
//	if (salaried)
//		return payRate;
//	/* 否则*/
//	return Employee::pay(hoursWorked);
//}
///****主管人员是管理人员的一种 定义Supervisor类**********/
//class Supervisor : public Manager
//{
//public:
//	Supervisor(char* theName, float thePayRate, float theBouns) :Manager(theName,
//		thePayRate, true), bouns(theBouns) {}
//	float getBouns() const { return bouns; }
//	float pay(float hoursWorked) const { return payRate + bouns; }
//protected:
//	float bouns;
//};
///*类型兼容规则：指在需要基类对象的任何地方，都可以使用公有派生类
//的对象来替代。此时，可调用的均为基类成员。*/
///***************定义普通函数Display 引用********************/
//void Display(Employee& ptr, float pay)
//{
//	cout << "name:" << ptr.getName() << endl;
//	cout << "Pay:" << ptr.pay(pay) << endl;
//}
///***************定义普通函数Display 指针********************/
//void Display(Employee* ptr, float pay)
//{
//	cout << "name:" << ptr->getName() << endl;
//	cout << "Pay:" << ptr->pay(pay) << endl;
//}
///*(1)普通雇员类是所有类的基类，描述了雇员的一些基本信息；
//(2)管理人员类从普通雇员类派生，管理人员的付薪方式与普通雇员可能同，
//所以该类添加了一个成员变量标识这种差异(salaried)，并覆盖了基类的pay()函数。
//(3)主管类从管理人员类派生，主管人员是管理人员的一种，他们不仅支付固定薪水，而且还有奖金。所
//以在主管类种添加了bonus成员，保存他们的奖金数额，
//并覆盖了管理人员类的pay()函数重新计算工资。*/
//void main()
//{
//	Employee e("Jack", 50.00);
//	Manager m("Tom", 6000, true);
//		Supervisor * Sptr = new Supervisor("Tanya", 8000.00, 5000.00); //动态申请空间
//	cout << "Name:" << e.getName() << endl;
//	cout << "Pay:" << e.pay(60) << endl; //设每月工作小时
//	cout << "Name:" << m.getName() << endl;
//	cout << "Pay:" << m.pay(40) << endl;
//	cout << "Name:" << Sptr->getName() << endl;
//	cout << "Pay:" << Sptr->pay(40) << endl; //参数这里不起作用
//	cout << "/*********类型兼容规则测试********************/" << endl;
//	/*三个Display，实质上调用的均是Employee的pay函数，
//	因此，在显示m、*Sptr的对象内容时，出现了与上面不符的结果。*/
//	Display(e, 60);
//	Display(m, 40);
//	Display(Sptr, 40);
//}