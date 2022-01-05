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

//史上最简单的递归
//main函数自己调用自己
//在这个递归里面有一个递归经常会出现的错误栈溢出 Stack Overflow
//int main()
//{
//	printf("hello world\n");
//	main();//每次调用函数的时候都会在栈里面开辟空间 当栈里面空间满了就会抛出栈溢出的问题
//	return 0;
//}

//输入1234 然后把1 2 3 4一次打印到屏幕上
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
//	//递归
//	print(num);
//	return 0;
//}

////求字符串的长度
//int main()
//{
//	char arr[] = "hello world";
//	int len = strlen(arr);//strlen求字符串长度的函数
//	printf("%d\n", len);
//	return 0;
//}

//自己写一个函数求字符串的长度
//创建了一个变量来记录字符串的长度
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

//不创建第三方变量 用递归来解决
//大事化小
//my_strlen("hello world")
//1+my_strlen("ello world")
//....
//1...+1+my_strlen("")
//int my_strlen(char* str)//str存放的数hello world *str是h
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "hello world";
//	int len = my_strlen(arr);//数组传参，传过去不是整个数组，而是第一个元素的地址
//	printf("%d\n", len);
//	return 0;
//}

////求n的阶乘
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

//求第n项的斐波那契数列
//1 1 2 3 5 8 13 21 34....
//以下是使用递归的方法计算的 但是当数字较大的时候 计算的效率就比较低下
//int Fib(int num)
//{
//	if (num <= 2)
//		return 1;
//	else
//		return Fib(num - 1) + Fib(num - 2);
//}
//以下是自己的方法
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
//以下是迭代的方法
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

//当使用递归的时候满足两个必要条件时有可能也会发生栈溢出的情况
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

