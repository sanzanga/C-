#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

int main()
{
	int i = 0;
	int input = 0;
	int sum = 0;
	while (i < 5)
	{
		scanf("%d", &input);
		sum += input;
		i++;
	}
	printf("%.1f", sum / 5.0);
	return 0;
}

//int main()
//{
//	printf("Name    Age    Gender\n");
//	printf("---------------------\n");
//	printf("Jack    18     man   \n");
//	return 0;
//}

//int main()
//{
//	printf("I lost my cellphone!");
//	return 0;
//}

//int main()
//{
//	int n, h, m;//n盒酸奶 h分钟喝完一瓶 m分钟后还剩未打开多少瓶
//	int count = 1;
//	scanf("%d%d%d", &n, &h, &m);//8 5 16
//	while (h * count <= m)
//	{
//		n--;
//		count++;
//	}
//	if (h * count - m != 2)
//	{
//		printf("%d\n", --n);
//	}
//	else
//	{
//		printf("%d\n", n);
//	}
//	return 0;
//}

//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d\n", 1 << n);
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		getchar();
//		putchar(ch + 32);
//		printf("\n");
//	}
//}

//#define PI acos(-1)
//
//int main()
//{
//	float f = 0;
//	double v = 0;
//	scanf("%f", &f);
//	v = 4 / 3.000 * 3.1415926 * f * f * f;
//	printf("%.3f", v);
//	return 0;
//}

//int main()
//{
//	int a, b, c;
//	double p = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	p = (a + b + c) / 2.0;
//	printf("circumference=%.2f area=%.2f\n", (float)a + b + c, sqrt(p * (p - a) * (p - b) * (p - c)));
//	return 0;
//}

//int main()
//{
//	int a, b;
//	float f = 0;
//	float BIM = 0;
//	scanf("%d%d", &a, &b);
//	f = (float)b / 100;
//	BIM = a / (f * f);
//	printf("%.2f", BIM);
//	return 0;
//}

//int main()
//{
//	double a, b, c;
//	double d = 0;
//	double sum = 0;
//	scanf("%lf%lf%lf", &a, &b, &c);
//	sum = a + b + c;
//	d = (a + b + c) / 3;
//	printf("%.2lf %.2lf", sum, d);
//	return 0;
//}

//int main()
//{
//	long int a;
//	scanf("%ld", &a);
//	int hour = 0;
//	int min = 0;
//	int sec = 0;
//	hour = a / (60 * 60);
//	a = a % (60 * 60);
//	min = a / 60;
//	sec = a % 60;
//	printf("%d %d %d", hour, min, sec);
//	return 0;
//}

//int main()
//{
//	int a;
//	scanf("%d", &a);
//	printf("%d\n", a * 365 * 24 * 60 * 60);
//	return 0;
//}

//int main()
//{
//	double a;
//	int b = 0;
//	scanf("%lf", &a);
//	b = (int)a;
//	b %= 10;
//	printf("%d", b);
//	return 0;
//}

//int main()
//{
//	int a, b;
//	int c = 0;
//	scanf("%d%d", &a, &b);
//	c = (a + b) % 100;
//	printf("%d", c);
//	return 0;
//}

//int main()
//{
//	int a;
//	int ge = 0;
//	int bai = 0;
//	int shi = 0;
//	int qian = 0;
//	scanf("%d", &a);
//	ge = a % 10;
//	a = a / 10;
//	shi = a % 10;
//	a = a / 10;
//	bai = a % 10;
//	qian = a / 10;
//	printf("%d%d%d%d", ge, shi, bai, qian);
//
//	return 0;
//}

//int main()
//{
//	int a;
//	int ge = 0;
//	int bai = 0;
//	int shi = 0;
//	int qian = 0;
//	scanf("%d", &a);
//	ge = a % 10;
//	a = a / 10;
//	shi = a % 10;
//	a = a / 10;
//	bai = a % 10;
//	qian = a / 10;
//	if (ge == 0)
//	{
//		if (shi == 0)
//		{
//			if (bai == 0)
//			{
//				printf("%d", qian);
//			}
//			else
//			{
//				printf("%d%d", bai, qian);
//			}
//		}
//		else
//		{
//			printf("%d%d%d", shi, bai, qian);
//		}
//	}
//	else
//	{
//		printf("%d%d%d%d", ge, shi, bai, qian);
//	}
//
//	return 0;
//}

//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	printf("%d %d", a / b, a % b);
//	return 0;
//}

//int main()
//{
//	int a = 40;
//	int c = 212;
//	int b = 0;
//	b = (-8 + 22) * a - 10 + c / 2;
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a, b;
//	int temp = 0;
//	scanf("a=%d,b=%d", &a, &b);
//	temp = a;
//	a = b;
//	b = temp;
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	int temp = a;
//	a = b;
//	b = temp;
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int a, b, c;
//	scanf("%4d%2d%2d", &a, &b, &c);
//	printf("year=%d\nmonth=%02d\ndate=%02d", a, b, c);
//	return 0;
//}

//int main()
//{
//	int arr[12] = { 73,32,99,97,110,32,100,111,32,105,116,33 };
//	for (int i = 0; i < 12; i++)
//	{
//		printf("%c ", (char)arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	char c = 0;
//	scanf("%c", &c);
//	int a = (int)c;
//	printf("%d\n", a);
//	return 0;
//}