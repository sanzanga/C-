#define _CRT_SECURE_NO_WARNINGS 1


#include <string.h>
#include <stdio.h>

//int Add(int a, int b)
//{
//	int sum = a + b;
//	return sum;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}


//strcpy���� Ҫ����<string.h>ͷ�ļ�
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);//���arr1�����\0���ᱻ����������\0�ǽ�����־�������ڴ�ӡ��\0֮������arr2������ʲô�������ڴ�ӡ
//	return 0;
//}

//memset���� 
//memory�ڴ� set����
//int main()
//{ 
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	//������˵�ڶ���������һ��int���͵ĵ������������һ��char����
//	//�ڴ洢��ʱ���ǽ���ת��ΪASCII��ֵ����int����
//	printf("%s\n", arr);//��˼���ǽ�arr��������ǰ����滻��*
//	return 0;
//}

//дһ�������ҳ��������������ֵ
//���庯��
//int Max(int a, int b)
//{
//	if (a > b)
//		return a;
//	else
//		return b;
//}
//int main()
//{
//	int a = 3;
//	int b = 7;
//	//������ʹ��
//	int max = Max(a, b);
//	printf("max = %d\n", max);
//	max = (100, 200);
//	printf("max = %d\n", max);
//	return 0;
//}

//дһ���������Խ����������α���������
//����ķ����в�ͨ
//int Change(int a, int b)//�����������µĸ�ab�������µĿռ�
//{
//	int temp = a;
//	a = b;
//	b = temp;
//	return a, b;
//}
////���ں��������main���������a��b�ĵ�ַ����ͬ
////�ں�������ֻ�ǽ�����ab��ֵ main���������ab��ֵ��û�н���
//int main()
//{
//	int a = 3;//��a������һ��ռ�
//	int b = 4;//��b������һ��ռ�
//	int change = Change(a, b);//ִ���꺯����������������main���������ab�ĵ�ַ ���ֻ�Ǵ�ֵ����
//	printf("a = %d\nb = %d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int a = 9;
//	int* pa = &a;//&a��ʾ�õ�a�ĵ�ַ����pa����  paָ����� �����ͺ������*�ͱ�ʾ���ǵ�ַ
//	*pa=20;//�����ò��� ͨ��pa����ĵ�ַ�ҵ�������ŵ�����
//	printf("%\d", a);
//	return 0;
//}

//��ʵ�δ����βε�ʱ�� �β���ʵ��ʵ�ε�һ����ʱ����
//���βεĸı��ǲ���ı�ʵ�ε� ���������Change���ղ���ʵ��Ԥ��
//void Change2(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//int main()
//{
//	int x = 10;
//	int y = 20;
//	printf("x = %d y = %d\n", x, y);
//	Change2(&x, &y);����Ǵ�ַ����
//	printf("x = %d y = %d\n", x, y);
//	return 0;
//}

//дһ�����������ж�һ�����ǲ�������
//����������1 ������������0
//int is_prime(int num)
//{
//	int flag = 1;
//	for (size_t i = 2; i < num; i++)
//	{
//		if (num % i == 0)
//		{
//			flag = 0;
//			break;
//		}
//	}
//	return flag;
//}
//int main()
//{
//	int num = 0;
//	int result = 0;
//	scanf("%d", &num);
//	result = is_prime(num);
//	printf("%d\n", result);
//	return 0;
//}

//��ӡ100-200֮�������
//int is_prime(int num)
//{
//	int flag = 1;
//	for (size_t i = 2; i < num; i++)
//	{
//		flag = 1;
//		if (num % i == 0)
//		{
//			flag = 0;
//			break;
//		}
//	}
//	return flag;
//}
//int main()
//{
//	int num = 0;
//	for (size_t i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}

//дһ�������ж�һ���ǲ�������
//����1������ ����0��������
//int Year(int n)
//{
//	if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	int result = Year(year);
//	if (result == 1)
//		printf("%d������", year);
//	else
//		printf("%d��������", year);
//	return 0;
//}

//�ö��ֲ��ҵķ�����һ����������������ҵ�һ�������ĳ��ֵ
//������nums��һ��ָ�� ��������sizeof(nums) / sizeof(nums[0])�����1
//int binary_search(int nums[],int k,int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (nums[mid] > k)
//		{
//			right = mid-1;
//		}
//		else if (nums[mid] < k)
//		{
//			left = mid+1;
//		}
//		else
//			return mid;
//	}
//	if (left > right)
//		return -1;
//}
//int main()
//{
//	int nums[] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 7;
//	int sz = sizeof(nums) / sizeof(nums[0]);
//	//nums���ݹ�ȥ��������nums��Ԫ�ص�ַ
//	int ret = binary_search(nums, k, sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���ָ��������\n");
//	}
//	else
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	return 0;
//}

//дһ��������ÿ�ε�������������ͻὫnum��ֵ����1
void Add(int* n)
{
	(*n)++;//����Ҫ��������
}
int main()
{
	int num = 0;
	Add(&num);
	printf("num = %d\n", num);
	Add(&num);
	printf("num = %d\n", num);
	Add(&num);
	printf("num = %d\n", num);
	Add(&num);
	printf("num = %d\n", num);
	return 0;
}