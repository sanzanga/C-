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
//	cout << "������������";
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
//		cout << a << "�ܱ�3��5ͬʱ����" << endl;
//	}
//	else if (a % 3 == 0 && a % 5 != 0)
//	{
//		cout << a << "�ܱ�3�����ܱ�5����" << endl;
//	}
//	else if (a % 3 != 0 && a % 5 == 0)
//	{
//		cout << a << "�ܱ�5�����ܱ�3����" << endl;
//	}
//	else
//	{
//		cout << a << "�Ȳ��ܱ�3����Ҳ���ܱ�5����" << endl;
//	}
//
//	system("pause");
//	return 0;
//}

//int main() {
//	cout << "����x��ֵ";
//	double x;
//	cin >> x;
//	cout << "����ֵΪ";
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
//	cout << "����������뾶:";	
//	int r;
//	double pi = 3.1415;
//	cin >> r;
//	double v = 4 / 3.0 * pi * r * r * r;
//	double s = 4.0 * pi * r * r;
//	cout << "�뾶" << r << "���������Ϊ" << setprecision(4) << std::fixed << v << endl;
//	cout << "�뾶" << r << "����������Ϊ" << setprecision(4) << std::fixed << s << endl;
//	system("pause");
//	return 0;
//}

//int main() {
//
//	cout << "������һ���ַ�>>";
//	char ch;
//	cin >> ch;
//	cout << "�ַ�  ASCII��" << endl;
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
//	cout << "�����������ߵĳ��ȣ�";
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
//	cout << "������һ��������127������>>";
//	int a; 
//	cin >> a;
//	cout << "�ַ�";
//	cout << (char)a << endl;
//	cout << "ASCII��";
//	cout << a << endl;
//
//	system("pause");
//	return 0;
//}

//int main() {
//	cout << "������һ����дӢ����ĸ" << endl;
//	cout << "�ַ�";
//	char ch;
//	cin >> ch;
//	ch = (char)(int)ch + 32;
//	cout << "��Сд��ʽΪ";
//	cout << ch << endl;
//
//	system("pause");
//	return 0;
//}