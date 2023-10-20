#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

//初始化
void InitBoard(char board[ROWS][COLS], int rows, int cols, char ch)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			board[i][j] = ch;
		}
	}
}
//展示
void DisPlay(char board[ROWS][COLS], int row, int col)
{
	for (int i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (int i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (int j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}
//布置雷
void LayMine(char board[ROWS][COLS], int row, int col)
{
	int x, y;
	int count = MINES;//雷的数量
	//要把雷布置在棋盘1-9的位置上
	while (count)
	{
		x = rand() % 9 + 1;
		y = rand() % 9 + 1;//生成1-9的随机坐标
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}
//(x-1,y-1) (x-1,y) (x-1,y+1)
//(x,y-1)   (x,y)   (x,y+1)
//(x+1,y-1) (x+1,y) (x+1,y+1)
//这个函数是用来统计输入的坐标旁边一共有多少个雷的
int CountMine(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y - 1] + mine[x - 1][y] + mine[x - 1][y + 1] + mine[x][y - 1] + mine[x][y + 1] +
		mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1] - 7*'0';
}
//该函数通过递归来实现一片空白区域的连续展开
void Expand(char show[ROWS][COLS], char mine[ROWS][COLS], int x, int y)
{
	//条件：如果show[x][y]处为'*'就进行展开求值
	if(show[x][y]=='*')
	{
		show[x][y] = CountMine(mine, x, y);
	}
	//&&x>1&&x<9&&y>1&&y<9  //用于调试
	if (show[x][y] == '0' && x >= 1 && x <= 9 && y>=1 && y <= 9)//这一句很重要，要不然一次性就把棋盘外面的一起展开了
	{
		if (show[x - 1][y - 1] == '*')//同样判断要展开的位置是否是'*'也很重要，要不然就会栈溢出陷入死递归
		{
			Expand(show, mine, x - 1, y - 1);
		}
		if(show[x - 1][y] == '*')
		{
			Expand(show, mine, x - 1, y);
		}
		if (show[x - 1][y+1] == '*')
		{
			Expand(show, mine, x - 1, y + 1);
		}
		if (show[x][y-1] == '*')
		{
			Expand(show, mine, x, y - 1);
		}
		if (show[x][y+1] == '*')
		{
			Expand(show, mine, x, y + 1);
		}
		if (show[x+1][y-1] == '*')
		{
			Expand(show, mine, x + 1, y-1);
		}
		if (show[x + 1][y] == '*')
		{
			Expand(show, mine, x + 1, y );
		}
		if (show[x + 1][y +1] == '*')
		{
			Expand(show, mine, x + 1, y + 1);
		}
	}
}
//正式游戏
void Play(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x, y;
	while (1)
	{
		int count = 0;
		printf("请输入坐标:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <=9 && y >= 1 && y <= 9)//确保合理输入范围
		{
			if (mine[x][y] == '1')
			{
				printf("Game Over\n");
				DisPlay(mine, ROW, COL); //用于显示失败后的雷区
				break;
			}
			//else if (mine[x][y] != '1')
			//{
			//	show[x][y] = CountMine(mine,x,y);
			//	/*printf("%d\n", CountMine(show, x, y));*///用于测试
			//	DisPlay(show, ROW, COL);
			//}
			else if (mine[x][y] != '1')
			{
				show[x][y] = CountMine(mine, x, y);
				if (show[x][y] == '0')
				{
					Expand(show, mine, x, y);
				}
				DisPlay(show, ROW, COL);
			}
		}
		else
		{
			printf("Error Location\n");
		}
		//判断是否成功,当show中剩余的‘*’等于雷的个数时且还没被炸死时就赢了
		for (int i = 1; i <= row; i++)
		{
			for (int j = 1; j <= col; j++)
			{
				if (show[i][j] == '*')
				{
					count++;
				}
			}
		}
		if (count == MINES)
		{
			printf("Win\n");
			DisPlay(mine, ROW, COL); //用于显示胜利后的雷区
			break;
		}
	}
}
