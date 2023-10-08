#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
extern char* my_itoa(int num, char* str, int radix);
//#include <stdlib.h>
//int main()
//{
//	//学习使用按位与& 。
//    //int a, b;
//    //a = 077;//0开头是一个八进制数据
//    //b = a & 3;
//    //printf("a & b(decimal) 为 %d \n", b);
//    //b &= 7;
//    //printf("a & b(decimal) 为 %d \n", b);
//	return 0;
//}
//int main()
//{
//	//学习使用按位异或 ^。
//	/*int a, b;
//	a = 5;
//	b = 3;
//	a ^= b;
//	b ^= a;
//	a ^= b;*/
//	//a 000 111 111
//	//3 000 000 011 
//	//b 000 111 100  60
//	//7 000 000 111
//	//b'000 111 011  59
//	//全1每次按位异或一位不同位置的1就会少一位1
//	//d 1111 1111 1111 1111
// 	/*b = a ^ 3;
//	printf("b 的值为 %d \n", b);
//	b ^= 7;
//	printf("b 的值为 %d \n", b);*/
//	/*printf("%d %d", a, b);*/
//	return 0;
//}
//int main()
//{
//	//按位操作的特殊用法
//	int a;
//	a = 0x01;
//	int i = 10;
//	int k = 0;
//	char s[11];
//	while (i)
//	{
//		
//		itoa(a, s, 2);
//		printf("二进制显示:%s\n", s);
//		i--;
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0xff;
//	printf("八进制 --> %o\n", a);
//	printf("十六进制 --> %X\n", a);
//	printf("十进制 --> %d\n", a);
//	char s[16];
//	my_itoa(a, s, 2);
//	printf("二进制 --> %s\n", s);
//	my_itoa(a, s, 3);
//	printf("三进制 --> %s\n", s);
//	return 0;
//}
//int main()
//{
//	//取一个整数 a 从右端开始的 4～7 位。
//	int a;
//	int n;
//	printf("请输入数据和要获取的位数:>");
//	scanf("%d%d", &a, &n);
//	//int* str;
//	//char s[10];
//	//str = (int*)malloc(n*sizeof(int));
//	//int ret = a;
//	//for (int i = 0; i < n; i++)
//	//{
//	//	//先对a进行移动然后获取移动后的第一位
//	//	str[i] = ret & 1;
//	//	ret >>= 1;
//	//	my_itoa(a, s, 2);
//	//	printf("%s\n", s);
//	//	printf("从右起第%d位的数为%d\n", i, str[i]);
//	//}
//	int num = 0;
//	int ret = a;
//	for (int i = 0; i < n; i++)
//	{
//		num = ret & 1;
//		ret >>= 1;
//		printf("%d ", num);
//	}
//	return 0;
//}
//int main()
//{
//	//打印出杨辉三角形（要求打印出10行）。
//	int n;
//	scanf("%d", &n);
//	//打印方式
//	//******1******  5
//	//****1***1****  3 
//	//**1***2***1**  2
//	//1***3***3***1  1
//	//
//	//1:1,2:5,3:9,4:13，n:3*(n-1)+n=4*n-3, (4*n-3-4*i+3)/2=2*(n-i),
//	//打印杨辉三角形里的数
//	//可以建一个动态二维数组
//	
//	int** arr = (int**)malloc(n * sizeof(int*));
//	for (int i = 0; i < n; i++)
//	{
//		arr[i] = (int*)calloc(n * sizeof(int),sizeof(int));
//		arr[i][0] = 1;
//	}
//	for (int i = 1; i < n; i++)
//	{
//		for (int j = 1; j < n; j++)
//		{
//			arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//		}
//	}
//	/*for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//
//			printf("%d", arr[i][j]);
//		}
//		printf("\n");
//	}*/
//	//1 0 0 0
//	//1 1 0 0
//	//1 2 1 0
//	//1 3 3 1   a[i][j]=a[]
////
//	for (int i = 0; i < n; i++)
//	{
//		//打印n行
//		for (int j = 0; j < 2*(n - i); j++)
//		{
//			printf(" ");
//		}
//		for (int j = 0; j <= i; j++)
//		{
//			if(arr[i][j]<10)
//			{
//				printf("%d", arr[i][j]);
//				printf("   ");
//			}
//			if (arr[i][j] >= 10&&arr[i][j]<100)
//			{
//				printf("%d", arr[i][j]);
//				printf("  ");
//			}
//			if (arr[i][j] >= 100)
//			{
//				printf("%d", arr[i][j]);
//				printf(" ");
//			}
//		}
//
//		//for (int j = 0; j < 4*i-3; j++)
//		//{
//		//	printf("%d", i);
//		//}
//		for (int j = 0; j < 2*(n - i); j++)
//		{
//			printf(" ");
//		}
//		printf("\n");//换行
//	}
//	return 0;
//}
//void swap(int* p1, int* p2)
//{
//	int i = 0;
//	i = *p1;
//	*p1 = *p2;
//	*p2 = i;
//}
//int main()
//{
//	//输入3个数a,b,c，按大小顺序输出。
//	//利用指针方法。
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	int* p1 = &a;
//	int* p2 = &b;
//	int* p3 = &c;
//	if (a < b)
//	{
//		swap(p1, p2);
//	}
//	if (a < c)
//	{
//		swap(p1, p3);
//	}
//	if (b < c)
//	{
//		swap(p2, p3);
//	}
//	printf("%d %d %d", c, b, a);
//	return 0;
//}
//int main()
//{
//	//输入数组，最大的与第一个元素交换，最小的与最后一个元素交换，输出数组。
//	int n = 0;
//	printf("请输入数组中元素的个数:>");
//	scanf("%d", &n);
//	int* arr = (int*)malloc(n * sizeof(int));
//	for (int i = 0; i < n; i++)
//	{
//		printf("请输入第%i个元素:", i+1);
//		scanf("%d", &arr[i]);
//	}
//	printf("原数组:\n");
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	/*int arr[10] = { 10,15,9,48,6,89,4,2,17,56 };*/
//	int max = arr[0], min = arr[0];
//	int maxp, minp;
//	for (int i = 0; i < n; i++)
//	{
//		if (arr[i] >= max)
//		{
//			max = arr[i];
//			maxp = i;
//		}
//		if (arr[i] <= min)
//		{
//			min = arr[i];
//			minp = i;
//		}
//	}
//	if (maxp != 0)
//	{
//		arr[0] ^= arr[maxp];
//		arr[maxp] ^= arr[0];
//		arr[0] ^= arr[maxp];
//	}
//	if (minp != n - 1)
//	{
//		arr[n - 1] ^= arr[minp];
//		arr[minp] ^= arr[n - 1];
//		arr[n - 1] ^= arr[minp];
//	}
//	printf("更换后的数组:\n");
//	printf("大:%d小:%d\n", maxp, minp);
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//void offset_arr(int* arr, int offset ,int sz)
//{
//	//创建一个大小为偏移量大小的数组用于存储最后面的几个数
//	//前面的数从尾部开始进行覆盖
//	int ret = sz;
//	int* arrmove = (int*)malloc(offset*sizeof(int));
//	for (int i = 0; i < offset; i++)
//	{
//		arrmove[i] = arr[sz - offset + i];
//	}
//	for (int i = 0; i < sz - offset; i++)
//	{
//		arr[i+offset] = arr[i];
//	}
//	for (int i = 0; i < offset; i++)
//	{
//		arr[i] = arrmove[i];
//	}
//}
//int main()
//{
//	//有 n 个整数，使其前面各数顺序向后移 m 个位置，最后m个数变成最前面的 m 个数。
//	//输入数组容量,数组各个元素
//	int n,offset;
//	printf("请输入数组元素个数:>");
//	scanf("%d", &n);
//	int* arr = (int*)malloc(n * sizeof(int));
//	for (int i = 0; i < n; i++)
//	{
//		printf("第%d个元素:",i+1);
//		scanf("%d", &arr[i]);
//	}
//	printf("请输入偏移量:>");
//	scanf("%d", &offset);
//	printf("\n原数组:\n");
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	//开始偏移
//	if (offset > n||offset<0)
//		printf("无法偏移");
//	else
//	{
//		offset_arr(arr, offset,n);
//		printf("\n偏移后的数组:\n");
//		for (int i = 0; i < n; i++)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//	//输入移动大小
//
//	return 0;
//}
int main()
{
	//有n个人围成一圈，顺序排号。从第一个人开始报数（从1到3报数），凡报到3的人退出圈子，问最后留下的是原来第几号的那位。
	int n;
	scanf("%d", &n);
	//分析：从1到3报数报到3出去，下一个个人从1开始从新报数
	//一轮下来减去n/3个人剩下的继续每次减去3的倍速的人，但难点在于报数的时候记住最后一个存活的人的位置
	//1.先创建一个数组用于装这n个人
	int* arr = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++)
	{
		arr[i] = i+1;
	}
	//开始循环枪毙
	//0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 20
	int ret = n;
	int* p = arr;
	int k = 0;
	int i = 0;
	int m=0;
	while (m<n-1)//人数要至少一人
	{
		//开始报数
		if (*(p+i) != 0)//如果指针指向的人不为0则开始报数
		{
			k++;
		}
		if (k == 3)//当k到三时p指向的人呗赋值为0
		{
			k = 0;
			*(p+i) = 0;
			m++;
		}
		i++;
		if (i==n)//当p指向最后一个元素时将p指向的位置指向开头
		{
			i=0;
		}
	}
	for (int i = 0; i <n; i++)
	{
		if (arr[i] != 0)
			printf("\n最后剩下的人是%d号", arr[i]);
	}
	return 0;
}
////打印数组
//void print_arr(int array[], int n)
//{
//    int i;
//    for (i = 0; i < n; ++i)
//        printf("%4d", array[i]);
//    printf("\n");
//}
////滚动数组
//void move(int array[], int n, int offset)
//{
//    int* p, * arr_end;
//    arr_end = array + n;      //数组最后一个元素的下一个位置
//    int last;
//
//    //滚动直到偏移量为0
//    while (offset)
//    {
//        last = *(arr_end - 1);
//        for (p = arr_end - 1; p != array; --p)   //向右滚动一位
//            *p = *(p - 1);
//        *array = last;
//        --offset;
//    }
//}
//int main()
//{
//    int arr[20];
//    int i, n, offset;
//    //输入数组大小和数组内容
//    printf("Total numbers?\n");
//    scanf("%d", &n);
//    printf("Input %d numbers.\n", n);
//    for (i = 0; i < n; i++)
//        scanf("%d", &arr[i]);
//    //输入滚动偏移量
//    printf("Set your offset.\n");
//    scanf("%d", &offset);
//    printf("Offset is %d.\n", offset);
//    //打印滚动前数组
//    print_arr(arr, n);
//    //滚动数组并打印
//    move(arr, n, offset);
//    print_arr(arr, n);
//}