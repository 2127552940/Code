#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
extern char* my_itoa(int num, char* str, int radix);
//int main()
//{
//	//写一个函数，求一个字符串的长度，在 main 函数中输入字符串，并输出其长度。
//	//指针相减求字符串长度
//	char str[50] = { 0 };
//	scanf("%s", str);
//	char* p = str;
//	while (*p)
//	{
//		p++;
//	}
//	printf("%d", p-str);
//	return 0;
//}
//int main()
//{
//	//创建临时变量求字符串长度
//	int count = 0;
//	char str[50] = { 0 };
//	scanf("%s", str);
//	while (str[count])
//	{
//		count++;
//	}
//	printf("%d", count);
//	return 0;
//}
//int my_strlen(char* str)
//{
//	if (*str)
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//		return 0;
//}
//int main()
//{
//	//使用递归计算字符串长度（不创建临时变量）
//	char str[50] = { 0 };
//	scanf("%s", str);
//	int ret=my_strlen(str);
//	printf("%d", ret);
//	return 0;
//}
//typedef struct {
//    char name[20];
//    char sex[5];
//    int  age;
//}Stu;
//void input(Stu* stu)
//{
//    int i;
//    for (i = 0; i < 5; i++)
//        scanf("%s%s%d", stu[i].name, stu[i].sex, &(stu[i].age));
//}
//void output(Stu* stu)
//{
//    int i;
//    for (i = 0; i < 5; i++)
//        printf("%s %s %d\n", stu[i].name, stu[i].sex, stu[i].age);
//}
//int main()
//{
//	//编写input()和output()函数输入，输出5个学生的数据记录。
//    Stu stu[5];
//    printf("请输入5个学生的信息：姓名 性别 年龄:\n");
//    input(stu);
//    printf("5个学生的信息如下：\n姓名  性别  年龄\n");
//    output(stu);
//    system("pause");
//	return 0;
//}
//创建一个结构体用于存放数据域
//typedef struct Student //创建一个学生类型的结构体用于存放学生类型的变量
//{
//	char name[20];
//	char stu_num[20];
//	char addr[20];
//	int age;
//}Student;
////创建一个存放数据域和指针域的结构体指针
//typedef struct Link_list {
//	Student data;//存放学生数据类型
//	struct Link_list* next;//指向本身类型的指针
//}Linklist,*Lnode;//重新命名为Linklist，并创建一个名为Lnode的指针变量
//void Linklist_Init()//对链表进行初始化
//{
//
//}
//int main()
//{
//	//创建一个链表。
//	
//	return 0;
//}
//太浪费时间和空间了
//int Fib(int n)
//{
//	if (n == 1||n==2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//另外一种方法
//int Fib(int n)
//{
//	int sum = 0;
//	int a = 1, b = 1;
//	for (int i = 2; i < n; i++)
//	{
//		sum = a + b;
//		a = b;
//		b = sum;
//	}
//	if (n > 2)
//		return sum;
//	else
//		return 1;
//}
//int main()
//{
//	//古典问题（兔子生崽）：有一对兔子，从出生后第3个月起每个月都生一对兔子，小兔子长到第三个月后每个月又生一对兔子，假如兔子都不死，问每个月的兔子总数为多少？（输出前40个月即可）
//	//0 0 1 1 2 3 5  8  13
//	//1 1 2 3 5 8 13 21 34
//	//斐波那契数列
//	//要求第n个月的兔子就直接用递归算斐波那契数列就行
//	for (int i = 1; i <= 40; i++)
//	{
//		int sum = Fib(i);
//		printf("%d ", sum);
//		if (i % 10 == 0)
//			printf("\n");
//	}
//	return 0;
//}

//int Reverse(int num)
//{
//
//}
//int main()
//{
//	//输入一个整数，并将其反转后输出。
//	//把一个整数翻转例如:输入12345输出54321
//	//12
//	//0000 1010
//	//21
//	//0001 0101
//	//97
//	//0110 0001
//	//79
//	//0100 1111
//	int n;
//	printf("请输入一个整数:>");
//	scanf("%d", &n);
//	int ret = n;
//	int count = 0;
//	while (ret)
//	{
//		ret /= 10;
//		count++;
//	}
//	char* str = (char*)malloc((count+1) * sizeof(char));
//	my_itoa(n, str, 10);
//	int len = strlen(str);
//	int left = 0;
//	int right = len - 1;
//	while (left < right)
//	{
//		char tmp;
//		if (str[left]=='-')
//		{
//			left++;
//			tmp = str[left];
//			str[left] = str[right];
//			str[right] = tmp;
//			left++;
//			right--;
//		}
//		else
//		{
//			tmp = str[left];
//			str[left] = str[right];
//			str[right] = tmp;
//			left++;
//			right--;
//		}
//	}
//	int num = atoi(str);
//	printf("%d", num);
//	return 0;
//}
//int main()
//{
//	char str[] = "-123456";
//	int ret=atoi(str);//转换字符串为数字
//	char str2[20];
//	my_itoa(ret,str2,10);//转换数字为字符串
//	printf("%d", ret);
//	printf("%s", str2);
//	return 0;
//}
int main()
{
	int n, reversedNumber = 0, remainder;

	printf("输入一个整数: ");
	scanf("%d", &n);

	while (n != 0)
	{
		remainder = n % 10;
		reversedNumber = reversedNumber * 10 + remainder;
		n /= 10;
	}

	printf("反转后的整数: %d", reversedNumber);

	return 0;
}