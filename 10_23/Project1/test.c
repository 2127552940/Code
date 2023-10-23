#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//整形范围：limits.h
//浮点型范围:float.h
//01000001000100000000000000000000
//数据的存储并写一篇博客
//int main()
//{
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	c = a + b;
//	printf("%d %d", a + b, c);
//	return 0;
//}
#include <ctype.h>
int main() {
    for (int i = 10000; i <= 100000; i++)
    {
        if (((i / 10) * (i % 10)) + ((i / 100) * (i % 100)) + ((i / 1000) * (i % 1000))+((i/10000)*(i%10000)) == i)
        {
            printf("%d ", i);
        }
    }
    return 0;
}
//#include <stdio.h>
//
//int main() {
//    int n = 2019;
//    int count = 0;
//    for (int i = 1; i <= n; i++)
//    {
//        if (i % 10 == 9)
//        {
//            count++;
//            printf("%d ", i);
//        }
//        if (i % 100 / 10 == 9)
//        {
//            count++;
//            printf("%d ", i);
//        }
//        if (i % 1000 / 100 == 9)
//        {
//            count++;
//            printf("%d ", i);
//        }
//    }
//    printf("%d", count);
//    return 0;
//}
//BC78
//#include <stdio.h>
//#include <math.h>
//int main() {
//    int flag = 0;
//    for (int i = 101; i < 1000; i += 2)
//    {
//        flag = 0;
//        for (int j = 2; j <= sqrt(i); j++)
//        {
//            if (i % j == 0)
//            {
//                flag = 1;
//                break;
//            }
//        }
//        if (flag == 0)
//        {
//            printf("%d ", i);
//        }
//    }
//    return 0;
//}
//int main()
//{
//	int a = 0,b=0,c=0,d=0,e=0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1) &&
//							((b == 2) + (e == 4) == 1) &&
//							((c == 1) + (d == 2) == 1) &&
//							((c == 5) + (d == 3) == 1) &&
//							((e == 4) + (a == 1) == 1))
//						{
//							if (a+b+c+d+e==15&&a*b*c*d*e==120)
//							{
//								printf("a=%d,b=%d,c=%d,d=%d,e=%d\n", a, b, c, d, e);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}
//int main()
//{
//	/*A说：不是我。
//	B说：是C。
//	C说：是D。
//	D说：C在胡说
//	已知3个人说了真话，1个人说的是假话。*/
//	char killer;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer!='a') + (killer=='c') + (killer=='d') + (killer!='d') == 3)
//		{
//			printf("说假话的人是%c\n", toupper(killer));
//			break;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	/*A说：不是我。
//	B说：是C。
//	C说：是D。
//	D说：C在胡说
//	已知3个人说了真话，1个人说的是假话。*/
//	/*char input;
//	scanf("%c", input);
//	switch (input)
//	{
//	case 'A':
//		break;
//	case 'B':
//		break;
//	case 'C':
//		break;
//	case 'D':
//		break;
//	}*/
//	int A=0,B = 0, C = 0, D = 0;//先假定四个人都说了假话
//	char convict ;
//	int flag = 0;
//	if (A == 0)//A说了假话
//	{
//		convict = 'A';
//		if (convict == 'C' && convict == 'D' && convict != 'C')
//			flag = 1;
//		printf("如果A说的是假话那么flag为1,否则flag为0,flag=%d\n", flag);
//	}
//	flag = 0;
//	if (B == 0)//B说了假话
//	{
//		convict = 'D';
//		if (convict != 'A' && convict != 'C' && convict != 'D')
//		{
//			flag = 1;
//		}
//		printf("如果B说的是假话那么flag为1,否则flag为0,flag=%d\n", flag);
//	}
//	flag = 0;
//	if (C == 0)
//	{
//		convict = 'C';
//		if (convict != 'A' && convict == 'C' && convict != 'D')
//		{
//			flag = 1;
//		}
//		printf("如果C说的是假话那么flag为1,否则flag为0,flag=%d\n", flag);
//	}
//	flag = 0;
//	if (D == 0)
//	{
//		convict = 'C';
//		if (convict != 'A' && convict == 'C' && convict == 'D')
//		{
//			flag = 1;
//		}
//		printf("如果D说的是假话那么flag为1,否则flag为0,flag=%d\n", flag);
//	}
//
//	return 0;
//}
//1
//1 1
//1 2 1
//1 3 3 1
//1 4 6 4 1
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);//打印n行杨辉三角
//	int** arr = (int**)malloc(n*sizeof(int*));//分配一个有n个整形元素的数组
//	for (int i = 0; i < n; i++)
//	{
//		arr[i] = (int*)calloc(n, sizeof(int));
//	}
//	for (int i = 0; i < n; i++)
//	{
//		arr[i][0] = 1;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		//总共打印n行
//		for (int j=0; j <= i; j++)
//		{
//			//每一行有i+1个数
//			if (i > 0 && j > 0)
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];//除第一行第一列外，每一个元素都是上一行的前两个元素之和
//			}
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	free(arr);//释放创建的空间
//	return 0;
//}