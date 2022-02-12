#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int arr[10];
	int i = 0;
	while (i < 10)
	{
		scanf("%d", &arr[i]);
		i++;
	}
	int left = 0;
	int right = 9;
	while (left < right)
	{
		int temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;

		left++;
		right--;
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

//int main()
//{
//	int a, b, c, d, e, f, g, h, i, j;
//	scanf("%d%d%d%d%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j);
//	printf("%d %d %d %d %d %d %d %d %d %d", a, b, c, d, e, f, g, h, i, j);
//	return 0;
//}

//int main()
//{
//	int a, b;
//	int arr[11][11];
//	int sum = 0;
//	scanf("%d%d", &a, &b);
//	for (int i = 0; i < a; i++)
//	{
//		for (int j = 0; j < b; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (int i = 0; i < a; i++)
//	{
//		for (int j = 0; j < b; j++)
//		{
//			if (arr[i][j] > 0)
//			{
//				sum += arr[i][j];
//			}
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}

//#include <string.h>
//
//int main()
//{
//	char str1[100] = { 0 };
//	char str2[100] = { 0 };
//	scanf("%s%s", &str1, &str2);
//	if (strcmp(str1, str2) == 0)
//	{
//		printf("same");
//	}
//	else
//	{
//		printf("different");
//	}
//	return 0;
//}

//int main()
//{
//	int a, c;
//	int arr[53] = { 0 };
//	scanf("%d", &a);
//	int i = 0;
//	while (i < a)
//	{
//		scanf("%d", &arr[i]);
//		i++;
//	}
//	scanf("%d", &c);
//	arr[i] = c;
//	for (int j = 0; j < a; j++)
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
//	for (int j = 0; j < a + 1; j++)
//	{
//		printf("%d ", arr[j]);
//	}
//	return 0;
//}

//int main()
//{
//	int a;
//	scanf("%d", &a);
//	float b[100];
//	int i = 0;
//	float min = 0;
//	float max = 0;
//	float sum = 0;
//	while (i < a)
//	{
//		scanf("%f", &b[i]);
//		i++;
//	}
//	min = b[0];
//	max = b[0];
//	for (int j = 0; j < a; j++)
//	{
//		sum += b[j];
//		if (b[j] < min)
//		{
//			min = b[j];
//		}
//		if (b[j] > max)
//		{
//			max = b[j];
//		}
//	}
//	printf("%.2f %.2f %.2f", max, min, sum / a);
//	return 0;
//}

//int main()
//{
//	int a;
//	int b = 0;
//	int c = 0;
//	scanf("%d", &a);
//	for (int i = 1; i <= a; i++)
//	{
//		if (i % 2 == 0)
//		{
//			c++;
//		}
//		else
//		{
//			b++;
//		}
//	}
//	printf("%d %d", b, c);
//	return 0;
//}

//int main()
//{
//	int count = 0;
//	for (int i = 0; i <= 2019; i++)
//	{
//		int m = i;
//		while (m > 0)
//		{
//			if (m % 10 == 9)
//			{
//				count++;
//				break;
//			}
//			else
//			{
//				m /= 10;
//			}
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

//int main()
//{
//	int a;
//	scanf("%d", &a);
//	if (a < 0)
//	{
//		printf("1");
//	}
//	else if (a > 0)
//	{
//		printf("-1");
//	}
//	else
//	{
//		printf("0");
//	}
//	return 0;
//}

//int main()
//{
//	int a;
//	scanf("%d", &a);
//	if (a % 5 == 0)
//	{
//		printf("YES");
//	}
//	else
//	{
//		printf("NO");
//	}
//	return 0;
//}

////(a+b-c)*d
//
//int main()
//{
//	int a, b, c, d;
//	int ret = 0;
//	scanf("%d%d%d%d", &a, &b, &c, &d);
//	ret = (a + b - c) * d;
//	printf("%d", ret);
//	return 0;
//}

//int main()
//{
//	printf("I will learn C++ well!");
//	return 0;
//}

//#include <string.h>
//
//int main()
//{
//	char str1[100] = { 0 };
//	char str2[100] = { 0 };
//	while (scanf("%s%s", &str1, &str2) != EOF)
//	{
//		getchar();
//		if (strcmp(str1, "admin") == 0 && strcmp(str2, "admin") == 0)
//		{
//			printf("Login Success!");
//		}
//		else
//		{
//			printf("Login Fail!");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	char str1[100];
//	char str2[100];
//	scanf("%s%s", &str1, &str2);
//	if (str1 == "admin" && str2 == "admin")
//	{
//		printf("Login Success!");
//	}
//	else
//	{
//		printf("Login Fail!");
//	}
//	return 0;
//}

//int main()
//{
//	int a, b;
//	int i = 0;
//	int j = 0;
//	float count = 0;
//	float f = 0;
//	int arr1[100][100] = { 0 };
//	int arr2[100][100] = { 0 };
//	scanf("%d%d", &a, &b);
//	for (i = 0; i < a; i++)
//	{
//		for (j = 0; j < b; j++)
//		{
//			scanf("%d", &arr1[i][j]);
//		}
//	}
//	for (i = 0; i < a; i++)
//	{
//		for (j = 0; j < b; j++)
//		{
//			scanf("%d", &arr2[i][j]);
//		}
//	}
//	for (i = 0; i < a; i++)
//	{
//		for (j = 0; j < b; j++)
//		{
//			if (arr1[i][j] == arr2[i][j])
//			{
//				count++;
//			}
//		}
//	}
//	f = count / (a * b) * 100;
//	printf("%.2f", f);
//	return 0;
//}