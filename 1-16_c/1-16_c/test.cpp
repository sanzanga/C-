#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

#include <math.h>

//int main()
//{
//	int arr[10] = { 1,2,3,4,5 };
//	int* p = arr;
//	//*(p+2)== p[2]==>*(arr+2)==arr[2]
//	arr[2];//==>*(arr+2)
//
//	//int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	//int* ptr1 = (int*)(&aa + 1);
//	//int* ptr2 = (int*)(*(aa + 1));//*(aa+1)=aa[1]
//
//	//printf("%d,%d\n", *(ptr1 - 1), *(ptr2 - 1));
//
//	//return 0;
//}

//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//
//	pa++;
//	printf("%s\n", *pa);
//	return 0;
//}

//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//
//	printf("%s\n", **++cpp);//POINT
//	printf("%s\n", *-- * ++cpp + 3);//ER(ENTER)
//	printf("%s\n", *cpp[-2] + 3);//ST(FIRST)
//	printf("%s\n", cpp[-1][-1] + 1);//EW(NEW)
//	return 0;
//}

//int main()
//{
//	unsigned long pilArray[] = { 6,7,8,9,10 };
//	unsigned long* pulPtr;
//
//	pulPtr = pilArray;
//	*(pulPtr + 3) += 3;
//	
//	printf("%d,%d\n", *pulPtr, *(pulPtr + 3));
//	return 0;
//}

//写一个函数能够逆序字符串的内容
//void reverse(char* str)
//{
//	assert(str != NULL);
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//	while (left < right)
//	{
//		char* temp = left;
//		left = right;
//		right = temp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[256] = { 0 };
//	scanf("%s", arr);
//	//gets(arr);//读取一行
//	//逆序函数
//	reverse(arr);
//
//	printf("逆序后的字符串：%s\n", arr);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d%d", &a, &n);
//	int sum = 0;
//	int i = 0;
//	int ret = 0;
//	//2 22 222 2222 22222
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//求出0~100000之间的水仙花数并输出
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		//判断i是否是水仙花数
//		//1、计算i的位数 n位数
//		int n = 1;
//		//123
//		int temp = i;
//		int sum = 0;
//		while (temp /= 10)
//		{
//			n++;
//
//		}
//		//2、计算i的每一位的n次方之和sum
//		temp = i;
//		while (temp)
//		{
//			sum += pow(temp % 10, n);
//			temp /= 10;
//		}
//		//3、比较i==sum
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//打印菱形
 //     *
 //    ***
 //   *****
 //  *******
 // *********
 //***********
 // *********
 //  *******
 //   *****
 //    ***
 //     *
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);//6
//	//打印上半部分
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		//打印空格
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//打印下半部分
//	for (i = 0; i < line - 1; i++)
//	{
//		//打印空格
//		int j = 0;
//		for (j = 0; j <= i ; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//喝汽水问题
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水
//给20元，可以喝多少汽水
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);
//	if (money == 0)
//	{
//		total = 0;
//	}
//	else
//	{
//		total = 2 * money - 1;
//	}
//	//买回来的汽水
//	//total = money;
//	//empty = money;
//	////换回来的汽水
//	//while (empty >= 2)
//	//{
//	//	total += empty /= 2;
//	//	empty = empty / 2 + empty % 2;
//	//}
//	printf("total=%d\n", total);
//	return 0;
//}


//调整数组使奇数全部位于偶数的前面
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//void move(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left<right)
//	{
//		//从左边找偶数
//		while ((left<right) && (arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		//从右边找奇数
//		while ((left<right) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		//交换
//		if (left < right)
//		{
//			int temp = left;
//			left = right;
//			right = temp;
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//从左边找一个奇数
//	//从右边找一个偶数
//	move(arr, sz);
//	print(arr, sz);
//	return 0;
//}

//int main()
//{
//	unsigned char a = 200;
//	//unsigned char-1个字节-8个bit位
//	//unsigned char 的范围时0~255
//	//a和b都能放得下
//	//00000000 00000000 00000000 11001000
//	//11001000-a
//	unsigned char b = 100;
//	//00000000 00000000 00000000 01100100
//	//01100100-b
//	unsigned char c = 0;
//	c = a + b;//整形提升
//	//00000000 00000000 00000001 00101100
//	//发生整形提升
//	// 00000000000000000000000011001000-a
//	// 00000000000000000000000001100100-b
//	// 00000000000000000000000100101100-c
//	// 00101100-c
//	// 00000000000000000000000000101100
//
//	//11001000-a
//	//01100100-b
//	printf("%d,%d", a + b, c);
//	//300 44
//	return 0;
//}

//int main()
//{
//	unsigned int a = 0x1234;
//	//0x00001234
//	unsigned char b = *(unsigned char*)&a;
//	printf("%d\n", b);
//
//	//在32位大端模式处理器上变量b等于 0x00
//	return 0;
//}

//int main()
//{
//	//-128-->127
//	char a[1000] = { 0 };
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	//-1 -2 ... -128 127 126 ... 1 0
//	printf("%d\n", strlen(a));
//	//255
//	//strlen 求字符串的长度要找到\0(或者0)的位置
//
//	return 0;
//}

//打印杨辉三角
//1
//1 1
//1 2 1
//1 3 3 1
//1 4 6 4 1
//......
//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//		}
//	}
//	//打印
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//某地发生一件谋杀案，警察通过排查求人杀人凶手必为4个嫌疑人的一个
//以下为4个嫌疑人的供词
//A说：不是我  //1
//B说：是C     //1
//C说：是D     //0
//D说：C在胡说  //1
//已知3个人说了真话，1个人说了假话
//
//现在请根据这些信息，写一个程序来确定谁到底是凶手
//int main()
//{
//	int killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if (((killer != 'a') + (killer == 'c') + (killer =='d') + (killer != 'd')) == 3)
//		{
//			printf("killer = %c\n", killer);
//		}
//	}
//	return 0;
//}


//赛马问题：有36匹马，6个跑道，没有计时器，请赛马确定，36匹马中的前三名
//请问最少比赛几次？
//8次

//赛马问题：有25匹马，5个跑道，没有计时器，请赛马确定，25匹马中的前三名
//请问最少比赛几次？
//8次

//烧香问题
//有一种香，材质不均匀，但是每一根这样的香，燃烧完片恰好是1个小时
//给你2根香，帮我确定一个15分钟的时间段
//先将一根的两头都点燃，一根一头点燃，当前面的那一根烧完就半个小时
//然后将后面那一根的另一头点燃

//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果
//A选手说：B第一，我第三
//B选手说：我第二，E第四
//C选手说：我第一，D第二
//D选手说：C最后，我第三
//E选手说：我第四，A第一
//比赛结束时，每位选手都说对了一半，请确定比赛名次
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= 5; b++)
		{
			for (c = 1; c <= 5; c++)
			{
				for (d = 1; d <= 5; d++)
				{
					for (e = 1; e <= 5; e++)
					{
						if (((b == 2) + (a == 3) == 1) &&
							((b == 2) + (e == 4) == 1) &&
							((c == 1) + (d == 2) == 1) &&
							((c == 5) + (d == 3) == 1) &&
							((e == 4) + (a == 1) == 1))
						{
							if (a * b * c * d * e == 120)
							{
								printf("a=%d b=%d c=%d d=%d e=%d", a, b, c, d, e);
							}
						}
					}
				}
			}
		}
	}
	return 0;
}