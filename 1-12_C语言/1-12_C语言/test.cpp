#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>
#include <string.h>

//字符串拷贝
//char* my_strcpy(char* dest, const char* str)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(str != NULL);
//	while (*dest++ = *str++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "##############";
//	char arr2[] = "bit";
//	printf("%s\n", my_strcpy(arr1,arr2));
//	return 0;
//}

//求字符串的长度
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str++ != '\0')
//	{
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "hello world";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//设计一个小程序来判断当前机器的字节序
//int main()
//{
//	int a = 1;
//	char* p = (char*)&a;//int与char不兼容 所以强制性转换
//	if (*p == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}

//int check_system()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//		return 1;
//	else
//		return 0;
//}

//int check_system()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	//返回1 大端
//	//返回0 小端
//	return *p;
//}

//int check_system()
//{
//	int a = 1;
//	return *(char*)&a;
//}
////指针类型的意义
////1、指针类型决定了指针解引用操作符能够访问几个字节：char* p;*p能够访问1个字节，int* p;*p能够访问4个字节
////2、指针类型决定了指针+1、-1，加的或者减得是几个字节：char* p;p+1，跳过一个字节
//
//int main()
//{
//	//设计一个小程序来判断当前机器的字节序
//	//返回1 大端
//	//返回0 小端
//	int ret = check_system();
//	if (ret == 1)
//	{
//		printf("大端\n");
//	}
//	else
//	{
//		printf("小端\n");
//	}
//	return 0;
//}

//输出什么
//int main()
//{
//	char a = -1;
//	//10000000000000000000000000000001  -1的原码
//	//11111111111111111111111111111110  -1的反码
//	//11111111111111111111111111111111  -1的补码
//	//11111111
//	//11111111111111111111111111111111   char是有符号数 发生整形提升 补符号位
//	//-1的补码是上面的那个 所以a=-1
//	signed char b = -1;
//	//11111111
//	//b与a的道理相同 b也等于-1
//	unsigned char c = -1;
//	//11111111
//	//00000000000000000000000011111111  无符号数发生整形提升是补0
//	//最高位是0 原码 反码 补码相同 上面的就是原码
//	printf("a=%d b=%d c=%d", a, b, c);
//	return 0;
//}

//int main()
//{
//	char a = -128;
//	//10000000000000000000000010000000
//	//11111111111111111111111101111111
//	//11111111111111111111111110000000 -补码
//	//10000000
//	//11111111111111111111111110000000 - 补码
//	//本来遇得到上面的原码再算 但是下面要求打印无符号数 无符号数的原码 反码 补码都相同
//	//所以上面的就是a的原码
//	printf("%u\n", a);
//	//%d打印的是十进制的有符号数
//	//%u打印的是十进制的无符号数
//	return 0;
//}

//int main()
//{
//	int i = -20;
//	//10000000000000000000000000010100  原码
//	//11111111111111111111111111101011  反码
//	//11111111111111111111111111101100  补码
//	unsigned int j = 10;
//	//00000000000000000000000000001010   
//	printf("%d\n", i + j);
//	//11111111111111111111111111110110  补码
//	//11111111111111111111111111110101  反码
//	//10000000000000000000000000001010  原码
//	//所以最终打印出来的是-10
//	return 0;
//}

//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//	}
//	//会陷入死循环
//	//当0减去1的时候 得到-1会赋给i i是一个无符号的数字 得到的答案超级大
//	return 0;
//}

//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	//按照原来的思路char里面的数字依次是-1、-2一直到-1000
//	//但是在char里面的范围只有-128到127 当数字为-129的时候要转化为这个范围里面的数字 
//	//根据那个圈-128-1是127  一次推下去
//	//最终要我们求字符串的长度 也就是找到\0即0之前有多少个字符
//	//从-1到-128 再从127到1之间总共有255个字符
//	printf("%d\n", strlen(a));
//	return 0;
//}

//unsigned char i = 0;
////unsigned char 的范围时0-255 i是<=255的所以条件永远成立 会进入一个死循环
//int main()
//{
//	for (i = 0; i <= 225; i++)
//	{
//		printf("hello world\n");
//	}
//	return 0;
//}

//根据结果可以知道 整形和浮点型在内存中的存储是不一样的
//9.0
//1001.0
//(-1)^0 * 1.001 *2^3
//(-1)^s*M*2^E
//s--0
//M--1.001
//E--3

//0.5
//0.1
//(-1)^0*1.0*2^-1
//S=0
//M=1.0
//E=-1
//E+127=126
int main()
{
	int n = 9;
	//0 00000000 00000000000000000001001-补码
	//
	float* pFloat = (float*)&n;
	printf("n的值是：%d\n", n);//9
	printf("*pFloat的值是：%f\n", *pFloat);//0.000000
	//(-1)^0*0.00000000000000000001001*2^-126

	*pFloat = 9.0;
	//1001.0
	//(-1)^0*1.001*2^3
	//0 10000010 00100000000000000000000
	printf("n的值是：%d\n", n);//1091567616
	//站在n的角度上来说存的就是一个整数01000001000100000000000000000000
	//最高位为0原码 反码 补码相同
	printf("*pFloat的值是：%f\n", *pFloat);//9.000000
	return 0;
}

//int main()
//{
//	float f = 5.5;
//	//5.5
//	//101.1
//	//(-1)^0*1.011*2^2
//	//S=0
//	//M=1.011
//	//E=2
//	//0 10000001 01100000000000000000000
//
//	//0 00000000 01100000000000000000000
//	//当指数部分全部为0的时候  第一位不加1
//	//+/-0.011*2^-126(次方就是1-127）
//	//0 11111111 01100000000000000000000
//	//E+127=255
//	//E=128
//	//1.xxxxxx*2^128
//	//表示的是正负无穷大的数
//	//也不进行相应的讨论
//	return 0;
//}