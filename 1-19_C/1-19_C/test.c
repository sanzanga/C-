//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>

//struct S1
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//struct S2
//{
//	char c1;
//	char c2;
//	int a;
//};
//
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//
//int main()
//{
//	struct S1 s1 = { 0 };
//	printf("%d\n", sizeof(s1));
//
//	struct S2 s2 = { 0 };
//	printf("%d\n", sizeof(s2));
//
//	struct S3 s3 = { 0 };
//	printf("%d\n", sizeof(s3));
//
//	struct S4 s4 = { 0 };
//	printf("%d\n", sizeof(s4));
//	return 0;
//}

//����Ĭ�϶�������4
//#pragma pack(4)
//struct S
//{
//	char c1;
//	double d;
//};
//#pragma pack()
////ȡ�����õ�Ĭ�϶�����
//
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));
//	return 0;
//}

//#include <stddef.h>
//
//struct S
//{
//	char c;
//	int i;
//	double d;
//};
//
//int main()
//{
//	//offsetof();//��������ṹ���Ա�������ʼλ�õ�ƫ���Ƕ���
//	printf("%d\n", offsetof(struct S, c));
//	printf("%d\n", offsetof(struct S, i));
//	printf("%d\n", offsetof(struct S, d));
//	return 0;
//}

//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//
////����ֵ���� ���޷��ı������ֵ�����䴫�ݻ�ȥ
////����ֻ�ܴ���ַ
////void Inti(struct S temp)
////{
////	temp.a = 100;
////	temp.c = 'w';
////	temp.d = 3.14;
////}
//
//void Inti(struct S* ps)
//{
//	ps->a = 100;
//	ps->c = 'w';
//	ps->d = 3.14;
//}
//
////��ֵ
//void Print1(struct S temp)
//{
//	printf("%d %c %lf\n", temp.a, temp.c, temp.d);
//}
//
////��ַ
//void Print2(const struct S* ps)
//{
//	printf("%d %c %lf\n", ps->a, ps->c, ps->d);
//}
//
//int main()
//{
//	struct S s;
//	Inti(&s);
//	Print1(s);
//	Print2(&s);
//	/*s.a = 100;
//	s.c = 'w';
//	s.d = 3.14;
//	printf("%d\n", s.a);*/
//	return 0;
//}


//λ�� - ������λ
//struct S
//{
//	int a : 2;//���������˼��aֻҪ2��bitλ
//	int b : 5;
//	int c : 10;
//	int d : 30;
//};
//
////47bit - 6���ֽ�=48��bitλ
//
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));
//
//	return 0;
//}

//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 20;
//	s.c = 3;
//	s.d = 4;
//
//
//	return 0;
//}

//ö������
//enum Sex
//{
//	//ö�ٵĿ���ȡֵ
//	MALE,
//	FEMALE,
//	SECRET
//};

//enum Color
//{
//	RED = 2,
//	GREEN,
//	BLUE
//};
//
////C���Ե�Դ����---->��ִ�г���
//#define RED 0;
//#define GREEN 1;
//#define BLUE 2;
//
//int main()
//{
//	/*enum Sex s = MALE;
//	s = FEMALE;
//	enum Color c = RED;
//	c = BLUE;*/
//
//	printf("%d %d %d", RED, GREEN, BLUE);
//	return 0;
//}

//����-������-������

//union Un
//{
//	char c;
//	int i;
//};
//
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//	printf("%p\n", &u);
//	return 0;
//}

//int check_sys()
//{
//	int a = 1;
//	//����1����ʾС��
//	//����0����ʾ���
//	return *(char*)&a;
//}

//int check_sys()
//{
//	union Un
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	//����1����ʾС��
//    //����0����ʾ���
//	return u.c;
//}
//
//int main()
//{
//	//int a = 0x11223344;
//	//�͵�ַ-------------------�ߵ�ַ
//	//...[][][11][22][[33][44][][]...    ����ֽ���洢ģʽ
//	//...[][][44][33][22][11][][]...     С���ֽ���洢ģʽ
//	//����һ�����ݣ������ڴ��еĴ�ŵ��ֽ�˳��
//	//��С���ֽ�������
//
//	int a = 1;
//	int ret = check_sys();
//	if (1 == ret)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}

//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	enum Sex s = MALE;
//	printf("%d\n", sizeof(s));
//
//	return 0;
//}

//union Un
//{
//	int a;
//	char arr[5];
//};
//
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));
//
//	return 0;
//}