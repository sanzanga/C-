#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a && b;
//	printf("%d\n", c);
//	int d = 0;
//	c = d || a;
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;//对于逻辑与来说&& 只要左边是假的右边就直接不算了
//	i = a++ || ++b || d++;//对于逻辑或来说|| 只要左边是真的右边也直接不算了
//	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	/*if (a > 5)
//		a = 3;
//	else
//		b = -3;
//
//	b = (a > 5 ? 3 : -3);*/
//	if (a > b)
//		max = a;
//	else
//		max = b;
//
//	max = (a > b ? a : b);
//	return 0;
//}

//这里的（）不是函数调用的操作符
//这里是函数定义的规则
//int get_max(int x, int y)
//{
//	return x > y ? x : y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//调用函数的时候（）就是函数调用操作符
//	int max = get_max(a, b);
//	printf("%d\n", max);
//	return 0;
//}

//学生
//创建了一个结构体类型-struct Stu
//struct Stu
//{
//	//成员变量
//	char name[20];
//	int age;
//	char id[20];
//};

//int main()
//{
//	int a = 10;
//	//使用struct Stu这个结构体变量创建了一个学生对象s1
//	struct Stu s1 = { "张三",20,"20218329" };//创建结构体的对象
//	struct Stu* ps = &s1;
//	//这样比较麻烦 可以用其下面的方法
//	/*printf("%s\n", (*ps).age);
//	printf("%s\n", (*ps).id);
//	printf("%s\n", (*ps).name);*/
//
//	//结构体指针->成员名
//	printf("%s\n", ps->age);
//	printf("%s\n", ps->id);
//	printf("%s\n", ps->name);
//
//	/*printf("%s\n", s1.name);
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.id);*/
//	//结构体变量.成员名  这样就可以访问到成员信息
//	return 0;
//}

//int main()
//{
//	char a = 3;
//	//00000000000000000000000000000011
//	//char里面只能放1个字节 就会发生截断 规则就是截最低的一个字节
//	//00000011
//	char b = 127;
//	//00000000000000000000000001111111
//	//01111111
//	
//	//a和b如何相加
//	//00000011
//	//整体提升按照符号位进行 前面全部补符号位
//	//00000000000000000000000000000111
//	//01111111
//	//00000000000000000000000000111111
//	//直接将两个进行相加
//	//00000000000000000000000001000010
//	//放在char里面又要截断8个比特位
//	char c = a + b;
//	//10000010 
//	//11111111111111111111111111000010  补码
//	//11111111111111111111111111000001  反码  减一
//	//10000000000000000000000000111110 原码  符号位不变其他位按位取反
//	//-126
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	char a = 0xb6;//0x后面是两个十六进制的数字1
//	short b = 0xb600;
//	int c = 0xb600000;
//	if (a == 0xb600)//a要进行整形提升 最后不相等
//		printf("a");
//	if (b == 0xb600)//这个后面也要进行整形提升
//		printf("b");
//	if (c == 0xb600000)//c本来就是整形 不用进行整形提升 本来就相等
//		printf("c");
//	//所以最后只打印c
//	return 0;
//}

//int main()
//{
//	char c = 1;
//	//c只要参与表达式运算，就会发生整形提升
//	printf("%u\n", sizeof(c));//1
//	printf("%u\n", sizeof(+c));//4
//	printf("%u\n", sizeof(!c));//1
//	return 0;
//}

//int main()
//{
//	int a = 10;//在内存中开辟了一块空间
//	int* p = &a;//指针变量————存放地址的变量
//	//这里我们对变量a去除它的地址，可以使用&操作符
//	//将a的地址放在p变量中，p就是一个指针变量
//	return 0;
//}

//int main()
//{
//	/*printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));*/
//	//因为在32位平台地址都是4个字节
//	int a = 0x11223344;
//	int* pa = &a;
//	printf("%p\n", pa);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;//数组名-首元素的地址
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	//将数组里面的是个元素都改成1
//	//但如果将int* p=arr改成char* p=arr就不能将数组里的元素全部改成1
//	//因为int
//	//因为int每次改变的是四个字节 char每次改变的是1个字节
//	return 0;
//}

//int main()
//{
//	//int a;//局部变量比初始化，默认是随机值
//	int* p;//局部的指针变量，就被初始化随机值
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int *p = arr;//数组名是首元素地址
//	int i = 0;
//	for (i = 0; i < 12; i++)
//	{
//		*(p++) = i;
//	}
//	//当指针指向的范围超出数组arr的范围时，p就是野指针
//	return 0;
//}

//int* test()
//{
//	int a = 10;//在定义a的变量的时候会开辟一块空间
//	//但是在离开这个函数的时候，a开辟的空间就会被销毁
//	return &a;
//}
//
//int main()
//{
//	int *p = test();
//	*p = 20;//此时得到的地址已经是一个被释放的空间
//	//若想再次访问回去的话就是非法的，此时这个地址已经不是这个程序的
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	//int* p = NULL;//当实在不知道给指针赋什么初值的时候就给其赋值为NULL
//	*pa = 20;
//	//不想使用pa指针的时候就将其设置为NULL
//	//实质上NULL是0 将0强制转换成地址
//	//所以当指针为0的时候是不可以访问的
//	pa = NULL;//当pa为NULL的时候，pa就不指向a了，也没有指向任何有效的空间了
//
//	//在使用指针的时候要检查其有效性
//	/*if (pa != NULL)
//	{
//
//	}*/
//	return 0;
//}

//指针加减整数
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//int* p = arr;//arr数组名表示首元素地址
//	int* p = &arr[9];//这样就拿到了数组最后一个元素的地址
//	/*for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p = p + 1;
//	}*/
//	//这样就能通过指针来打印数组的每个元素
//
//	/*for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *p);
//		p += 2;
//	}*/
//	//这里打印的就是1 3 5 7 9
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p--;
//	}
//	return 0;
//}

//指针-指针
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	char ch[5] = { 0 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	//打印出来的是9
//	//所以指针减去指针得到的是中间的元素个数
//	//&arr[9]-&ch[0] 算出来的结果是无法预知的 两个指针应该指向同一块空间
//	return 0;
//}

//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//
//int main()
//{
//	//strlen-求字符串的长度
//	//递归-模拟实现了strlen 计数器的方法  递归的方法2
//	//
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//地址-首元素的地址
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n", &arr);//取出来的整个数组的地址，虽然与首元素地址相同
//	printf("%p\n", &arr+1);
//	//1.&arr-&数组名-数组名不是首元素的地址——数组名表示整个数组——&数组名 取出来的是整个数组的地址
//	//2.sizeof(arr)-sizeof(数组名）-数组名表示整个数组-sizeof(数组名）计算的是整个数组的大小
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%p  ======   %p\n", p + i, &arr[i]);//打印出来每个都是一样的
//	//}
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		//printf("%d ", arr[i]);
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;//此时的pa就是一级指针变量
//	int** ppa = &pa;//ppa就是二级指针
//	//int*** pppa = &ppa;//pppa就是三级指针
//	return 0;
//}

//指针数组--数组--存放指针的数组
//数组指针--指针
int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	/*int* pa = &a;
	int* pb = &b;
	int* pc = &c;*/
	//整形数组-存放数组
	//字符数组-存放字符
	//指针数组-存放指针
	//int arr[10];
	int* arr2[3] = { &a,&b,&c };//指针数组
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d\n", * (arr2[i]));
	}
	return 0;
}