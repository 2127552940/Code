#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
//int main()
//{
//	//<->是作业提交代码时的操作
//	int num1, num2;
//	scanf("%d%d", &num1, &num2);
//	printf("较大值为:%d", num1 > num2 ? num1 : num2);
//	return 0;
//}
//int main()
//{
//	const int a = 0;
//	prinf("%d\n", a);
//	return 0;
//}
//void Delay()
//{
//	int i = 0, j = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		for (j = 0; j < 10000; j++);
//	}
//}
//int main()
//{
//	printf("\a");
//	Delay();
//	printf("\a");
//	Delay();
//	printf("\a");
//	Delay();
//	printf("\a");
//	return 0;
//}
//int main()
//{
//	//printf("%s","abcd\328");
//	//printf("%d\n", strlen("c:\test\x11\328\test.c"));
//	return 0;
//}
//int main()
//{
//	printf("Hello world\n");
//
//	return 0;
//}
//int Divisor(int x, int y)
//{
//	int ret = 1;
//	//辗转相除法
//	int max = x > y ? x : y;
//	int min = x < y ? x : y;
//	while (max % min)
//	{
//		ret = max % min;
//		max = min;
//		min = ret;
//	}
//	return min;
//}
//int main()
//{
//	//求两个数的最大公约数
//	int a, b;
//	printf("请输入两个数:>");
//	scanf("%d%d", &a, &b);
//	int ret=Divisor(a, b);
//	printf("这两个数的最大公约数为%d", ret);
//	return 0;
//}
//int Arms(int num)
//{
//	//返回1是阿姆数0不是阿姆数
//	int n=0;
//	int ret=num;
//	int sum = 0;
//	while (ret)
//	{
//		ret/=10;
//		n++;
//	}
//	ret = num;
//	for (int i = 0; i < n; i++)
//	{
//		sum += (int)pow(num % 10, n);
//		num /= 10;
//	}
//	if (sum == ret)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	//判断Armstrong数
//	/*int num;
//	printf("请输入一个数");*/
//	//scanf("%d",&num);
//	//int ret=Arms(num);
//	for (long long i = 0; i < 10000000; i++)
//	{
//		int ret = Arms(i);
//		if (ret == 1)
//			printf("%d是Armstrong数\n",i);
//		//else
//		//	printf("不是Armstrong数\n");
//	}
//	return 0;
//}
//int Is_prime(int num)
//{
//	int flag=1;
//	if (num == 1)
//	{
//		return 0;
//	}
//	for (int i = 2; i <= sqrt(num); i++)
//	{
//		if (num % i == 0)
//		{
//			flag = 0;
//			break;
//		}
//	}
//	return flag;
//}
//int main()
//{
//	//计算一个数是否可以为两个素数之和
//	//1.先创建一个判断素数的函数
//	//2.从1开始加到这个数的一半，分别判断这两个数是否为素数
//	//5=2+3 6=3+3
//	int num,i;
//	printf("请输入一个数\n");
//	scanf("%d", &num);
//	for (i = 2; i <= num / 2; i++)
//	{
//		if (Is_prime(i)==1 && Is_prime(num - i)==1)
//		{
//			printf("这个数可以是素数%d和素数%d的和\n", i, num - i);
//		}
//	}
//	if (i == num)
//	{
//		printf("这个数无法用两个数的和来表示\n");
//	}
//	/*for (int i = 1; i < 100; i++)
//	{
//		if (Is_prime(i))
//			printf("%d是素数\n", i);
//	}*/
//	return 0;
//}
int convertBinaryToDecimal(long long num)
{
	int num1 = 0,i=0,ret;
	while (num)
	{
		ret = num % 10;
		num /= 10;
		num1 += ret * pow(2, i);
		i++;
	}
	return num1;
}
int main()
{
	//二进制和十进制之间的互相转换
	//二进制转换成十进制
	long long num;
	printf("请输入一个二进制数:>");
	scanf("%lld", &num);
	int num1 = convertBinaryToDecimal(num);
	printf("%d", num1);
	return 0;
}