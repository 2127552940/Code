#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
//三子棋游戏
//分析1.创建一个进入游戏让玩家选择的框架
//2.创建一个三子棋的棋盘，棋盘内部存放玩家和电脑下的棋子，所以总的来说棋盘是由一个二维数组和棋盘框架构成的
//3.对棋盘进行操作
//4.判断棋局并做出调整
void menu()
{
	printf("                       \n");
	printf("   1.Play     0.Exit   \n");
	printf("                       \n");
}
void game()
{
	char board[ROW][COL];
	//初始化数组
	Init(board, ROW, COL);
	//打印棋盘
	Display(board, ROW, COL);
	//开始下棋,是一个循环事件
	char ret;
	while (1)
	{
		//玩家下棋
		PlayerMove(board,ROW,COL);
		Display(board, ROW, COL);
		//判断棋局形势
		ret=Is_Win(board, ROW, COL);
		//printf("%c\n", ret);//用于测试
		if (ret != 'C')
		{
			break;
		}
		//电脑下子
		ComputerMove(board, ROW, COL);
		Display(board, ROW, COL);
		ret=Is_Win(board, ROW, COL);
		//printf("%c\n", ret);//用于测试
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
		printf("Player Win\n");
	else if (ret == '#')
		printf("Computer Win\n");
	else if (ret == 'D')
		printf("Draw\n");
}
int main()
{
	//初始化随机数
	srand((unsigned int)time(NULL));
	//创建一个初始界面
	int input;
	do
	{
		menu();
		printf("Input Num:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			//进入游戏
			game();
			break;
		case 0:
			printf("Exit\n");
			break;
		default:
			printf("Error Input\n");
			break;
		}
	} while (input);
	return 0;
}