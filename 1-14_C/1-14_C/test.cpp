#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//������

//void menu()
//{
//	printf("***************************");
//	printf("***    1.add    2.sub   ***");
//	printf("***    3.mul    4.div   ***");
//	printf("***       0.exit        ***");
//	printf("***************************");
//}
//
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int Sub(int x, int y)
//{
//	int z = 0;
//	z = x - y;
//	return z;
//}
//
//int Mul(int x, int y)
//{
//	int z = 0;
//	z = x * y;
//	return z;
//}
//
//int Div(int x, int y)
//{
//	int z = 0;
//	z = x / y;
//	return z;
//}
//
//int Xor(int x, int y)
//{
//	int z = 0;
//	z = x ^ y;
//	return z;
//}

//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("������������������>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Add(x, y));
//			break;
//		case 2:
//			printf("������������������>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("������������������>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("������������������>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Div(x, y));
//			break;
//		case 0:
//			printf("�˳�\n");
//			break;
//		default :
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//void Calc(int(*pf)(int ,int))
//{
//	int x = 0;
//	int y = 0;
//	printf("����������������:>");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));
//}
//
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int (*pfArr[])(int, int) = { 0 ,Add,Sub,Mul,Div,Xor };
//	//pfArr��һ������ָ�����顪��ת�Ʊ�
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("������������������>");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�\n");
//		}
//		else
//		{
//			printf("ѡ�����\n");
//		}
//	} while (input);
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;//ȡ������ĵ�ַ
//
//	int (*pf)(int, int);//ȡ������ĵ�ַ
//	int (*pfArr[4])(int, int);//pfArr��һ������-����ָ�������
//
//	int (*(*ppfArr)[4])(int, int) = &pfArr;
//	//ppfArr��һ������ָ�룬ָ����ָ���������4��Ԫ��
//	//ָ��������ÿһ��Ԫ�ص�������һ������ָ�� int (*)(int,int)
//	return 0;
//}

//void print(char* str)
//{
//	printf("hehe:%s\n", str);
//}
//
//void test(void (*p)(char*))
//{
//	printf("test\n");
//	p("bit");
//}
//
//int main()
//{
//	test(print);
//	return 0;
//}

//int main()
//{
//	//ð������
//	//ð��������ֻ��������������
//	return 0;
//}
//qsort-���������������͵�����

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//
//	//ָ������
//	//int* arr[10];
//	//����ָ��
//	//int(*pa)[10];
//	//����ָ��
//	int (*pAdd)(int, int) = Add;//&Add
//	//int sum = (*pAdd)(1, 2);
//	         //Add(1,2);
//	//����ָ�������
//	int (*pArr[5])(int, int);
//	//ָ����ָ�������ָ��
//	int(*(*ppArr)[5])(int, int) = &pArr;
//	return 0;
//}

//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	//����
//	for (i = 0; i < sz - 1; i++)
//	{
//		//һ��ð������
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}

struct Stu
{
	char name[20];
	int age;
};

int cmp_int(const void* e1, const void* e2)
{
	//�Ƚ���������Ԫ�ص�
	return *(int*)e1 - *(int*)e2;
}

void test1()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

int cmp_float(const void* e1, const void* e2)
{
	/*if (*(float*)e1 == *(float*)e2)
		return 0;
	else if (*(float*)e1 > *(float*)e2)
		return 1;
	else
		return -1;*/
	return (int)(*(float*)e1 - *(float*)e2);
}

void test2()
{
	float f[] = { 9.0,8.0,7.0,6.0,5.0,4.0 };
	int sz = sizeof(f) / sizeof(f[0]);
	qsort(f, sz, sizeof(f[0]), cmp_float);
	int j = 0;
	for (j = 0; j < sz; j++)
	{
		printf("%f ", f[j]);
	}
}

int cmp_stu_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

int cmp_stu_by_name(const void* e1, const void* e2)
{
	//�Ƚ����־��ǱȽ��ַ���
	//�ַ����Ƚϲ���ֱ����><=���Ƚϣ�Ӧ����strcmp�����ַ����ȽϺ���
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

void test3()
{
	struct Stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
	//��һ����������������������Ԫ�صĵ�ַ
	//�ڶ����������Ǵ����������Ԫ�ظ���
	//�����������������������ÿ��Ԫ�صĴ�С-��λ�ֽ�
	//���ĸ��������Ǻ���ָ�룬�Ƚ�����Ԫ�صĺ����ĵ�ַ-�������ʹ�����Լ�ʵ��
	//           ����ָ������������ǣ����Ƚϵ�����Ԫ�صĵ�ַ
}

void Swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char temp = *buf1;
		*buf1 = *buf2;
		*buf2 = temp;
		buf1++;
		buf2++;
	}
}

//ʵ��ð������ĳ���Ա�����Ƿ�֪��δ���������������-��֪��
//����ԱҲ��֪�������Ƚϵ�����Ԫ�ص�����
void bubble_sort(void* base, int sz, int width, int (*cmp)(void* e1, void* e2))
{
	int i = 0;
	//����
	for (i = 0; i < sz - 1; i++)
	{
		//ÿһ�˱ȽϵĶ���
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//����Ԫ�صıȽ�
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				//����
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}

void test4()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//ʹ��ð������ĳ���Աһ��֪���Լ��������ʲô����
	//����Ӧ��֪����αȽ����������е�Ԫ��
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int1);
}

int cmp_int1(void* e1, void* e2)
{
	//�Ƚ���������Ԫ�ص�
	return *(int*)e1 - *(int*)e2;
}

void test5()
{
	struct Stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
	int sz = sizeof(s) / sizeof(s[0]);
	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_age);
}

int main1()
{
	//struct Stu s[3] = { {"����",20},{"lisi",30},{"shd",39} };
	//float f[] = { 9.0,8.0,7.0 };

	//ð��������ֻ��������������
	//bubble_sort(arr, sz);

	//qsort-���������������͵�����
	test1();
	test2();
	test3();
	test4();
	test5();
	return 0;
}

//psort - �⺯�� - ����
//void qsort(void *base,size_t num,size_t,width,int(*cmp)(const void *e1,const void *e2)

//int main()
//{
//	int a = 10;
//	//int* pa = &a;//
//	//char* pc = &a;
//
//	//char ch = 'w';
//	void* p = &a;//�����͵�ָ��
//	//*p = 0;//����void*ָ���ǲ��ܽ��н����ò���
//	//void*���ܽ��мӼ������Ĳ���
//
//	//p = &ch;
//	//void*���͵�ָ����Խ����������͵ĵ�ַ
//	return 0;
//}