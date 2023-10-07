#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//void foo()
//{
//	static int x = 0;
//	printf("%d ", x);
//	x++;
//}
//int main()
//{
//	//学习 static 定义静态变量的用法
//	//以下实例中 foo() 函数声明了一个静态变量 x，并将其初始化为 0。每次调用 foo() 函数时，x 的值都会加 1，并打印出新的值。
//	// 由于 x 是静态变量，它在程序的整个生命周期中都存在，而不仅仅是在函数调用时存在。因此，每次调用 foo() 时，它都可以记住 x 的值，并在此基础上递增。
//	int i = 10;
//	while (i)
//	{
//		foo();
//		i--;
//	}
//	return 0;
//}
//int main()
//{
//    int i, num;
//    num = 2;
//    for (i = 0; i < 3; i++)
//    {
//        printf("num 变量为 %d \n", num);
//        num++;
//        {
//            auto int num = 1;
//            printf("内置模块 num 变量为 %d \n", num);
//            num++;
//        }
//    }
//    return 0;
//}
//void fun()
//{
//    static int num = 1;
//    printf("内置模块 num 变量为 %d\n", num);
//    num++;
//}
//int main()
//{
//	//学习使用static的另一用法。　
//    int i, num;
//    num = 2;
//    for (i = 0; i < 3; i++)
//    {
//        printf("num 变量为 %d \n", num);
//        num++;
//        fun();
//    }
//	return 0;
//}
//int main()
//{
//	//学习使用register定义变量的方法。
//    register int i;//备注：register不能用做全局变量，不能和static一起使用，不能使用取地址&符号，访问速度比存在内存中的变量快
//    int tmp = 0;
//    for (i = 1; i <= 100; i++)
//        tmp += i;
//    printf("总和为 %d\n", tmp);
//	return 0;
//}
//#define TRUE 1
//#define FALSE 0
//#define SQ(x) (x)*(x)
//int main()
//{
//	//宏#define命令练习。
//宏用来定义全局变量
//    int num;
//    int again = 1;
//    printf("如果值小于 50 程序将终止。\n");
//    while (again)
//    {
//        printf("\n请输入数字：");
//        scanf("%d", &num);
//        printf("该数字的平方为 %d \n", SQ(num));
//        if (num >= 50)
//            again = TRUE;
//        else
//            again = FALSE;
//    }
//	return 0;
//}
//#define Fun(a,b) a##b
//#define TOCHAR(a) #@a
//#define TOSTRING(a) #a
//int main()
//{
//	char str1[] = "abc";
//	char str2[] = "efg";
//	printf("%s", Fun("abc", "efg"));
//	printf("\n%c", TOCHAR(5));
//	printf("\n%s", TOSTRING(123abc));
//	return 0;
//}
//#ifndef __TEST_H__
//
//#define __TEST_H__
//
//#endif
//
//int main()
//{
//	//#if #ifdef和#ifndef的综合应用。
//	//在头文件中使用防止文件被多次调用
//
//	return 0;
//}
//int main()
//{
//    float x1, y1, x2, y2;
//    scanf("%f%f%f%f", &x1, &y1, &x2, &y2);
//    printf("%.2f", sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2)));
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int a, b, c;
//    scanf("%d%d%d", &a, &b, &c);
//    if (a % b == 0 && a % c == 0)
//        printf("Yes");
//    else
//        printf("No");
//	return 0;
//}
#include <stdio.h>
int main()
{
    int a, b, c, n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d%d%d", &a, &b, &c);
        if (a + b == c)
        {
            char S[] = "+";
            printf("%s\n", S);
        }
        else if (a - b == c)
        {
            char S[] = "-";
            printf("%s\n", S);
        }
        else if (a * b == c)
        {
            char S[] = "*";
            printf("%s\n", S);
        }
        else if (a / b == c)
        {
            char S[] = "\\";
            printf("%s\n", S);
        }
    }
    return 0;
}
//#include <stdio.h>
//int main()
//{
//    int a, b, c, n;
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d%d%d", &a, &b, &c);
//        if (a + b == c)
//            printf("+\n");
//        else if (a - b == c)
//            printf("-\n");
//        else if (a * b == c)
//            printf("*\n");
//        else if (a / b == c)
//            printf("\\");
//    }
//    return 0;
//}
