#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

//��ʼ��
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
//չʾ
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
//������
void LayMine(char board[ROWS][COLS], int row, int col)
{
	int x, y;
	int count = MINES;//�׵�����
	//Ҫ���ײ���������1-9��λ����
	while (count)
	{
		x = rand() % 9 + 1;
		y = rand() % 9 + 1;//����1-9���������
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
//�������������ͳ������������Ա�һ���ж��ٸ��׵�
int CountMine(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y - 1] + mine[x - 1][y] + mine[x - 1][y + 1] + mine[x][y - 1] + mine[x][y + 1] +
		mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1] - 7*'0';
}
//�ú���ͨ���ݹ���ʵ��һƬ�հ����������չ��
void Expand(char show[ROWS][COLS], char mine[ROWS][COLS], int x, int y)
{
	//���������show[x][y]��Ϊ'*'�ͽ���չ����ֵ
	if(show[x][y]=='*')
	{
		show[x][y] = CountMine(mine, x, y);
	}
	//&&x>1&&x<9&&y>1&&y<9  //���ڵ���
	if (show[x][y] == '0' && x >= 1 && x <= 9 && y>=1 && y <= 9)//��һ�����Ҫ��Ҫ��Ȼһ���ԾͰ����������һ��չ����
	{
		if (show[x - 1][y - 1] == '*')//ͬ���ж�Ҫչ����λ���Ƿ���'*'Ҳ����Ҫ��Ҫ��Ȼ�ͻ�ջ����������ݹ�
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
//��ʽ��Ϸ
void Play(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x, y;
	while (1)
	{
		int count = 0;
		printf("����������:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <=9 && y >= 1 && y <= 9)//ȷ���������뷶Χ
		{
			if (mine[x][y] == '1')
			{
				printf("Game Over\n");
				DisPlay(mine, ROW, COL); //������ʾʧ�ܺ������
				break;
			}
			//else if (mine[x][y] != '1')
			//{
			//	show[x][y] = CountMine(mine,x,y);
			//	/*printf("%d\n", CountMine(show, x, y));*///���ڲ���
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
		//�ж��Ƿ�ɹ�,��show��ʣ��ġ�*�������׵ĸ���ʱ�һ�û��ը��ʱ��Ӯ��
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
			DisPlay(mine, ROW, COL); //������ʾʤ���������
			break;
		}
	}
}
