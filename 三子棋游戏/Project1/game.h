#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define ROW 10
#define COL 10

//初始化数组
void Init(char board[ROW][COL], int row, int col);
//打印棋盘
void Display(char board[ROW][COL], int row, int col);
//玩家下棋
void PlayerMove(char board[ROW][COL], int row, int col);
//电脑下棋
void ComputerMove(char board[ROW][COL], int row, int col);
//判断输赢
char Is_Win(char board[ROW][COL], int row, int col);