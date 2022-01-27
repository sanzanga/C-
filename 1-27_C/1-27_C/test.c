#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//extern int Add(int x, int y);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	c = Add(a, b);
//	printf("c = %d\n", c);
//	return 0;
//}

//stdio.h

//#define MAX 100
//
////预定义符号
//
//int main()
//{
//	//printf("%s\n", __FILE__);//获得程序所对的文件路径
//	//printf("%d\n", __LINE__);//过得该行代码的行号
//	//printf("%s\n", __DATE__);//获得日期
//	//printf("%s\n", __TIME__);//获得时间
//
//	//写日志文件
//	int i = 0;
//	int arr[10] = { 0 };
//	FILE* pf = fopen("log.txt", "w");
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//		fprintf(pf, "file:%s line:%d date:%s time:%s i=%d\n", __FILE__, __LINE__, __DATE__, __TIME__, i);
//		printf("%s\n", __FUNCTION__);//打印函数名
//	}
//	fclose(pf);
//	pf = NULL;
//
//	for(i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//int main()
//{
//	//printf("%d\n", __STDC__);//判断编译器是否遵守C语言标准 遵守返回1 否则未定义
//	//
//	return 0;
//}

//#define MAX 100
//#define STR "hehe"
//
//#define reg register//为register这个关键字，创建一个简短的名字
//
//#define do_forever for(;;)//用更形象的符号来替换一种实现
//
//int main()
//{
//	for (;;);
//
//	//reg int a;
//	
//	//register int a;
//
//	//int max = MAX;
//	//int max = 100;
//	//printf("%d\n", max);
//
//	//printf("%s\n", STR);
//	return 0;
//}

//#define SQURE(X) X*X
//
//int main()
//{
//	//int ret = SQURE(5);
//	//printf("%d\n", ret);
//	//5*5=25;
//
//	//#define定义的宏是替换的 不是传参的
//	int ret = SOURE(5 + 1);
//	printf("%d\n", ret);
//	//11 - 5+1*5+1 = 11
//
//	//若像得到36 就给后面的表达式X加上括号
//	//#define SOURE(X) (X)*(X)
//	return 0;
//}

//#define DOUBLE(X) X+X 
//
//int main()
//{
//	int a = 5;
//	int ret = 10 * DOUBLE(a);
//	//10*5+5=55
//
//	//要得到100
//	//3define DOUBLE(X) ((X)+(X))
//	printf("%d\n", ret);
//	return 0;
//}

//void print(int a)
//{
//	printf("the value of a is %d\n", a);
//}
//
//int main()
//{
//	int a = 10;
//	int b = 2;
//	//printf("the value of a is %d\n", a);
//	print(a);
//	print(b);
//
//	return 0;
//}

//#define PRINT(X) printf("the value of "#X" is %d\n",X)
//
//int main()
//{
//	/*printf("hello world\n");
//	printf("hello " "world\n");*/
//	//会把上面当成一个字符串处理
//
//	int a = 10;
//	int b = 20;
//	PRINT(a);
//	//printf("the value of ""a"" is %d\n", a);
//	PRINT(b);
//	//printf("the value of ""b"" is %d\n", b);
//
//	return 0;
//}

//#define CAT(X,Y) X##Y
//
//int main()
//{
//	int Class84 = 2019;
//	//printf("%d\n", class84);
//	printf("%d\n", CAT(Class, 84));
//	//printf("%d\n", Class##84);
//	//printf("%d\n", Classs84);
//	return 0;
//}

//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//
//int main()
//{
//	int a = 10;
//	int b = 11;
//	int max = MAX(a++, b++);
//	int max = ((a++) > (b++) ? (a++) : (b++));
//
//	printf("%d\n", max);//12
//	printf("%d\n", a);//11
//	printf("%d\n", b);//13
//
//	return 0;
//}

//int Max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//
//int Max2(float x, float y)
//{
//	return (x > y ? x : y);
//}
//
//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	float c = 3.0f;
//	float d = 4.0f;
//
//	//函数在调用的时候
//	//会有函数调用和返回值的开销
//	int max = Max2(c, d);
//	printf("%d\n", max);
//
//	//宏在预处理阶段就完成了替换
//	//没有函数的调用和开销
//	max = MAX(c, d);
//	printf("%d\n", max);
//
//	/*int max = Max(a, b);
//	printf("%d\n", max);
//	max = MAX(a, b);
//	printf("%d\n", max);*/
//
//	return 0;
//}

//#define TEST(x,y) printf("test\n");
//
//int main()
//{
//	TEST();
//	return 0;
//}

//#define SIZEOF(type) sizeof(type)
//
//int main()
//{
//	int ret = SIZEOF(int);
//	printf("%d\n", ret);
//	//宏的参数可以是类型
//	//函数做不到这个事情
//	return 0;
//}

//#define MALLOC(num,type) (type*)malloc(num*sizeof(type))
//
//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//
//	int* p1 = MALLOC(10, int);
//
//	return 0;
//}

#define MAX 100

int main()
{
	printf("MAX = %d\n", MAX);
#undef MAX
	printf("MAX = %d\n", MAX);
	return 0;
}