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
//	//struct S arr[n];//50��struct S���͵�����
//	//��������ı�����һ���������У��ڵ�ǰVS��������
//
//	return 0;
//}

//int main()
//{
//	//���ڴ�����10�����͵Ŀռ�
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		//��ӡ�����ԭ���һ����ʽ
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//����ʹ�ÿռ�
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
//	//����̬����Ŀռ䲻��ʹ�õ�ʱ��
//	//��Ӧ����������ϵͳ
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
//	//�ͷſռ�
//	//free�����������ͷŶ�̬���ٵĿռ�
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//realloc
//������̬�����ڴ�ռ�Ĵ�С

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
//	//������ʹ��malloc���ٵ�20���ռ�
//	//�������20���ֽڲ����������ǵ�ʹ��
//	//ϣ�������ܹ���40���ֽڵĿռ�
//	//��������Ϳ���ʹ��realloc�����е���
//
//	//realloc������ʹ��ע������
//	//1�����pָ��Ŀռ�֮�����㹻�Ŀռ����׷�ӣ���ֱ��׷�ӣ��󷵻�p
//	//2�����pָ��Ŀռ�֮��û���㹻���ڴ�ռ����׷�ӣ���realloc������
//	//������һ���µ��ڴ����򣬿���һ����������Ŀռ䣬���Ұ�ԭ�������ݿ�������
//	//�ͷžɵ��ڴ�ռ䣬��󷵻��µ��ڴ�ռ��ַ
//	//3������һ���µı���������realloc�����ķ���ֵ
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
//	//�ͷſռ�
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//int main()
//{
//	//1.��NULL���н����ò���
//	//int* p = (int*)malloc(40);
//	////��һmallocʧ���ˣ�p�ͱ���ֵ��NULL
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
//	//2.�Զ�̬���ٵ��ڴ��Խ�����
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
//	//3���ԷǶ�̬�Ŀ��ٵ��ڴ�ʹ��free�ͷ�
//	/*int a = 10;
//	int* p = &a;
//	*p = 20;
//	free(p);
//	p = NULL;*/
//
//	//4��ʹ��free�ͷŶ�̬�����ڴ��һ����
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
//	////���տռ�
//	//free(p);
//	//p = NULL;
//
//	//5����ͬһ�鶯̬�ڴ�Դ��ͷ�
//	//int* p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	////ʹ��
//	////�ͷ�
//	//free(p);
//	////...
//	////p=NULL;
//	//free(p);
//	//����ĳ���ͻ�����쳣
//	//���Խ�����ÿ��free��Ͱ�p��ֵΪ��ָ��
//	//���㽫��ָ�����freeҲ��������쳣
//
//	//6����̬���ٵ��ڴ������ͷţ��ڴ�й©��
//	/*while (1)
//	{
//		malloc(1);
//		sleep(1000);
//	}*/
//
//	//7��
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
//	strcpy(str, "hello world");//str�����ǿյ�
//	printf(str);
//}
//
//int main()
//{
//	//�������
//	//�����ڴ�й©
//	//str��ֵ���ݸ���p��p��GetMemory���βΣ�ֻ�ں����ڲ���Ч
//	//��GetMemory��������֮�󣬶�̬�����ڴ���δ�ͷ�
//	//�����޷��ҵ������Ի�����ڴ�й©
//	Test();
//	return 0;
//}

//������Ĵ�����и���
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
//��һ�ַ���
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
////��p����һ��ռ�ͱ������ˣ�����ͻ��һЩ���ֵ
////��str�õ���һ��ռ�ĵ�ַʱ�������ֵ�Ͳ�֪����Щʲô
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
//����Ĵ���Ҳ��ͬ
//int* test()
//{
//	//ststic int a = 10;//��̬��
//	int a = 10;//ջ��
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
//	int* ptr = malloc(100);//����
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
//	//��
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
//	free(str);//free�ͷ�strָ��Ŀռ�󣬲������str��ΪNULL
//	//�ģ�
//	//str=NULL;
//	if (str != NULL)
//	{
//		//�Ƿ����ʣ��ͷŵĿռ��ٴα�ʹ��
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

