#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	//数组名是首元素地址
	//1、sizeof(数字名)-数组名表示整个数组
	//2、&数组名-数组名表示整个数组
	//除了上面的两个情况，所有数组名都是首元素地址 
	//一维数组
	int a[] = { 1,2,3,4 };//4
	printf("%d\n", sizeof(a));//4*4=16,sizeof(数组名)-计算的是数组总大小-单位是字节-16
	printf("%d\n", sizeof(a+0));//4/8  a是首元素地址，所以a是4/8个字节 数组名表示首元素地址 a+0还是首元素地址
	printf("%d\n", sizeof(*a));//4 数组名表示首元素地址 *a就是首元素，sizeof(*a)就是4
	printf("%d\n", sizeof(a+1));//4/8 数组名表示首元素的地址 a+1第二个元素的地址 地址的大小就是4/8个字节
	printf("%d\n", sizeof(a[1]));//4 第二个元素的大小
	printf("%d\n", sizeof(&a));//4/8 &a取出的是数组的地址，但是数组的地址那也是地址，地址的大小就是4/8个字节
	printf("%d\n", sizeof(*&a));//16 &a取出的是数组的地址，数组的解引用操作访问的是数组，sizeof计算的就是数组的大小单位是字节
	printf("%d\n", sizeof(&a+1));//4/8 &a是数组的地址 &a+1虽然地址跳过整个数组，但还是地址，所以是4/8个字节
	printf("%d\n", sizeof(&a[0]));//4/8 &a[0]是第一个元素的地址
	printf("%d\n", sizeof(&a[0]+1));//4/8 &a[0]+1是第二个元素的地址

	//字符数组
    char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", sizeof(arr));//sizeof计算的是数组大小 6*1=6字节
	printf("%d\n", sizeof(arr+0));//4/8  arr是首元素的地址 arr+0还是首元素的地址 地址的大小是4/8字节
	printf("%d\n", sizeof(*arr));//1  arr是首元素的地址 *arr就是首元素  首元素是字符大小是一个字节
	printf("%d\n", sizeof(arr[1]));//1 
	printf("%d\n", sizeof(&arr));//4/8  &arr虽然是数组的地址 但还是地址，地址大小是4/8个字节
	printf("%d\n", sizeof(&arr+1));//4/8  &arr+1是跳过整个数组后的地址，地址大小是4/8个字节
	printf("%d\n", sizeof(&arr[0]+1));//4/8  第二个元素的地址

	printf("%d\n", strlen(arr));//随机值
	printf("%d\n", strlen(arr+0));//随机值
	printf("%d\n", strlen(*arr));//err
	printf("%d\n", strlen(arr[1]));//err
	printf("%d\n", strlen(&arr));//随机值
	printf("%d\n", strlen(&arr + 1));//随机值-6
	printf("%d\n", strlen(&arr[0]+1));//随机值-1

	return 0;
}