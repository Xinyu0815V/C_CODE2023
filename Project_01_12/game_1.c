#define _CRT_SECURE_NO_WARNINGS 1
#include"game_1.h"//自己定义的头文件使用双引号

//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}


void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//printf(" %c | %c | %c \n", board[i][0],board[i][1],board[i][2]);
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			//printf("---|---|---\n");
			int j = 0;
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
}

//玩家下棋具体实现
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家下:>\n");
	while (1)//并不总是死循环，当循环体内满足条件时，使用break也可跳出循环
	{
		printf("玩家请输入要下的坐标:>");
		scanf("%d %d", &x, &y);
		//判断坐标合法性
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//下棋
			//判断坐标是否被占用
			if (board[x - 1][y - 1]==' ')//注意运算符的使用，是‘==’而不是‘=’。
			{
				board[x-1][y-1] = '*';
				break;
			}
			else
			{
				printf("坐标已被占用，请重新输入。");
			}
		}
		else
		{
			printf("坐标非法,请重新输入。\n");
		}
	}

}



//电脑下棋具体实现
void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("电脑走:>\n");
	while (1)
	{
		int x = rand() % row;//限制行数，列数
		int y = rand() % col;
		//判断棋盘是否被占用，不需要判断合法性（因为行数列数都已经被限制了）
		if (board[x][y] ==' ')
		{
			board[x][y] ='#';
			break;
		}
	}
	//因为是电脑，所以若棋盘已被占用，不需要提示信息，直接再次循环就好
}


//判断是否平局
int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;//棋盘没满，继续游戏
			}
		}
	}
	return 1;//棋盘满了
}

//判断游戏是否有输赢
char IsWin(char board[ROW][COL], int row, int col)
{
	//判断三行
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];//谁赢返回谁
		}
	}
	//判断三列
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
			return board[1][i];
	}
	//判断对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
	{
		return board[0][0];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}


	//判断是否平局
	//若棋盘满了，返回Q，不满，返回C
	int ret = IsFull(board,row,col);
	if (ret == 1)
	{
		return 'Q';
	}
	//继续
	return 'C';
}