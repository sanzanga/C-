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

//дһ�������ܹ������ַ���������
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
//	//gets(arr);//��ȡһ��
//	//������
//	reverse(arr);
//
//	printf("�������ַ�����%s\n", arr);
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


//���0~100000֮���ˮ�ɻ��������
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		//�ж�i�Ƿ���ˮ�ɻ���
//		//1������i��λ�� nλ��
//		int n = 1;
//		//123
//		int temp = i;
//		int sum = 0;
//		while (temp /= 10)
//		{
//			n++;
//
//		}
//		//2������i��ÿһλ��n�η�֮��sum
//		temp = i;
//		while (temp)
//		{
//			sum += pow(temp % 10, n);
//			temp /= 10;
//		}
//		//3���Ƚ�i==sum
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//��ӡ����
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
//	//��ӡ�ϰ벿��
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		//��ӡ�ո�
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//��ӡ�°벿��
//	for (i = 0; i < line - 1; i++)
//	{
//		//��ӡ�ո�
//		int j = 0;
//		for (j = 0; j <= i ; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//����ˮ����
//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ
//��20Ԫ�����Ժȶ�����ˮ
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
//	//���������ˮ
//	//total = money;
//	//empty = money;
//	////����������ˮ
//	//while (empty >= 2)
//	//{
//	//	total += empty /= 2;
//	//	empty = empty / 2 + empty % 2;
//	//}
//	printf("total=%d\n", total);
//	return 0;
//}


//��������ʹ����ȫ��λ��ż����ǰ��
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
//		//�������ż��
//		while ((left<right) && (arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		//���ұ�������
//		while ((left<right) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		//����
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
//	//�������һ������
//	//���ұ���һ��ż��
//	move(arr, sz);
//	print(arr, sz);
//	return 0;
//}

//int main()
//{
//	unsigned char a = 200;
//	//unsigned char-1���ֽ�-8��bitλ
//	//unsigned char �ķ�Χʱ0~255
//	//a��b���ܷŵ���
//	//00000000 00000000 00000000 11001000
//	//11001000-a
//	unsigned char b = 100;
//	//00000000 00000000 00000000 01100100
//	//01100100-b
//	unsigned char c = 0;
//	c = a + b;//��������
//	//00000000 00000000 00000001 00101100
//	//������������
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
//	//��32λ���ģʽ�������ϱ���b���� 0x00
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
//	//strlen ���ַ����ĳ���Ҫ�ҵ�\0(����0)��λ��
//
//	return 0;
//}

//��ӡ�������
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
//	//��ӡ
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

//ĳ�ط���һ��ıɱ��������ͨ���Ų�����ɱ�����ֱ�Ϊ4�������˵�һ��
//����Ϊ4�������˵Ĺ���
//A˵��������  //1
//B˵����C     //1
//C˵����D     //0
//D˵��C�ں�˵  //1
//��֪3����˵���滰��1����˵�˼ٻ�
//
//�����������Щ��Ϣ��дһ��������ȷ��˭����������
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


//�������⣺��36ƥ��6���ܵ���û�м�ʱ����������ȷ����36ƥ���е�ǰ����
//�������ٱ������Σ�
//8��

//�������⣺��25ƥ��5���ܵ���û�м�ʱ����������ȷ����25ƥ���е�ǰ����
//�������ٱ������Σ�
//8��

//��������
//��һ���㣬���ʲ����ȣ�����ÿһ���������㣬ȼ����Ƭǡ����1��Сʱ
//����2���㣬����ȷ��һ��15���ӵ�ʱ���
//�Ƚ�һ������ͷ����ȼ��һ��һͷ��ȼ����ǰ�����һ������Ͱ��Сʱ
//Ȼ�󽫺�����һ������һͷ��ȼ

//5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ��������
//Aѡ��˵��B��һ���ҵ���
//Bѡ��˵���ҵڶ���E����
//Cѡ��˵���ҵ�һ��D�ڶ�
//Dѡ��˵��C����ҵ���
//Eѡ��˵���ҵ��ģ�A��һ
//��������ʱ��ÿλѡ�ֶ�˵����һ�룬��ȷ����������
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