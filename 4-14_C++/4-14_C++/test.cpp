#include <iostream>
using namespace std;
#include <iomanip>
#include <cmath>

//系统函数应用举例

const double PI = 3.14159265358979;

int main() {

	double angle;
	cout << "Please enter an angle: ";
	cin >> angle;//输入角度

	double radian = angle * PI / 180;//转化为弧度制
	cout << "sin(" << angle << ")=" << sin(radian) << endl;
	cout << "cos(" << angle << ")=" << cos(radian) << endl;
	cout << "tan(" << angle << ")=" << tan(radian) << endl;


	system("pause");
	return 0;
}


//函数重载
//int sumOfSquare(int a, int b)
//{
//	return a * a + b * b;
//}
//double sumOfSquare(double a, double b)
//{
//	return a * a + b * b;
//}
//
//int main() {
//
//	int m, n;
//	cout << "Enter two integer: ";
//	cin >> m >> n;
//	cout << "Their sum of square: " << sumOfSquare(m, n) << endl;
//
//	double x, y;
//	cout << "Enter two real numbers: ";
//	cin >> x >> y;
//	cout << "Their sum of square: " << sumOfSquare(x, y) << endl;
//
//	system("pause");
//	return 0;
//}

////带默认参数值得函数案例
//int getVolume(int length, int width = 2, int height = 3);
//
//int main() {
//
//	const int X = 10, Y = 12, Z = 15;
//	cout << "Some box data is ";
//	cout << getVolume(X, Y, Z) << endl;
//	cout << "Some box data is ";
//	cout << getVolume(X, Y) << endl;
//	cout << "Some box data is ";
//	cout << getVolume(X) << endl;
//
//	system("pause");
//	return 0;
//}
//
//int getVolume(int length, int width/*=2*/, int height/*=3*/)
//{
//	cout << setw(5) << length << setw(5) << width << setw(5) << height << "\t";
//	return length * width * height;
//}

////带默认参数值得函数
//
////函数在定义的时候可以预先声明默认的形参值
////int  add(int x = 5, int y = 10)
////{
////	return x + y;
////}
//
//////有默认值的形参必须在形参列表的最后
////int add(int x, int y = 5, int z = 6);//正确
//////int add(int x = 1, int y = 5, int z);//错误
//////int add(int x - 1, int y, int z);//错误
//
////在相同的作用域内，不允许在同一个函数的多个声明中对同一个参数的默认值重复定义
////即使前后定义的值相同也不行
//
//int add(int x = 5, int y = 6);//原型给出
//
//int main() {
//
//	//add(10, 20);//用实参来初始化形参，实现10+20
//	//add(10);//形参x采用实参值10，y采用默认值10，实现10+10
//	//add();//x和y都采用默认值，分别为5和10，实现5+10
//
//	system("pause");
//	return 0;
//}
//
//int add(int x /* = 5*/, int y /* = 6*/)
////这里不能出现默认形参，但为了清晰，可以通过注释说明默认形参
//{
//	return x + y;
//}

////内联函数应用的举例
//
//const double PI = 3.14159265358975;
//
////内联函数，根据圆的半径计算其面积
//inline double calArea(double radius)
//{
//	return PI * radius * radius;
//}
//
//int main() {
//
//
//	double r = 3.0;
//	//调用内联函数求圆的面积，编译此处被替换为calArea函数整体语句
//	//展开为：area = PI * radius * radius
//	double area = calArea(r);
//	cout << "area=" << area << endl;
//
//	system("pause");
//	return 0;
//}

////值传递和引用传递的比较
//
//void fiddle(int in1, int& in2)
//{
//	in1 = in1 + 100;
//	in2 = in2 + 100;
//	cout << "The values are ";
//	cout << setw(5) << in1;
//	cout << setw(5) << in2 << endl;
//}
//
//int main() {
//
//	int v1 = 7;
//	int v2 = 21;
//	cout << "The values are ";
//	cout << setw(5) << v1;
//	cout << setw(5) << v2 << endl;
//	fiddle(v1, v2);
//	cout << "The values are ";
//	cout << setw(5) << v1;
//	cout << setw(5) << v2 << endl;
//
//	system("pause");
//	return 0;
//}