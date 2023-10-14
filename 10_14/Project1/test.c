#define _CRT_SECURE_NO_WARNINGS 1
//变量的左值和右值,time,rand,srand,生成随机数,可以写一个博客
//完成猜数字游戏,关机程序,cmd关机指令
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
void game()
{
	//游戏主体包括生成一个随机数，玩家输入的数字，比较数字
	int ret = rand()%100+1;//把生成的随机数存到ret里面,并且随机数的范围为1-100
	int guess;
	while (1)
	{
		printf("请输入数字:>");
		scanf("%d", &guess);//玩家输入猜测的数字
		if (guess == 0)
		{
			printf("即将退出猜数字游戏\n");
			Sleep(1000);
			printf("\n");
			break;
		}
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
		}
		else if(ret==guess)
		{
			printf("猜对了\n");
			break;
		}
			
	}
}
void menu()
{
	printf("想重新开始猜数字游戏请输入0\n");
	printf("生成的随机数范围为1-100\n");
	printf("******1.Play  0.Exit******\n");
}
int main()
{
	//猜数字游戏
	//1.菜单，选择是否进入猜数字游戏，生成随机数,猜数字
	srand((unsigned int)time(NULL));//生成一个随机数
	int input;
	do {
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("退出游戏\n");
			break;
		case 1:
			printf("开始游戏\n");
			game();//游戏主体
			break;
		default:
			printf("输入错误,请从新输入\n");
			break;
		}
	} while (input);
	return 0;
}
//int main()
//{
//	//今日任务:完成单片机实验，完成牛客网的如门题目，完成几节课大概有个3,4节课
//	char letter;
//	scanf("%c", &letter);
//	switch (letter)
//	{
//	case 'A':
//		printf("hehe\n");
//		break;
//	case 'B':
//		printf("haha\n");
//		break;
//	default:
//		printf("错误\n");
//		break;
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	//辗转相除法
//	int num1, num2;
//	scanf("%d%d", &num1, &num2);
//	int max = num1 > num2 ? num1 : num2;
//	int min = num1 < num2 ? num1 : num2;
//	int mid = 1;
//	while (mid)
//	{
//		mid = max % min;
//		max = min;
//		min = mid;
//		if (mid == 0)
//		{
//			printf("最大公约数为%d", max);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	//数9的个数
//	int count = 0;
//	for (int i = 0; i <= 100; i++)
//	{
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}
//int main()
//{
//	for (int i = 1; i < 10; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int num=9,flag=0;
//	int left = 0,mid;
//	int right = sizeof(arr) / sizeof(arr[0]);
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] == num)
//		{
//			printf("找到了,下标为%d\n", mid);
//			flag = 1;
//			break;
//		}
//		else if (arr[mid] > num)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			left = mid + 1;
//		}
//	}
//	if (flag == 0)
//	{
//		printf("没找到\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main() {
//    int a;
//    a=intput();
//    output(a);
//    return 0;
//}
//#include <stdio.h>
//
//int main() {
//    int a;
//    a = getchar();
//    printf("  %c\n", a);
//    printf(" %c%c%c\n", a, a, a);
//    printf("%c%c%c%c%c\n", a, a, a, a, a);
//    printf(" %c%c%c\n", a, a, a);
//    printf("  %c\n", a);
//    return 0;
//}
//time_t;
//int main()
//{
//
//	float a = 14.58;
//	printf("%d", (int)a);
//}