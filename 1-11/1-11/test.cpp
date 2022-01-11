#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//	system("pause");
//	return 0;
//}

//下面一段代码在Debug版本下面是死循环
//在Release版本下面不是死循环
//每次执行到i=12的时候i和arr[12]的地址相同 arr[12]等于0之后i也等于0 就会进入死循环
//局部变量是在栈里面储存的 是从高地址到低地址
//数组中的元素随着下标的增大地址在增大
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i-10);
//	}
//	//system("pause");
//	return 0;
//}

//实现字符串拷贝
//void my_strcpy(char* dest, char* str)
//{
//	while (*str!='\0')
//	{
//		*dest = *str;
//		str++;
//		dest++;
//	}
//	*dest = *str;//把\0也拷贝过去
//}
//优化上面的函数
//void my_strcpy(char* dest, char* str)
//{
//	if (dest != NULL && str != NULL)
//	{
//		while (*dest++ == *str++)
//		{
//			;
//		}
//	}
//}
//继续优化上面的函数
//void my_strcpy(char* dest, char* str)
//{
//	assert(dest != NULL);//断言 要使用头文件assert.h
//	assert(str != NULL);//当括号里面为真就向下执行否则就不执行
//	//当arr2为空的时候就会及时出现报错
//	while (*dest++ == *str++)
//	{
//		;
//	}
//}
//继续优化上面的代码
//void my_strcpy(char* dest, const char* str)//用const修饰*str就不可以改变
//{
//	assert(dest != NULL);
//	assert(str != NULL);
//	while (*dest++ == *str++)//当这里面写反了 就会报错
//	{
//		;
//	}
//}
//继续优化上面的代码
//char* my_strcpy(char* dest, const char* str)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(str != NULL);
//	//把str指向的字符串拷贝到dest指向的空间，包括\0字符
//	while (*dest++ == *str++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	//strcpy
//	//字符串拷贝
//	char arr1[] = "###########";
//	char arr2[] = "bit";
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}

//int main()
//{
//	//const放在指针变量的左边时，修饰的是*p，也就是说，不能通过p来改变*P（num）的值
//	/*const int num = 10;
//	const int* p = &num;*/
//	//*p = 20;//err
//	//const放在指针变量的右边时，修饰的是p本身，p不能被改变
//	int num = 10;
//	int n = 100;
//	int* const p = &num;
//	//p = &n;//err
//	printf("%d\n", num);
//	return 0;
//}

//实现求字符串的长度
//满分代码
//int my_strlen(const char* str)//字符串不可以被修改
//{
//	int count = 0;
//	assert(str != NULL);//保证指针有效性
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

int main()
{
	int a = 20;//4个字节-32个bit位
	//00000000000000000000000000010100 - 原码
	//00000000000000000000000000010100 - 反码
	//00000000000000000000000000010100 - 补码
	//正数的原码、反码、补码都与原码相同
	//4个bit位表示一个十六进制位
	//0x00000014  补码的16进制位的数字 0x后面的表示的就是16进制位数字
	int b = -10;
	//10000000000000000000000000001010 - 原码
	//11111111111111111111111111110101 - 反码
	//11111111111111111111111111110110 - 补码
	//0xfffffff6
	return 0;
}