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
////Ԥ�������
//
//int main()
//{
//	//printf("%s\n", __FILE__);//��ó������Ե��ļ�·��
//	//printf("%d\n", __LINE__);//���ø��д�����к�
//	//printf("%s\n", __DATE__);//�������
//	//printf("%s\n", __TIME__);//���ʱ��
//
//	//д��־�ļ�
//	int i = 0;
//	int arr[10] = { 0 };
//	FILE* pf = fopen("log.txt", "w");
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//		fprintf(pf, "file:%s line:%d date:%s time:%s i=%d\n", __FILE__, __LINE__, __DATE__, __TIME__, i);
//		printf("%s\n", __FUNCTION__);//��ӡ������
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
//	//printf("%d\n", __STDC__);//�жϱ������Ƿ�����C���Ա�׼ ���ط���1 ����δ����
//	//
//	return 0;
//}

//#define MAX 100
//#define STR "hehe"
//
//#define reg register//Ϊregister����ؼ��֣�����һ����̵�����
//
//#define do_forever for(;;)//�ø�����ķ������滻һ��ʵ��
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
//	//#define����ĺ����滻�� ���Ǵ��ε�
//	int ret = SOURE(5 + 1);
//	printf("%d\n", ret);
//	//11 - 5+1*5+1 = 11
//
//	//����õ�36 �͸�����ı��ʽX��������
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
//	//Ҫ�õ�100
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
//	//������浱��һ���ַ�������
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
//	//�����ڵ��õ�ʱ��
//	//���к������úͷ���ֵ�Ŀ���
//	int max = Max2(c, d);
//	printf("%d\n", max);
//
//	//����Ԥ����׶ξ�������滻
//	//û�к����ĵ��úͿ���
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
//	//��Ĳ�������������
//	//�����������������
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