#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//按位操作符的特殊点,向上取整和向下取整,printf可变参数列表,了解整形提升,学会看汇编代码
// 野指针,指针和指针相减的前提
//int main()
//{
//	int a = -11;
//	int b = 16;
//	int c = a & b;
//	int d = a | b;
//	int e = a ^ b;
//	printf("%d %d %d %d %d",c,d,e ,~a,~b);
//	return 0;
//}
//int main()
//{
//	char c1 = 5;
//	//0000 0101
//	char c2 = 127;
//	//0000 0000 0000 0000 0000 0000 0111 1111
//	//0000 0000 0000 0000 0000 0000 0000 0101
//	//0000 0000 0000 0000 0000 0000 1000 0100
//	//1111 1111 1111 1111 1111 1111 1000 0100
//	//1111 1111 1111 1111 1111 1111 1000 0011
//	//1000 0000 0000 0000 0000 0000 0111 1100 -124
//	char c3 = c1 + c2;
//	//10000011
//	//11111100
//	printf("%d", c3);
//	return 0;
//}
//int main()
//{
//	/*int a;
//	int b;
//	int c;
//	scanf("%d%d%d", &a, &b, &c);
//	int d = a * b + b * c + c * a;
//	printf("%d", d);
//	c = c + --c;
//	printf("%d", c);*/
//	int i = 1;
//	int ret = (++i) + (++i) + (++i);
//	printf("%d", ret);
//	printf("\n%d", i);
//	return 0;
//}
//int i;
//int main()
//{
//    i--;
//    //10000000000000000000000000000001  i的原码
//    //11111111111111111111111111111110  i的反码
//    //11111111111111111111111111111111  i的补码
//
//    if (i > sizeof(i))
//    {
//        printf(">\n");
//    }
//    else
//    {
//        printf("<\n");
//    }
//    return 0;
//}
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("a = %d b = %d c = %d\n:", a, b, c);
//	return 0;
//}
//int main()
//{
//	//0111 1100 1111 1999
//	//1000 1111 1011 2299
//	//1111 0011 0100
//	//先异或这两个数再求这个数的二进制位上1的个数
//	int a, b;
//	scanf("%d%d", &a, &b);
//	int c = a ^ b;
//	int i = 0, count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((c >> i) & 1 == 1)
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}
//int main()
//{
//	//打印整数二进制的奇数位和偶数位
//	//同样可以用移位 的方法解决
//	int a = 0;
//	scanf("%d", &a);
//	int i = 0;
//	int ret = a;
//	//00000000000000000000000000000011
//	for (i = 32; i>=0; i-=2)
//	{
//		if (i != 32)//此处i的取值不能是32，但i要从32开始依次向后减2移动ret
//		{
//			printf("%d ", (ret >> i) & 1);
//		}
//	}
//	printf("\n");
//	for (i =31; i >=1; i -= 2)
//	{
//		printf("%d ", (ret>>i) & 1);
//	}
//	printf("\n");
//	return 0;
//}
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	//同样用移位的方法实现
//	int count = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		if ((a >> i) & 1)
//			count++;
//	}
//	printf("%d", count);
//	return 0;
//}
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	a ^= b;
//	b ^= a;
//	a ^= b;
//	printf("%d %d", a, b);
//	return 0;
//}
//int main()
//{
//    int i = 1;
//    int ret = (++i) + (++i) + (++i);
//    printf("ret = %d\n", ret);
//    return 0;
//}
//#include <stdio.h>
//double Pow(double a, int n)
//{
//    if (n == 0)
//    {
//        return 1;
//    }
//    else
//    {
//        return a * Pow(a, n - 1);
//    }
//}
//int main()
//{
//    double a;
//    int n;
//    scanf("%lf%d", &a, &n);
//    printf("%.2lf", Pow(a, n));
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int a;
//    int sum = 0;
//    for (int i = 0; i < 10; i++)
//    {
//        scanf("%d", &a);
//        sum += a;
//    }
//    printf("%.1f", sum / 10.0);
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int flag = 1, sum = 0;
//    for (int i = 1; i <= n; i++)
//    {
//        sum += flag * i;
//        flag = -flag;
//    }
//    printf("%d", sum);
//    return 0;
//}
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int count = 0;
//    int ret = n;
//    while (ret)
//    {
//        ret /= 10; 
//        count++;
//    }
//    if (n == 0)
//    {
//        printf("%d", n);
//    }
//    else
//    {
//        if (n < 0)
//        {
//            n = -n;
//            for (int i = count - 1; i >= 0; i--)
//            {
//                ret = (int)pow(10, i);
//                if (ret != 1)
//                {
//                    printf("%d,", n / ret % 10);
//                }
//                else
//                {
//                    printf("%d", n / ret % 10);
//                }
//            }
//        }
//        else
//        {
//            for (int i = count - 1; i >= 0; i--)
//            {
//                ret = (int)pow(10, i);
//                if (ret != 1)
//                {
//                    printf("%d,", n / ret % 10);
//                }
//                else
//                {
//                    printf("%d", n / ret % 10);
//                }
//            }
//        }
//    }
//}
//#include <stdio.h>
//int main()
//{
//    int y, m, d;
//    scanf("%d-%02d-%02d", &y, &m, &d);
//    int sum = 0;
//    if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//    {
//        if (m > 1)
//        {
//            sum += 31;
//        }
//        if (m > 2)
//        {
//            sum += 29;
//        }
//        if (m > 3)
//        {
//            sum += 31;
//        }
//        if (m > 4)
//        {
//            sum += 30;
//        }
//        if (m > 5)
//        {
//            sum += 31;
//        }
//        if (m > 6)
//        {
//            sum += 30;
//        }
//        if (m > 7)
//        {
//            sum += 31;
//        }
//        if (m > 8)
//        {
//            sum += 31;
//        }
//        if (m > 9)
//        {
//            sum += 30;
//        }
//        if (m > 10)
//        {
//            sum += 31;
//        }
//        if (m > 11)
//        {
//            sum += 30;
//        }
//        sum += d;
//    }
//    else
//    {
//        if (m > 1)
//        {
//            sum += 31;
//        }
//        if (m > 2)
//        {
//            sum += 28;
//        }
//        if (m > 3)
//        {
//            sum += 31;
//        }
//        if (m > 4)
//        {
//            sum += 30;
//        }
//        if (m > 5)
//        {
//            sum += 31;
//        }
//        if (m > 6)
//        {
//            sum += 30;
//        }
//        if (m > 7)
//        {
//            sum += 31;
//        }
//        if (m > 8)
//        {
//            sum += 31;
//        }
//        if (m > 9)
//        {
//            sum += 30;
//        }
//        if (m > 10)
//        {
//            sum += 31;
//        }
//        if (m > 11)
//        {
//            sum += 30;
//        }
//        sum += d;
//    }
//    printf("%d", sum);
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int y;
//	scanf("%d", &y);
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		printf("yes");
//	else
//		printf("no");
//	return 0;
//}
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//    int count = 0;
//    for (int i = 201; i <= 299; i += 2)
//    {
//        int flag = 0;
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
//            count++;
//            if (count != 8)
//            {
//                printf("%d ", i);
//            }
//            else
//            {
//                printf("%d\n", i);
//            }
//        }
//    }
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    if ((n / 10000 == n % 10) && (n / 1000 % 10 == n / 10 % 10))
//    {
//        printf("Yes");
//    }
//    else
//    {
//        printf("No");
//    }
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int count = 0;
//    int ret = n;
//    while (ret)
//    {
//        ret /= 10;
//        count++;
//    }
//    printf("%d\n", count);
//    for (int i = 0; i < count; i++)
//    {
//        printf("%d", n % 10);
//        n /= 10;
//    }
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int n, m;
//    scanf("%d%d", &n, &m);
//    int ret = 1;
//    while (n % m)
//    {
//        ret = n % m;
//        n = m;
//        m = ret;
//    }
//    printf("%d", m);
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int sum = 0;
//    for (int i = 1; i < n; i++)
//    {
//        if (n % i == 0)
//        {
//            sum += i;
//        }
//    }
//    if (sum == n)
//    {
//        printf("%d is cloze.\n", n);
//    }
//    else
//    {
//        printf("%d is not cloze.\n", n);
//    }
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int sum = 1;
//    for (int i = 1; i < n; i++)
//    {
//        sum = (sum + 1) * 2;
//    }
//    printf("%d", sum);
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    for (int i = 0; i <= 100; i += 5)
//    {
//        for (int j = 0; j <= 100; j++)
//        {
//            for (int k = 0; k <= 100; k += 3)
//            {
//                if (((i + j + k) == 100) && ((i / 5 + 3 * j + k / 3) == 100))
//                {
//                    printf("%d %d %d", i / 5, k / 3, j*3);
//                    printf("\n");
//                }
//            }
//        }
//    }
//    return 0;
//}
//unsigned int i;
//int main()
//{
//	i--;
//	if (i > sizeof(i))
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0x11223344;
//	char* pa = &a;
//	*pa = 0;
//	printf("%#0x", a);
//	return 0;
////}
//int main()
//{
//	//int* p = NULL;
//	//int a = 10;
//	//p = &a;
//	//*p = 20;
//	////*(p+i)=arr[i]
//	//printf("%d", a);
//	int arr[10] = {0};
//	//printf("%d", 5[arr]);
//	printf("%d", &arr[0] - &arr[9]);
//	return 0;
//}
int main()
{
	char* s = "abcdfe";
	char* start = s;
	while (*++s);
	printf("%d", s - start);
	return 0;
}