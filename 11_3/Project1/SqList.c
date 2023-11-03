#define _CRT_SECURE_NO_WARNINGS 1
#include "SqList.h"

void CapCheck(SL* sl)
{
	if (sl->size == sl->capacity)
	{
		SLtype* tmp = (SLtype*)realloc(sl->a, sizeof(SLtype)*2 * sl->capacity);
		if (!tmp)
		{
			perror("realloc fail");
			return;
		}
		sl->a = tmp;
		sl->capacity *= 2;
	}
}

void SqListInit(SL* sl)
{
	sl->a = (SLtype*)malloc(4 * sizeof(SLtype));
	if (!sl->a)
	{
		perror("malloc fail");
		return;
	}
	sl->size = 0;
	sl->capacity = 4;
}

void SqListpushback(SL* sl, SLtype n)
{
	CapCheck(sl);
	sl->a[sl->size++] = n;
}

void SqListShow(SL* sl)
{
	for (int i = 0; i < sl->size; i++)
	{
		printf("%d ", sl->a[i]);
	}
	printf("\n");
}

void SqListDestroy(SL* sl)
{
	free(sl->a);
	sl->a = NULL;
	sl->size = 0;
	sl->capacity = 0;
}
void SLPushFront(SL* sl, SLtype n)
{
	CapCheck(sl);
	int start = sl->size;
	while (start >0)
	{
		sl->a[start] = sl->a[start - 1];
		start--;
	}
	sl->a[0] = n;
	sl->size++;
}
void SLPopBack(SL* sl)
{
	assert(sl->size > 0);
	sl->size--;
}

void SLPopFront(SL* sl)
{
	assert(sl->size > 0);
	int start = 1;
	while (start < sl->size)
	{
		sl->a[start-1] = sl->a[start];
		start++;
	}
	sl->size--;
}
void SLInsert(SL* sl, int pos, SLtype n)
{
	assert(sl);
	assert(pos >= 0 && pos <= sl->size);
	int start = sl->size-1;
	while (start >= pos)
	{
		sl->a[start+1] = sl->a[start];
		start--;
	}
	sl->a[pos] = n;
	sl->size++;
}

void SLRemove(SL* sl, int pos)
{

}

