//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//typedef struct {
//	float realpart;
//	float imagpart;
//}Complex;
//
//void assign(Complex& A, float real, float imag);//赋值
//void add(Complex& A, Complex B, Complex C);//相加
//void minus(Complex& A, Complex B, Complex C);//相减
//void multiply(Complex& A, Complex B, Complex C);//相乘
//void divde(Complex& A, Complex B, Complex C);//相除
//
//void assign(Complex& A, float real, float imag)
//{
//	A.realpart = real;
//	A.imagpart = imag;
//}
//
//float GetReal(Complex C)
//{
//	return C.realpart;
//}
//
//float GetImag(Complex C)
//{
//	return C.realpart;
//}
//
//void add(Complex& A, Complex B, Complex C)
//{
//	A.realpart = B.realpart + C.realpart;
//	A.imagpart = B.imagpart + C.imagpart;
//}
//
//void minus(Complex& A, Complex B, Complex C)
//{
//	A.realpart = B.realpart - C.realpart;
//	A.imagpart = B.imagpart - C.imagpart;
//}
//
//void multiply(Complex& A, Complex B, Complex C)
//{
//
//}
//
//void divde(Complex& A, Complex B, Complex C)
//{
//
//}
//
//int main()
//{
//	Complex z1;
//	Complex z2;
//	Complex z3;
//	Complex z4;
//	Complex z;
//	float RealPart, ImagPart;
//	assign(z1, 8.0, -6.0);
//	assign(z2, 4.0, -6.0);
//	add(z3, z1, z2);
//	minus(z4, z1, z2);
//	if (z3.imagpart > 0) {
//		printf("%f+%fi", z3.realpart, z3.imagpart);
//	}
//	else if (z3.imagpart < 0) {
//		printf("%f%fi", z3.realpart, z3.imagpart);
//	}
//	else if (z3.realpart == 0) {
//		printf("%fi", z3.imagpart);
//	}
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int cal(int* arr, int a)
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
//	ret = cal(arr, a);
//
//	printf("%d", ret);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
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



//#include <iostream>
//using namespace std;
//
//void func(long long num)
//{
//    if (num >= 0 && num <= 9)
//    {
//        cout << num;
//    }
//    else
//    {
//        cout << num % 10;
//        func(num / 10);
//    }
//}
//
//int main() {
//
//    long long num;
//    cin >> num;
//    func(num);
//
//    system("pause");
//    return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int main()
//{
//	float a[5][5] = { 0 };
//	int i = 0;
//	int j = 0;
//	float sum = 0;
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			scanf("%f", &a[i][j]);
//		}
//	}
//	for (i = 0; i < 5; i++)
//	{
//		sum = 0;
//		for (j = 0; j < 5; j++)
//		{
//			sum += a[i][j];
//			printf("%.1f ", a[i][j]);
//		}
//		printf("%.1f", sum);
//		printf("\n");
//	}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int main()
//{
//	int a, b, c, d;
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	scanf("%d%d", &a, &b);
//	for (i = 0; i < a; i++)
//	{
//		for (j = 0; j < b; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	scanf("%d%d", &c, &d);
//	c--;
//	d--;
//	printf("%d", arr[c][d]);
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int main()
//{
//	int a, b;
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	int max = 0;
//	int c = 0;
//	int d = 0;
//	scanf("%d%d", &a, &b);
//	for (i = 0; i < a; i++)
//	{
//		for (j = 0; j < b; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	max = arr[i][j];
//	for (i = 0; i < a; i++)
//	{
//		for (j = 0; j < b; j++)
//		{
//			if (arr[i][j] > max)
//			{
//				max = arr[i][j];
//				c = i;
//				d = j;
//			}
//		}
//	}
//	printf("%d %d", ++c, ++d);
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int main()
//{
//	int a, b;
//	int arr1[10][10] = { 0 };
//	int arr2[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	int flag = 1;
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
//			if (arr1[i][j] != arr2[i][j])
//			{
//				flag = 0;
//				break;
//			}
//		}
//	}
//	if (flag)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
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


#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int a;
	scanf("%d", &a);
	int i = 0;
	int j = 0;
	int arr[20][20];
	int x = 0;
	int y = 0;
	int count = 1;

	for (i = 0; i < a; i++)
	{
		for (j = 0; j < a; j++)
		{
			arr[i][j] = 0;
		}
	}

	while (1)
	{
		//向右
		while (arr[x][y] == 0 && (y + 1) <= a)
		{
			arr[x][y] = count;
			count++;
			y++;
		}

		y--;
		x++;

		//向下
		while (arr[x][y] == 0 && (x + 1) <= a)
		{
			arr[x][y] = count;
			count++;
			x++;
		}

		x--;
		y--;

		//向左

		while (arr[x][y] == 0 && y >= 0)
		{
			arr[x][y] = count;
			count++;
			y--;
		}

		x--;
		y++;

		if (count > a * a)
		{
			break;
		}

		//向上
		while (arr[x][y] == 0 && x >= 0)
		{
			arr[x][y] = count;
			count++;
			x--;
		}

		x++;
		y++;

		if (count > a * a)
		{
			break;
		}
	}

	for (i = 0; i < a; i++)
	{
		for (j = 0; j < a; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}
