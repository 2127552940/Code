#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
//创建动态顺序表
typedef int SLtype;
#define N 10

typedef struct SqList
{
	SLtype* a;
	int size;
	int capacity;
}SL;


void SqListInit(SL* sl);

void SqListDestroy(SL* sl);

void SqListpushback(SL* sl, SLtype n);

void SqListShow(SL* sl);
void SLPushFront(SL* sl, SLtype n);

void SLPopBack(SL* sl);

void SLPopFront(SL* sl);

void SLInsert(SL* sl,int pos, SLtype n);

void SLRemove(SL* sl, int pos);



