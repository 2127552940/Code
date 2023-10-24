#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
//调试技巧,反汇编调试,调用堆栈调试,const的使用方式
#include <assert.h>
int main()
{
	/*int a = 1;
	if (*(char*)&a == 1)
	{
		printf("小端存储\n");
	}
	else
	{
		printf("大端存储\n");
	}*/
	float a = 3.14;
	int b = a*100;
	float c = b / 100.0;
	printf("%d\n", b);
	printf("%.2f", c);
	return 0;
}
//void Adj(int* arr, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		//当从头遍历遇到偶数时同时从尾部遍历遇到奇数时将这两个数互换，当left>=right时结束遍历
//		if (arr[left] % 2 != 0)
//		{
//			left++;
//		}
//		if (arr[right] % 2 != 1)
//		{
//			right--;
//		}
//		if ((arr[left] % 2 == 0) && arr[right] % 2 == 1)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//int main()
//{
//	//实现奇数和偶数位置互换
//	int arr[10] = { 0,2,1,5,6,7,8,10,9,14 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Adj(arr,sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//char* my_strcpy(char*dest,const char*src)
//{
//	assert(dest);
//	assert(src);
//	char* str = dest;
//	while (*dest++ = *src++)
//		;
//	return str;
//}
//int main()
//{
//	//实现strcpy
//	//strcpy功能分析：
//	//将一个字符串复制到另外一个空字符串数组中,同时\0也会被复制到另外一个字符串中
//	char arr1[] = "abcdef";
//	char arr2[100];
//	my_strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
//int main()
//{
//	char str[] = "abcdef";
//	printf("%3s\n", str);
//	return 0;
//}
//计算总共和多少瓶汽水的函数
//int Fun(int n)
//{
//	//分析：需要创建的变量1.每次能买汽水的瓶数2.喝完一次汽水剩余的空瓶数3.总共喝的汽水数
//	//限制的条件：空瓶数剩余0或者1
//	int blt = n; //初始可以买的汽水数为n
//	int nul = n; //初始剩余的汽水瓶数为n
//	int sum = blt; //初始总共喝的汽水数为n
//	while (nul >= 2)  //当空瓶数为0或1停止循环
//	{
//		blt = nul / 2; //可以兑换的汽水数是剩余的空瓶数除2
//		nul = blt + nul % 2;  //剩余的空瓶数是兑换完后的汽水数量加上没有被兑换的空瓶数
//		sum += blt;  
//	}
//	return sum;
//}
//int main()
//{
//	//喝汽水问题
//	//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以喝多少汽水（编程实现）。
//	int n;
//	scanf("%d", &n);
//	int sum=Fun(n);
//	printf("%d", sum);
//	return 0;
//}
//size_t my_strlen(const char* arr)
//{
//	assert(arr != NULL);
//	const char* str = arr;
//	while (*++arr)
//		;
//	return arr - str;
//}
//int main()
//{
//	char arr[] = "abc deght";
//	size_t len=my_strlen(arr);
//	printf("%zd\n", len);
//	return 0;
//}
//int main()
//{
//	//实现strcpy
//	//const修饰*p和修饰p,const有一种保护的作用
//	int m = 0;
//	int n = 0;
//	const int* p = &n; //*p不能被改变了
//	int* const p = &m; //p不能被改变了
//
//	return 0;
//}
//int main()
//{
//	/*int arr[10];
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 10 - i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}*/
//	int a = 0;
//	int b = 10;
//	int c = 0;
//	return 0;
//}
//int main()
//{
//	int n = 8;
//	//先打印上半部分
//	for (int i = 1; i <= n; i++)
//	{
//		//先打印空格，再打印*号
//		for (int j = 0; j <= n-1-i; j++)
//		{
//			printf(" ");
//		}
//		for (int j = 1; j <= (2 * i - 1); j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//打印下半部分
//	for (int i = 1; i <= n - 1; i++)
//	{
//		//先打印空格，再打印*号
//		for (int j = 1; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (int j = 0; j <= 2*(n - 1 - i); j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//判断是否为水仙花数的函数
//int Nod(int n)
//{
//	int count = 0;
//	int ret = n;
//	int sum = 0;
//	while (ret)//判断位数
//	{
//		count++;
//		ret /= 10;
//	}
//	ret = n;
//	for (int i = 0; i < count; i++)
//	{
//		sum+=(int)pow(ret % 10, count);//取出每一位并进行运算
//		ret /= 10;
//	}
//	if (sum == n)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//
//}
//int main()
//{
//	for (int i = 0; i <= 100000; i++)
//	{
//		if (Nod(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int n,m;
//	scanf("%d%d", &m,&n);//输入数字m，求前n项和
//	int sum = 0;
//	int ret = m;
//	for (int i = 1; i <= n; i++)
//	{
//		sum += m;
//		m += ret * pow(10, i);
//	}
//	printf("%d", sum);
//	return 0;
//}