#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//int main()
//{
//	//char arr[] = "abcdef";
//	//printf("%d\n", sizeof(arr));//7  sizeof(arr)计算的是数组的大小，单位是字节
//	//printf("%d\n", sizeof(arr+0));//4/8  计算的是地址的大小 arr+0是首元素的地址
//	//printf("%d\n", sizeof(*arr));//1  *arr是首元素，sizeof(*arr)计算的是首元素
//	//printf("%d\n", sizeof(arr[1]));//1  arr[1]是第二个元素
//	//printf("%d\n", sizeof(&arr));//4/8  &arr虽然是数组的地址，但还是地址，所以是4/8个字节
//	//printf("%d\n", sizeof(&arr+1));//4/8 &arr+1是跳过整个数组的地址，但也是地址
//	//printf("%d\n", sizeof(&arr[0]+1));//4/8 &arr[0]+1第二个元素的地址
//
//	//printf("%d\n", strlen(arr));//6
//	//printf("%d\n", strlen(arr+0));//6
//	//printf("%d\n", strlen(*arr));//err *arr是字符a，把a当成地址来使用 97并不是所用的空间，非法访问
//	//printf("%d\n", strlen(arr[1]));//err arr[1]是字符b 与上面同理
//	//printf("%d\n", strlen(&arr));//6  &arr虽然是数组的地址，但是与首元素的地址相同 都是从首元素往后找 
//	// 但是会有警告因为 const char*和char(*)[7]类型不兼容
//	//printf("%d\n", strlen(&arr+1));//随机值 &arr+1跳过了整个数组的长度 后面的\0的位置不确定
//	//printf("%d\n", strlen(&arr[0]+1));//5 &arr[0]+1拿到了第二个元素的地址，从第二个元素往后找
//
//	//char* p = "abcdef";//将常量字符串里面的a字符的地址放在p里面
//	//printf("%d\n", sizeof(p));//4/8 计算指针变量的大小
//	//printf("%d\n", sizeof(p+1));//4/8 p+1得到的是字符b的地址
//	//printf("%d\n", sizeof(*p));//1 *P就是第一个字符
//	//printf("%d\n", sizeof(p[0]));//1 p[0]=*(p+0)就是第一个字符a
//	//printf("%d\n", sizeof(&p));//4/8 &p还是地址
//	//printf("%d\n", sizeof(&p+1));//4/8 &p+1跳过p，但还是地址
//	//printf("%d\n", sizeof(&p[0]+1));//4/8 p[0]是第一个字符 &p[0]拿到第一个字符的地址 &p[0]+1拿到的是第二个字符的地址
//
//	//printf("%d\n",strlen(p));//6
//	//printf("%d\n", strlen(p+1));//5
//	//printf("%d\n", strlen(*p));//err
//	//printf("%d\n", strlen(p[0]));//err
//	//printf("%d\n", strlen(&p));//随机值
//	//printf("%d\n", strlen(&p+1));//随机值
//	//printf("%d\n", strlen(&p[0]+1));//5
//
//	//二维数组
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//48
//	printf("%d\n", sizeof(a[0][0]));//4
//	printf("%d\n", sizeof(a[0]));//16 a[0]相当于第一行作为一维数组的数组名
//	//sizeof(arr[0])把数组名单独放在sizeof()内，计算的是第一行的大小
//
//	printf("%d\n", sizeof(a[0]+1));// 4 a[0]是第一行的数组名，数组名此时是首元素的地址，a[0]其实是第一行第一个元素
//	//的地址 所以a[0]+1就是第一行第二个元素的地址 地址的大小是4/8个字节
//
//	printf("%d\n", sizeof(*(a[0]+1)));//4  *(a[0]+1)是第一行第二个元素，大小就是4个字节
//	printf("%d\n", sizeof(a + 1));//4  a是二维数组的数组名，没有sizeof(a),也没有&(a)，所以a就是首元素的地址
//	//而把二维数组看成一维数组时，二维数组的首元素是它第一行，a就是第一行(首元素)的地址
//	//a+1就是第二行的地址
//
//	printf("%d\n", sizeof(*(a + 1)));//16 sizeof(a[1])计算第二行的大小，单位是字节
//	printf("%d\n", sizeof(&a[0] + 1));//4 第二行的地址
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16 计算第二行的大小，单位是字节
//	printf("%d\n", sizeof(*a));//16 a是首元素的地址——第一行的地址，*a就是第一行，sizeof(*a)就是计算第一行的大小
//	printf("%d\n", sizeof(a[3]));//16 sizeof()里面不参与真实的运算，只是根据里面的类型计算大小 所以不会管a[3]是否真的运算
//	//所以a[3]与a[0]一样
//	return 0;
//}

//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	//2,5
//	return 0;
//}

//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}* p;
////假设p的值为0x100000.如下表达式的值分别是多少
//int main()
//{
//	p = (struct Test*)0x100000;
//	printf("%p\n", p + 0x1);
//	printf("%p\n", (unsigned long)p + 0x1);
//	printf("%p\n", (unsigned int*)p + 0x1);
//	return 0;
//}

//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);
//	return 0;
//}

//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };//逗号表达式
//	int* p;
//	p = a[0];
//	printf("%d\n", p[0]);
//	return 0;
//}

int main()
{
	int a[5][5];
	int(*p)[4];
	p = a;
	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
	return 0;
}