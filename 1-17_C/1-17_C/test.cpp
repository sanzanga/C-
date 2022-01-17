#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

//int main()
//{
//	//申请空间
//	int* p = (int*)malloc(10 * sizeof(int));
//	//使用空间
//	//****
//	//释放空间
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//int main()
//{
//	char str1[] = "hello world";
//	char str2[] = "hello world";
//	//str1 str2分别开辟了空间
//
//	//对于常量字符串数不可以被更改的
//	//str3 str4里面分别放的是首元素的h的地址 
//	char* str3 = "hello world";
//	char* str4 = "hello world";
//	//数组名代表首元素的地址
//	//两个地址不相同
//	if (str1 == str2)
//	{
//		printf("str1 and str2 are same\n");
//	}
//	else
//	{
//		printf("str1 and str2 are not same\n");//打印
//	}
//
//	if (str3 == str4)
//	{
//		printf("str3 and str4 are same\n");//打印
//	}
//	else
//	{
//		printf("str3 and str4 are not same\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a[5] = { 5,4,3,2,1 };
//	int* ptr = (int*)(&a + 1);
//
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	//4,1
//	return 0;
//}

//int main()
//{
//	int aa[2][5] = { 10,9,8,7,6,5,4,3,2,1 };
//	//10 9 8 7 6
//	//5  4 3 2 1
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}

//写一个函数，可以左旋字符串中的k个字符
//例如
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
//旋转字符串
//void change(char *arr, int num, int sz)
//{
//	int i = 0;
//	int count = 0;
//	for (i = num; i < sz-1; i++)
//	{
//		printf("%c", *(arr+i));
//		count++;
//		if (i == sz - 2 && count != sz-1)
//		{
//			i = -1;
//		}
//		if (sz-1 == count)
//		{
//			break;
//		}
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int num = 0;
//	scanf("%d", &num);
//	num = num % (sz - 1);
//	change(arr, num, sz);
//	return 0;
//}

//暴力求解法
//void left_move(char* arr, int k)
//{
//	assert(arr != NULL);
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < k; i++)
//	{
//		//左旋转一个字符
//		//1
//		//先把首元素拿出来
//		char temp = *arr;
//		//2
//		//再把后面的元素依次向前移动一位
//		int j = 0;
//		for (j = 0; j <len -1 ; j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//		}
//		//3
//		//最后把首元素放在字符串的最后一个
//		*(arr + len - 1) = temp;
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr, 2);
//	printf("%s\n", arr);
//	return 0;
//}

//三步翻转法
//abcdef
//ab cdef
//ba fedc
//bafedc
//cdefab

//void reverse(char* left, char* right)
//{
//	assert(left != NULL);
//	assert(right != NULL);
//	while (left < right)
//	{
//		char temp = *left;
//		*left = *right;
//		*right = temp;
//		left++;
//		right--;
//	}
//}
//
//void left_move(char* arr, int k)
//{
//	assert(arr!=NULL);
//	int len = strlen(arr);
//	assert(k <= len);
//	reverse(arr, arr + k - 1);//逆序左边
//	reverse(arr + k, arr + len - 1);//逆序右边
//	reverse(arr, arr + len - 1);//逆序整体
//}

//判断一个字符串是否为另一个字符串旋转之后的字符串
//int is_left_move(char* s1, char* s2)
//{
//	int len = strlen(s1);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		left_move(s1, 1);
//		int ret = strcmp(s1, s2);
//		if (ret == 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}

//下面的方法就是在arr1后面再加上一个arr1
//将其每次往后移一位与arr2进行比较
//int is_left_move(char* str1, char* str2)
//{
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2)
//	{
//		return 0;
//	}
//	//1、在str1字符串后面追加一个str1字符串
//	//strcat
//	// strncat
//	//strcat(str1, str1);//这个函数不能用于在自己后面追加自己，应该用strncat
//	strncat(str1, str2, 6);//abcdefabcdef
//	
//	//2、判断str2指向的字符串是否是str1指向的字符串的子串
//	//strstr-找子串的
//	char* ret = strstr(str1, str2);
//	if (ret == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//}
//
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr, 2);
//
//	printf("%s\n", arr);
//	return 0;
//}

//int main()
//{
//	char arr1[30] = "abc";
//	char arr2[30] = "ed";
//	strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//杨氏矩阵
//有一个数字矩阵，矩阵的每一行从左到右是递增的，矩阵从上到下是递增的
//请编写程序在这样的矩阵中查找某个数字是否存在

//1 2 3
//4 5 6
//7 8 9

//1 2 3
//2 3 4
//4 5 6

//要求：时间复杂度小于o(N);
//从头开始遍历的复杂度就是o(N)
//所以这道题的要求就是不能遍历
//int FindNum(int arr[3][3], int k, int row, int col)
//{
//	int x = 0;
//	int y = col - 1;
//	while (x<row-1&&y>=0)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			printf("下标是：%d %d\n", x, y);
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int k = 7;
//	int ret = FindNum(arr, k, 3, 3);
//	if (ret == 1)
//	{
//		printf("找到了\n");
//	}
//	else
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}

int FindNum(int arr[3][3], int k, int* px , int* py)
{
	int x = 0;
	int y = *py - 1;
	while (x < *px - 1 && y >= 0)
	{
		if (arr[x][y] > k)
		{
			y--;
		}
		else if (arr[x][y] < k)
		{
			x++;
		}
		else
		{
			*px = x;
			*py = y;
			return 1;
		}
	}
	return 0;
}

int main()
{
	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int k = 7;
	int x = 3;
	int y = 3;
	//将x y的地址传过去，就可以改变里面的值、
	//就能在外面打印出如果找到的横纵坐标的值
	//返回型参数
	//不在函数的内部打印
	int ret = FindNum(arr, k, &x, &y);
	if (ret == 1)
	{
		printf("找到了\n");
		printf("下标是：%d %d\n", x, y);
	}
	else
	{
		printf("找不到\n");
	}
	return 0;
}