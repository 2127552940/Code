#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define MINES 10

//��ʼ��
void InitBoard(char board[ROWS][COLS], int rows, int cols, char ch);
//չʾ
void DisPlay(char board[ROWS][COLS], int row, int col);
//������
void LayMine(char board[ROWS][COLS], int row, int col);
//��ʼ��Ϸ
void Play(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);