#include <iostream>
#include <cmath>
using namespace std;

int getPower(int a, int b)
{
	int ret = 1;
	while (b)
	{
		ret *= a;
		b--;
	}
	return ret;
}

double getPower(double a, double b)
{
	double ret = 1.0;
	while (b)
	{
		ret *= a;
		b--;
	}
	return ret;
}

int main() {

	int a = 2;
	int b = 2;
	int ret1 = getPower(a, b);
	cout << ret1 << endl;

	double c = 2.1;
	double d = 2;
	double ret2 = getPower(c, d);
	cout << ret2 << endl;

	system("pause");
	return 0;
}

//int func(int x)
//{
//	if (x == 0)
//	{
//		return 1;
//	}
//	else if (x == 1)
//	{
//		return x;
//	}
//	else
//	{
//		return ((2 * x - 1) * x * func(x) - (x - 1) * func(x - 2)) / x;
//	}
//}
//
//int main() {
//
//	int x;
//	cin >> x;
//
//	int ret = func(x);
//
//	cout << ret << endl;
//
//	system("pause");
//	return 0;
//}

//int  Fibonacci(int n)
//{
//	if (n == 1 || n == 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fibonacci(n - 1) + Fibonacci(n - 2);
//	}
//}
//
//int main() {
//
//	int n;
//	cin >> n;
//
//	int ret = Fibonacci(n);
//
//	cout << ret << endl;
//
//	system("pause");
//	return 0;
//}

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
//	cin >> n;
//
//	int ret = func(n);
//
//	cout << n << "的阶乘为：" << ret << endl;
//
//	system("pause");
//	return 0;
//}

////编写函数求两个整形变量的最小公倍数和最大公因数
//int main() {
//
//	int a, b;
//	cin >> a >> b;
//
//	int min = a < b ? a : b;
//	int max = a > b ? a : b;
//
//	int r = 0;
//	//辗转相除法求最大公因数
//	while (max % min)
//	{
//		r = max % min;
//		max = min;
//		min = r;
//	}
//
//	//最小公倍数乘以最大公因数等于两个整型相乘
//	int c = a * b / min;
//
//	cout << a << "和" << b << "的最小公倍数为：" << c << endl;
//	cout << a << "和" << b << "的最大公因数为：" << min << endl;
//
//	system("pause");
//	return 0;
//}

//bool IsSuShu(int a)
//{
//	bool flag = true;
//	for (int i = 2; i <= sqrt(a); i++)
//	{
//		if (a % 2 == 0)
//		{
//			flag = true;
//			return false;
//		}
//	}
//	if (flag)
//	{
//		return true;
//	}
//}
//
//int main() {
//
//	int a;
//	cin >> a;
//
//	bool flag = IsSuShu(a);
//
//	if (flag)
//	{
//		cout << a << "是素数" << endl;
//	}
//	else
//	{
//		cout << a << "不是素数" << endl;
//	}
//
//	system("pause");
//	return 0;
//}

//double func(double f)
//{
//	return 5.0 / 9 * (f - 32);
//}
//
//int main() {
//
//	double c;
//	double f;
//	cin >> f;
//
//	c = func(f);
//
//	system("pause");
//	return 0;
//}

//short int func(unsigned short int a, unsigned short int b)
//{
//	if (b == 0)
//	{
//		return -1;
//	}
//	else
//	{
//		return a / b;
//	}
//}
//
//int main() {
//
//	unsigned short int a, b;
//	cin >> a >> b;
//
//	short int ret = func(a, b);
//
//	cout << ret << endl;
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	int intOne;
//	int& r = intOne;
//
//	intOne = 5;
//	cout << "intOne:\t" << intOne << endl;
//	cout << "r:\t" << r << endl;
//
//	int intTwo = 8;
//	r = intTwo;
//	cout << "intOne:\t" << intOne << endl;
//	cout << "intTwo:\t" << intTwo << endl;
//	cout << "r:\t" << r << endl;
//
//	system("pause");
//	return 0;
//}