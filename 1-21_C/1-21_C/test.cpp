#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <errno.h>

//int strncmp(const char*string1,const char*string1,size_t num)

//int main()
//{
//	//strncmp-�ַ����ıȽ�
//	const char* p1 = "abcdef";
//	const char* p2 = "abcqwer";
//	//int ret = strcmp(p1, p2);
//	int ret = strncmp(p1, p2,3);
//
//	printf("%d\n", ret);
//	return 0;
//}

//strstr - �����ַ���

//char* my_strstr(char* p1, char* p2)
//{
//	assert(p1 != NULL);
//	assert(p2 != NULL);
//	char* s1 = NULL;
//	char* s2 = NULL;
//	char* cur = (char*)p1;
//	if (*p2 == '\0')
//	{
//		return (char*)p1;
//	}
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = (char*)p2;
//		while ((*s1 != '\0') && (*s2 != '\0') && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;//�ҵ��Ӵ�
//		}
//		if (*s1 == '\0')
//		{
//			return NULL;
//		}
//		cur++;
//	}
//	return NULL;
//	//�Ҳ����Ӵ�
//}
//
//int main()
//{
//	char p1[] = "abcdef";
//	char p2[] = "def";
//	char* ret = my_strstr(p1, p2);
//	if (ret == NULL)
//	{
//		printf("�Ӵ�������\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

//int main()
//{
//	//192.168.31.121
//	//192 168 31 121
//	//char arr[] = "zqw@bit.com";
//	//char p[] = "@.";
//
//
//	char arr[] = "192.168.31.121";
//	const char* p = ".";
//
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);
//
//	//�и�buf�е��ַ���
//	/*char* ret = strtok(arr, p);
//	printf("%s\n", ret);
//	ret = strtok(NULL, p);
//	printf("%s\n", ret);
//	ret = strtok(NULL, p);
//	printf("%s\n", ret);*/
//
//	char* ret = NULL;
//
//	for (ret = strtok(arr, p);ret!=NULL;ret=strtok(NULL,p))
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

//int main()
//{
//	//C���� ������
//	//ÿ���������Ӧ������Ϣ
//	//0 - No error
//	//1 - Operation not permitted
//	//2 - No such file or directory
//	//...
//
//	//errno ��һ��ȫ�ֵĴ�����ı���
//	//��C���ԵĿ⺯����ִ�й����У������˴��󣬾ͻ�Ѷ�Ӧ�Ĵ�����Ϣ����ֵ��errno��
//	//char* str = strerror(errno);
//	//printf("%s\n", str);
//
//	//���ļ�
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("open file success\n");
//	}
//	return 0;
//}

//#include <ctype.h>
//
//int main()
//{
//	/*char ch = 'w';
//	int ret = islower(ch);
//	printf("%d\n", ret);*/
//
//	/*char ch = tolower('Q');
//	putchar(ch);*/
//
//	char arr[] = "I Am A Student";
//	int i = 0;
//	while (arr[i])
//	{
//		if (isupper(arr[i]))
//		{
//			arr[i] = tolower(arr[i]);
//		}
//		i++;
//	}
//	printf("%s\n", arr);
//	return 0;
//}

//struct S
//{
//	char name[20];
//	int age;
//};
//
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* p1 = (char*)dest;
//	char* p2 = (char*)src;
//	while (num--)
//	{
//		*p1 = *p2;
//		++p1;
//		++p2;
//	}
//	return ret;
//}

//void* my_memmove(void* dest, void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* p1 = (char*)dest;
//	char* p2 = (char*)src;
//	if (dest < src)
//	{
//		//ǰ->��
//		while (num--)
//		{
//			*p1 = *p2;
//			++p1;
//			++p2;
//		}
//	}
//	else
//	{
//		//��->ǰ
//		while (num--)
//		{
//			*(p1 + num) = *(p2 + num);
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	//my_memcpy(arr + 2, arr, 20);
//	//1 2 1 2 1 2 1 8 9 10
//	
//	//memmove�����ڴ��ص��������
//	//1 2 1 2 3 4 5 8 9 10
//	//memmove(arr + 2, arr, 20);
//	//����memcpy�⺯������ʵ���ص��Ĳ���
//	//�����Ǵ������ǵ�ʵ�ַ����Ǵ����
//	//C���Ա�׼˵��memcpy�������Կ������ص��ľͿ�����
//	//���·��֣�VS�����µ�memcpy���Դ����ص�����
//	//memcpy(arr + 2, arr, 20);
//	
//	my_memmove(arr, arr + 3, 20);
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[5] = { 0 };
//	struct S arr3[] = { {"zhangsan",20},{"lisi",20} };
//	struct S arr4[3] = { 0 };
//	my_memcpy(arr4, arr3, sizeof(arr3));
//	//memcpy(arr2, arr1, sizeof(arr1));
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,5,4,3 };
//	int ret = memcmp(arr1, arr2, 9);
//	printf("%d\n", ret);
//	return 0;
//}

//memset - �ڴ����ú���

//int main()
//{
//	char arr[10] = "";
//	memset(arr, '#', 10);
//	return 0;
//}

//����һ���ṹ������
//����һ��ѧ�����ͣ�����ͨ��ѧ������������ѧ������������
//����һ��ѧ�������ԡ�������+�绰+�Ա�+����

//struct Stu
//{
//	char name[20];
//	char tele[12];
//	char sex[10];
//	int age;
//}s4,s5,s6;
//
////s4,s5,s6�Ƕ����ʱ��ֱ�Ӵ����ı��� ����ȫ�ֱ���
//
//struct Stu s3;//ȫ�ֱ���
//
//int main()
//{
//	//�����ṹ�����
//	struct Stu s1;
//	struct Stu s2;
//	return 0;
//}

//�����ṹ������
//���ڽṹ��û������ ֻ��ͨ�������б�����������
//struct
//{
//	int a;
//	char b;
//	float c;
//}x;
//
//struct
//{
//	int a;
//	char b;
//	float c;
//}*px;
//
//int main()
//{
//	//px = &x;//�����Ǵ���ģ������������������������ȫ��ͬ����������
//	//���������ǷǷ���
//	return 0;
//}

//typedef struct Node
//{
//	int date;
//	//struct Node n;//err
//	struct Node* next;
//}Node;
//
////��struct Node����������������ΪNode
//
//int main()
//{
//	struct Node n1;
//	Node n2;
//	//�������ִ������������Ͷ�����
//
//	return 0;
//}

//struct T
//{
//	double weight;
//	short age;
//};
//
//struct S
//{
//	char c;
//	int a;
//	double d;
//	char arr[20];
//	struct T st;
//};
//
//int main()
//{
//	//struct S s = { 'c',100,3.24,"hello wprld" };
//	struct S s = { 'c',100,3.24,"hello wprld",{55.6,30} };
//
//	printf("%c %d %lf %s\n", s.c, s.a, s.d, s.arr);
//	printf("%lf", s.st.weight);
//
//	return 0;
//}

struct S1
{
	char c1;
	int a;
	char c2;
};

struct S2
{
	char c1;
	char c2;
	int a;
};

int main()
{
	struct S1 s1 = { 0 };
	printf("%d\n", sizeof(s1));
	struct S1 s2 = { 0 };
	printf("%d\n", sizeof(s2));

	return 0;
}