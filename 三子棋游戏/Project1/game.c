#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void Init(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
//期待打印的棋盘
//   |   |   
//---|---|---
//   |   |   
//---|---|---
//   |   |   

void Display(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		//打印i行
		for (int j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			for (int j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}
//玩家下棋
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x, y;
	while (1)
	{
		printf("Player Move:>");
		scanf("%d%d", &x, &y);
		if ((x >= 1 && x <= row) && (y >= 1 && y <= col))
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;//退出循环
			}
			else
			{
				printf("Location Error\n");
			}
		}
		else
		{
			printf("Location Error\n");
		}
	}
}
//电脑下棋
void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x, y;
	//随机生成一个x，y的位置
	printf("Computer Move\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}
int Is_Full(char board[ROW][COL], int row, int col)
{
	int flag = 1;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				flag = 0;
				return flag;
			}
		}
	}
	return flag;
}
//判断输赢
//如果返回‘*’代表玩家赢
//‘#’代表电脑赢
//‘D’代表平局
//‘C’代表可以继续
char Is_Win(char board[ROW][COL], int row, int col)
{
	//玩家赢,电脑赢
	//行三个子，列三个子，斜三个子
	//行
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j <= col - 3; j++)
		{
			if ((board[i][j] == board[i][j + 1] )&&( board[i][j + 1] == board[i][j + 2]) &&( board[i][j] != ' '))
			{
				return board[i][j];
			}
		}
	}
	//列
	for (int j = 0; j < col; j++)
	{
		for (int i = 0; i <= row - 3; i++)
		{
			if ((board[i][j] == board[i + 1][j] )&&( board[i+1][j] == board[i + 2][j]) &&( board[i][j] != ' '))
			{
				return board[i][j];
			}
		}
	}
	//正斜
	for (int i = 0; i <= row - 3; i++)
	{
		for (int j = 0; j <= col - 3; j++)
		{
			if ((board[i][j] == board[i + 1][j+1]) && (board[i + 1][j+1] == board[i + 2][j+2]) && (board[i][j] != ' '))
			{
				return board[i][j];
			}
		}
	}
	//反斜
	for (int i = row - 1; i >= 2; i--)
	{
		for (int j = col - 1; j >= 2; j--)
		{
			if ((board[i][j-2] == board[i - 1][j - 1]) && (board[i - 1][j - 1] == board[i - 2][j ]) && (board[i-1][j-1] != ' '))
			{
				return board[i-1][j-1];
			}
		}
	}

	//平局
	if (Is_Full(board,row,col) == 1)
	{
		return 'D';
	}
	else
	{
		return 'C';
	}
	//继续
}
