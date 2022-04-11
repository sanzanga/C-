#include <iostream>
using namespace std;

//使用递归实现n的阶乘
unsigned fac(unsigned n)
{
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return fac(n - 1) * n;
	}
}

int main() {

	unsigned n;
	cout << "Please enter a positive integer:";
	cin >> n;

	unsigned y = fac(n);

	cout << n << "!=" << y << endl;

	system("pause");
	return 0;
}

//int func(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return func(n - 1) * n;
//	}
//}
//
//int main() {
//
//	int n;
//	cout << "请输入需要求阶乘的整数：";
//	cin >> n;
//
//	int ret = func(n);
//
//	cout << n << "的阶乘为：" << ret << endl;
//
//	system("pause");
//	return 0;
//}

////输入两个整数，求它们的平方和
//
////实现平方的函数
//int func(int a)
//{
//	return a * a;
//}
//
////实现求和的函数
//int add(int a, int b)
//{
//	return func(a) + func(b);
//}
//
//
//int main() {
//
//	int a, b;
//	cout << "请输入两个整形数字：" << endl;
//	cin >> a >> b;
//
//	cout << a << "的平方加上" << b << "的平方等于" << add(a, b) << endl;
//
//	system("pause");
//	return 0;
//}