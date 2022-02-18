#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int a;
	scanf("%d", &a);
	float min = 10;
	min = min + a / 10.0;
	if (a > min)
	{
		printf("w");
	}
	else
	{
		printf("v");
	}
	return 0;
}

//int main()
//{
//	int a;
//	float money = 0;
//	scanf("%d", &a);
//	if (a >= 5000)
//	{
//		money = a * 0.6;
//	}
//	else if (a >= 2000)
//	{
//		money = a * 0.7;
//	}
//	else if (a >= 500)
//	{
//		money = a * 0.8;
//	}
//	else if (a >= 100)
//	{
//		money = a * 0.9;
//	}
//	else
//	{
//		money = a;
//	}
//	printf("%.1f", money);
//	return 0;
//}

//
//牛牛商场促销活动：
//满100打9折；
//满500打8折；
//
//满2000打7折；
//
//满5000打6折
//牛阿姨算不清楚自己应该付多少钱，请你帮忙算一下

//int main()
//{
//	float a;
//	char c;
//	int money = 0;
//	scanf("%f %c", &a, &c);
//	if (a <= 1)
//	{
//		if (c == 'y')
//		{
//			money = 20 + 5;
//		}
//		else
//		{
//			money = 20;
//		}
//	}
//	else
//	{
//		a = (a - 1) * 10;
//		if ((int)a % 10 == 0)
//		{
//			money = 20 + (int)a / 10;
//		}
//		else
//		{
//			money = 20 + (int)a / 10 + 1;
//		}
//		//money = 20 + (int)a % 10;
//		if (c == 'y')
//		{
//			money += 5;
//		}
//	}
//	printf("%d", money);
//	return 0;
//}

//int main()
//{
//	int a;
//	scanf("%d", &a);
//	if (a % 2 == 0 || a % 3 == 0 || a % 7 == 0)
//	{
//		if (a % 2 == 0)
//		{
//			printf("2 ");
//		}
//		if (a % 3 == 0)
//		{
//			printf("3 ");
//		}
//		if (a % 7 == 0)
//		{
//			printf("7");
//		}
//	}
//	else
//	{
//		printf("n");
//	}
//	return 0;
//}

//int main()
//{
//	int a, b, c, d;
//	scanf("%d%d%d%d", &a, &b, &c, &d);
//	if (a > b && a > c && a > d)
//	{
//		printf("%d",a);
//	}
//	else if (b > a && b > c && b > d)
//	{
//		printf("%d", b);
//	}
//	else if (c > a && c > b && c > d)
//	{
//		printf("%d",c);
//	}
//	else
//	{
//		printf("%d",d);
//	}
//	return 0;
//}

//int main()
//{
//	int a;
//	scanf("%d", &a);
//	a %= 100;
//	if (a >= 3 && a <= 5)
//	{
//		printf("spring\n");
//	}
//	else if (a >= 6 && a <= 8)
//	{
//		printf("summer\n");
//	}
//	else if (a >= 9 && a <= 11)
//	{
//		printf("autumn\n");
//	}
//	else
//	{
//		printf("winter\n");
//	}
//	return 0;
//}

//3～5月为春季(spring)，6～8月为夏季(summer)，9～11月为秋季(autumn)，12月～来年2

//int main()
//{
//	int a;
//	scanf("%d", &a);
//	if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0)
//	{
//		printf("yes");
//	}
//	else
//	{
//		printf("no");
//	}
//	return 0;
//}

//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a >= b && a <= c)
//	{
//		printf("true");
//	}
//	else
//	{
//		printf("false");
//	}
//	return 0;
//}

//int main()
//{
//	int a, b, c, d;
//	int ret = 0;
//	scanf("%d%d%d%d", &a, &b, &c, &d);
//	ret = (a - c) * (a - c) + (b - d) * (b - d);
//	printf("%d", ret);
//	return 0;
//}

//int main()
//{
//	int a, b, c, d;
//	float ret = 0;
//	scanf("%d%d%d%d", &a, &b, &c, &d);
//	ret = a * 0.2 + b * 0.1 + c * 0.2 + d * 0.5;
//	printf("%.1f", ret);
//	return 0;
//}

//总成绩 = 实验成绩 * 20% + 课堂表现成绩 * 10% + 过程考核成绩 * 20% + 期末上机考试成绩 * 50%

//#include <math.h>
//
//int main()
//{
//	int a;
//	scanf("%d", &a);
//
//	int ret = 0;
//	int i = 0;
//	int count = 0;
//
//	while (a)
//	{
//		count = a % 10;
//		if (count % 2 == 0)
//		{
//			count = 0;
//		}
//		else
//		{
//			count = 1;
//		}
//		ret += count * pow(10, i);
//		i++;
//		a /= 10;
//	}
//
//	printf("%d", ret);
//
//	return 0;
//}

//int main()
//{
//	long long a, b;
//	long long yue = 0;
//	long long bei = 0;
//	long long sum = 0;
//	long long r = 0;
//	scanf("%d%d", &a, &b);
//	int max = a > b ? a : b;
//	int min = a < b ? a : b;
//	while (max % min)
//	{
//		r = max % min;
//		max = min;
//		min = r;
//	}
//	yue = min;
//	bei = a * b / yue;
//	sum = yue + bei;
//	printf("%lld", sum);
//	return 0;
//}

//int main()
//{
//	int a;
//	int b = 0;
//	int count = 0;
//	scanf("%d", &a);
//	if (a < 12)
//	{
//		b = 2;
//	}
//	else
//	{
//		count = a / 12;
//		b = count * 4 + 2;
//	}
//	printf("%d", b);
//	return 0;
//}

//int main()
//{
//	int a, b, c;
//	scanf("%d:%d %d", &a, &b, &c);
//	a = (a + c / 60) % 24;
//	b = b + c % 60;
//	a = (a + b / 60) % 24;
//	b = b % 60;
//	printf("%#02d:%#02d", a, b);
//	return 0;
//}

//int main()
//{
//	int a, b, c;
//	scanf("%d:%d %d", &a, &b, &c);
//	a = a + c / 60;
//	b = b + c % 60;
//	printf("%d:%d", a, b);
//	return 0;
//}

//int main()
//{
//	int a;
//	float v = 0;
//	scanf("%d", &a);
//	v = 4 / 3.0 * 3.14 * a * a * a;
//	printf("%.2f", v);
//	return 0;
//}

//int main()
//{
//	int a, b, c;
//	int count = 0;
//	scanf("%d%d", &a, &b);
//	count = b - a;
//	c = b + count;
//	printf("%d", c);
//	return 0;
//}

//int main()
//{
//	int a, b;
//	float v = 0;
//	int ret = 0;
//	scanf("%d%d", &a, &b);
//	v = 3.14 * a * b * b;
//	ret = 10000 / v;
//	ret = ret + 1;
//	prinf("%d\n", ret);
//	return 0;
//}

//int main()
//{
//	int a, b;
//	float c = 0;
//	scanf("%d%d", &a, &b);
//	c = 1.0 / (1.0 / a + 1.0 / b);
//	printf("%f", c);
//	return 0;
//}

//描述
//牛牛有一个半径为 r 的圆，请你计算这个圆的面积。
//
//圆的面积公式是 \pi \times r ^ 2 \π×r
//2
//，其中 \pi \π  取 3.14
//输入描述：
//输入一个半径 r
//输出描述：
//输出圆的面积

//int main()
//{
//	int r;
//	float s = 0;
//	scanf("%d", &r);
//	s = 3.14 * r * r;
//	printf("%.2f", s);
//	return 0;
//}

////c = 5 / 9 * (f - 32)
//
//int main()
//{
//	double a;
//	double b;
//	scanf("%lf", &a);
//	b = 5.0 / 9 * (a - 32);
//	printf("%.3lf", b);
//	return 0;
//}

//int main()
//{
//	int a, b;
//	int c = 0;
//	scanf("%d%d", &a, &b);
//	c = (a + b) % 7;
//	if (c == 0)
//	{
//		c = 7;
//	}
//	printf("%d\n", c);
//	return 0;
//}