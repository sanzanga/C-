#include <iostream>
#include <cmath>

using namespace std;

void baHe()
{
	int arr[200];
	int count = 0;
	for (int i = 2; i <= 200; i++)
	{
		bool b = true;
		for (int j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				b = false;
				break;
			}
		}
		if (b)
		{
			arr[count] = i;
			count++;
		}
	}
	for (int i = 4; i <= 200; i+=2)
	{
		bool b = true;
		for (int j = 0; j < count; j++)
		{
			for (int k = 0; k < count; k++)
			{
				if (arr[j] + arr[k] == i)
				{
					cout << arr[j] << "+" << arr[k] << "=" << i << " ";
					b = false;
					break;
				}
			}
			if (b == false)
			{
				break;
			}
		}
	}
}

int main() {

	baHe();


	system("pause");
	return 0;
}

//void is_Sushu()
//{
//	for (int i = 3; i <= 200; i++)
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
//}
//
//int main() {
//
//	is_Sushu();
//
//
//	system("pause");
//	return 0;
//}

//①编写求素数的函数，并用这个函数求 3 - 200 之间的所有素数
//②在 4 - 200 之间，验证歌德巴赫猜想:任何一个充分大的偶数都可以表示为两个素数之
//和。输出 4 = 2 + 2 6 = 3 + 3 …… 200 = 3 + 197

//int Fibonnacci(int a)
//{
//	if (a == 1 || a == 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fibonnacci(a - 1) + Fibonnacci(a - 2);
//	}
//}
//
//int main() {
//
//	int n;
//	cin >> n;
//	int ret = Fibonnacci(n);
//
//	cout << ret << endl;
//
//	system("pause");
//	return 0;
//}

//用递归方法编写函数 Fibonnacci(斐波那契)级数：
//1 212, 1 FF F FF nn n = +== − − ，
//并求出第 26 项的值。