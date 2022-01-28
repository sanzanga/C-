#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stddef.h>

//
//#define DEBUG//定义
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//#ifdef DEBUG//没有定义就不会执行下面的代码
//		printf("%d ", arr[i]);
//#endif // DEBUG
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//#if 1
//		printf("%d ", arr[i]);
//#endif
//	}
//	return 0;
//}

//int main()
//{
//#if 1==2
//	printf("haha\n");
//#elif 2==1
//	printf("hehe\n");
//#else
//	printf("heihei\n");
//#endif
//	return 0;
//}

//#define DEBUG 0
//
//int main()
//{
////#if defined(DEBUG)
////	printf("hehe\n");
////#endif
//
////#ifdef DEBUG
////	printf("hehe\n");
////#endif
//
////#if !defined(DEBUG)
////	printf("hehe\n");
////#endif
//
//#ifndef DEBUG
//	printf("hehe\n");
//#endif
//
//
//	return 0;
//}

#include "add.h"
//引用本地文件

//int main()
//{
//	int ret = Add(2, 3);
//	return 0;
//}

struct S
{
	char c1;
	int a;
	char c2;
};

//int main()
//{
//	//struct S
//	printf("%d\n", offsetof(struct S,c1));
//	printf("%d\n", offsetof(struct S, a));
//	printf("%d\n", offsetof(struct S, c2));
//	return 0;
//}


//将0转化成这个结构体类型的值
#define OFFSETOF(struct_name,member_name) (int)&(((struct_name*)0)->member_name)

int main()
{
	printf("%d\n", OFFSETOF(struct S, c1));
	printf("%d\n", OFFSETOF(struct S, a));
	printf("%d\n", OFFSETOF(struct S, c2));
	return 0;
}