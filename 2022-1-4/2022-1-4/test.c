#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <string.h>
//#include "1_4.h"
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}


//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}

//ʷ����򵥵ĵݹ�
//main�����Լ������Լ�
//������ݹ�������һ���ݹ龭������ֵĴ���ջ��� Stack Overflow
//int main()
//{
//	printf("hello world\n");
//	main();//ÿ�ε��ú�����ʱ�򶼻���ջ���濪�ٿռ� ��ջ����ռ����˾ͻ��׳�ջ���������
//	return 0;
//}

//����1234 Ȼ���1 2 3 4һ�δ�ӡ����Ļ��
//void print(int n)
//{
//	if (n >= 10)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	//�ݹ�
//	print(num);
//	return 0;
//}

////���ַ����ĳ���
//int main()
//{
//	char arr[] = "hello world";
//	int len = strlen(arr);//strlen���ַ������ȵĺ���
//	printf("%d\n", len);
//	return 0;
//}

//�Լ�дһ���������ַ����ĳ���
//������һ����������¼�ַ����ĳ���
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//���������������� �õݹ������
//���»�С
//my_strlen("hello world")
//1+my_strlen("ello world")
//....
//1...+1+my_strlen("")
//int my_strlen(char* str)//str��ŵ���hello world *str��h
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "hello world";
//	int len = my_strlen(arr);//���鴫�Σ�����ȥ�����������飬���ǵ�һ��Ԫ�صĵ�ַ
//	printf("%d\n", len);
//	return 0;
//}

////��n�Ľ׳�
//int Facl1(int num)
//{
//	if (num == 1)
//		return 1;
//	else
//		return num * Facl1(num - 1);
//}
//int Facl2(int num)
//{
//	int sum = 1;
//	for (size_t i = 1; i <=num; i++)
//	{
//		sum *= i;
//	}
//	return sum;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d",&n);
//	ret = Facl1(n);
//	//ret = Facl2(n);
//	printf("%d\n", ret);
//	return 0;
//}

//���n���쳲���������
//1 1 2 3 5 8 13 21 34....
//������ʹ�õݹ�ķ�������� ���ǵ����ֽϴ��ʱ�� �����Ч�ʾͱȽϵ���
//int Fib(int num)
//{
//	if (num <= 2)
//		return 1;
//	else
//		return Fib(num - 1) + Fib(num - 2);
//}
//�������Լ��ķ���
//int Fib(int num)
//{
//	int sum1 = 2;
//	int sum2 = 3;
//	int sum = 0;
//	if (num <= 2)
//		return 1;
//	else
//	{
//		if (num == 3)
//			return 2;
//		else if (num == 4)
//			return 3;
//		else
//		{
//			for (size_t i = 5; i <= num; i++)
//			{
//				sum = sum1 + sum2;
//				sum1 = sum2;
//				sum2 = sum;
//			}
//			return sum;
//		}
//	}
//}
//�����ǵ����ķ���
//int Fib(int num)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (num > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		num--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	int res = 0;
//	scanf("%d", &n);
//	res = Fib(n);
//	printf("%d\n", res);
//	return 0;
//}

//��ʹ�õݹ��ʱ������������Ҫ����ʱ�п���Ҳ�ᷢ��ջ��������
//void test(int num)
//{
//	if (num < 10000)
//	{
//		test(num + 1);
//	}
//}
//int main()
//{
//	test(1);
//	return 0;
//}

