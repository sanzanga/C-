#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int a;
	double ret = 0;
	scanf("%d", &a);
	for (int i = 1; i <= a; i++)
	{
		ret += 1.0 / i;
	}
	printf("%.6lf", ret);
	return 0;
}

//int main()
//{
//	int a;
//	int ret = 0;
//	scanf("%d", &a);
//	for (int i = 0; i <= a; i++)
//	{
//		if (i % 2 == 0)
//		{
//			ret -= i;
//		}
//		else
//		{
//			ret += i;
//		}
//	}
//	printf("%d", ret);
//	return 0;
//}

//int main()
//{
//	for (int i = 1; i <= 9; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", j, i, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <math.h>
//
//int main()
//{
//	int count = 0;
//	int flag = 1;
//	for (int i = 100; i <= 999; i++)
//	{
//		flag = 1;
//		for (int j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag)
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

//int main()
//{
//	int a;
//	int sum = 0;
//	scanf("%d", &a);
//	for (int i = 1; i <= a; i++)
//	{
//		sum += i;
//	}
//	printf("%d", sum);
//	return 0;
//}

//int main()
//{
//	int a;
//	scanf("%d", &a);
//	for (int i = 0; i < a; i++)
//	{
//		printf("Happy new year!Good luck!\n");
//	}
//	return 0;
//}

//int main()
//{
//	int _a, _b, _c;
//	char ch;
//	int flag = 0;
//	scanf("%d-%d-%d-%c", &_a, &_b, &_c, &ch);
//	int a = _a;
//	int b = _b;
//	int c = _c;
//	int b3 = b % 10;
//	b = b / 10;
//	int b2 = b % 10;
//	int b1 = b / 10;
//	int c5 = c % 10;
//	c = c / 10;
//	int c4 = c % 10;
//	c = c / 10;
//	int c3 = c % 10;
//	c = c / 10;
//	int c2 = c % 10;
//	int c1 = c / 10;
//	flag = a * 1 + b1 * 2 + b2 * 3 + b3 * 4 + c1 * 5 + c2 * 6 + c3 * 7 + c4 * 8 + c5 * 9;
//	flag = flag % 11;
//	if (ch == 'X')
//	{
//		if (flag == 10)
//		{
//			printf("Right\n");
//		}
//		else
//		{
//			printf("%d-%d-%d-%d", _a, _b, _c, flag);
//		}
//	}
//	else
//	{
//		if ((int)ch - 48 == flag)
//		{
//			printf("Right\n");
//		}
//		else
//		{
//			if (flag != 10)
//			{
//				printf("%d-%d-%d-%d", _a, _b, _c, flag);
//			}
//			else
//			{
//				printf("%d-%d-%d-X", _a, _b, _c);
//			}
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a, b, c;
//	int avg = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	avg = (a + b + c) / 3;
//	if (avg >= 60)
//	{
//		printf("NO\n");
//	}
//	else
//	{
//		printf("YES\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a1, b1, c1;
//	int a2, b2, c2;
//	int flag = 1;
//	scanf("%d%d%d", &a1, &b1, &c1);
//	scanf("%d%d%d", &a2, &b2, &c2);
//	if (a2 > a1)
//	{
//		printf("yes\n");
//		flag = 0;
//	}
//	if (a1 == a2 && b2 > b1)
//	{
//		printf("yes\n");
//		flag = 0;
//	}
//	if (a1 == a2 && b1 == b2 && c2 >= c1)
//	{
//		printf("yes\n");
//		flag = 0;
//	}
//	if (flag)
//	{
//		printf("no\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a;
//	scanf("%d", &a);
//	switch (a)
//	{
//	case 1:
//		printf("Monday\n");
//		break;
//	case 2:
//		printf("Tuesday\n");
//		break;
//	case 3:
//		printf("Wednesday\n");
//		break;
//	case 4:
//		printf("Thursday\n");
//		break;
//	case 5:
//		printf("Friday\n");
//		break;
//	case 6:
//		printf("Saturday\n");
//		break;
//	case 7:
//		printf("Sunday\n");
//		break;
//	default :
//		break;
//	}
//	return 0;
//}

//1、星期一：Monday
//
//2、星期二：Tuesday
//
//3、星期三：Wednesday
//
//4、星期四：Thursday
//
//5、星期五：Friday
//
//6、星期六：Saturday
//
//7、星期日：Sunday

//int main()
//{
//	int a, b, c, d;
//	//a b
//	//c d
//	scanf("%d%d%d%d", &a, &b, &c, &d);
//	if()
//	if (a == c && b > d)
//	{
//		printf("d\n");
//	}
//	else if (a == c && b < d)
//	{
//		printf("u\n");
//	}
//	else if (b == d && a > c)
//	{
//		printf("r\n");
//	}
//	else
//	{
//		printf("l\n");
//	}
//	return 0;
//}