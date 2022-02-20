#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//#include<stdio.h>

void print(int x)
{
    if (x > 5)
    {
        print(x / 6);
    }
    printf("%d", x % 6);
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    print(n);
    return 0;
}

//int main()
//{
//	int a;
//	scanf("%d", &a);
//	printf("%x", a);
//	return 0;
//}

//#include <math.h>
//
//int main()
//{
//	int a, b;
//	while (~scanf("%d%d", &a, &b))
//	{
//		
//		int i = 0;
//		int count = 0;
//		for (i = a; i <= b; i++)
//		{
//			int num = i;
//
//			int sum = 0;
//			while (num > 0)
//			{
//				sum += pow(num % 10, 3);
//				num /= 10;
//			}
//			if (sum == i)
//			{
//				count++;
//				printf("%d ", i);
//			}
//		}
//		if (count == 0)
//		{
//			printf("no\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//    int n1 = 0;
//    int n2 = 0;
//    while (~scanf("%d%d", &n1, &n2))
//    {
//        int i = 0;
//        int count = 0;
//        for (i = n1; i <= n2; i++)
//        {
//            int num = i;
//
//            int sum = 0;
//            while (num)
//            {
//                sum = sum + pow(num % 10, 3);
//                num /= 10;
//            }
//            if (sum == i)
//            {
//                count++;
//                printf("%d ", i);
//            }
//        }
//        if (count == 0)
//            printf("no\n");
//    }
//    return 0;
//}

//int main()
//{
//	int a, b;
//	int i = 0;
//	int flag = 1;
//	int ge = 0;
//	int bai = 0;
//	int shi = 0;
//	while (~scanf("%d %d", &a, &b))
//	{
//		//getchar();
//		flag = 1;
//
//		for (i = a; i <= b; i++)
//		{
//			int num = i;
//			ge = i % 10;
//			i /= 10;
//			shi = i % 10;
//			bai = i / 10;
//			if (ge* ge* ge + shi * shi * shi + bai * bai * bai == i)
//			{
//				flag = 0;
//				printf("%d ", num);
//			}
//		}
//		if (flag)
//		{
//			printf("no");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int a;
//	int arr[100][3] = { 0 };
//	int sum = 0;
//	int count = 0;
//	scanf("%d", &a);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < a; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 0; i < a; i++)
//	{
//		sum = 0;
//		for (j = 0; j < 3; j++)
//		{
//			sum += arr[i][j];
//		}
//		if (sum / 3 < 60)
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

//int main()
//{
//	int a;
//	int count = 0;
//	scanf("%d", &a);
//	while (a != 1)
//	{
//		if (a % 2 == 0)
//		{
//			a /= 2;
//			count++;
//		}
//		else
//		{
//			a = a * 3 + 1;
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

//有一个数字魔法，给你一个正整数n，如果n为偶数，就将他变为n / 2, 如果n为奇数，就将他变为乘3加1
//不断重复这样的运算，经过有限步之后，一定可以得到1
//牛牛为了验证这个魔法，决定用一个整数来计算几步能变成1

//int main()
//{
//	int a;
//	int ret = 0;
//	scanf("%d", &a);
//	while (a > 0)
//	{
//		ret += a % 10;
//		a = a / 10;
//	}
//	printf("%d", ret);
//	return 0;
//}

//int main()
//{
//	int a;
//	int ret = 0;
//	int flag = 0;
//	scanf("%d", &a);
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= a; i++)
//	{
//		flag = 0;
//		for (j = 1; j <= i; j++)
//		{
//			flag += j;
//		}
//		ret += flag;
//	}
//	printf("%d", ret);
//	return 0;
//}

//int main()
//{
//	int a;
//	double ret = 0;
//	int flag = 0;
//	scanf("%d", &a);
//	for (int i = 1; i <= a; i++)
//	{
//		flag = 0;
//		for (int j = 1; j <= i; j++)
//		{
//			if (j % 2 == 0)
//			{
//				flag -= 2 * j - 1;
//			}
//			else
//			{
//				flag += 2 * j - 1;
//			}
//		}
//		ret += 1.0 / flag;
//	}
//	printf("%.3lf", ret);
//	return 0;
//}