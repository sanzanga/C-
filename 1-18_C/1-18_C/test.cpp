#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

//�������ķ���
//�ݹ�
//ָ�롪��ָ��

//size_t==unsigned int

//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str != '\0')//while(*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	//int len = my_strlen("abcdef");
//	////����ʾ��
//	////char arr[] = {'a','b','c','d','e','f'};
//	////int len = my_strlen(arr);
//	//printf("%d\n", len);
//	//      3-6
//	//�޷�������ȥ�޷����������޷�����
//	if (strlen("abc") - strlen("abcdef") > 0)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	
//	return 0;
//}

//char* my_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	
//	//����srcָ����ַ�����destָ��Ŀռ䣬����'\0'
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	//����Ŀ�Ŀռ����ʼ��ַ
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "abcdefghi";
//	char arr2[] = "bit";
//	//char arr2[]={'b','i','t'};//����ʾ��
//
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//}

//char* my_strcat(char* dest, char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src);
//	
//	//�ҵ�Ŀ���ַ�����\0
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	//׷��
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	//������д���Ǵ����
//	//��Ϊarr1�ڶ����ʱ����Ѿ������˳��� 
//	//��arr2׷�ӵ�arr1���� �������Խ�����
//	/*char arr1[] = "hello";
//	char arr2[] = "world";
//	strcat(arr1, arr2);
//	printf("%s\n", arr1);*/
//
//	//�����Ͳ��ᱨ��
//	char arr1[30] = "hello";
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//}

//int main()
//{
//	//> 1
//	//== 0
//	//< -1
//
//	char arr1[] = "abcdef";
//	char arr2[] = "sqwer";
//
//	//�����д��ֻ�������ڵı�����
//	/*if (strcmp(arr1, arr2) == 1)
//	{
//		printf("arr1>arr2\n");
//	}
//	else if (strcmp(arr1, arr2) == 0)
//	{
//		printf("arr1==arr2\n");
//	}
//	else if(strcmp(arr1,arr2)==-1)
//	{
//		printf("arr1<arr2\n");
//	}*/
//
//	//�����д����ʹ�����еı�����
//	if (strcmp(arr1, arr2) > 0)
//	{
//		printf("arr1>arr2\n");
//	}
//	else if (strcmp(arr1, arr2) == 0)
//	{
//		printf("arr1==arr2\n");
//	}
//	else if (strcmp(arr1, arr2) < 0)
//	{
//		printf("arr1<arr2\n");
//	}
//
//	//int ret = strcmp(arr1, arr2);
//
//	//printf("%d\n", ret);
//	return 0;
//}

//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1);
//	assert(str2);
//	//�Ƚ�
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;//���
//		}
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//	{
//		return 1;//����
//	}
//	else 
//	{
//		return -1;//С��
//	}
//}

//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1);
//	assert(str2);
//	//�Ƚ�
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;//���
//		}
//		str1++;
//		str2++;
//	}
//	return (*str1 - *str2);
//}
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "sqwer";
//	int ret = my_strcmp(arr1, arr2);
//	printf("ret = %d\n", ret);
//
//	return 0;
//}

//����Ķ��ǳ��Ȳ������Ƶ��ַ����ĺ��� 
//����\0Ϊ������־
//int main()
//{
//	char arr1[5] = "abc";
//	char arr2[] = "hello world";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	//����arr1�ĳ��ȱ�arr2�ĳ��ȶ̣�arr2��������ݲ��ܹ�������arr1����
//	//������ͺ������ǻ´�� ���������ٱ���
//	return 0;
//}

//int main()
//{
//	char arr1[10] = "abcdefgh";
//	char arr2[] = "bit";
//	strncpy(arr1, arr2, 4);
//
//	return 0;
//}

int main()
{
	char arr1[30] = "hello";
	char arr2[] = "world";
	strncat(arr1, arr2, 3);
	printf("%s\n", arr1);

	return 0;
}