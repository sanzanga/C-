#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	//�ַ�ָ���һ��ʹ��
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
//	//arr��pc���涼�������Ԫ�صĵ�ַ
//	return 0;
//}

//int main()
//{
//	char* p = "abcdef";//"abcdef"��һ�������ַ���
//	//��ʵ�ǰ�a�ĵ�ַ������p
//	//printf("%c\n", *p);//��ӡ����a
//	printf("%s\n", p);//��ӡ����abcdef
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	//����arr1��arr2��˵�ֱ𴴽������鲻ͬ�Ŀռ�
//	//���Բ�ͬ���ֵ���������Ӧ����Ԫ�صĵ�ַ����ͬ
//	//�������ӡ����haha
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
//	//�����ӡhehe
//	//���������ַ����������Ա��޸�
//	//����û�б�Ҫ���޸� ���Ծʹ�һ�־ͺ���
//	//p1��p2ָ�����ͬһ��ռ����Ԫ�صĵ�ַ
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

//ָ�����飺������ �������ָ���

//int main()
//{
//	int arr[10] = { 0 };//��������
//	char ch[5] = { 0 };//�ַ�����
//	int* parr[4];//�������ָ�������--ָ������
//	char* pch[5];//����ַ�ָ�������--ָ������
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

//����ָ�롪��ָ��

//int main()
//{
//	//int* p = NULL;//����ָ��-ָ�����ε�-���Դ�����͵ĵ�ַ
//	//char* pc = NULL;//pc���ַ�ָ�롪��ָ���ַ���ָ�롪�����Դ���ַ��ĵ�ַ
//	//����ָ�롪��ָ�������ָ�롪�����Դ������ĵ�ַ
//	//int arr[10] = { 0 };
//	//arr����Ԫ�صĵ�ַ
//	//&arr[0]-��Ԫ�صĵ�ַ
//	//&arr-����ĵ�ַ
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//����ĵ�ַҪ�������
//	int(*p)[10] = &arr;
//	//�����p��������ָ��
//	return 0;
//}

//int main()
//{
//	char* arr[5];
//	char* (*pa)[5] = &arr;//pa��ָ�����������
//	//*˵��pa��ָ��
//	//[5]˵���ľ���paָ���������5��Ԫ�ص�
//	//char* ˵��paָ��������Ԫ��������char*
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

//�������������ʽ
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
////������ָ�����ʽ
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
//	print1(arr,3,5);//arr ������  ������������Ԫ�ص�ַ  ����1�ĵ�ַ������Ԫ�صĵ�ַ
//	//����Ҫ��arr�����һά����  arr������Ԫ�� ��һ�������һ��Ԫ��
//	//�����ö�ά��������������д��δ����ǵ�һ��һά����ĵ�ַ
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

//int arr[5];//arr��һ��5��Ԫ�ص���������
//int* parr1[10];//parr1��һ�����飬������10��Ԫ�أ�ÿ��Ԫ�ص�������int* parr1��ָ������
//int (*parr2)[10];//parr2��һ��ָ�룬��ָ��ָ��һ�����飬����10��Ԫ�أ�ÿ��Ԫ�ص�������int��parr2������ָ��
//parr2����������ȥ��parr2��ʣ�µ�int (*)[10]����ָ������ͣ����飩
//int (*parr3[10])[5];//parr3��һ�����飬��������10��Ԫ�أ�ÿһ��Ԫ����һ������ָ��
//������ָ��ָ���������5��Ԫ�أ�ÿһ��Ԫ����int

//void test(int arr[3][5])
//{}
//void test1(int [][5])
//{}
//void test2(int [3][])//���ַ����Ǵ����
//{}
//void test3(int *arr)//���ַ����Ǵ����
//{}
//void test4(int **arr)//���ַ����Ǵ����
//{}
//void test5(int (*arr)[5])
//{}
//
//int main()
//{
//	int arr[3][5] = { 0 };
//	//test(arr);//��ά���鴫��
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
//	test(arr);//ָ������
//	return 0;
//}

//����ָ��-��ָ�������ָ��
//����ָ��-��ָ������ָ��
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
//	int(*p)[10] = &arr;//����ָ��
//	//printf("%d\n", Add(a, b));
//	//&������ �� ������ ���Ǻ����ĵ�ַ
//	//printf("%p\n", &Add);//˵������Ҳ�е�ַ
//	//printf("%p\n", Add);
//	int (*pa)(int, int) = Add;//����ָ��
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


//signal��һ����������
//siganl�����Ĳ�����2������һ����int���ڶ����Ǻ���ָ�룬�ú���ָ��ָ��ĺ����Ĳ�����int������������void
//signal�����ķ�������Ҳ��һ������ָ�룬�ú���ָ��ָ��ĺ����Ĳ�����int������������void
//void (*signal(int, void(*)(int)))(int);
//
////��
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
//	int (*pa)(int, int) = Add;//����ָ��
//	printf("%d\n", (pa)(2, 3));
//	printf("%d\n", (Add)(2, 3));
//
//	printf("%d\n", (*pa)(2, 3));//�������*���п���
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
//	//ָ������
//	int* arr[5];//
//	int (*pa)(int, int) = Add;//Sub Mul Div
//	//��Ҫһ�����飬���������Դ��4�������ĵ�ַ-����ָ�������
//	int (*parr[4])(int, int) = { Add,Sub,Mul,Div };
//	int i = 0;//����ָ������
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](2, 3));
//	}
//	return 0;
//}

char* my_strcpy(char* dest, const char* src);
//дһ������ָ��pf���ܹ�ָ��my_strcpy
char* (*pf)(char*, const char*) = my_strcpy;
//дһ������ָ�����飬�ܹ����4��my_strcpy�����ĵ�ַ
char* (*pf[4])(char* ,const char*) = { my_strcpy ,my_strcpy ,my_strcpy ,my_strcpy };