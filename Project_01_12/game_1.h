#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>//头文件的包含
#include<stdlib.h>
#include<time.h>

//符号的定义
#define ROW 3
#define COL 3

//函数的声明
//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col);

//打印棋盘的函数
void DisplayBoard(char board[ROW][COL], int row, int col);

//玩家下棋
void PlayerMove(char board[ROW][COL], int row, int col);

//电脑下棋
void ComputerMove(char board[ROW][COL], int row, int col);

//判断输赢
//1.玩家赢，返回-*-
//2.电脑赢，返回-#-
//3.平局，返回-Q-
//4.游戏继续，返回-C-
char IsWin(char board[ROW][COL], int row, int col);


//判断是否平局
int IsFull(char board[ROW][COL], int row, int col);