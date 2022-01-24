#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

//test.c  测试
//contact.c 实现函数的功能
//contact.h 声明函数

void menu()
{
	printf("**********************************\n");
	printf("***     1.add      2.del       ***\n");
	printf("***     3.search   4.modify    ***\n");
	printf("***     5.show     6.sort      ***\n");
	printf("***     0.exit                 ***\n");
	printf("**********************************\n");
}

int main()
{
	int input = 0;
	//创建通讯录
	struct Contact con;//con就是通讯录，里面包含：data指针和size、capacity
	//初始化通讯录
	IntiContact(&con);
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			SortContact(&con);
			break;
		case EXIT:
			//销魂通讯录-释放动态开辟的内存
			DestoryContact(&con);
			printf("退出通讯录\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}