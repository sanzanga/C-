#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {

	int a, b, c;
	cin >> a >> b >> c;
	if (a == 0)
	{

	}

	system("pause");
	return 0;
}

//int main() {
//
//	long int i;
//	cin >> i;
//	int bonus;
//	if (i <= 100000)
//		bonus = i * 0.1;
//	else if (i <= 200000)
//		bonus = 100000 * 0.1 + (i - 100000) * 0.075;
//	else if (i <= 400000)
//		bonus = 100000 * 0.1 + 100000 * 0.075 + (i - 200000) * 0.05;
//	else if (i <= 600000)
//		bonus = 100000 * 0.1 + 100000 * 0.075 + (i - 400000) * 0.03 + 200000 * 0.05;
//	else if (i <= 1000000)
//		bonus = 100000 * 0.1 + 100000 * 0.075 + (i - 600000) * 0.015 + 200000 * 0.05 + 200000 * 0.03;
//	else
//		bonus = 100000 * 0.1 + 100000 * 0.075 + (i - 1000000) * 0.01 + 200000 * 0.05 + 200000 * 0.03 + 400000 * 0.015;
//	cout << "bonus = " << bonus << endl;
//	system("pause");
//	return 0;
//}

//int main() {
//	cout << "请输入三个数";
//	int a, b, c;
//	cin >> a >> b >> c;
//	if (a > b && a > c)
//	{
//		if (b > c)
//			cout << a << "\t" << b << "\t" << c << endl;
//		else
//			cout << a << "\t" << c << "\t" << b << endl;
//	}
//	else if (b > a && b > c)
//	{
//		if(a>c)
//			cout << b << "\t" << a << "\t" << c << endl;
//		else
//			cout << b << "\t" << c << "\t" << a << endl;
//	}
//	else
//	{
//		if(a>b)
//			cout << c << "\t" << a << "\t" << b << endl;
//		else
//			cout << c << "\t" << b << "\t" << a << endl;
//	}
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	float a, b;
//	char op;
//	cout << "Begin count:\n";
//	cin >> a >> op >> b;
//	switch (op)
//	{
//	case '+':
//		cout << (a + b) << endl;
//		break;
//	case '-':
//		cout << (a - b) << endl;
//		break;
//	case '*':
//		cout << (a * b) << endl;
//		break;
//	case '/':
//		cout << (a / b) << endl;
//		break;
//	default:
//		cout << "error" << endl;
//	}
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	int a;
//	cin >> a;
//	if (a % 3 == 0 && a % 5 == 0)
//	{
//		cout << a << "能被3和5同时整除" << endl;
//	}
//	else if (a % 3 == 0 && a % 5 != 0)
//	{
//		cout << a << "能被3但不能被5整除" << endl;
//	}
//	else if (a % 3 != 0 && a % 5 == 0)
//	{
//		cout << a << "能被5但不能被3整除" << endl;
//	}
//	else
//	{
//		cout << a << "既不能被3整除也不能被5整除" << endl;
//	}
//
//	system("pause");
//	return 0;
//}

//int main() {
//	cout << "输入x的值";
//	double x;
//	cin >> x;
//	cout << "函数值为";
//	if (x <= 0)
//	{
//		x = -x;
//		cout << cos(x) << endl;
//	}
//	else if (x <= 38) 
//	{
//		cout << (2 * x + 2) << endl;
//	}
//	else if (x <= 67)
//	{
//		cout << x * x << endl;
//	}
//	else
//	{
//		cout << (4 * x + 1 / x) << endl;
//	}
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	cout << "请输入球体半径:";	
//	int r;
//	double pi = 3.1415;
//	cin >> r;
//	double v = 4 / 3.0 * pi * r * r * r;
//	double s = 4.0 * pi * r * r;
//	cout << "半径" << r << "的球体体积为" << setprecision(4) << std::fixed << v << endl;
//	cout << "半径" << r << "的球体表面积为" << setprecision(4) << std::fixed << s << endl;
//	system("pause");
//	return 0;
//}

//int main() {
//
//	cout << "请输入一个字符>>";
//	char ch;
//	cin >> ch;
//	cout << "字符  ASCII码" << endl;
//	/*cout << "   " << ch << "  " << setw(7) << (int)ch << endl;
//	cout << "   " << (char)(ch+1) << "  " << setw(7) << (int)(ch+1) << endl;
//	cout << "   " << (char)(ch+2) << "  " << setw(7) << (int)(ch+2) << endl;*/
//	cout << setw(4) << ch << "  " << setw(7) << (int)ch << endl;
//	cout << setw(4) << (char)(ch+1) << "  " << setw(7) << (int)(ch+1) << endl;
//	cout << setw(4) << (char)(ch+2) << "  " << setw(7) << (int)(ch+2) << endl;
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	cout << "请输入三条边的长度：";
//	double a, b, c;
//	cin >> a >> b >> c;
//	double p = (a + b + c) / 2.0;
//	cout << sqrt(p * (p - a) * (p - b) * (p - c)) << endl;
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	cout << "请输入一个不大于127的整数>>";
//	int a; 
//	cin >> a;
//	cout << "字符";
//	cout << (char)a << endl;
//	cout << "ASCII码";
//	cout << a << endl;
//
//	system("pause");
//	return 0;
//}

//int main() {
//	cout << "请输入一个大写英文字母" << endl;
//	cout << "字符";
//	char ch;
//	cin >> ch;
//	ch = (char)(int)ch + 32;
//	cout << "的小写形式为";
//	cout << ch << endl;
//
//	system("pause");
//	return 0;
//}