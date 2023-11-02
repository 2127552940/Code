#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
//int count = 0;
//void Fun(int n)
//{
//	if (n > 10)
//	{
//		count++;
//		Fun(n / 10);
//	}
//	if (count % 3 == 0&&count!=0)
//	{
//		printf("%d", n % 10);
//		printf(",");
//		count--;
//	}
//	else
//	{
//		printf("%d", n % 10);
//		count--;
//	}
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	Fun(n);
//	return 0;
//}
int main()
{
	char str1[100] ;
	char str2[100] ;
	scanf("%[^\n]", str1);
	getchar();
	scanf("%[^\n]", str2);
	char* st=strtok(str1, str2);
	while (st!=NULL)
	{
		printf("%s", st);
		st = strtok(NULL, str2);
	}
	return 0;
}
//int main()
//{
//	int ret = atoi("     1111111111111111111111111111");
//	printf("%d\n", ret);
//	long long ret1 = atoi("     1111111111111111111111111111");
//	printf("%lld\n", ret1);
//	return 0;
//}
//#define INT_PTR int*
//typedef int* int_ptr;
//INT_PTR a, b;
//int_ptr c, d;
//void Set(int* x)
//{
//
//}
//int main()
//{
//	Set(a);
//	Set(b);
//	Set(c);
//	Set(d);
//	return 0;
//}
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	fputs("abcdef", pf);
//	printf("睡眠10秒-已经写好数据了，但test.txt中并没有内容\n");
//	Sleep(10000);
//	printf("刷新缓冲区\n");
//	fflush(pf);
//	printf("再睡眠10秒-此时,再次打开test.txt,发现文件里面已经有内容了\n");
//	Sleep(10000);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//#define SIZE 5
//int main()
//{
//	double a[SIZE] = { 1.,2.,3.,4.,5. };
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(a, sizeof * a, SIZE, pf);
//	fclose(pf);
//	double b[SIZE];
//	pf = fopen("test.txt", "rb");
//	size_t ret_code = fread(b, sizeof * b, SIZE, pf);
//	if (ret_code == SIZE)
//	{
//		puts("Array read successfully,contents:");
//		for (int i = 0; i < SIZE; i++)
//		{
//			printf("%.2lf ", b[i]);
//		}
//		putchar('\n');
//	}
//	else
//	{
//		if (feof(pf))
//			printf("Error reading test.txt: unexpected end of file\n");
//		else if (ferror(pf))
//		{
//			perror("Error reading test.txt");
//		}
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//int main()
//{
//	int c;
//	FILE* pf1 = fopen("test.txt", "w");
//	if (!pf1)return 1;
//	fclose(pf1);
//	FILE* pf = fopen("test.txt", "r");
//	if (!pf)
//	{
//		perror("File opening failed");
//		return EXIT_FAILURE;
//	}
//	while ((c = fgetc(pf)) != EOF)
//	{
//		putchar(c);
//	}
//	if (ferror(pf))
//	{
//		puts("I/O error when reading");
//	}
//	else
//	{
//		puts("End of file reached successfully");
//	}
//	fclose(pf);
//	return 0;
//}
//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//int main()
//{
//	char buffer[27];
//	int n;
//	FILE* pf = fopen("test.txt", "w+");
//	for (n = 'A'; n <= 'Z'; n++)
//	{
//		fputc(n, pf);
//	}
//	rewind(pf);
//	fread(buffer, 1, 26, pf);
//	fclose(pf);
//	buffer[26] = '\0';
//	puts(buffer);
//	return 0;
//}
//int main()
//{
//	long size1,size2;
//	FILE* pf = fopen("test.txt", "rb");
//	if (pf == NULL)perror("Error opening file");
//	else
//	{
//		fseek(pf, 3, SEEK_SET);
//		size1 = ftell(pf);
//		rewind(pf);
//		size2 = ftell(pf);
//		fclose(pf);
//		printf("size of test.txt:%ld bytes.\n", size1);
//		printf("size of test.txt:%ld bytes.\n", size2);
//	}
//	return 0;
//}
//int main()
//{
//	FILE* pf = fopen("test.txt", "wb");
//	fputs("This is an apple.", pf);
//	fseek(pf, 9, SEEK_SET);
//	fputs(" sam", pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//int main()
//{
//	/*FILE* pf;
//	pf = fopen("myfile.txt", "w");
//	if (pf != NULL)
//	{
//		fputs("fopen example", pf);
//		fclose(pf);
//	}
//	printf("%s\n", __FILE__);*/
//
//	return 0;
//}