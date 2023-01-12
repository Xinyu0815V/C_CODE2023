#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game_1.h"

void menu()
{
	printf("***************************\n");
	printf("******   1.play     *******\n");
	printf("******   0.exit     *******\n");
	printf("***************************\n");
}

void game()
{
	//存储数据---二维数组
	char board[ROW][COL];
	//初始化棋盘--初始化空格
	InitBoard(board, ROW, COL);
	//打印棋盘--本质是打印数组的内容
	DisplayBoard(board,ROW,COL);

	char ret = 0;//接收游戏状态
	while (1)
	{
		//玩家先下
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断玩家是否赢得游戏
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}


		//电脑下
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断电脑是否赢得游戏
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
		if (ret == '*')
		{
			printf("玩家赢。\n");
		}
		else if (ret == '#')
		{
			printf("电脑赢。\n");
		}
		else
		{
			printf("平局!\n");
		}
		DisplayBoard(board, ROW, COL);
	}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//不懂。。。使rand()函数够生成随机数
	do
	{
		menu();
		printf("请选择1或0:>");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("退出游戏\n");
			break;
		case 1:
			game();
			break;
		default:
			printf("请选择数字1或0\n");
			break;
		}
	} while (input);
	return 0;
}