#include <iostream>
using namespace std;

int main3() {

	//1、单精度  float
	//2、双精度  double
	//默认情况下 输出的一个小数，会显示出6位有效数字

	float f1 = 3.14f;
	//在float类型后面都会加上一个f 因为小数在默认的下是double类型
	//加上f会把其转化成单精度

	cout << "f1=" << f1 << endl;

	double d1 = 3.14;

	cout << "d1=" << d1 << endl;

	//统计float和double占用的内存空间
	cout << "float占用的空间为：" << sizeof(float) << endl;//4字节

	cout << "double占用的空间为：" << sizeof(double) << endl;//8字节

	//科学计数法
	float f2 = 3e2;//3*10^2
	cout << "f2=" << f2 << endl;

	float f3 = 3e-2;//3*0.1^2
	cout << "f3=" << f3 << endl;

	system("pause");
	return 0;
}