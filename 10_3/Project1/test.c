#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
//动态内存分配,malloc,free,calloc,realloc,柔性数组,存储结构
//文件操作,文件指针,fopen,文件使用方式
//int main()
//{
//	/*int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s", strerror(errno));
//	}
//	else
//	{
//		for (int i = 0; i < 10; i++)
//			printf("%d ", p[i]);
//	}
//	free(p);
//	p = NULL;*/
//	return 0;
//}
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//void Test()
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}
//struct S
//{
//	int a;
//	int arr[];
//};
//int main()
//{
//	/*struct S* s = (struct S*)malloc(sizeof(struct S) + 10 * sizeof(int));
//	s->a = 100;
//	for (int i = 0; i < 10; i++)
//	{
//		s->arr[i] = i + 2;
//	}
//	for (int j = 0; j < 10; j++)
//	{
//		printf("%d ", s->arr[j]);
//	}
//	printf("\n");
//	printf("%d\n", sizeof(s));*/
//	cout << 'd' << 'q' << 'b';
//	return 0;
//}
//int main()
//{
//	char buf[1024] = { 0 };
//	FILE* pl = fopen("test.txt", "r");
//	if (pl == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	/*fputc('l', pl);
//	fputc('x', pl);
//	fputc('j', pl);*/
//	/*printf("%c ", fgetc(pl));
//	printf("%c ", fgetc(pl));
//	printf("%c ", fgetc(pl));*/
//	/*fputs("lxjjxl", pl);*/
//	fputs("hello\n", pl);
//	fputs("world", pl);
//	fgets(buf, 1024, pl);
//	puts(buf);
//	/*printf("%s", buf);*/
//	fgets(buf, 1024, pl);
//	/*printf("%s", buf);*/
//	puts(buf);
//	fclose(pl);
//	pl = NULL;
//	return 0;
//}
//struct S
//{
//	int n;
//	float score;
//	char arr[];
//};
//int main()
//{
//	struct S s = { 100,3.14f,"hello" };
//	/*FILE*pf=fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}*/
//	FILE* pl = fopen("test.txt", "r");
//	if (pl == NULL)
//	{
//		return 0;
//	}
//	/*fprintf(pf, "%d %f %s", s.n, s.score, s.arr);*/
//	fscanf(pl, "%d %f %s", &(s.n), &(s.score), s.arr);
//	printf("%d %f %s", s.n, s.score, s.arr);
//	/*fclose(pf);
//	pf = NULL;*/
//	fclose(pl);
//	pl = NULL;
//	////从键盘上读取一行文本信息
//	//char buf[1024] = { 0 };
//	//fgets(buf, 1024, stdin);//从标准输入读取
//	////fputs(buf, stdout);//从标准输出读取
//	//puts(buf);
//	return 0;
//}
//sscanf,sprintf
//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//int main()
//{
//	char buf[1024] = { 0 };
//	struct S s = { 100,3.14f,"abcdef" };
//	struct S tmp = { 0 };
//	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
//	printf("%s\n", buf);
//	sscanf(buf, "%d %f %s", &(tmp.n), &(tmp.score), tmp.arr);
//	printf("%d %f %s", tmp.n, tmp.score, tmp.arr);
//	return 0;
//}
//数据库MYSQL
//把通讯录存储模式改为动态存储，以及把通讯录存进文件
//fseek,ftell,rewind,feof,ferror
struct A
{
	int a;
	char b;
	short c;
	short d;
}al;
int main()
{
	printf("%d\n", sizeof(al));
	/*FILE*pf=fopen("test.txt","")*/
	return 0;
}