#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {

	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << j << "*" << i << "=" << setw(2) << i * j << " ";
		}
		cout << endl;
	}

	system("pause");
	return 0;
}

//int main() {
//
//	int a;
//	cin >> a;
//	int b = 50;
//
//	while (1)
//	{
//		if (a > b)
//		{
//			cout << "猜大了" << endl;
//		}
//		else if (a < b)
//		{
//			cout << "猜小了" << endl;
//		}
//		else
//		{
//			cout << "猜对了" << endl;
//			break;
//		}
//		cin >> a;
//	}
//
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	for (int i = 2; i <= 100; i++)
//	{
//		bool b = true;
//		for (int j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				b = false;
//				break;
//			}
//		}
//		if (b)
//		{
//			cout << i << " ";
//		}
//	}
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	int i = 2;
//	do
//	{
//		bool b = true;
//		for (int j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				b = false;
//				break;
//			}
//		}
//		if (b)
//		{
//			cout << i << " ";
//		}
//		i++;
//	} while (i <= 100);
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	int i = 2;
//	while (i <= 100)
//	{
//		bool b = true;
//		for (int j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				b = false;
//				break;
//			}
//		}
//		if (b)
//		{
//			cout << i << " ";
//		}
//		i++;
//	}
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	char c;
//	cout << "现在在下雨吗？" << endl;
//
//	while (true)
//	{
//		cin >> c;
//		
//		if (c == 'Y')
//		{
//			cout << "现在正在下雨" << endl;
//			break;
//		}
//		else if (c == 'N')
//		{
//			cout << "现在没有下雨" << endl;
//			break;
//		}
//		cout << "现在在下雨吗？" << endl;
//	}
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	unsigned int x;
//	unsigned int y = 100;
//	unsigned int z = 50;
//
//	x = z - y;
//
//	cout << x << endl;
//
//	system("pause");
//	return 0;
//}

////输出ASCII为32~127的字符
//int main() {
//
//	for (int i = 32; i <= 127; i++)
//	{
//		cout << (char)i << " ";
//	}
//
//	system("pause");
//	return 0;
//}