#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define ROW 10
#define COL 10

//��ʼ������
void Init(char board[ROW][COL], int row, int col);
//��ӡ����
void Display(char board[ROW][COL], int row, int col);
//�������
void PlayerMove(char board[ROW][COL], int row, int col);
//��������
void ComputerMove(char board[ROW][COL], int row, int col);
//�ж���Ӯ
char Is_Win(char board[ROW][COL], int row, int col);