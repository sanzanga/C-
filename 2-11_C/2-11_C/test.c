#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int a;
	scanf("%d", &a);
	int flag = 1;
	int count = 0;
	for (int i = 2; i < a; i++)
	{
		flag = 1;
		for (int j = 2; j <= i-1; j++)
		{
			if (i % j == 0)
			{
				flag = 0;
				count++;
				break;
			}
		}
		if (flag)
		{
			printf("%d ", i);
		}
	}
	printf("\n%d\n", count + 1);
	return 0;
}

//int main()
//{
//	int a;
//	int j = 0;
//	scanf("%d", &a);
//	int arr[50] = { 0 };
//	int i = 0;
//	while (i < a)
//	{
//		scanf("%d", &arr[i]);
//		i++;
//	}
//	int b;
//	scanf("%d", &b);
//	arr[i] = b;
//	for (int j = 0; i < a; i++)
//	{
//		for (int k = 0; k < a - j; k++)
//		{
//			if (arr[k] > arr[k + 1])
//			{
//				int temp = arr[k];
//				arr[k] = arr[k + 1];
//				arr[k + 1] = temp;
//			}
//		}
//	}
//	for (int i = 0; i < a + 1; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int a;
//	int j = 0;
//	scanf("%d", &a);
//	int arr[51] = { 0 };
//	int i = 0;
//	while (i < a)
//	{
//		scanf("%d", &arr[i]);
//		i++;
//	}
//	int b;
//	scanf("%d", &b);
//	if (a == 1)
//	{
//		if (a < b)
//		{
//			printf("%d %d ", a, b);
//		}
//		else
//		{
//			printf("%d %d ", b, a);
//		}
//	}
//	else
//	{
//		for (j = 1; j < a; j++)
//		{
//			if (arr[j - 1]<b && arr[j]>b)
//			{
//				printf("%d ", arr[j - 1]);
//				printf("%d ", b);
//				break;
//			}
//			else
//			{
//				printf("%d ", arr[j - 1]);
//			}
//		}
//		for (int k = j; k < a; k++)
//		{
//			printf("%d ", arr[k]);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a, b, c, d, e, f, g;
//	int sum = 0;
//	int arr[7] = { 0 };
//	int min = 0;
//	int max = 0;
//	while (scanf("%d%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f, &g) != EOF)
//	{
//		getchar();
//		arr[0] = a;
//		arr[1] = b;
//		arr[2] = c;
//		arr[3] = d;
//		arr[4] = e;
//		arr[5] = f;
//		arr[6] = g;
//		min = arr[0];
//		max = arr[0];
//		sum = 0;
//		for (int i = 0; i < a; i++)
//		{
//			sum += arr[i];
//			if (arr[i] > max)
//			{
//				max = arr[i];
//			}
//			if (arr[i] < min)
//			{
//				min = arr[i];
//			}
//		}
//		sum = sum - min - max;
//		printf("%.2f\n", sum / 5.0);
//	}
//	return 0;
//}

//int main()
//{
//	int a[7] = { 0 };
//	int count = 0;
//	int sum = 0;
//	int max = 0;
//	int min = 0;
//	while (count < 7)
//	{
//		scanf("%d", &a[count]);
//		sum += a[count];
//		count++;
//	}
//	max = a[0];
//	min = a[0];
//	for (int i = 0; i < 7; i++)
//	{
//		if (a[i] > max)
//		{
//			max = a[i];
//		}
//		if (a[i] < min)
//		{
//			min = a[i];
//		}
//	}
//	sum = sum - min - max;
//	printf("%.2f", sum / 5.0);
//	return 0;
//}

//int main()
//{
//	int a;
//	while (scanf("%d", &a) != EOF)
//	{
//		getchar();
//		for (int i = 0; i < a; i++)
//		{
//			for (int j = 0; j <= i; j++)
//			{
//				printf("%d ", j + 1);
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//200 - OK
//202 - Accepted
//400 - Bad Request
//403 - Forbidden
//404 - Not Found
//500 - Internal Server Error
//502 - Bad Gateway
//
//int main()
//{
//	int a;
//	while (scanf("%d", &a) != EOF)
//	{
//		getchar();
//		if (a == 200)
//		{
//			printf("OK");
//		}
//		else if (a == 202)
//		{
//			printf("Accepted");
//		}
//		else if (a == 400)
//		{
//			printf("Bad Request");
//		}
//		else if (a == 403)
//		{
//			printf("Forbidden");
//		}
//		else if (a == 404)
//		{
//			printf("Not Found");
//		}
//		else if (a == 500)
//		{
//			printf("Internal Server Error");
//		}
//		else if (a == 502)
//		{
//			printf("Bad Gateway");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a;
//	scanf("%d", &a);
//	if (a >= 10)
//	{
//		printf("Danger++");
//	}
//	else if (a <= 9 && a >= 4)
//	{
//		printf("Danger");
//	}
//	else
//	{
//		printf("Good");
//	}
//	return 0;
//}

//int main()
//{
//	float a, b, c, d, e;
//	float sum = 0;
//	scanf("%f%f%f%f%f", &a, &b, &c, &d, &e);
//	sum = a + b + c + d + e;
//	printf("%.2f", sum / 5.0);
//	return 0;
//}

//int main()
//{
//	printf("Happy New Year*2019*");
//	return 0;
//}

//int main()
//{
//	int a;
//	while (scanf("%d", &a) != EOF)
//	{
//		getchar();
//		for (int i = 0; i < a; i++)
//		{
//			for (int j = 0; j <= i; j++)
//			{
//				if (i == 0 || i == j || j == 0 || i == a - 1)
//				{
//					printf("* ");
//				}
//				else
//				{
//					printf("  ");
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a;
//	while (scanf("%d", &a) != EOF)
//	{
//		getchar();
//		for (int i = 0; i < a; i++)
//		{
//			for (int j = 0; j < a; j++)
//			{
//				if (i == 0 || i == a - 1 || j == 0 || j == a - 1)
//				{
//					printf("* ");
//				}
//				else
//				{
//					printf("  ");
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a;
//	while (scanf("%d", &a) != EOF)
//	{
//		getchar();
//		for (int i = 0; i < a; i++)
//		{
//			for (int j = 0; j < a; j++)
//			{
//				if (i == j || j == a - 1 - i)
//				{
//					printf("*");
//				}
//				else
//				{
//					printf(" ");
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a;
//	while (scanf("%d", &a) != EOF)
//	{
//		for (int i = 0; i < a; i++)
//		{
//			for (int j = 0; j < a; j++)
//			{
//				if (j == a - i - 1)
//				{
//					printf("*");
//				}
//				else
//				{
//					printf(" ");
//				}
//			}
//			printf("\n");
//		}
//	}
//}

//int main()
//{
//	int a;
//	while (scanf("%d", &a) != EOF)
//	{
//		getchar();
//		for (int i = 0; i < a; i++)
//		{
//			for (int j = 0; j < a; j++)
//			{
//				if (i == j)
//				{
//					printf("*");
//				}
//				else
//				{
//					printf(" ");
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a;
//	while (scanf("%d", &a) != EOF)
//	{
//		getchar();
//		for (int i = 0; i <= a; i++)
//		{
//			for (int j = 0; j < 2 * (a - i); j++)
//			{
//				printf(" ");
//			}
//			for (int j = 0; j <= i; j++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//		for (int i = a - 1; i >= 0; i--)
//		{
//			for (int j = 0; j < 2 *(a - i); j++)
//			{
//				printf(" ");
//			}
//			for (int j = 0; j <= i; j++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a;
//	while (scanf("%d", &a) != EOF)
//	{
//		getchar();
//		for (int i = a; i >= 0; i--)
//		{
//			for (int j = 0; j <= i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//		for (int i = 1; i <= a ; i++)
//		{
//			for (int j = 0; j <= i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//}

//int main()
//{
//	int a;
//	while (scanf("%d", &a) != EOF)
//	{
//		getchar();
//		for (int i = 0; i < a + 1; i++)
//		{
//			for (int j = 0; j < a - i ; j++)
//			{
//				printf(" ");
//			}
//			for (int j = 0; j <= i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//		for (int i = a - 1; i >= 0; i--)
//		{
//			for (int j = 0; j < a - i ; j++)
//			{
//				printf(" ");
//			}
//			for (int j = 0; j <= i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a;
//	while (scanf("%d", &a) != EOF)
//	{
//		getchar();
//		for (int i = a - 1; i >= 0; i--)
//		{
//			for (int j = 0; j < a - i - 1; j++)
//			{
//				printf(" ");
//			}
//			for (int j = 0; j <= i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a;
//	while (scanf("%d", &a) != EOF)
//	{
//		getchar();
//		for (int i = 0; i < a; i++)
//		{
//			for (int j = 0; j < a - i - 1; j++)
//			{
//				printf(" ");
//			}
//			for (int j = 0; j <= i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a;
//	while (scanf("%d", &a) != EOF)
//	{
//		getchar();
//		for (int i = 0; i < a; i++)
//		{
//			for (int j = 0; j < a - i - 1; j++)
//			{
//				printf("  ");
//			}
//			for (int j = 0; j <= i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a;
//	while (scanf("%d", &a) != EOF)
//	{
//		getchar();
//		for (int i = a - 1; i > 0; i--)
//		{
//			for (int j = 0; j <= i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a;
//	while (scanf("%d", &a) != EOF)
//	{
//		for (int i = 0; i < a; i++)
//		{
//			for (int j = 0; j <= i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a;
//	while (scanf("%d", &a) != EOF)
//	{
//		getchar();
//		for (int i = 0; i < a; i++)
//		{
//			for (int j = 0; j < a ; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//}

//int main()
//{
//	int a;
//	while (scanf("%d", &a) != EOF)
//	{
//		getchar();
//		for (int i = 0; i < a; i++)
//		{
//			if (i != a - 1)
//			{
//				printf("*");
//			}
//			else
//			{
//				printf("*\n");
//			}
//		}
//	}
//	return 0;
//}

//int main()
//{
//	float a, b;
//	char c;
//	while (scanf("%f%c%f",&a, &c, &b) != EOF)
//	{
//		getchar();
//		if (c != '+' || c != '-' || c != '*' || c != '/')
//		{
//			printf("Invalid operation!\n");
//		}
//		else if (c == '/')
//		{
//			if (b == 0)
//			{
//				printf("Wrong!Division by zero!\n");
//			}
//			else
//			{
//				printf("%.4f%c%.4f=%.4f\n", a, c, b, a / b);
//			}
//		}
//		else
//		{
//			if (c == '+')
//			{
//				printf("%.4f%c%.4f=%.4f\n", a, c, b, a + b);
//			}
//			else if(c=='-')
//			{
//				printf("%.4f%c%.4f=%.4f\n", a, c, b, a - b);
//			}
//			else
//			{
//				printf("%.4f%c%.4f=%.4f\n", a, c, b, a * b);
//			}
//		}
//
//	}
//	return 0;
//}

//int main()
//{
//	int y, m;
//	while (scanf("%d%d", &y, &m) != EOF)
//	{
//		getchar();
//		if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
//		{
//			printf("31\n");
//		}
//		else if (m == 4 || m == 6 || m == 9 || m == 11)
//		{
//			printf("30\n");
//		}
//		else
//		{
//			if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
//			{
//				printf("29\n");
//			}
//			else
//			{
//				printf("28\n");
//			}
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int year, mouth;
//	while (scanf("%d%d", &year, &mouth) != EOF)
//	{
//		getchar();
//		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//		{
//			switch (mouth)
//			{
//			case 1:
//			case 3:
//			case 5:
//			case 7:
//			case 8:
//			case 10:
//			case 12:
//				printf("%d\n", 31);
//				break;
//			case 4:
//			case 6:
//			case 9:
//			case 11:
//				printf("%d\n", 30);
//				break;
//			case 2:
//				printf("%d\n", 29);
//				break;
//			default :
//				break;
//			}
//		}
//		else
//		{
//			switch (mouth)
//			{
//			case 1:
//			case 3:
//			case 5:
//			case 7:
//			case 8:
//			case 10:
//			case 12:
//				printf("%d\n", 31);
//				break;
//			case 4:
//			case 6:
//			case 9:
//			case 11:
//				printf("%d\n", 30);
//				break;
//			case 2:
//				printf("%d\n", 28);
//				break;
//			default:
//				break;
//			}
//		}
//	}
//	return 0;
//}

//#include <math.h>
//
//int main()
//{
//	float a, b, c;
//	float d = 0;
//	float x1 = 0;
//	float x2 = 0;
//	while (scanf("%f%f%f", &a, &b, &c) != EOF)
//	{
//		getchar();
//		if (a == 0)
//		{
//			printf("Not quadratic equation\n");
//		}
//		else
//		{
//			d = b * b - 4 * a * c;
//			if (d == 0)
//			{
//				if ((-b + sqrt(d)) / (2.0 * a) == -0)
//				{
//					printf("x1=x2=%.2f\n", abs(-(-b + sqrt(d)) / (2.0 * a)));
//				}
//				else
//				{
//					printf("x1=x2=%.2f\n", (-b + sqrt(d)) / (2.0 * a));
//				}
//			}
//			else if (d > 0)
//			{
//				x1 = (-b + sqrt(d)) / (2.0 * a);
//				x2 = (-b - sqrt(d)) / (2.0 * a);
//				printf("x1=%.2f;x2=%.2f\n", x2, x1);
//			}
//			else
//			{
//				d = -d;
//				printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi\n", -b / (2.0 * a), sqrt(d) / (2.0 * a), -b / (2.0 * a), sqrt(d) / (2.0 * a));
//			}
//		}
//	}
//
//}