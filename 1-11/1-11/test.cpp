#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//	system("pause");
//	return 0;
//}

//����һ�δ�����Debug�汾��������ѭ��
//��Release�汾���治����ѭ��
//ÿ��ִ�е�i=12��ʱ��i��arr[12]�ĵ�ַ��ͬ arr[12]����0֮��iҲ����0 �ͻ������ѭ��
//�ֲ���������ջ���洢��� �ǴӸߵ�ַ���͵�ַ
//�����е�Ԫ�������±�������ַ������
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i-10);
//	}
//	//system("pause");
//	return 0;
//}

//ʵ���ַ�������
//void my_strcpy(char* dest, char* str)
//{
//	while (*str!='\0')
//	{
//		*dest = *str;
//		str++;
//		dest++;
//	}
//	*dest = *str;//��\0Ҳ������ȥ
//}
//�Ż�����ĺ���
//void my_strcpy(char* dest, char* str)
//{
//	if (dest != NULL && str != NULL)
//	{
//		while (*dest++ == *str++)
//		{
//			;
//		}
//	}
//}
//�����Ż�����ĺ���
//void my_strcpy(char* dest, char* str)
//{
//	assert(dest != NULL);//���� Ҫʹ��ͷ�ļ�assert.h
//	assert(str != NULL);//����������Ϊ�������ִ�з���Ͳ�ִ��
//	//��arr2Ϊ�յ�ʱ��ͻἰʱ���ֱ���
//	while (*dest++ == *str++)
//	{
//		;
//	}
//}
//�����Ż�����Ĵ���
//void my_strcpy(char* dest, const char* str)//��const����*str�Ͳ����Ըı�
//{
//	assert(dest != NULL);
//	assert(str != NULL);
//	while (*dest++ == *str++)//��������д���� �ͻᱨ��
//	{
//		;
//	}
//}
//�����Ż�����Ĵ���
//char* my_strcpy(char* dest, const char* str)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(str != NULL);
//	//��strָ����ַ���������destָ��Ŀռ䣬����\0�ַ�
//	while (*dest++ == *str++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	//strcpy
//	//�ַ�������
//	char arr1[] = "###########";
//	char arr2[] = "bit";
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}

//int main()
//{
//	//const����ָ����������ʱ�����ε���*p��Ҳ����˵������ͨ��p���ı�*P��num����ֵ
//	/*const int num = 10;
//	const int* p = &num;*/
//	//*p = 20;//err
//	//const����ָ��������ұ�ʱ�����ε���p����p���ܱ��ı�
//	int num = 10;
//	int n = 100;
//	int* const p = &num;
//	//p = &n;//err
//	printf("%d\n", num);
//	return 0;
//}

//ʵ�����ַ����ĳ���
//���ִ���
//int my_strlen(const char* str)//�ַ��������Ա��޸�
//{
//	int count = 0;
//	assert(str != NULL);//��ָ֤����Ч��
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

int main()
{
	int a = 20;//4���ֽ�-32��bitλ
	//00000000000000000000000000010100 - ԭ��
	//00000000000000000000000000010100 - ����
	//00000000000000000000000000010100 - ����
	//������ԭ�롢���롢���붼��ԭ����ͬ
	//4��bitλ��ʾһ��ʮ������λ
	//0x00000014  �����16����λ������ 0x����ı�ʾ�ľ���16����λ����
	int b = -10;
	//10000000000000000000000000001010 - ԭ��
	//11111111111111111111111111110101 - ����
	//11111111111111111111111111110110 - ����
	//0xfffffff6
	return 0;
}