#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu()
{
	printf("***************************\n");
	printf("***   1.play   0.exit   ***\n");
	printf("***************************\n");
}

void game()
{
	char res = 0;
	//棋盘
	char board[ROW][COL] = { 0 };
	//初始化棋盘
	IntiBoard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board,ROW,COL);
	//下棋
	while (1)
	{
		//玩家移动
		PlayerMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		//判断玩家是否赢了
		//玩家赢  '*'
        //电脑赢  '#'
        //平局   'Q'
        //继续   'C'
		res=IsWin(board,ROW,COL);
		if (res != 'C')
		{
			break;
		}
		//电脑移动
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		res = IsWin(board, ROW, COL);
		if (res != 'C')
		{
			break;
		}
	}
	if (res == '*')
		printf("玩家赢！\n");
	else if (res == '#')
		printf("电脑赢！\n");
	else
		printf("平局\n");
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}