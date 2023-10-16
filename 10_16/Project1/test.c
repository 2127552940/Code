#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
////实现汉诺塔问题和青蛙跳台阶问题，并写一篇博客
int Fac(int n)//求n的阶乘函数
{
	int ret = 1;
	for (int i = 1; i <= n; i++)
	{
		ret *= i;
	}
	return ret;
}
int C_n_i(int n, int i)//求排列组合函数
{
	if (i == 0||i==n)
	{
		return 1;
	}
	else
	{
		return Fac(n) / (Fac(i) * Fac(n - i));
	}
}
int main()
{
	//青蛙跳台阶问题
	//数学的排序问题
	//不用递归的解法
	int n;
	scanf("%d", &n);
	int sum = 0;
	for (int i = 0; i <= n / 2; i++)
	{
		sum += C_n_i(n-i,i);
	}
	printf("%d", sum);
	return 0;
}
//void move(char ch1,char ch2)
//{
//	//把一根柱子的最上面的一个盘子移到另外一根柱子的最上面
//	printf("%c->%c\n", ch1, ch2);
//}
//void Hanoi(char a,char b,char c,int n)
//{
//	if (n == 1)
//	{
//		//当移动的盘子数量只有一个的时候直接使用move函数
//		move(a, c);
//	}
//	else
//	{
//		Hanoi(a, c, b, n - 1);//A柱借助C柱将n-1个盘子移动到B柱
//		move(a, c);//将A柱剩余的一个盘子移动到C柱
//		Hanoi(b,a,c,n-1);//将B柱的n-1个盘子借助A柱移动到C柱
//	}
//}
//int main()
//{
//	int n;//要移动的盘子的总数
//	scanf("%d", &n);
//	
//	Hanoi('A', 'B', 'C', n);//A柱借助B柱将n个盘子移到C柱上
//
//	return 0;
//}
//void Hanoi(char* arr1, char* arr2, char* arr3,int len,int n)//len指要存放数据的长度，n指数组的长度
//{
//	//条件1：如果这个数组里面都是0，那么可以在最后一个数组元素为0的位置存放任意大小的数
//	//条件2：如果要存放的数大于该数组内第一个不为0的数那么这个数不能被放进该数组
//	//要把12345存放到arr3中得先把1234存放到arr2中然后再把5存放到arr3中最后再把1234存放到arr3中
//	int ret1;
//	if (len == 2)
//	{
//		for (int i = 0; i <= n; i++)
//		{
//			if (arr3[i] != '\0'||i==n)
//			{
//				for (int j = 0; j < n; j++)
//				{
//					if (arr1[j] != '\0')
//					{
//						arr3[i - 1] = arr1[j];
//						arr1[j] = '\0';
//						ret1 = i - 1;
//						break;
//					}
//				}
//			}
//		}
//		for (int i = 0; i <= n; i++)
//		{
//			if (arr2[i] != '\0'||i==n)
//			{
//				for (int j = 0; j < n; j++)
//				{
//					if (arr1[j]!='\0')
//					{
//						arr2[i - 1] = arr1[j];
//						arr1[j] = '\0';
//						arr2[i - 2] = arr3[ret1];
//						arr3[ret1] = '\0';
//						break;
//					}
//				}
//			}
//		}
//	}
//	else
//	{
//		len--;
//		Hanoi(arr1, arr3, arr2, len, 5);
//		for (int i = 0; i <= n; i++)
//		{
//			if (arr3[i] != '\0' || i == n)
//			{
//				arr3[i-1] = arr1[len];
//			}
//		}
//		Hanoi(arr2, arr1, arr3, len, 5);
//	}
//}
//int main()
//{
//	//汉诺塔问题
//	char arr1[5] = "12345";
//	char arr2[5] = {0};
//	char arr3[5] = {0};
//	Hanoi(arr1, arr2, arr3,5,5);//把arr1数组的元素放入arr3中最后返回arr3
//	printf("%s", arr3);
//	return 0;
//}
//#include <stdio.h>
//unsigned int count = 0;
//void move(char ch1, char ch2)
//{
//	//把一根柱子的最上面的一个盘子移到另外一根柱子的最上面
//	printf("%c->%c\n", ch1, ch2);
//}
//void Hanoi(char a, char b, char c, int n)
//{
//	if (n == 1)
//	{
//		//当移动的盘子数量只有一个的时候直接使用move函数
//		move(a, c);
//		count++;
//	}
//	else 
//	{
//		Hanoi(a, c, b, n - 1);//A柱借助C柱将n-1个盘子移动到B柱       
//		move(a, c);//将A柱剩余的一个盘子移动到C柱  
//		count++;
//		Hanoi(b, a, c, n - 1);//将B柱的n-1个盘子借助A柱移动到C柱     
//	}
//}
//int main()
//{
//	int n;//要移动的盘子的总数
//	scanf("%d", &n);
//	Hanoi('A', 'B', 'C', n);//A柱借助B柱将n个盘子移到C柱上
//	printf("总共移动次数为%d", count);
//	return 0;
//}