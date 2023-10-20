#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
menu() //选择菜单
{
	printf("                    \n");
	printf("   1.Play  0.Exit   \n");
	printf("                    \n");
}

void game()
{
	char mine[ROWS][COLS] = { 0 };//用于存放地雷
	char show[ROWS][COLS] = { 0 };//用于展示
	InitBoard(mine, ROWS, COLS, '0');//将第一个放雷的棋盘全部初始化成'0'
	InitBoard(show, ROWS, COLS, '*');//将第二个展示的棋盘全部初始化成'*'
	//DisPlay(mine, ROW, COL);//只展示中心9*9的棋盘
	DisPlay(show, ROW, COL);
	LayMine(mine, ROW, COL);//在mine棋盘里布置雷
	DisPlay(mine, ROW, COL);//用于测试
	//开始玩扫雷
	Play(mine, show,ROW,COL);
}
int main()
{
	srand((unsigned int)time(NULL));//用于生成随机雷
	int input;//玩家要输入的选择
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//游戏主体
			break;
		case 0:
			printf("Exit Game\n");
			break;
		default:
			printf("Error Choice\n");
			break;
		}
	} while (input);
	return 0;
}