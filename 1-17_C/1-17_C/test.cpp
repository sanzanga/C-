#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

//int main()
//{
//	//����ռ�
//	int* p = (int*)malloc(10 * sizeof(int));
//	//ʹ�ÿռ�
//	//****
//	//�ͷſռ�
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//int main()
//{
//	char str1[] = "hello world";
//	char str2[] = "hello world";
//	//str1 str2�ֱ𿪱��˿ռ�
//
//	//���ڳ����ַ����������Ա����ĵ�
//	//str3 str4����ֱ�ŵ�����Ԫ�ص�h�ĵ�ַ 
//	char* str3 = "hello world";
//	char* str4 = "hello world";
//	//������������Ԫ�صĵ�ַ
//	//������ַ����ͬ
//	if (str1 == str2)
//	{
//		printf("str1 and str2 are same\n");
//	}
//	else
//	{
//		printf("str1 and str2 are not same\n");//��ӡ
//	}
//
//	if (str3 == str4)
//	{
//		printf("str3 and str4 are same\n");//��ӡ
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

//дһ�����������������ַ����е�k���ַ�
//����
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
//��ת�ַ���
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

//������ⷨ
//void left_move(char* arr, int k)
//{
//	assert(arr != NULL);
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < k; i++)
//	{
//		//����תһ���ַ�
//		//1
//		//�Ȱ���Ԫ���ó���
//		char temp = *arr;
//		//2
//		//�ٰѺ����Ԫ��������ǰ�ƶ�һλ
//		int j = 0;
//		for (j = 0; j <len -1 ; j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//		}
//		//3
//		//������Ԫ�ط����ַ��������һ��
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

//������ת��
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
//	reverse(arr, arr + k - 1);//�������
//	reverse(arr + k, arr + len - 1);//�����ұ�
//	reverse(arr, arr + len - 1);//��������
//}

//�ж�һ���ַ����Ƿ�Ϊ��һ���ַ�����ת֮����ַ���
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

//����ķ���������arr1�����ټ���һ��arr1
//����ÿ��������һλ��arr2���бȽ�
//int is_left_move(char* str1, char* str2)
//{
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2)
//	{
//		return 0;
//	}
//	//1����str1�ַ�������׷��һ��str1�ַ���
//	//strcat
//	// strncat
//	//strcat(str1, str1);//������������������Լ�����׷���Լ���Ӧ����strncat
//	strncat(str1, str2, 6);//abcdefabcdef
//	
//	//2���ж�str2ָ����ַ����Ƿ���str1ָ����ַ������Ӵ�
//	//strstr-���Ӵ���
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

//���Ͼ���
//��һ�����־��󣬾����ÿһ�д������ǵ����ģ�������ϵ����ǵ�����
//���д�����������ľ����в���ĳ�������Ƿ����

//1 2 3
//4 5 6
//7 8 9

//1 2 3
//2 3 4
//4 5 6

//Ҫ��ʱ�临�Ӷ�С��o(N);
//��ͷ��ʼ�����ĸ��ӶȾ���o(N)
//����������Ҫ����ǲ��ܱ���
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
//			printf("�±��ǣ�%d %d\n", x, y);
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
//		printf("�ҵ���\n");
//	}
//	else
//	{
//		printf("�Ҳ���\n");
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
	//��x y�ĵ�ַ����ȥ���Ϳ��Ըı������ֵ��
	//�����������ӡ������ҵ��ĺ��������ֵ
	//�����Ͳ���
	//���ں������ڲ���ӡ
	int ret = FindNum(arr, k, &x, &y);
	if (ret == 1)
	{
		printf("�ҵ���\n");
		printf("�±��ǣ�%d %d\n", x, y);
	}
	else
	{
		printf("�Ҳ���\n");
	}
	return 0;
}