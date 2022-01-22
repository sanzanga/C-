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

//设置默认对齐数是4
//#pragma pack(4)
//struct S
//{
//	char c1;
//	double d;
//};
//#pragma pack()
////取消设置的默认对齐数
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
//	//offsetof();//用来计算结构体成员相对于起始位置的偏量是多少
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
////对于值传递 是无法改变变量的值并将其传递回去
////这里只能传地址
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
////传值
//void Print1(struct S temp)
//{
//	printf("%d %c %lf\n", temp.a, temp.c, temp.d);
//}
//
////传址
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


//位段 - 二进制位
//struct S
//{
//	int a : 2;//这句代码的意思是a只要2个bit位
//	int b : 5;
//	int c : 10;
//	int d : 30;
//};
//
////47bit - 6个字节=48个bit位
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

//枚举类型
//enum Sex
//{
//	//枚举的可能取值
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
////C语言的源代码---->可执行程序
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

//联合-联合体-共用体

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
//	//返回1，表示小端
//	//返回0，表示大端
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
//	//返回1，表示小端
//    //返回0，表示大端
//	return u.c;
//}
//
//int main()
//{
//	//int a = 0x11223344;
//	//低地址-------------------高地址
//	//...[][][11][22][[33][44][][]...    大端字节序存储模式
//	//...[][][44][33][22][11][][]...     小端字节序存储模式
//	//讨论一个数据，放在内存中的存放的字节顺序
//	//大小端字节序问题
//
//	int a = 1;
//	int ret = check_sys();
//	if (1 == ret)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
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