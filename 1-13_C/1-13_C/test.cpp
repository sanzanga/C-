#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	//字符指针的一般使用
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'w';
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	char* pc = arr;
//	printf("%s\n", arr);
//	printf("%s\n", pc);
//	//arr和pc里面都存的是首元素的地址
//	return 0;
//}

//int main()
//{
//	char* p = "abcdef";//"abcdef"是一个常量字符串
//	//其实是把a的地址赋给了p
//	//printf("%c\n", *p);//打印的是a
//	printf("%s\n", p);//打印的是abcdef
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	//对于arr1和arr2来说分别创建了两块不同的空间
//	//所以不同名字的数组名对应的首元素的地址不相同
//	//因此最后打印的是haha
//	char* p1 = "abcdef";
//	char* p2 = "abcdef";
//	/*if (arr1 == arr2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}*/
//	//最后会打印hehe
//	//两个常量字符串都不可以被修改
//	//所以没有必要被修改 所以就存一分就好了
//	//p1和p2指向的是同一块空间的首元素的地址
//	if (p1 == p2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

//指针数组：是数组 用来存放指针的

//int main()
//{
//	int arr[10] = { 0 };//整形数组
//	char ch[5] = { 0 };//字符数组
//	int* parr[4];//存放整数指针的数组--指针数组
//	char* pch[5];//存放字符指针的数组--指针数组
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = { &a,&b,&c,&d };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", *(arr[i]));
//	}
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}

//数组指针——指针

//int main()
//{
//	//int* p = NULL;//整形指针-指向整形的-可以存放整型的地址
//	//char* pc = NULL;//pc是字符指针——指向字符的指针——可以存放字符的地址
//	//数组指针——指向数组的指针——可以存放数组的地址
//	//int arr[10] = { 0 };
//	//arr是首元素的地址
//	//&arr[0]-首元素的地址
//	//&arr-数组的地址
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//数组的地址要存放起来
//	int(*p)[10] = &arr;
//	//上面的p就是数组指针
//	return 0;
//}

//int main()
//{
//	char* arr[5];
//	char* (*pa)[5] = &arr;//pa是指针变量的名字
//	//*说明pa是指针
//	//[5]说明的就是pa指向的数组是5个元素的
//	//char* 说明pa指向的数组的元素类型是char*
//
//	int arr2[10] = { 0 };
//	int(*pa2)[10];
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	/*int(*pa)[10] = &arr;
//	int i = 0;*/
//	/*for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*pa)[i]);
//	}*/
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", *(*pa + i));//*pa=arr
//	//}
//	return 0;
//}

//参数是数组的形式
//void print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
////参数是指针的形式
//void print2(int(*p)[5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			//printf("%d ", *(*(p + i) + j));
//			//printf("%d ", (*(p + 1))[j]);
//			printf("%d ", *(p[i] + j));
//			printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print1(arr,3,5);//arr 数组名  数组名就是首元素地址  但是1的地址不是首元素的地址
//	//我们要把arr想象成一维数组  arr有三个元素 把一行想象成一个元素
//	//所以用二维数组的数组名进行传参传的是第一行一维数组的地址
//	print2(arr, 3, 5);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);
//		printf("%d ", *(p + i));
//		printf("%d ", *(arr + i));
//		printf("%d ", arr[i]);//arr[i]==*(arr+i)==*(p+i)==p[i]
//	}
//	return 0;
//}

//int arr[5];//arr是一个5个元素的整形数组
//int* parr1[10];//parr1是一个数组，数组有10个元素，每个元素的类型是int* parr1是指针数组
//int (*parr2)[10];//parr2是一个指针，该指针指向一个数组，数组10个元素，每个元素的类型是int，parr2是数组指针
//parr2是数组名，去掉parr2，剩下的int (*)[10]就是指针的类型（数组）
//int (*parr3[10])[5];//parr3是一个数组，该数组有10个元素，每一个元素是一个数组指针
//该数组指针指向的数组有5个元素，每一个元素是int

//void test(int arr[3][5])
//{}
//void test1(int [][5])
//{}
//void test2(int [3][])//这种方法是错误的
//{}
//void test3(int *arr)//这种方法是错误的
//{}
//void test4(int **arr)//这种方法是错误的
//{}
//void test5(int (*arr)[5])
//{}
//
//int main()
//{
//	int arr[3][5] = { 0 };
//	//test(arr);//二维数组传参
//	//test1(arr);
//	//test2(arr);
//	//test3(arr);
//	//test4(arr);
//	test5(arr);
//	return 0;
//}

//void test1(int *p)
//{}
//
//void test2(char *ch)
//{}
//
//int main()
//{
//	int a = 10;
//	int* p1 = &a;
//	test1(&a);//ok
//	test1(p1);//ok
//	char ch = 'w';
//	char* pc = &ch;
//	test2(&ch);
//	test2(pc);
//	return 0;
//}

//void test(int **p)
//{}
//
//int main()
//{
//	int* ptr;
//	int** pp = &ptr;
//	test(&ptr);
//	test(pp);
//	int* arr[10];
//	test(arr);//指针数组
//	return 0;
//}

//数组指针-是指向数组的指针
//函数指针-是指向函数的指针
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;//数组指针
//	//printf("%d\n", Add(a, b));
//	//&函数名 和 函数名 都是函数的地址
//	//printf("%p\n", &Add);//说明函数也有地址
//	//printf("%p\n", Add);
//	int (*pa)(int, int) = Add;//函数指针
//	printf("%d\n", (*pa)(2, 3));
//	return 0;
//}

//void Print(char* str)
//{
//	printf("%s\n", str);
//}
//
//int main()
//{
//	void (*p)(char*) = Print;
//	(*p)("hello world");
//	return 0;
//}


//signal是一个函数声明
//siganl函数的参数有2个，第一个是int，第二个是函数指针，该函数指针指向的函数的参数是int，返回类型是void
//signal函数的返回类型也是一个函数指针，该函数指针指向的函数的参数是int，返回类型是void
//void (*signal(int, void(*)(int)))(int);
//
////简化
//typedef void(*pfun_t)(int);
//pfun_t signal(int, pfun_t);

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int (*pa)(int, int) = Add;//函数指针
//	printf("%d\n", (pa)(2, 3));
//	printf("%d\n", (Add)(2, 3));
//
//	printf("%d\n", (*pa)(2, 3));//这里面的*可有可无
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	//指针数组
//	int* arr[5];//
//	int (*pa)(int, int) = Add;//Sub Mul Div
//	//需要一个数组，这个数组可以存放4个函数的地址-函数指针的数组
//	int (*parr[4])(int, int) = { Add,Sub,Mul,Div };
//	int i = 0;//函数指针数组
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](2, 3));
//	}
//	return 0;
//}

char* my_strcpy(char* dest, const char* src);
//写一个函数指针pf，能够指向my_strcpy
char* (*pf)(char*, const char*) = my_strcpy;
//写一个函数指针数组，能够存放4个my_strcpy函数的地址
char* (*pf[4])(char* ,const char*) = { my_strcpy ,my_strcpy ,my_strcpy ,my_strcpy };