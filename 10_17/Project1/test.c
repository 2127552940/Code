#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int n;
//	scanf("%8d", &n);
//	int year, month, day;
//	year = n / 10000;
//	printf("year=%d\n", year);//Êä³öÄê·Ý
//	month = (n % 10000) / 100;
//	if (month < 10)
//	{
//		printf("month=%02d\n", month);
//	}
//	else
//	{
//		printf("month=%d\n", month);
//	}
//	day = n % 100;
//	if (day < 10)
//	{
//		printf("day=%02d\n", day);
//	}
//	else
//	{
//		printf("day=%d\n", day);
//	}
//	return 0;
//}
//int main() {
//    int a, b;
//    scanf("%d,%d", &a, &b);
//    a ^= b;
//    b ^= a;
//    a ^= b;
//    printf("%d,%d", a, b);
//    return 0;
//}
//int main() 
//{
//    char a;
//    while (1)
//    {
//        scanf("%c", &a);
//        getchar();
//        printf("%c\n", a + 32);
//    }
//    return 0;
//}
//int main()
//{
//	int i = 15;
//	printf("%2x", i);
//
//	return 0;
//}
//int main()
//{
//	int n = 1234;
//	printf("%#0o\n", n);
//	printf("%#0X", n);
//	return 0;
//}
//int main() {
//    char a;
//    int b;
//    float c;
//    scanf("%c", &a);
//    scanf("%d", &b);
//    scanf("%f", &c);
//    printf("%c %d %f", a, b, c);
//    return 0;
//}
//int main() {
//    int a, b, c;
//    scanf("%d%d%d", &a, &b, &c);
//    printf("%d%8d%8d", a, b, c);
//    return 0;
//}
//int main() {
//    int a, b, c;
//    scanf("%x%o", &a, &b);
//    c = a + b;
//    printf("%d", c);
//    return 0;
//}
//int main() {
//    int a, b;
//    scanf("%d%d", &a, &b);
//    int c = a + b%7;
//    if (c <= 7)
//        printf("%d", c);
//    else
//        printf("%d", c % 7);
//    return 0;
//}
//int main() {
//    int a, b = 1;
//    scanf("%d", &a);
//    while (a)
//    {
//        b <<= 1;
//        a--;
//    }
//    printf("%d", b);
//    return 0;
//}
//int main() {
//    int a;
//    float n, sum=0, min = 100.0, max = 0;
//    scanf("%d", &a);
//    for (int i = 0; i < a; i++)
//    {
//        scanf("%f", &n);
//        sum += n;
//        if (n > max)
//        {
//            max = n;
//        }
//        if (n < min)
//        {
//            min = n;
//        }
//    }
//    printf("%.2f %.2f %.2f", max, min, sum / a);
//    return 0;
//}
#include <math.h>
//int main() {
//    int a, b, c;
//    scanf("%d%d%d", &a, &b, &c);
//    int sum = a + b + c;
//    float d= sqrt((a + b + c) * (a + b - c) * (a + c - b) * (c + b - a)) / 4.0;
//    printf("circumference=%d,area=%.2f", sum, d);
//    return 0;
//}
//int main() {
//    int a, b, c;
//    scanf("%d%d%d", &a, &b, &c);
//    if (c % b)
//    {
//        printf("%d", a - c / b - 1);
//    }
//    else
//    {
//        printf("%d", a - c /b);
//    }
//    return 0;
//}
//int main() {
//    int a, b;
//    scanf("%d%d", &a, &b);
//    float c = 1.0/((1.0 / b) + (1.0 / a));
//    printf("%.1f",c);
//    return 0;
//}
//int main() {
//    int a, b;
//    scanf("%d%d", &a, &b);
//    float v = 3.14 * a * b * b;
//    int n = 10000 / v;
//    if (v * n < 10000)
//    {
//        printf("%d", n+1);
//    }
//    else
//    {
//        printf("%d", n);
//    }
//    return 0;
//}
//int main() {
//    long long int a, b;
//    scanf("%lld%lld", &a, &b);
//    long long int ret = 0, cet = 0;
//    long long int m = a, n = b;
//    if (a % b == 0)
//    {
//        ret = a;
//    }
//    while (a % b)
//    {
//        ret = a % b;
//        a = b;
//        b = ret;
//    }
//    cet = (m * n) / ret;
//    printf("%lld\n", cet + ret);
//    return 0;
//}
//int main() {
//    long long int a;
//    scanf("%lld", &a);
//    int ret = 0,i=0;
//    long long int b = 0;
//    while (a)
//    {
//        ret = a % 10;
//        if (ret % 2 == 1)
//        {
//            b += pow(10, i);
//        }
//        a /= 10;
//        i++;
//    }
//    printf("%lld", b);
//    return 0;
//}
//int main() {
//    char a;
//    while (scanf("%c", &a) != EOF)
//    {
//        getchar();
//        if (a == 'a' || a == 'A' || a == 'e' || a == 'E' || a == 'i' || a == 'I' || a == 'o' || a == 'O' || a == 'u' || a == 'U')
//        {
//            printf("Vowel\n");
//        }
//        else
//        {
//            printf("Consonant\n");
//        }
//    }
//    return 0;
//}
//int main() {
//    float a;
//    char b;
//    scanf("%f", &a);
//    getchar();
//    b = getchar();
//    int c = 0;
//    if (a <= 1)
//    {
//        if (b == 'y')
//        {
//            c = 25;
//        }
//        if (b == 'n')
//        {
//            c = 20;
//        }
//    }
//    if (a > 1)
//    {
//        if (b == 'y')
//        {
//            if ((int)a < a)
//            {
//                c = 20 + (int)a * 1 + 5;
//            }
//        }
//        if (b == 'n')
//        {
//            if ((int)a < a)
//            {
//                c = 20 + (int)a * 1;
//            }
//        }
//    }
//    printf("%d", c);
//    return 0;
//}
//int main() {
//    int e;
//    float a, b, c;
//    scanf("%d;%f,%f,%f", &e, &a, &b, &c);
//    printf("The each subject score of No. %d is %.2f, %.2f, %.2f.", e, a, b, c);
//    return 0;
//}
//int main() 
//{
//    float a;
//    scanf("%f", &a);
//    printf("%.0f", a);
//}
//int main() {
//    int a;
//    scanf("%d", &a);
//    switch (a)
//    {
//    case 1:printf("Monday\n"); break;
//    case 2:printf("Tuesday\n"); break;
//    case 3:printf("Wednesday\n"); break;
//    case 4:printf("Thursday\n"); break;
//    case 5:printf("Friday\n"); break;
//    case 6:printf("Saturday\n"); break;
//    case 7:printf("Sunday\n"); break;
//    default:break;
//    }
//    return 0;
//}
//int main() {
//    float a, b, c;
//    
//    while (scanf("%f%f%f", &a, &b, &c)!=EOF)
//    {
//        float t = b * b - 4 * a * c;
//        if (a == 0)
//        {
//            printf("Not quadratic equation\n");
//        }
//        else
//        {
//            if (t == 0)
//            {
//                if (b / (a * 2) == 0)
//                {
//                    printf("x1=x2=%.2f\n", 0.0);
//                }
//                else
//                {
//                    printf("x1=x2=%.2f\n", -b / (a * 2));
//                }
//            }
//            else if (t > 0)
//            {
//                printf("x1=%.2f;x2=%.2f\n", (-b - sqrt(t)) / (a * 2), (-b + sqrt(t)) / (a * 2));
//            }
//            else if (t < 0)
//            {
//                if (b / (a * 2) == 0)
//                {
//                    printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi\n", 0.0, sqrt(-t) / (a * 2), 0.0, sqrt(-t) / (a * 2));
//                }
//                else
//                {
//                    printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi\n", -b / (a * 2), sqrt(-t) / (a * 2), -b / (a * 2), sqrt(-t) / (a * 2));
//                }
//            }
//        }
//    }
//    return 0;
//}
#include <string.h>
int main() {
    char arr[20];
    scanf("%s", arr);
    int len = strlen(arr);
    int j = 1;
    int sum = 0;
    for (int i = 0; i < len - 1; i++)
    {
        if ((arr[i] - '0') >= 0 && (arr[i] - '0') <= 9)
        {
            sum += j * (arr[i] - '0');
            j++;
        }
    }
    if (sum % 11 == (arr[len - 1] - '0'))
    {
        printf("Right\n");
    }
    else if (sum % 11 == 10 && arr[len - 1] == 'X')
    {
        printf("Right\n");
    }
    else
    {
        if (sum % 11 == 10)
        {
            arr[len - 1] = 'X';
        }
        else
        {
            arr[len - 1] = sum % 11 + '0';
        }
        printf("%s", arr);
    }
    return 0;
}