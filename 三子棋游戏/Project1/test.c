#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
//��������Ϸ
//����1.����һ��������Ϸ�����ѡ��Ŀ��
//2.����һ������������̣������ڲ������Һ͵����µ����ӣ������ܵ���˵��������һ����ά��������̿�ܹ��ɵ�
//3.�����̽��в���
//4.�ж���ֲ���������
void menu()
{
	printf("                       \n");
	printf("   1.Play     0.Exit   \n");
	printf("                       \n");
}
void game()
{
	char board[ROW][COL];
	//��ʼ������
	Init(board, ROW, COL);
	//��ӡ����
	Display(board, ROW, COL);
	//��ʼ����,��һ��ѭ���¼�
	char ret;
	while (1)
	{
		//�������
		PlayerMove(board,ROW,COL);
		Display(board, ROW, COL);
		//�ж��������
		ret=Is_Win(board, ROW, COL);
		//printf("%c\n", ret);//���ڲ���
		if (ret != 'C')
		{
			break;
		}
		//��������
		ComputerMove(board, ROW, COL);
		Display(board, ROW, COL);
		ret=Is_Win(board, ROW, COL);
		//printf("%c\n", ret);//���ڲ���
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
	//��ʼ�������
	srand((unsigned int)time(NULL));
	//����һ����ʼ����
	int input;
	do
	{
		menu();
		printf("Input Num:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			//������Ϸ
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