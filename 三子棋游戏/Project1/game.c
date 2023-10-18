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
//�ڴ���ӡ������
//   |   |   
//---|---|---
//   |   |   
//---|---|---
//   |   |   

void Display(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		//��ӡi��
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
//�������
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
				break;//�˳�ѭ��
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
//��������
void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x, y;
	//�������һ��x��y��λ��
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
//�ж���Ӯ
//������ء�*���������Ӯ
//��#���������Ӯ
//��D������ƽ��
//��C��������Լ���
char Is_Win(char board[ROW][COL], int row, int col)
{
	//���Ӯ,����Ӯ
	//�������ӣ��������ӣ�б������
	//��
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
	//��
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
	//��б
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
	//��б
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

	//ƽ��
	if (Is_Full(board,row,col) == 1)
	{
		return 'D';
	}
	else
	{
		return 'C';
	}
	//����
}
