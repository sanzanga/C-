#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

//计数器的方法
//递归
//指针——指针

//size_t==unsigned int

//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str != '\0')//while(*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	//int len = my_strlen("abcdef");
//	////错误示范
//	////char arr[] = {'a','b','c','d','e','f'};
//	////int len = my_strlen(arr);
//	//printf("%d\n", len);
//	//      3-6
//	//无符号数减去无符号数还是无符号数
//	if (strlen("abc") - strlen("abcdef") > 0)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	
//	return 0;
//}

//char* my_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	
//	//拷贝src指向的字符串到dest指向的空间，包含'\0'
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	//返回目的空间的起始地址
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "abcdefghi";
//	char arr2[] = "bit";
//	//char arr2[]={'b','i','t'};//错误示范
//
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//}

//char* my_strcat(char* dest, char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src);
//	
//	//找到目的字符串的\0
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	//追加
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	//这样的写法是错误的
//	//因为arr1在定义的时候就已经定好了长度 
//	//把arr2追加到arr1后面 就造成了越界访问
//	/*char arr1[] = "hello";
//	char arr2[] = "world";
//	strcat(arr1, arr2);
//	printf("%s\n", arr1);*/
//
//	//这样就不会报错
//	char arr1[30] = "hello";
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//}

//int main()
//{
//	//> 1
//	//== 0
//	//< -1
//
//	char arr1[] = "abcdef";
//	char arr2[] = "sqwer";
//
//	//下面的写法只是用现在的编译器
//	/*if (strcmp(arr1, arr2) == 1)
//	{
//		printf("arr1>arr2\n");
//	}
//	else if (strcmp(arr1, arr2) == 0)
//	{
//		printf("arr1==arr2\n");
//	}
//	else if(strcmp(arr1,arr2)==-1)
//	{
//		printf("arr1<arr2\n");
//	}*/
//
//	//下面的写法才使用所有的编译器
//	if (strcmp(arr1, arr2) > 0)
//	{
//		printf("arr1>arr2\n");
//	}
//	else if (strcmp(arr1, arr2) == 0)
//	{
//		printf("arr1==arr2\n");
//	}
//	else if (strcmp(arr1, arr2) < 0)
//	{
//		printf("arr1<arr2\n");
//	}
//
//	//int ret = strcmp(arr1, arr2);
//
//	//printf("%d\n", ret);
//	return 0;
//}

//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1);
//	assert(str2);
//	//比较
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;//相等
//		}
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//	{
//		return 1;//大于
//	}
//	else 
//	{
//		return -1;//小于
//	}
//}

//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1);
//	assert(str2);
//	//比较
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;//相等
//		}
//		str1++;
//		str2++;
//	}
//	return (*str1 - *str2);
//}
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "sqwer";
//	int ret = my_strcmp(arr1, arr2);
//	printf("ret = %d\n", ret);
//
//	return 0;
//}

//上面的都是长度不受限制的字符产的函数 
//都已\0为结束标志
//int main()
//{
//	char arr1[5] = "abc";
//	char arr2[] = "hello world";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	//明显arr1的长度比arr2的长度短，arr2里面的内容不能够拷贝到arr1里面
//	//但是这和函数还是会拷贝 拷贝完了再报错
//	return 0;
//}

//int main()
//{
//	char arr1[10] = "abcdefgh";
//	char arr2[] = "bit";
//	strncpy(arr1, arr2, 4);
//
//	return 0;
//}

int main()
{
	char arr1[30] = "hello";
	char arr2[] = "world";
	strncat(arr1, arr2, 3);
	printf("%s\n", arr1);

	return 0;
}