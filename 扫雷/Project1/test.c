#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
menu() //ѡ��˵�
{
	printf("                    \n");
	printf("   1.Play  0.Exit   \n");
	printf("                    \n");
}

void game()
{
	char mine[ROWS][COLS] = { 0 };//���ڴ�ŵ���
	char show[ROWS][COLS] = { 0 };//����չʾ
	InitBoard(mine, ROWS, COLS, '0');//����һ�����׵�����ȫ����ʼ����'0'
	InitBoard(show, ROWS, COLS, '*');//���ڶ���չʾ������ȫ����ʼ����'*'
	//DisPlay(mine, ROW, COL);//ֻչʾ����9*9������
	DisPlay(show, ROW, COL);
	LayMine(mine, ROW, COL);//��mine�����ﲼ����
	DisPlay(mine, ROW, COL);//���ڲ���
	//��ʼ��ɨ��
	Play(mine, show,ROW,COL);
}
int main()
{
	srand((unsigned int)time(NULL));//�������������
	int input;//���Ҫ�����ѡ��
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//��Ϸ����
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