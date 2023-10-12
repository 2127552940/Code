#define _CRT_SECURE_NO_WARNINGS 1
#include <math.h>
#include <stdio.h>
int main()
{
	float sum = 0.0f;
	for (int i = 1; i < 100; i++)
	{
		if (i % 2 == 0)
		{
			sum -= 1.0 / i;
		}
		else
		{
			sum += 1.0 / i;
		}
	}
	printf("%f", sum);
}
//int main()
//{
//	int year;
//	for (year = 1000; year <= 2000; year += 2)
//	{
//		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//			printf("%d ", year);
//	}
//}
//int Is_prime(int n)
//{
//	int flag=1;
//	if (n == 1)
//	{
//		return 0;
//	}
//	for (int i = 2; i <= sqrt(n); i++)
//	{
//		if (n % i == 0)
//		{
//			flag = 0;
//			return flag;
//		}
//	}
//	return flag;
//}
//int main()
//{
//	for (int i = 101; i <= 200; i+=2)
//	{
//		if (Is_prime(i)==1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int max;
//	int arr[10];
//	printf("请输入十个整数:>");
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	max = arr[0];
//	for (int i = 0; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d", max);
//}
//int main()
//{
//	for (int i = 3; i < 100; i+=3)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}
//int main()
//{
//	int num1, num2, num3;
//	scanf("%d%d%d", &num1, &num2, &num3);
//	if (num1 < num2)
//	{
//		num1 ^= num2;
//		num2 ^= num1;
//		num1 ^= num2;
//	}
//	if (num1 < num3)
//	{
//		num1 ^= num3;
//		num3 ^= num1;
//		num1 ^= num3;
//	}
//	if (num2 < num3)
//	{
//		num3 ^= num2;
//		num2 ^= num3;
//		num3 ^= num2;
//	}
//	printf("%d %d %d", num1, num2, num3);
//	return 0;
//}
//int main()
//{
//	int n, m,num,max=0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &m);
//		max = 0;
//		for (int j = 0; j < m; j++)
//		{
//			scanf("%d", &num);
//			if (max < num)
//			{
//				max = num;
//			}
//		}
//		printf("%d\n", max);
//	}
//	return 0;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int ret = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d!=%d",n ,ret);
//	return 0;
//}
//int main()
//{
//	int n,flag=0;
//	scanf("%d", &n);
	/*if (n == 1)
	{
		printf("No");
	}
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			flag = 1;
			printf("No");
			break;
		}
	}*/
//	if (flag == 0)
//	{
//		printf("Yes");
//	}
//
//	return 0;
//}
//int main()
//{
//	int n,sum=0,a;
//	while (scanf("%d", &n)!=EOF&& n != 0)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			scanf("%d", &a);
//			sum += a;
//		}
//		printf("%d", sum);
//		break;
//	}
//	return 0;
//}
//int main()
//{
	/*int a, b;
	while (1)
	{
		scanf("%d%d", &a, &b);
		if (a == 0 && b == 0)
			break;
		else
			printf("%d\n", a + b);
	}*/
//	return 0;
//}
//int main()
//{
//	int n,a,b;
//	scanf("%d", &n);
	/*for (int i = 0; i < n; i++)
	{
		scanf("%d%d", &a, &b);
		printf("%d\n", a + b);
	}*/
//	return 0;
//}
//int main()
//{
//	int n;
//	float cost1, cost2, cost3;
//	scanf("%d" ,& n);
//	scanf("%f%f%f", &cost1, &cost2, &cost3);
//	float aver_split = (cost1 + cost2 + cost3) / n;
//	printf("%.2f", aver_split);
//	return 0;
//}
//int main()
//{
//	int num;
//	scanf("%d", &num);
//	int count = 0;
//	while (num)
//	{
//		num /= 10;
//		count++;
//	}
//	printf("%d", count);
//	return 0;
//}
//int main()
//{
//	int side1, side2, side3;
//	scanf("%d%d%d", &side1, &side2, &side3);
//	if ((pow(side3, 2) == pow(side1, 2) + pow(side2, 2)) || (pow(side1, 2) == pow(side3, 2) + pow(side2, 2)) || (pow(side2, 2) == pow(side1, 2) + pow(side3, 2)))
//		printf("yes");
//	else
//		printf("no");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int Rank, Absent;
//	for (Rank = 1; Rank <= 30; Rank++)
//	{
//		for (Absent = 0; Absent < 10; Absent++)
//		{
//			printf("%d %d ", Rank, Absent);
//			if (Rank <= 6 && Absent < 2)
//				printf("Yes\n");
//			else if ((Rank <= 20 && Absent < 5) && Rank > 6)
//				printf("Yes\n");
//			else
//				printf("No\n");
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}
//int main()
//{
//	int Train_times,Top_times,sum;
//	scanf("%d%d", &Train_times, &Top_times);
//	sum = 1500 + (Top_times + Train_times) * 5;
//	if (sum / 100 < 16)
//		printf("D");
//	else if (sum / 100 == 16)
//		printf("C");
//	else if (sum / 100 == 17)
//		printf("B");
//	else
//		printf("A");
//	return 0;
//}
//int main()
//{
//	int score;
//	scanf("%d", &score);
//	if (score / 10 < 6)
//	{
//		printf("fail");
//	}
//	else if (score / 10 == 6)
//	{
//		printf("pass");
//	}
//	else if (score / 10 == 7)
//	{
//		printf("medium");
//	}
//	else if (score / 10 == 8)
//	{
//		printf("nicer");
//	}
//	else
//		printf("good");
//	return 0;
//}
//int main()
//{
//	int num;
//	scanf("%d", &num);
//	switch (num)
//	{
//	case 1:
//		printf("Monday");
//		break;
//	case 2:
//		printf("Tuesday");
//		break;
//	case 3:
//		printf("Wednesday");
//		break;
//	case 4:
//		printf("Thurday");
//		break;
//	case 5:
//		printf("Friday");
//		break;
//	case 6:
//		printf("Saturday");
//		break;
//	case 7:
//		printf("Sunday");
//		break;
//	default:
//		break;
//	}
//
//	return 0;
//}