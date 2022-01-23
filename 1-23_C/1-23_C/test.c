#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <Windows.h>

//struct S
//{
//	char name[20];
//	int age;
//};
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	//struct S arr[n];//50个struct S类型的数据
//	//数组里面的必须是一个常量才行，在当前VS编译器下
//
//	return 0;
//}

//int main()
//{
//	//向内存申请10个整型的空间
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		//打印错误的原因的一个方式
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//正常使用空间
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//当动态申请的空间不再使用的时候
//	//就应当还给操作系统
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//int main()
//{
//	//malloc(10 * sizeof(int))
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//释放空间
//	//free函数是用来释放动态开辟的空间
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//realloc
//调整动态开辟内存空间的大小

//int main()
//{
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	//就是在使用malloc开辟的20个空间
//	//假设这里，20个字节不能满足我们的使用
//	//希望我们能够有40个字节的空间
//	//所以这里就可以使用realloc来进行调整
//
//	//realloc函数的使用注意事项
//	//1、如果p指向的空间之后有足够的空间可以追加，则直接追加，后返回p
//	//2、如果p指向的空间之后没有足够的内存空间可以追加，则realloc函数会
//	//重新在一个新的内存区域，开辟一块满足需求的空间，并且把原来的数据拷贝过来
//	//释放旧的内存空间，最后返回新的内存空间地址
//	//3、得用一个新的变量来接受realloc函数的返回值
//
//	int* ptr = realloc(p, 40);
//
//	if (ptr != NULL)
//	{
//		p == ptr;
//	}
//
//	int i = 0;
//	for (i = 5; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	//释放空间
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//int main()
//{
//	//1.对NULL进行解引用操作
//	//int* p = (int*)malloc(40);
//	////万一malloc失败了，p就被赋值了NULL
//	//*p = 0;//err
//
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	*(p + i) = i;//err
//	//}
//	//free(p);
//	//p = NULL;
//
//	//2.对动态开辟的内存的越界访问
//	//int* p = (int*)malloc(5, sizeof(int));
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	//else
//	//{
//	//	int i = 0;
//	//	for (i = 0; i < 10; i++)
//	//	{
//	//		*(p + i) = i;
//	//	}
//	//}
//	////
//	//free(p);
//	//p = NULL;
//
//	//3、对非动态的开辟的内存使用free释放
//	/*int a = 10;
//	int* p = &a;
//	*p = 20;
//	free(p);
//	p = NULL;*/
//
//	//4、使用free释放动态开辟内存的一部分
//	//int* p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	*p++ = i;
//	//}
//	////回收空间
//	//free(p);
//	//p = NULL;
//
//	//5、对同一块动态内存对此释放
//	//int* p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	////使用
//	////释放
//	//free(p);
//	////...
//	////p=NULL;
//	//free(p);
//	//上面的程序就会出现异常
//	//所以建议在每次free后就把p赋值为空指针
//	//即便将空指针进行free也不会出现异常
//
//	//6、动态开辟的内存忘记释放（内存泄漏）
//	/*while (1)
//	{
//		malloc(1);
//		sleep(1000);
//	}*/
//
//	//7、
//
//	return 0;
//}

//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");//str里面是空的
//	printf(str);
//}
//
//int main()
//{
//	//程序崩溃
//	//还有内存泄漏
//	//str以值传递给了p，p是GetMemory的形参，只在函数内部有效
//	//等GetMemory函数返回之后，动态开辟内存尚未释放
//	//并且无法找到，所以会造成内存泄漏
//	Test();
//	return 0;
//}

//对上面的代码进行改造
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}
//另一种方法
//char* GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
////当p的那一块空间就被销毁了，里面就会放一些随机值
////当str拿到那一块空间的地址时，里面的值就不知道是些什么
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}
//下面的代码也相同
//int* test()
//{
//	//ststic int a = 10;//静态区
//	int a = 10;//栈区
//	return &a;
//}
//
//int main()
//{
//	int* p = test();
//	*p = 20;
//	return 0;
//}

//int* test()
//{
//	int* ptr = malloc(100);//堆区
//	return ptr;
//}
//
//int main()
//{
//	int* p = test();
//	return 0;
//}

//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	//改
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);//free释放str指向的空间后，并不会把str置为NULL
//	//改：
//	//str=NULL;
//	if (str != NULL)
//	{
//		//非法访问，释放的空间再次被使用
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

