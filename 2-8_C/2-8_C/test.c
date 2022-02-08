#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{

	return 0;
}

//int main()
//{
//	float a, b;
//	float BIM = 0;
//	while (scanf("%f%f", &a, &b) != EOF)
//	{
//		getchar();
//		b = b / 100;
//		BIM = a / (b * b);
//		if (BIM < 18.5)
//		{
//			printf("Underweight\n");
//		}
//		else if (BIM <= 23.9)
//		{
//			printf("Normal\n");
//		}
//		else if (BIM <= 27.9)
//		{
//			printf("Overweight\n");
//		}
//		else
//		{
//			printf("Obese\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a, b, c;
//	while (scanf("%d%d%d", &a, &b, &c) != EOF)
//	{
//		getchar();
//		if (a + b > c && a + c > b && c + b > a)
//		{
//			if (a == b && a == c)
//			{
//				printf("Equilateral triangle!\n");
//			}
//			else if (a == b || a == c || c == b)
//			{
//				printf("Isosceles triangle!\n");
//			}
//			else
//			{
//				printf("Ordinary triangle!\n");
//			}
//		}
//		else
//		{
//			printf("Not a triangle!\n");
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
//		if (a > 0)
//		{
//			printf("1\n");
//		}
//		else if (a == 0)
//		{
//			printf("0.5\n");
//		}
//		else
//		{
//			printf("0\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a, b;
//	while (scanf("%d%d", &a, &b) != EOF)
//	{
//		getchar();
//		if (a > b)
//		{
//			printf("%d>%d\n", a, b);
//		}
//		else if (a < b)
//		{
//			printf("%d<%d\n", a, b);
//		}
//		else
//		{
//			printf("%d=%d\n", a, b);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	char c;
//	while (scanf("%c", &c) != EOF)
//	{
//		getchar();
//		if (c >= 'a' && c <= 'z')
//		{
//			printf("%c\n", (int)c - 32);
//		}
//		else
//		{
//			printf("%c\n", (int)c + 32);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	char c;
//	while (scanf("%c", &c) != EOF)
//	{
//		getchar();
//		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
//		{
//			printf("%c is an alphabet.\n", c);
//		}
//		else
//		{
//			printf("%c is not an alphabet.\n", c);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	char c;
//	while (scanf("%c ", &c) != EOF)
//	{
//		//不在%c后面加上空格也可
//		//getchar();
//		if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'U' || c == 'u')
//		{
//			printf("Vowel");
//		}
//		else
//		{
//			printf("Consonant");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a >= b && a >= c)
//	{
//		printf("%d", a);
//	}
//	else if (b > a && b > c)
//	{
//		printf("%d", b);
//	}
//	else
//	{
//		printf("%d", c);
//	}
//	return 0;
//}

//int main()
//{
//	int a;
//	while (scanf("%d", &a) != EOF)
//	{
//		if (a % 2 == 0)
//		{
//			printf("Even\n");
//		}
//		else
//		{
//			printf("Odd\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a;
//	while(scanf("%d",&a)!=EOF)
//	{
//		if (a >= 60)
//		{
//			printf("Pass\n");
//		}
//		else
//		{
//			printf("Fail\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a;
//	scanf("%d", &a);
	/*if (a >= 60)
	{
		printf("Pass");
	}
	else
	{
		printf("Fail");
	}*/
//	return 0;
//}

//int main()
//{
//	int a;
//	scanf("%d", &a);
//	if (a >= 90 && a <= 100)
//	{
//		printf("Perfect");
//	}
//	return 0;
//}

//int main()
//{
//	int a;
//	scanf("%d", &a);
//	if (a >= 140)
//	{
//		printf("Genius");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	char ch;
//	while (scanf("%c", &ch) != EOF)
//	{
//		if (ch == '0')
//		{
//			break;
//		}
//		if (ch == 'A')
//		{
//			a++;
//		}
//		else 
//		{
//			b++;
//		}
//	}
//	if (a > b)
//	{
//		printf("A");
//	}
//	else if (b > a)
//	{
//		printf("B");
//	}
//	else
//	{
//		printf("E");
//	}
//	return 0;
//}

//int main()
//{
//	int a;
//	int i = 0;
//	int j = 0;
//	int arr[1000] = { 0 };
//	scanf("%d", &a);
//	while (i <= a)
//	{
//		scanf("%d", &arr[i]);
//		i++;
//	}
//	for (i = 0; i < a - 1; i++)
//	{
//		for (j = 0; j < a - i - 1; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	for (int i = 10000; i < 100000; i++)
//	{
//		if (i == ((i / 10000) * (i % 10000)) + ((i / 1000) * (i % 1000)) + ((i / 100) * (i % 100)) + ((i / 10) * (i % 10)))
//		{
//			printf("%d ", i);
//		}
//	}
//}

//int main()
//{
//	float a, b, c, d;
//	scanf("%f%f%f%f", &a, &b, &c, &d);
//	if (b == 11 && c == 11)
//	{
//		a = a * 0.7;
//	}
//	if (b == 12 && c == 12)
//	{
//		a = a * 0.8;
//	}
//	a = a - d * 50;
//	if (a < 0)
//	{
//		a = 0;
//	}
//	printf("%.2f", a);
//	return 0;
//}

//int main()
//{
//	float a, b, c, d;
//	scanf("%f%f%f%f", a, b, c, d);
//	if (b == 11 && c == 11)
//	{
//		a = a * 0.7;
//	}
//	if (b == 12 && c == 12)
//	{
//		a = a * 0.8;
//	}
//	a = a - d * 50;
//	printf("%.2f", a);
//	return 0;
//}

//int main()
//{
//	float a, b;
//	float BIM;
//	scanf("%f%f", &a, &b);
//	BIM = a / (b * b);
//	if (BIM >= 18.5 && BIM <= 23.9)
//	{
//		printf("Normal");
//	}
//	else
//	{
//		printf("Abnormal");
//	}
//	return 0;
//}

//int main()
//{
//	char ch;
//	scanf("%c", &ch);
//	if ((ch >= 'A' && ch <= 'Z')||(ch>='a'&&ch<='z'))
//	{
//		printf("YES");
//	}
//	else
//	{
//		printf("NO");
//	}
//	return 0;
//}


//int main()
//{
//	char ch;
//	scanf("%c", &ch);
//	if (ch >= 'A' && ch <= 'Z')
//	{
//		printf("YES");
//	}
//	else
//	{
//		printf("NO");
//	}
//	return 0;
//}

//int main()
//{
//	int a, b, c;
//	scanf("%x%o", &a, &b);
//	c = a + b;
//	printf("%d\n", c);
//	return 0;
//}