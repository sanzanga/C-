#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//冒泡排序
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j + 1] > arr[j])
//			{
//				int temp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = temp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//void Inti(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void Reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//Inti(arr, sz);//把数组初始化为0
//	Print(arr, sz);//将数组里的元素都打印出来
//	Reverse(arr,sz);//逆序这个数组
//	Print(arr, sz);
//	return 0;
//}

//交换两个数组的内容
//int main()
//{
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,0 };
//	int temp = 0;
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz; i++)
//	{
//		temp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = temp;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	short* p = (short*)arr;
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*(p + 1) = 0;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//		//打印出来的是0 0 3 4 5
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;//a在内存中放的是反的44332211,44一个字节，33一个字节
//	char *pc = (char*)&a;
//	*pc = 0;
//	printf("%x\n", a);
//	return 0;
//}

//int i;//全局变量-不初始化-默认是0
//int main()
//{
//	i--;
//	//10000000000000000000000000000001 -1的原码
//	//11111111111111111111111111111110 -1的反码
//	//11111111111111111111111111111111 -1的补码
//	//所以首位1不再是符号位 补码就是原码
//	//一个数在与无符号数进行比较的时候 会把那个数转化成无符号数
//	if (i > sizeof(i))//sizeof()-计算内存所占内存大小 >=0  无符号数
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	//所以最后打印的是>
//	return 0;
//}

//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;//c=6 a=6
//	b = ++c, c++, ++a, a++;//c=8  a=8  b=7
//	b += a++ + c;//a=9 b=23
//	printf("a = %d b = %d c = %d\n", a, b, c);
//	return 0;
//}

//统计二进制中1的个数
//int main()
//{
//	int a = 5;
//	int count = 0;
//	int flag = 0;
//	while (a > 0)
//	{
//		flag = a % 2;
//		if (flag == 1)
//			count++;
//		a /= 2;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int Test(int a)
//{
//	int count = 0;
//	int flag = 0;
//	while (a > 0)
//	{
//		flag = a % 2;
//		if (flag == 1)
//			count++;
//		a /= 2;
//	}
//	return count;
//}

//int Test1(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//			count++;
//		n /= 2;
//	}
//	return count;
//}

//int Test1(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((n >> i) & 1 == 1)
//			count++;
//	}
//	return count;
//}

//int Test1(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
// 
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	//写一个函数计算二进制中1的个数
//	//int num = Test(a);//自己写的
//	int num = Test1(a);
//	printf("%d\n", num);
//	return 0;
//}

//找出两个整形二进制位中不相等的个数
//int get_diff_bit(int m, int n)
//{
//	int temp = m ^ n;
//	int count = 0;
//	//return Test1(temp);
//	while(temp)
//	{
//		temp = temp & (temp - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int count = get_diff_bit();
//	printf("count = %d\n", count);
//	return 0;
//}

//打印二进制位的奇数位和偶数位
//void print(int m)
//{
//	int i = 0;
//	printf("奇数位打印");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//	printf("打印偶数位");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//}
//
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	print(m);
//	return 0;
//}

//使用指针打印数组内容
//void print(int *p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}

//乘法口诀表
//当输入9是，打印九九乘法表 输入12打印12乘以12的乘法表
//void print_table(int n)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d*%d=-3%d", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//	return 0;
//}

//字符串逆序
int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

//void reverse_string(char arr[])
//{
//	int left = 0;
//	int right = my_strlen(arr) - 1;
//	while (left < right)
//	{
//		int temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//}

//用递归来写
//void reverse_string(char arr[])
//{
//	char temp = arr[0];
//	int len = my_strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if (my_strlen(arr + 1) >= 2)
//	{
//		reverse_string(arr + 1);
//	}
//	arr[len - 1] = temp;
//}
//
//int main()
//{
//	char arr[] = "abcdefg";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//写一个递归来计算一个整形的每位数之和
//int DigitSum(int num)
//{
//	if (num > 9)
//	{
//		return DigitSum(num / 10) + num % 10;
//	}
//	else
//	{
//		return num;
//	}
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);//1729
//	int ret = DigitSum(num);
//	printf("%d\n", ret);
//	return 0;
//}

//用递归实现k的n次方
int Pow(int n, int k)
{
	//n^k=n*n^(k-1)
	if (k < 0)
		return (1.0 / Pow(n, -k));
	else if (k == 0)
		return 1;
	else
		return n * Pow(n, k - 1);
}

int main()
{
	int n = 0;
	int k = 0;
	scanf("%d%d", &n, &k);
	double ret = Pow(n, k);
	printf("%lf\n", ret);
	return 0;
}