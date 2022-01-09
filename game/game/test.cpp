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
	//����
	char board[ROW][COL] = { 0 };
	//��ʼ������
	IntiBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board,ROW,COL);
	//����
	while (1)
	{
		//����ƶ�
		PlayerMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		//�ж�����Ƿ�Ӯ��
		//���Ӯ  '*'
        //����Ӯ  '#'
        //ƽ��   'Q'
        //����   'C'
		res=IsWin(board,ROW,COL);
		if (res != 'C')
		{
			break;
		}
		//�����ƶ�
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		res = IsWin(board, ROW, COL);
		if (res != 'C')
		{
			break;
		}
	}
	if (res == '*')
		printf("���Ӯ��\n");
	else if (res == '#')
		printf("����Ӯ��\n");
	else
		printf("ƽ��\n");
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}