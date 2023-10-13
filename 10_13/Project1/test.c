#define _CRT_SECURE_NO_WARNINGS 1
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
//int main()
//{
//	int n, m,count=0;
//	scanf("%d%d", &n, &m);
//	//int n =4, m = 4;
//	char** str2 = (char**)malloc(n*sizeof(char*));
//	for (int i = 0; i < n; i++)
//	{
//		str2[i] = (char*)malloc(m * sizeof(char));
//		for (int j = 0; j < m; j++)
//		{
//			scanf("%c", &str2[i][j]);
//		}
//		getchar();
//	}
//	for (int i = 0; i < n - 3;i++)
//	{
//		for (int j = 0; j < m - 3; j++)
//		{
//			if ()
//				count++;
//			if ()
//				count++;
//		}
//	}
//	printf("%d", count);
	/*for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			printf("%c ",str2[i][j]);
		}
		printf("\n");
	}*/
//	return 0;
//}
//int main()
//{
//	//小美走公路
//	int  n;
//	long long int num;
//	int site1, site2;
//	long long int sum = 0, summin = 0;
//	scanf("%d", &n);
//	long long int* arr = (long long int*)malloc(n * sizeof(long long int));
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%lld", &num);
//		arr[i] = num;
//		sum += num;
//	}
//	scanf("%d%d", &site1, &site2);
//	int min = site1 < site2 ? site1 : site2;
//	int sites = site1 - site2;
//	if (sites < 0)
//		sites = -sites;
//	for (int i = min; i < (min + sites); i++)
//	{
//		summin += arr[i - 1];
//	}
//	if (summin > (sum - summin))
//	{
//		printf("%lld", sum - summin);
//	}
//	else
//		printf("%lld", summin);
//	return 0;
//}
//int main() {
//    int n;
//    scanf("%d", &n);
//    char s1[1001];
//    char s2[1001];
//    scanf("%s", s1);
//    scanf("%s", s2);
//    int len = 0;
//    int l = 0, result = 0;
//    char v1[1001];
//    char v2[1001];
//    int index = 0;
//    for (int i = 0; i < n; i++) {
//        if (s1[i] == s2[i])
//            len++;
//        else {
//            v1[index] = s1[i];
//            v2[index] = s2[i];
//            index++;
//        }
//
//    }
//    int exchange_sum = 0;
//    for (int i = 0; i < index; i++)
//        for (int j = i; j < index; j++) {
//            if (v1[i] == v2[j])
//                exchange_sum = 1 > exchange_sum ? 1 : exchange_sum;
//            if (v2[i] == v1[j])
//                exchange_sum = 1 > exchange_sum ? 1 : exchange_sum;
//            if (v1[i] == v2[j] && v2[i] == v1[j]) {
//                exchange_sum = 2 > exchange_sum ? 2 : exchange_sum;
//                break;
//            }
//
//        }
//
//    printf("%d", len + exchange_sum);
//
//}
//int main()
//{
//	//小美的数组构造
//	int n;
//	scanf("%d", &n);
//	int* arr = (int*)malloc(n * sizeof(int));
//	for (int i = 0; i < n; i += 2)
//	{
//		arr[i] = (i + 2) / 2;
//		arr[i + 1] = n + 1 - arr[i];
//	}
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	//排列询问
//	int n, num, i;
//	int num1, num2;
//	scanf("%d", &n);
//	int* arr = (int*)malloc(n * sizeof(int));
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &num);
//		arr[i] = num;
//	}
//	scanf("%d%d", &num1, &num2);
//	for (i = 0; i < n - 1; i++)
//	{
//		if ((arr[i] == num1) && (arr[i + 1] == num2))
//		{
//			printf("Yes");
//			break;
//		}
//		if ((arr[i] == num2) && (arr[i + 1] == num1))
//		{
//			printf("Yes");
//			break;
//		}
//	}
//	if (i == n - 1)
//	{
//		printf("No");
//	}
//	return 0;
//}
//VS要按三次ctrl Z才是EOF 
//int g_val = 2024;
//int main()
//{
//	int a = 5;
//	if (a)
//	{
//		printf("%d\n", sizeof(a));
//	}
//	printf("%d", g_val);
//	return 0;
//}
//美团面试题
//int main()
//{
//	//设计美团外卖的定价信息
//	//1.折扣价不能超过原价
//	//2.满x元减y元，减的价格不能超过满的价格
//	//3.满减优惠和折扣互斥，每个菜选择了原价菜可以触发满减
//	//4.计算最低价格的方案
//	int n,flag=0;
//	double a, b, sum1=0, sum2=0;//sum1代表原价购买菜的总价,sum2代表折扣价买菜的总价
//	double x, y, sum=0;//sum代表最后最实惠的价格
//	scanf("%d", &n);//输入n表示接下来要输入的n组数据
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%lf%lf", &a, &b);
//		if (a <= 0)
//		{
//			printf("error\n");
//			flag = 1;
//			break;
//		}
//		if (b <= 0)
//		{
//			printf("error\n");
//			flag = 1;
//			break;
//		}
//		if (b > a)
//		{
//			printf("error\n");
//			flag = 1;
//			break;
//		}
//		sum1 += a;
//		sum2 += b;
//	}
//	scanf("%lf%lf", &x, &y);
//	//判断输入数据的正确性
//	if (y > x || y <= 0)
//	{
//		printf("error\n");
//		flag = 1;
//	}
//	if (flag==0)
//	{
//		//进行判断比较
//		if ((sum1 < x) || (sum1 >= x && (sum2 <= (sum1 - y))))//无法触发满减或触发满减后满减的价格高于折扣价
//		{
//			printf("%.2lf", sum2);
//		}
//		else if (sum1 >= x && (sum2 >= (sum1 - y)))//触发了满减并且满减的价格低于折扣价
//		{
//			printf("%.2lf", sum1 - y);
//		}
//	}
//	return 0;
//
//yumapahofhhlrdiirnutsrjyejyvalcextexlmxyyrogwjobcleumjwgufehchnvrysftksyokeckaploohnbdnypwefizxxzfkp
//xjdcwkdtmqdodnhelcgsmjbiykpsvvwqglglmcoorwfdvbtljhgjpefkgypkhkyjlmecbfikcgrbfauzryrmiiwfjeplypiimycu
//动态匹配函数
int Match( char* str1,  char* str2,int n)
{
	int count = 0, max = 0;
	char* st1 = str1;//把str1的首地址赋给st1
	char* st2 = str2;//把str2的首地址赋给st2，方便遍历
	for (int i = 0; i < n; i++)
	{//外部循环n次从str1的第一个元素地址开始判断
		for (int j = 0; j < n; j++)
		{
			st1 = str1 + i;//每次将str1后移i位赋值给st1,即st1初始化
			st2 = str2+j;//每次将str2后移j为赋值给st2,即st2初始化
			count = 0;//count初始化
			while ((*st1 == *st2)&&*st2)//一旦有一个字符相同就一直向后移动判断知道不同为止
			{
				st1++;
				st2++;
				count++;
			}
			if (count > max)//将最大的count赋值给max并输出
			{
				max = count;
			}
		}
	}
	return max;
}
int main()
{
	//字符串匹配度
	//两个字符串长度为n，判断字符串的重复度,可以用strstr
	/*int n;
	scanf("%d", &n);
	char* str1 = (char*)malloc(n * sizeof(char));
	char* str2 = (char*)malloc(n * sizeof(char));*/
	////输入一个长度为n的字符串
	//案例一
	char str1[] = "ababc";
	char str2[] = "babac";
	//案例二
	/*char str1[] = "yumapahofhhlrdiirnutsrjyejyvalcextexlmxyyrogwjobcleumjwgufehchnvrysftksyokeckaploohnbdnypwefizxxzfkp";
	char str2[] = "xjdcwkdtmqdodnhelcgsmjbiykpsvvwqglglmcoorwfdvbtljhgjpefkgypkhkyjlmecbfikcgrbfauzryrmiiwfjeplypiimycu";*/
	/*scanf("%s", str1);
	scanf("%s", str2);*/
	int ret = Match(str1, str2,strlen(str1));//动态匹配函数
	printf("%d", ret);
	return 0;
}
//int main()
//{
//	int n,weight;
//	scanf("%d", &n);
//	int* arr = (int*)malloc(n * sizeof(int));
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &weight);
//		arr[i] = weight;
//	}
//
//	return 0;
//}