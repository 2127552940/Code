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
//	//С���߹�·
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
//	//С�������鹹��
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
//	//����ѯ��
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
//VSҪ������ctrl Z����EOF 
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
//����������
//int main()
//{
//	//������������Ķ�����Ϣ
//	//1.�ۿۼ۲��ܳ���ԭ��
//	//2.��xԪ��yԪ�����ļ۸��ܳ������ļ۸�
//	//3.�����Żݺ��ۿۻ��⣬ÿ����ѡ����ԭ�۲˿��Դ�������
//	//4.������ͼ۸�ķ���
//	int n,flag=0;
//	double a, b, sum1=0, sum2=0;//sum1����ԭ�۹���˵��ܼ�,sum2�����ۿۼ���˵��ܼ�
//	double x, y, sum=0;//sum���������ʵ�ݵļ۸�
//	scanf("%d", &n);//����n��ʾ������Ҫ�����n������
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
//	//�ж��������ݵ���ȷ��
//	if (y > x || y <= 0)
//	{
//		printf("error\n");
//		flag = 1;
//	}
//	if (flag==0)
//	{
//		//�����жϱȽ�
//		if ((sum1 < x) || (sum1 >= x && (sum2 <= (sum1 - y))))//�޷����������򴥷������������ļ۸�����ۿۼ�
//		{
//			printf("%.2lf", sum2);
//		}
//		else if (sum1 >= x && (sum2 >= (sum1 - y)))//�������������������ļ۸�����ۿۼ�
//		{
//			printf("%.2lf", sum1 - y);
//		}
//	}
//	return 0;
//
//yumapahofhhlrdiirnutsrjyejyvalcextexlmxyyrogwjobcleumjwgufehchnvrysftksyokeckaploohnbdnypwefizxxzfkp
//xjdcwkdtmqdodnhelcgsmjbiykpsvvwqglglmcoorwfdvbtljhgjpefkgypkhkyjlmecbfikcgrbfauzryrmiiwfjeplypiimycu
//��̬ƥ�亯��
int Match( char* str1,  char* str2,int n)
{
	int count = 0, max = 0;
	char* st1 = str1;//��str1���׵�ַ����st1
	char* st2 = str2;//��str2���׵�ַ����st2���������
	for (int i = 0; i < n; i++)
	{//�ⲿѭ��n�δ�str1�ĵ�һ��Ԫ�ص�ַ��ʼ�ж�
		for (int j = 0; j < n; j++)
		{
			st1 = str1 + i;//ÿ�ν�str1����iλ��ֵ��st1,��st1��ʼ��
			st2 = str2+j;//ÿ�ν�str2����jΪ��ֵ��st2,��st2��ʼ��
			count = 0;//count��ʼ��
			while ((*st1 == *st2)&&*st2)//һ����һ���ַ���ͬ��һֱ����ƶ��ж�֪����ͬΪֹ
			{
				st1++;
				st2++;
				count++;
			}
			if (count > max)//������count��ֵ��max�����
			{
				max = count;
			}
		}
	}
	return max;
}
int main()
{
	//�ַ���ƥ���
	//�����ַ�������Ϊn���ж��ַ������ظ���,������strstr
	/*int n;
	scanf("%d", &n);
	char* str1 = (char*)malloc(n * sizeof(char));
	char* str2 = (char*)malloc(n * sizeof(char));*/
	////����һ������Ϊn���ַ���
	//����һ
	char str1[] = "ababc";
	char str2[] = "babac";
	//������
	/*char str1[] = "yumapahofhhlrdiirnutsrjyejyvalcextexlmxyyrogwjobcleumjwgufehchnvrysftksyokeckaploohnbdnypwefizxxzfkp";
	char str2[] = "xjdcwkdtmqdodnhelcgsmjbiykpsvvwqglglmcoorwfdvbtljhgjpefkgypkhkyjlmecbfikcgrbfauzryrmiiwfjeplypiimycu";*/
	/*scanf("%s", str1);
	scanf("%s", str2);*/
	int ret = Match(str1, str2,strlen(str1));//��̬ƥ�亯��
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