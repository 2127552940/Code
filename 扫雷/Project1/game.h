#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define MINES 10

//初始化
void InitBoard(char board[ROWS][COLS], int rows, int cols, char ch);
//展示
void DisPlay(char board[ROWS][COLS], int row, int col);
//布置雷
void LayMine(char board[ROWS][COLS], int row, int col);
//开始游戏
void Play(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);