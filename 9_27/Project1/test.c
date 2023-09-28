#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//回调函数,qsort函数,void*类型的指针,gets
//void bubble_sort(int * arr, const int sz)
//{
//	for (int i = 0; i < sz - 1; i++)
//	{
//		int flag = 0;
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])//交换元素
//			{
//				arr[j] = arr[j] ^ arr[j + 1];
//				arr[j+1] = arr[j] ^ arr[j + 1];
//				arr[j] = arr[j] ^ arr[j + 1];
//				flag = 1;
//			}
//		}
//		if (flag == 0)
//			break;
//
//	}
//}
//int main()
//{
//	//冒泡排序
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//a=3 b=5 3^5
//0011
//0101
//0110 =a=6
//0011 =b=3
//0101 =a=5
//int main()
//{
//	int a = 10;
//	void* p = &a;
//	int b = (*(int*)p)+2;
//	printf("%d ", b);
//	return 0;
//}
//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p %d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	return 0;
//}
