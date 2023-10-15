#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//TDD,创建静态库,导入静态库,函数的栈帧的创建和销毁
//int main()
//{
//	/*char arr[] = "abcdefghigklmnopqrst";
//	int len = strlen(arr);
//	for (int i = 1; i < len; i += 2)
//	{
//		memset(&arr[i], ' ', 1);
//	}
//	printf("%s", arr);*/
//	printf("%d ", printf("%d ", printf("%d ", 43)));
//	return 0;
//}
//接受一个整型值并按顺序打印每一位(递归方法)，递归实现字符串长度，做递归题目时要画图
//递归求阶乘,实现汉诺塔问题和青蛙跳台阶问题(递归解决)
//递归可以不用创建临时变量
//int Fac2(int n)
//{
//	int a = 1, b = 1, c = 1;
//	while (n >= 3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int Fac1(int n)
//{
//	if (n < 3)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fac1(n - 1) + Fac2(n - 2);
//	}
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int ret1=Fac1(n);
//	int ret2 = Fac2(n);
//	printf("%d %d", ret1, ret2);
//	return 0;
//}
//int my_pow(int n, int k)
//{
//	if (k == 1)
//	{
//		return n;
//	}
//	else
//	{
//		return n * my_pow(n, k - 1);
//	}
//}
//int main()
//{
//	int n, k;
//	scanf("%d%d", &n, &k);
//	int ret = my_pow(n, k);
//	printf("%d", ret);
//	return 0;
//}
//int Sum(int n)
//{
//	if (n < 10)
//	{
//		return n;
//	}
//	else 
//	{
//		return n % 10 + Sum(n / 10);
//	}
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int sum=Sum(n);
//	printf("%d", sum);
//	return 0;
//}
//void reverse_str(char* arr,int len)
//{
//	//每次将最后面的一个字符移到最前面，并且字符串向前移一位
//	//限制条件为字符串中间还有可移动位
//	char str = *arr;//用于储存每次传入的字符串的第一个字符
//	if (len>1)
//	{
//		//中间还有可以移动的字符
//		arr[0] = arr[len-1];
//		arr[len-1] = '\0';
//		reverse_str(arr + 1,len-2);//arr向前移动一位，并再次传入翻转字符串函数中
//		//达到递归最底层后将储存的第一个字符放入arr的最后一位中
//		arr[len-1] = str;
//	}
//}
//int main()
//{
//	//递归实现字符串逆序
//	char arr[] = "abcdefghi";
//	int len = strlen(arr);
//	reverse_str(arr,len);
//	printf("%s", arr);
//	return 0;
//}
//int Fac(int n)
//{
//	//限制条件当n为1时返回1
//	if (n == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * Fac(n - 1);
//	}
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int ret=Fac(n);
//	printf("%d", ret);
//	//非递归
//	int ret2 = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		ret2 *= i;
//	}
//	printf("%d", ret2);
//	return 0;
//}
//int my_strlen(char* arr)
//{
//	//限制条件传入的字符串首地址为\0时返回0,否则字符串向后移动一位
//	if (*arr=='\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return 1 + my_strlen(arr + 1);
//	}
//}
//int main()
//{
//	//递归实现求字符串长度
//	char arr[] = "abcdefghi";
//	int ret=my_strlen(arr);
//	printf("%d", ret);
//	return 0;
//}
//void Print(int n)
//{
//	//限制条件:n>10的时候最好打印的是最后一位所以最后一位放在最后一次打印
//	if (n > 10)
//	{
//		Print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	//接收一个整形值并按顺序打印每一位
//	int n;
//	scanf("%d", &n);
//	Print(n);
//	return 0;
//}
//#include <math.h>
//int is_prime(int n)
//{
//	//返回1是素数，返回0不是素数
//	int flag = 1;
//	for (int i = 2; i < sqrt(n); i++)
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
//	//实现is_prime()
//	for (int i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//int is_leap_year(int y)
//{
//	//返回1是闰年，返回0不是闰年
//	return ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0));
//}
//int main()
//{
//	int y;
//	scanf("%d", &y);
//	int ret = is_leap_year(y);
//	if (ret == 1)
//	{
//		printf("%d年是闰年\n",y);
//	}
//	else
//		printf("%d年不是闰年\n",y);
//	return 0;
//}
//void swap(int* pa, int* pb)
//{
//	*pa ^= *pb;
//	*pb ^= *pa;
//	*pa ^= *pb;
//
//}
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	printf("交换前a，b的值为%d %d\n", a, b);
//	swap(&a, &b);
//	printf("交换后a，b的值为%d %d\n", a, b);
//	return 0;
//}
//void mult_table(int n)
//{
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%-2d*%2d=%-3d", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	mult_table(n);
//	return 0;
//}
//int main()
//{
//	//八进制数和十进制数的相互转换
//	int n;
//	printf("请输入一个八进制数:>");
//
//	return 0;
//}