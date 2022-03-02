#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int count(int a, int b)
{
	int i = 0;
	int ret = 0;
	for (i = a; i <= b; i++)
	{
		int num = i;
		while (num > 0)
		{
			if (num % 10 == 2)
			{
				ret++;
			}
			num /= 10;
		}
	}
	return ret;
}

int main()
{
	int a, b;
	int ret = 0;
	scanf("%d%d", &a, &b);

	ret = count(a, b);

	printf("%d", ret);

	return 0;
}

//int test(int a)
//{
//	int num = 0;
//	while (a > 0)
//	{
//		num += a % 10;
//		a /= 10;
//	}
//	return num;
//}
//
//int main()
//{
//	int a;
//	int ret = 0;
//	scanf("%d", &a);
//
//	ret = test(a);
//
//	while (ret >= 10)
//	{
//		ret = test(ret);
//	}
//
//	printf("%d", ret);
//
//	return 0;
//}

//38 -> 3 + 8 = 11 -> 1 + 1 = 2

//int count(int a, int b)
//{
//	int i = 0;
//	int sum = 0;
//	int ret = 0;
//	for (i = a; i <= b; i++)
//	{
//
//		int sum = 0;
//		int num = i;
//		while (num > 0)
//		{
//			sum += num % 10;
//			num /= 10;
//		}
//		if (sum % 5 == 0)
//		{
//			ret++;
//		}
//	}
//
//	return ret;
//}
//
//int main()
//{
//	int a, b;
//	int sum = 0;
//	scanf("%d%d", &a, &b);
//
//	sum = count(a, b);
//
//	printf("%d", sum);
//
//	return 0;
//}

//int count(int a, int b)
//{
//	int sum = 0;
//	int i = 0;
//	for (i = a; i <= b; i++)
//	{
//		if (i % 5 == 0)
//		{
//			sum++;
//		}
//	}
//	return sum;
//}
//
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//
//	int sum = count(a, b);
//
//	printf("%d", sum);
//
//	return 0;
//}

//int max(int a, int b, int c)
//{
//	if (a > b && a > c)
//	{
//		return a;
//	}
//	else if (b > a && b > c)
//	{
//		return b;
//	}
//	else
//	{
//		return c;
//	}
//}
//
//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//
//	int ret = max(a, b, c);
//
//	printf("%.2f", (float)max(a + b, b, c) / (max(a, b + c, c) + max(a, b, b + c)));
//
//	return 0;
//}

//void sort(int* arr, int a)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < a - 1; i++)
//	{
//		for (j = 0; j < a - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//
//	for (i = 0; i < a; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//}
//
//int main()
//{
//	int a;
//	int i = 0;
//	int arr[100] = { 0 };
//	scanf("%d", &a);
//	for (int i = 0; i < a; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	sort(arr, a);
//
//	return 0;
//}

//int cal(int* arr,int a)
//{
//	int i = 0;
//	int ret = 0;
//	while (i < a)
//	{
//		ret += *arr;
//		arr++;
//		i++;
//	}
//	return ret;
//}
//
//int main()
//{
//	int a;
//	int ret;
//	int arr[100] = { 0 };
//	scanf("%d", &a);
//	int i = 0;
//	for (i = 0; i < a; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	ret = cal(arr,a);
//
//	printf("%d", ret);
//
//	return 0;
//}