#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int a;
	scanf("%d", &a);
	a = a / 10 % 10;
	printf("%d", a);
	return 0;
}

//int main()
//{
//	int a;
//	scanf("%d", &a);
//	a = a % 10;
//	printf("%d", a);
//	return 0;
//}

//int main()
//{
//	int a;
//	scanf("%d", &a);
//	printf("%d", a * 100);
//	return 0;
//}

//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	printf("%d", a % b);
//	return 0;
//}

//
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	printf("%d", a / b);
//	return 0;
//}

//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	printf("%d", a + b);
//	return 0;
//}

//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	printf("%-8d%-8d%-8d", a, b, c);
//	return 0;
//}

//int main()
//{
//	char a;
//	int b;
//	float c;
//	scanf("%c%d%f", &a, &b, &c);
//	printf("%c %d %.6f", a, b, c);
//	return 0;
//}

//int main()
//{
//	float a;
//	scanf("%f", &a);
//	if (a > 0)
//	{
//		a = (a * 10 + 5) / 10;
//	}
//	else
//	{
//		a = (a * 10 - 5) / 10;
//	}
//	printf("%d", (int)a);
//	return 0;
//}

//int main()
//{
//	char a;
//	scanf("%c", &a);
//	printf("  %c\n", a);
//	printf(" %c%c%c\n", a, a, a);
//	printf("%c%c%c%c%c\n", a, a, a, a, a);
//	printf(" %c%c%c\n", a, a, a);
//	printf("  %c\n", a);
//	return 0;
//}

//  #
// ###
//#####
// ###
//  #

//int main()
//{
//	char a;
//	int i = 0;
//	int j = 0;
//	scanf("%c", &a);
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("%c", a);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	printf("%d", b);
//	return 0;
//}

//int main()
//{
//	char a;
//	scanf("%c", &a);
//	printf("%c", a);
//	return 0;
//}

//int main()
//{
//	double a;
//	scanf("%lf", &a);
//	//a = (a * 1000 + 5) / 1000.0;
//	printf("%.3lf", a);
//	return 0;
//}

//int main()
//{
//	int a;
//	scanf("%d", &a);
//	printf("%d", a);
//	return 0;
//}

//int main()
//{
//	printf("Hello Nowcoder!\n");
//	return 0;
//}