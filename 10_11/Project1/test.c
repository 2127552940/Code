#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
//int main()
//{
//	//<->����ҵ�ύ����ʱ�Ĳ���
//	int num1, num2;
//	scanf("%d%d", &num1, &num2);
//	printf("�ϴ�ֵΪ:%d", num1 > num2 ? num1 : num2);
//	return 0;
//}
//int main()
//{
//	const int a = 0;
//	prinf("%d\n", a);
//	return 0;
//}
//void Delay()
//{
//	int i = 0, j = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		for (j = 0; j < 10000; j++);
//	}
//}
//int main()
//{
//	printf("\a");
//	Delay();
//	printf("\a");
//	Delay();
//	printf("\a");
//	Delay();
//	printf("\a");
//	return 0;
//}
//int main()
//{
//	//printf("%s","abcd\328");
//	//printf("%d\n", strlen("c:\test\x11\328\test.c"));
//	return 0;
//}
//int main()
//{
//	printf("Hello world\n");
//
//	return 0;
//}
//int Divisor(int x, int y)
//{
//	int ret = 1;
//	//շת�����
//	int max = x > y ? x : y;
//	int min = x < y ? x : y;
//	while (max % min)
//	{
//		ret = max % min;
//		max = min;
//		min = ret;
//	}
//	return min;
//}
//int main()
//{
//	//�������������Լ��
//	int a, b;
//	printf("������������:>");
//	scanf("%d%d", &a, &b);
//	int ret=Divisor(a, b);
//	printf("�������������Լ��Ϊ%d", ret);
//	return 0;
//}
//int Arms(int num)
//{
//	//����1�ǰ�ķ��0���ǰ�ķ��
//	int n=0;
//	int ret=num;
//	int sum = 0;
//	while (ret)
//	{
//		ret/=10;
//		n++;
//	}
//	ret = num;
//	for (int i = 0; i < n; i++)
//	{
//		sum += (int)pow(num % 10, n);
//		num /= 10;
//	}
//	if (sum == ret)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	//�ж�Armstrong��
//	/*int num;
//	printf("������һ����");*/
//	//scanf("%d",&num);
//	//int ret=Arms(num);
//	for (long long i = 0; i < 10000000; i++)
//	{
//		int ret = Arms(i);
//		if (ret == 1)
//			printf("%d��Armstrong��\n",i);
//		//else
//		//	printf("����Armstrong��\n");
//	}
//	return 0;
//}
//int Is_prime(int num)
//{
//	int flag=1;
//	if (num == 1)
//	{
//		return 0;
//	}
//	for (int i = 2; i <= sqrt(num); i++)
//	{
//		if (num % i == 0)
//		{
//			flag = 0;
//			break;
//		}
//	}
//	return flag;
//}
//int main()
//{
//	//����һ�����Ƿ����Ϊ��������֮��
//	//1.�ȴ���һ���ж������ĺ���
//	//2.��1��ʼ�ӵ��������һ�룬�ֱ��ж����������Ƿ�Ϊ����
//	//5=2+3 6=3+3
//	int num,i;
//	printf("������һ����\n");
//	scanf("%d", &num);
//	for (i = 2; i <= num / 2; i++)
//	{
//		if (Is_prime(i)==1 && Is_prime(num - i)==1)
//		{
//			printf("���������������%d������%d�ĺ�\n", i, num - i);
//		}
//	}
//	if (i == num)
//	{
//		printf("������޷����������ĺ�����ʾ\n");
//	}
//	/*for (int i = 1; i < 100; i++)
//	{
//		if (Is_prime(i))
//			printf("%d������\n", i);
//	}*/
//	return 0;
//}
int convertBinaryToDecimal(long long num)
{
	int num1 = 0,i=0,ret;
	while (num)
	{
		ret = num % 10;
		num /= 10;
		num1 += ret * pow(2, i);
		i++;
	}
	return num1;
}
int main()
{
	//�����ƺ�ʮ����֮��Ļ���ת��
	//������ת����ʮ����
	long long num;
	printf("������һ����������:>");
	scanf("%lld", &num);
	int num1 = convertBinaryToDecimal(num);
	printf("%d", num1);
	return 0;
}