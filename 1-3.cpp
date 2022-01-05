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


//strcpy函数 要引用<string.h>头文件
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);//最后arr1后面的\0都会被拷贝过来，\0是结束标志，所以在打印到\0之后无论arr2后面有什么都不会在打印
//	return 0;
//}

//memset函数 
//memory内存 set设置
//int main()
//{ 
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	//在网上说第二个参数是一个int类型的但是这里填的是一个char类型
//	//在存储的时候是将其转化为ASCII码值属于int类型
//	printf("%s\n", arr);//意思就是将arr这个数组的前五个替换成*
//	return 0;
//}

//写一个函数找出两个整数的最大值
//定义函数
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
//	//函数的使用
//	int max = Max(a, b);
//	printf("max = %d\n", max);
//	max = (100, 200);
//	printf("max = %d\n", max);
//	return 0;
//}

//写一个函数可以交换两个整形变量的内容
//下面的方法行不通
//int Change(int a, int b)//在这里又重新的给ab开辟了新的空间
//{
//	int temp = a;
//	a = b;
//	b = temp;
//	return a, b;
//}
////由于函数里面和main函数里面的a和b的地址不相同
////在函数里面只是交换了ab的值 main函数里面的ab的值并没有交换
//int main()
//{
//	int a = 3;//对a开辟了一块空间
//	int b = 4;//对b开辟了一块空间
//	int change = Change(a, b);//执行完函数返回来的依旧是main函数里面的ab的地址 这个只是传值调用
//	printf("a = %d\nb = %d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int a = 9;
//	int* pa = &a;//&a表示拿到a的地址放在pa里面  pa指针变量 在类型后面加上*就表示的是地址
//	*pa=20;//解引用操作 通过pa里面的地址找到它所存放的内容
//	printf("%\d", a);
//	return 0;
//}

//当实参传给形参的时候 形参其实是实参的一种临时拷贝
//对形参的改变是不会改变实参的 所以上面的Change最终不能实现预期
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
//	Change2(&x, &y);这个是穿址调用
//	printf("x = %d y = %d\n", x, y);
//	return 0;
//}

//写一个函数可以判断一个数是不是素数
//是素数返回1 不是素数返回0
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

//打印100-200之间的素数
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

//写一个函数判断一年是不是闰年
//返回1是闰年 返回0不是闰年
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
//		printf("%d是闰年", year);
//	else
//		printf("%d不是闰年", year);
//	return 0;
//}

//用二分查找的方法在一个有序的数组里面找到一个具体的某个值
//本质上nums是一个指针 所以下面sizeof(nums) / sizeof(nums[0])算的是1
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
//	//nums传递过去的是数组nums首元素地址
//	int ret = binary_search(nums, k, sz);
//	if (ret == -1)
//	{
//		printf("找不到指定的数字\n");
//	}
//	else
//		printf("找到了，下标是：%d\n", ret);
//	return 0;
//}

//写一个函数，每次调用这个函数，就会将num的值增加1
void Add(int* n)
{
	(*n)++;//这里要加上括号
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