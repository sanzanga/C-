#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	//����������Ԫ�ص�ַ
	//1��sizeof(������)-��������ʾ��������
	//2��&������-��������ʾ��������
	//����������������������������������Ԫ�ص�ַ 
	//һά����
	int a[] = { 1,2,3,4 };//4
	printf("%d\n", sizeof(a));//4*4=16,sizeof(������)-������������ܴ�С-��λ���ֽ�-16
	printf("%d\n", sizeof(a+0));//4/8  a����Ԫ�ص�ַ������a��4/8���ֽ� ��������ʾ��Ԫ�ص�ַ a+0������Ԫ�ص�ַ
	printf("%d\n", sizeof(*a));//4 ��������ʾ��Ԫ�ص�ַ *a������Ԫ�أ�sizeof(*a)����4
	printf("%d\n", sizeof(a+1));//4/8 ��������ʾ��Ԫ�صĵ�ַ a+1�ڶ���Ԫ�صĵ�ַ ��ַ�Ĵ�С����4/8���ֽ�
	printf("%d\n", sizeof(a[1]));//4 �ڶ���Ԫ�صĴ�С
	printf("%d\n", sizeof(&a));//4/8 &aȡ����������ĵ�ַ����������ĵ�ַ��Ҳ�ǵ�ַ����ַ�Ĵ�С����4/8���ֽ�
	printf("%d\n", sizeof(*&a));//16 &aȡ����������ĵ�ַ������Ľ����ò������ʵ������飬sizeof����ľ�������Ĵ�С��λ���ֽ�
	printf("%d\n", sizeof(&a+1));//4/8 &a������ĵ�ַ &a+1��Ȼ��ַ�����������飬�����ǵ�ַ��������4/8���ֽ�
	printf("%d\n", sizeof(&a[0]));//4/8 &a[0]�ǵ�һ��Ԫ�صĵ�ַ
	printf("%d\n", sizeof(&a[0]+1));//4/8 &a[0]+1�ǵڶ���Ԫ�صĵ�ַ

	//�ַ�����
    char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", sizeof(arr));//sizeof������������С 6*1=6�ֽ�
	printf("%d\n", sizeof(arr+0));//4/8  arr����Ԫ�صĵ�ַ arr+0������Ԫ�صĵ�ַ ��ַ�Ĵ�С��4/8�ֽ�
	printf("%d\n", sizeof(*arr));//1  arr����Ԫ�صĵ�ַ *arr������Ԫ��  ��Ԫ�����ַ���С��һ���ֽ�
	printf("%d\n", sizeof(arr[1]));//1 
	printf("%d\n", sizeof(&arr));//4/8  &arr��Ȼ������ĵ�ַ �����ǵ�ַ����ַ��С��4/8���ֽ�
	printf("%d\n", sizeof(&arr+1));//4/8  &arr+1���������������ĵ�ַ����ַ��С��4/8���ֽ�
	printf("%d\n", sizeof(&arr[0]+1));//4/8  �ڶ���Ԫ�صĵ�ַ

	printf("%d\n", strlen(arr));//���ֵ
	printf("%d\n", strlen(arr+0));//���ֵ
	printf("%d\n", strlen(*arr));//err
	printf("%d\n", strlen(arr[1]));//err
	printf("%d\n", strlen(&arr));//���ֵ
	printf("%d\n", strlen(&arr + 1));//���ֵ-6
	printf("%d\n", strlen(&arr[0]+1));//���ֵ-1

	return 0;
}