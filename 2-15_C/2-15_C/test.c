#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int a, b;
	int i = 0;
	int j = 0;
	int arr[10][10] = { 0 };
	scanf("%d%d", &a, &b);
	for (i = 0; i < a; i++)
	{
		for (j = 0; j < b; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	for (i = 0; i < b; i++)
	{
		for (j = 0; j < a; j++)
		{
			printf("%d ", arr[j][i]);
		}
		printf("\n");
	}
	return 0;
}

//int main()
//{
//	int a;
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	int flag = 1;
//	scanf("%d", &a);
//	for (i = 0; i < a; i++)
//	{
//		for (j = 0; j < a; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 1; i < a; i++)
//	{
//		for (j = 0; j < i; j++)
//		{
//			if (arr[i][j] != 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//	}
//	if (flag)
//	{
//		printf("YES\n");
//	}
//	else
//	{
//		printf("NO\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a, b;
//	int arr1[10][10] = { 0 };
//	int arr2[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	int flag = 1;
//	scanf("%d%d", &a, &b);
//	for (i = 0; i < a; i++)
//	{
//		for (j = 0; j < b; j++)
//		{
//			scanf("%d", &arr1[i][j]);
//		}
//	}
//	for (i = 0; i < a; i++)
//	{
//		for (j = 0; j < b; j++)
//		{
//			scanf("%d", &arr2[i][j]);
//		}
//	}
//	for (i = 0; i < a; i++)
//	{
//		for (j = 0; j < b; j++)
//		{
//			if (arr1[i][j] != arr2[i][j])
//			{
//				flag = 0;
//				break;
//			}
//		}
//	}
//	if (flag)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a, b;
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	int max = 0;
//	int c = 0;
//	int d = 0;
//	scanf("%d%d", &a, &b);
//	for (i = 0; i < a; i++)
//	{
//		for (j = 0; j < b; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	max = arr[i][j];
//	for (i = 0; i < a; i++)
//	{
//		for (j = 0; j < b; j++)
//		{
//			if (arr[i][j] > max)
//			{
//				max = arr[i][j];
//				c = i;
//				d = j;
//			}
//		}
//	}
//	printf("%d %d", ++c, ++d);
//	return 0;
//}

//int main()
//{
//	int a, b;
//	int arr[100] = { 0 };
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	int count = 0;
//	scanf("%d%d", &a, &b);
//	while (i < a * b)
//	{
//		scanf("%d", &arr[i]);
//		i++;
//	}
//	for (k = 0; k < a; k++)
//	{
//		for (j = 0; j < b; j++)
//		{
//			printf("%d ", arr[count]);
//			count++;
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a, b, c, d;
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	scanf("%d%d", &a, &b);
//	for (i = 0; i < a; i++)
//	{
//		for (j = 0; j < b; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	scanf("%d%d", &c, &d);
//	c--;
//	d--;
//	printf("%d", arr[c][d]);
//	return 0;
//}

//int main()
//{
//	float a[5][5] = { 0 };
//	int i = 0;
//	int j = 0;
//	float sum = 0;
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			scanf("%f", &a[i][j]);
//		}
//	}
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			sum += a[i][j];
//			printf("%.1f ", a[i][j]);
//		}
//		printf("%.1f", sum);
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a, b;
//	int arr1[1000] = { 0 };
//	int arr2[1000] = { 0 };
//	int arr3[2000] = { 0 };
//	int i = 0;
//	int j = 0;
//	scanf("%d%d", &a, &b);
//	while (i < a)
//	{
//		scanf("%d", &arr1[i]);
//		arr3[i] = arr1[i];
//		i++;
//	}
//	while (j < b)
//	{
//		scanf("%d", &arr2[j]);
//		arr3[i] = arr2[j];
//		i++;
//		j++;
//	}
//	for (i = 0; i < a + b - 1; i++)
//	{
//		for (j = 0; j < a + b - 1 - i; j++)
//		{
//			if (arr3[j] > arr3[j + 1])
//			{
//				int temp = arr3[j];
//				arr3[j] = arr3[j + 1];
//				arr3[j + 1] = temp;
//			}
//		}
//	}
//	for (i = 0; i < a + b; i++)
//	{
//		printf("%d ", arr3[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int a;
//	int arr[1000] = { 0 };
//	int i = 0;
//	int j = 0;
//	int flag = 1;
//	int count = 0;
//	int arr1[1000] = { 0 };
//	scanf("%d", &a);
//	while (i < a)
//	{
//		scanf("%d", &arr[i]);
//		i++;
//	}
//	for (i = 0; i < a; i++)
//	{
//		flag = 1;
//		for (j = 0; j < i; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag)
//		{
//			arr1[count] = arr[i];
//			count++;
//		}
//	}
//	for (i = 0; i < count; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int a;
//	int arr[1000] = { 0 };
//	int i = 0;
//	int j = 0;
//	int flag = 1;
//	int count = 0;
//	int arr1[1000] = { 0 };
//	scanf("%d", &a);
//	while (i < a)
//	{
//		scanf("%d", &arr[i]);
//		i++;
//	}
//	for (i = 0; i < a; i++)
//	{
//		flag = 1;
//		for (j = 0; j < i; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag)
//		{
//			arr1[count] = arr[i];
//			count++;
//		}
//	}
//	for (i = 0; i < count - 1; i++)
//	{
//		for (j = 0; j < count - 1 - i; j++)
//		{
//			if (arr1[j] > arr1[j + 1])
//			{
//				int temp = arr1[j];
//				arr1[j] = arr1[j + 1];
//				arr1[j + 1] = temp;
//			}
//		}
//	}
//	for (i = 0; i < count; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int a, b;
//	int i = 0;
//	int arr[51] = { 0 };
//	scanf("%d", &a);
//	while (i < a)
//	{
//		scanf("%d", &arr[i]);
//		i++;
//	}
//	scanf("%d", &b);
//	for (i = 0; i < a; i++)
//	{
//		if (arr[i] != b)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a, b;
//	int arr1[52];
//	int arr2[53];
//	int i = 0;
//	int j = 0;
//	scanf("%d", &a);
//	while (i < a)
//	{
//		scanf("%d", &arr1[i]);
//		arr2[i] = arr1[i];
//		i++;
//	}
//	scanf("%d", &b);
//	arr2[i] = b;
//	for (i = 0; i < a + 1; i++)
//	{
//		for (j = 0; j < a - i; j++)
//		{
//			if (arr2[j] > arr2[j + 1])
//			{
//				int temp = arr2[j];
//				arr2[j] = arr2[j + 1];
//				arr2[j + 1] = temp;
//			}
//		}
//	}
//	for (i = 0; i < a + 1; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int a;
//	int arr[50] = { 0 };
//	int i = 0;
//	int flag1 = 1;
//	int flag2 = 1;
//	int j = 0;
//	scanf("%d", &a);
//	while (i < a)
//	{
//		scanf("%d", &arr[i]);
//		i++;
//	}
//	for (i = 0; i < a - 1; i++)
//	{
//		for (j = 0; j < a - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				flag1 = 0;
//				break;
//			}
//		}
//	}
//	for (i = 0; i < a - 1; i++)
//	{
//		for (j = 0; j < a - 1 - i; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				flag2 = 0;
//				break;
//			}
//		}
//	}
//	if ((flag1 == 1 && flag2 == 0) || (flag1 == 0 && flag2 == 1) ||(flag1 == 1 && flag2 == 1))
//	{
//		printf("sorted");
//	}
//	else
//	{
//		printf("unsorted");
//	}
//	return 0;
//}

//int main()
//{
//	int a;
//	int arr[10000] = { 0 };
//	int i = 0;
//	int max = 0;
//	int min = 0;
//	scanf("%d", &a);
//	while (i < a)
//	{
//		scanf("%d", &arr[i]);
//		i++;
//	}
//	max = arr[0];
//	min = arr[0];
//	for (i = 0; i < a; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//		if (arr[i] < min)
//		{
//			min = arr[i];
//		}
//	}
//	printf("%d", max - min);
//	return 0;
//}

//int main()
//{
//	int a;
//	int i = 0;
//	int sum = 0;
//	int arr[52] = { 0 };
//	scanf("%d", &a);
//	while (i < a)
//	{
//		scanf("%d", &arr[i]);
//		sum += arr[i];
//		i++;
//	}
//	printf("%d",sum);
//	return 0;
//}

//int main()
//{
//	int arr[10];
//	int i = 0;
//	int zheng = 0;
//	int fu = 0;
//	while (i < 10)
//	{
//		scanf("%d", &arr[i]);
//		i++;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		if (arr[i] > 0)
//		{
//			zheng++;
//		}
//		else if(arr[i] < 0)
//		{
//			fu++;
//		}
//	}/*
//positive:7
//negative : 3*/
//	printf("positive:%d\n", zheng);
//	printf("negative:%d", fu);
//	return 0;
//}