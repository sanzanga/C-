#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	char arr[3][3];
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%c", &arr[i][j]);
		}
	}

	if (arr[0][0] == arr[0][1] && arr[0][0] == arr[0][2] && arr[0][0] != 'O')
	{
		if (arr[0][0] == 'K')
		{
			printf("KiKi wins!\n");
			return 0;
		}
		else
		{
			printf("BoBo wins!\n");
			return 0;
		}
	}
	else if (arr[1][0] == arr[1][1] && arr[1][0] == arr[1][2] && arr[1][0] != 'O')
	{
		if (arr[1][0] == 'K')
		{
			printf("KiKi wins!\n");
			return 0;
		}
		else
		{
			printf("BoBo wins!\n");
			return 0;
		}
	}
	else if (arr[2][0] == arr[2][1] && arr[2][0] == arr[2][2] && arr[2][0] != 'O')
	{
		if (arr[2][0] == 'K')
		{
			printf("KiKi wins!\n");
			return 0;
		}
		else
		{
			printf("BoBo wins!\n");
			return 0;
		}
	}

	else if (arr[0][2] == arr[1][1] && arr[0][2] == arr[2][0] && arr[2][0] != 'O')
	{
		if (arr[2][0] == 'K')
		{
			printf("KiKi wins!\n");
			return 0;
		}
		else
		{
			printf("BoBo wins!\n");
			return 0;
		}
	}

	else if (arr[0][0] == arr[1][1] && arr[0][0] == arr[2][2] && arr[0][0] != 'O')
	{
		if (arr[0][0] == 'K')
		{
			printf("KiKi wins!\n");
			return 0;
		}
		else
		{
			printf("BoBo wins!\n");
			return 0;
		}
	}

	else if (arr[0][0] == arr[1][0] && arr[0][0] == arr[2][0] && arr[2][0] != 'O')
	{
		if (arr[0][0] == 'K')
		{
			printf("KiKi wins!\n");
			return 0;
		}
		else
		{
			printf("BoBo wins!\n");
			return 0;
		}
	}

	else if (arr[0][1] == arr[1][1] && arr[0][1] == arr[2][1] && arr[1][1] != 'O')
	{
		if (arr[1][1] == 'K')
		{
			printf("KiKi wins!\n");
			return 0;
		}
		else
		{
			printf("BoBo wins!\n");
			return 0;
		}
	}
	else if (arr[0][2] == arr[1][2] && arr[0][2] == arr[2][2] && arr[2][2] != 'O')
	{
		if (arr[2][2] == 'K')
		{
			printf("KiKi wins!\n");
			return 0;
		}
		else
		{
			printf("BoBo wins!\n");
			return 0;
		}
	}

	printf("No winner!\n");

	return 0;
}

//int main()
//{
//	int a;
//	scanf("%d", &a);
//	int i = 0;
//	int j = 0;
//	int arr[30][30];
//	for (i = 0; i < a; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (j == 0 || i == j)
//			{
//				arr[i][j] = 1;
//			}
//			else
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//		}
//	}
//
//	for (i = 0; i < a; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%5d", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//
//1
//1    1
//1    2    1
//1    3    3    1
//1    4    6    4    1
//1    5   10   10    5    1

//int main()
//{
//	int a, b, c;
//	int arr[10][10];
//	char ch = 0;
//	int num1 = 0;
//	int num2 = 0;
//	int temp = 0;
//	scanf("%d%d", &a, &b);
//	int i = 0;
//	int j = 0;
//
//	for (i = 0; i < a; i++)
//	{
//		for (j = 0; j < b; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//
//	scanf("%d", &c);
//
//	while (c)
//	{
//		scanf(" %c %d %d", &ch, &num1, &num2);
//		num1--;
//		num2--;
//		if (ch == 'r')
//		{
//			for (j = 0; j < a; j++)
//			{
//				temp = arr[num1][j];
//				arr[num1][j] = arr[num2][j];
//				arr[num2][j] = temp;
//			}
//		}
//		if (ch == 'c')
//		{
//			for (i = 0; i < b; i++)
//			{
//				temp = arr[i][num1];
//				arr[i][num1] = arr[i][num2];
//				arr[i][num2] = temp;
//			}
//		}
//		c--;
//	}
//
//	for (i = 0; i < a; i++)
//	{
//		for (j = 0; j < b; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int a;
//	int arr[10][10];
//	scanf("%d", &a);
//	int i = 0;
//	int j = 0;
//	int flag = 1;
//
//	//获取数组每一项的值
//	for (i = 0; i < a; i++)
//	{
//		for (j = 0; j < a; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//
//	//判断
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
//		printf("NO\n");
//	}
//	else
//	{
//		printf("YES\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int a;
//	scanf("%d", &a);
//	int i = 0;
//	int j = 0;
//	int arr[20][20];
//	int x = 0;
//	int y = 0;
//	int count = 1;
//
//	for (i = 0; i < a; i++)
//	{
//		for (j = 0; j < a; j++)
//		{
//			arr[i][j] = 0;
//		}
//	}
//	
//	while (1)
//	{
//		//向右
//		while (arr[x][y] == 0 && (y + 1) <= a)
//		{
//			arr[x][y] = count;
//			count++;
//			y++;
//		}
//
//		y--;
//		x++;
//
//		//向下
//		while (arr[x][y] == 0 && (x + 1) <= a)
//		{
//			arr[x][y] = count;
//			count++;
//			x++;
//		}
//
//		x--;
//		y--;
//
//		//向左
//
//		while (arr[x][y] == 0 && y >= 0)
//		{
//			arr[x][y] = count;
//			count++;
//			y--;
//		}
//
//		x--;
//		y++;
//
//		if (count > a * a)
//		{
//			break;
//		}
//
//		//向上
//		while (arr[x][y] == 0 && x >= 0)
//		{
//			arr[x][y] = count;
//			count++;
//			x--;
//		}
//
//		x++;
//		y++;
//
//		if (count > a * a)
//		{
//			break;
//		}
//	}
//
//	for (i = 0; i < a; i++)
//	{
//		for (j = 0; j < a; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int a, b;
//	int arr[100];
//	scanf("%d%d", &a, &b);
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < a; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < a; i++)
//	{
//		if (b == arr[i])
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

//int main()
//{
//	int a, b;
//	int count = 0;
//	scanf("%d%d", &a, &b);
//	int i = 0;
//	for (i = 1; i <= a; i++)
//	{
//		int num = i;
//		while (num > 0)
//		{
//			if (b == num % 10)
//			{
//				count++;
//			}
//			num /= 10;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

//int main()
//{
//	int a;
//	int arr[10];
//	scanf("%d", &a);
//	int i = 0;
//	int flag = 0;
//	int b = 0;
//	for (i = 1; i <= a; i++)
//	{
//		flag = i;
//		int k = 0;
//		b = 0;
//		while (flag > 0)
//		{
//			arr[k] = flag % 10;
//			flag /= 10;
//			b = b * 10 + arr[k];
//			k++;
//		}
//		if (b == i)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a;
//	int sum = 0;
//	int count = 1;
//	int i = 0;
//	int flag = 0;
//	scanf("%d", &a);
//	while (flag < a)
//	{
//		//flag = count;
//		for (i = 0; i < count; i++)
//		{
//			sum += count;
//			flag++;
//			if (flag >= a)
//			{
//				break;
//			}
//		}
//		count++;
//	}
//	printf("%d", sum);
//	return 0;
//}