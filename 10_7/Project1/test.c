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
//	//ѧϰ static ���徲̬�������÷�
//	//����ʵ���� foo() ����������һ����̬���� x���������ʼ��Ϊ 0��ÿ�ε��� foo() ����ʱ��x ��ֵ����� 1������ӡ���µ�ֵ��
//	// ���� x �Ǿ�̬���������ڳ�����������������ж����ڣ������������ں�������ʱ���ڡ���ˣ�ÿ�ε��� foo() ʱ���������Լ�ס x ��ֵ�����ڴ˻����ϵ�����
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
//        printf("num ����Ϊ %d \n", num);
//        num++;
//        {
//            auto int num = 1;
//            printf("����ģ�� num ����Ϊ %d \n", num);
//            num++;
//        }
//    }
//    return 0;
//}
//void fun()
//{
//    static int num = 1;
//    printf("����ģ�� num ����Ϊ %d\n", num);
//    num++;
//}
//int main()
//{
//	//ѧϰʹ��static����һ�÷�����
//    int i, num;
//    num = 2;
//    for (i = 0; i < 3; i++)
//    {
//        printf("num ����Ϊ %d \n", num);
//        num++;
//        fun();
//    }
//	return 0;
//}
//int main()
//{
//	//ѧϰʹ��register��������ķ�����
//    register int i;//��ע��register��������ȫ�ֱ��������ܺ�staticһ��ʹ�ã�����ʹ��ȡ��ַ&���ţ������ٶȱȴ����ڴ��еı�����
//    int tmp = 0;
//    for (i = 1; i <= 100; i++)
//        tmp += i;
//    printf("�ܺ�Ϊ %d\n", tmp);
//	return 0;
//}
//#define TRUE 1
//#define FALSE 0
//#define SQ(x) (x)*(x)
//int main()
//{
//	//��#define������ϰ��
//����������ȫ�ֱ���
//    int num;
//    int again = 1;
//    printf("���ֵС�� 50 ������ֹ��\n");
//    while (again)
//    {
//        printf("\n���������֣�");
//        scanf("%d", &num);
//        printf("�����ֵ�ƽ��Ϊ %d \n", SQ(num));
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
//	//#if #ifdef��#ifndef���ۺ�Ӧ�á�
//	//��ͷ�ļ���ʹ�÷�ֹ�ļ�����ε���
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
