#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
#include <string.h>
//将一些指针有关的题目写一篇博客
//梳理一下C语言初阶和进阶学了什么并写一篇博客
//实现strcat,strstr,memmove,momset,qsort,KMP算法,strtok,strncpy,strncmp,memcpy,memmove,memset,memcmp
// offsetof,结构体对齐
//构造一个每次旋转一个字符的函数
//void reversal_onechar(char* str)
//{
//	char tmp = *str;
//	int len = strlen(str);
//	for (int i = 1; i < len; i++)
//	{
//		str[i-1] = str[i];
//	}
//	str[len - 1] = tmp;
//}
//int main()
//{
//	//构造一个每次旋转一个字符的函数
//	char str1[] = "abcdef";
//	char str2[] = "efabcd";
//	char str3[] = "defacb";
//	int len = strlen(str1);
//	char str[20];
//	int i;
//	strcpy(str,str1);
//	for (i = 1; i <= len; i++)
//	{
//		reversal_onechar(str);
//		if (strcmp(str, str3) == 0)
//		{
//			printf("%s左旋%d个字符得到%s\n", str1, i, str3);
//			break;
//		}
//	}
//	if (i > len)
//	{
//		printf("%s无法通过旋转得到%s\n", str1, str3);
//	}
//	return 0;
//}
//int cmp_int(const void* p1, const void* p2)
//{
//	return (*((int*)p1)) - (*((int*)p2));
//}
//struct Stu
//{
//	char name[20];
//	int age;
//};
//int cmp_name(const void* p1, const void* p2)
//{
//	return strcmp(((struct Stu*)p1)->name, ((struct Stu*)p2)->name);
//}
//int main()
//{
//	//冒泡排序实现qsort
//	struct Stu s1[3] = { {"zhangsan",20},{"lishi",25},{"wangwu",19} };
//	qsort(s1, 3, sizeof(s1[0]), cmp_name);
//	int arr[10] = { 1,8,5,7,9,2,4,6,8,10 };
//	qsort(arr, 10, 4, cmp_int);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int cmp_int(const void* p1, const void* p2)
//{
//	return (*((int*)p1)) - (*((int*)p2));
//}
//struct Stu
//{
//	char name[20];
//	int age;
//};
//int cmp_name(const void* p1, const void* p2)
//{
//	return strcmp(((struct Stu*)p1)->name,((struct Stu*)p2)->name);
//}
//void Swap(char* p1, char* p2, int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		char tmp = *p1;
//		*p1 = *p2;
//		*p2 = tmp;
//		p1++;
//		p2++;
//	}
//}
//void bubble_sort(void* arr, int sz, int size, int(*cmp)(const void*, const void*))
//{
//	for (int i = 0; i < sz-1; i++)
//	{
//		//比较sz-1趟
//		for (int j = 0; j < sz - i-1; j++)
//		{
//			//升序排列
//			if (cmp((char*)arr + j * size, (char*)arr + (j + 1) * size)>0)
//			{
//				Swap((char*)arr + j * size, (char*)arr + (j + 1) * size,size);
//			}
//		}
//	}
//}
//int main()
//{
//	//冒泡排序实现qsort
//	struct Stu s1[3] = { {"zhangsan",20},{"lishi",25},{"wangwu",19} };
//	bubble_sort(s1, 3, sizeof(s1[0]), cmp_name);
//	int arr[10] = { 1,8,5,7,9,2,4,6,8,10 };
//	bubble_sort(arr, 10, 4, cmp_int);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//void reversal(char* str, int k)
//{
//	int len = strlen(str);
//	//abcdef   假设k为2
//	//abcdef -> cbadef -> cdabef -> cdebaf -> adefab 要交换len-k次
//	//abcdef  假设k为4
//	//abcdef -> abcfed -> abefcd -> afebcd -> efabcd 要交换k次
//	if(k<=len/2)
//	{
//		for (int i = k; i < len; i++)
//		{
//			char tmp = str[i];
//			str[i] = str[i - k];
//			str[i - k] = tmp;
//		}
//	}
//	else
//	{
//		for (int i = 0; i <k; i++)
//		{
//			char tmp = str[k-i-1];
//			str[k-i-1] = str[len-1-i];
//			str[len - 1 - i] = tmp;
//		}
//	}
//}
//int main()
//{
//	//实现一个函数，可以左旋字符串中的k个字符。
//	//ABCD左旋一个字符得到BCDA
//	//ABCD左旋两个字符得到CDAB
//	char str[] = "abcdefghijklmn";
//	int k = 0;
//	scanf("%d", &k);
//	//可以用字符串递归逆序的思路
//	reversal(str, k);
//	printf("%s\n", str);
//	return 0;
//}
//int main()
//{
//	/*有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，
//	请编写程序在这样的矩阵中查找某个数字是否存在。
//	要求：时间复杂度小于O(N);*/
//	//1 2 3 4 5
//	//2 3 4 5 6
//	//3 4 5 6 7
//	//4 5 6 7 8
//	//6  找右顶点到该数字之间的最短路径
//	int arr[4][5] = { {1,2,3,4,5},{4,5,6,7,8},{7,8,9,10,11},{10,11,12,13,14} };
//	int k = 0;
//	printf("请输入要找的数字:>");
//	scanf("%d", &k);
//	int i = 0, j = 4;
//	while (i < 4 && j>=0)
//	{
//		if (arr[i][j] > k)
//		{
//			j--;
//		}
//		if (arr[i][j] < k)
//		{
//			i++;
//		}
//		if (arr[i][j]==k)
//		{
//			break;
//		}
//	}
//	if (i < 4 && j>=0)
//	{
//		printf("找到了，下标为%d %d\n", i, j);
//	}
//	else
//	{
//		printf("没找到\n");
//	}
//	return 0;
//}
//int main()
//{
//	/*for (int i = 0; i < 10; i++)
//	{
//		printf("%d:%s\n", i, strerror(i));
//	}*/
//	/*FILE* pf=fopen("data.txt", "r");
//	{
//		if (pf == NULL)
//		{
//			printf("%s\n", strerror(errno));
//			return 1;
//		}
//	}
//	return 0;*/
//
//	return 0;
//}
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(src);
//	assert(dest);
//	char* ret = dest;
//	while (*dest++ = *src++);
//	return ret;
//}
//int main()
//{
//	//冒泡模拟实现qsort排序(快排)
//	char str1[] = "hello world!";
//	char str2[] = "xxxxx";
//	my_strcpy(str1, str2);
//	printf("%s", str1);
//	return 0;
//}
//实现strlen并根据参数做出调整
//void Print(int(*p)[5], int r, int c)
//{
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	}
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	/*int arr[10];
//	printf("%p\n", arr);
//	printf("%p\n", &arr + 1);*/
//	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
//	//Print(arr, 3, 5);
//	int(*pf)(int, int) = Add;
//	printf("%p %p", Add, pf);
//	printf("\n%d\n", pf(3, 5));
//	return 0;
//}