#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//TDD,������̬��,���뾲̬��,������ջ֡�Ĵ���������
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
//����һ������ֵ����˳���ӡÿһλ(�ݹ鷽��)���ݹ�ʵ���ַ������ȣ����ݹ���ĿʱҪ��ͼ
//�ݹ���׳�,ʵ�ֺ�ŵ�������������̨������(�ݹ���)
//�ݹ���Բ��ô�����ʱ����
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
//	//ÿ�ν�������һ���ַ��Ƶ���ǰ�棬�����ַ�����ǰ��һλ
//	//��������Ϊ�ַ����м仹�п��ƶ�λ
//	char str = *arr;//���ڴ���ÿ�δ�����ַ����ĵ�һ���ַ�
//	if (len>1)
//	{
//		//�м仹�п����ƶ����ַ�
//		arr[0] = arr[len-1];
//		arr[len-1] = '\0';
//		reverse_str(arr + 1,len-2);//arr��ǰ�ƶ�һλ�����ٴδ��뷭ת�ַ���������
//		//�ﵽ�ݹ���ײ�󽫴���ĵ�һ���ַ�����arr�����һλ��
//		arr[len-1] = str;
//	}
//}
//int main()
//{
//	//�ݹ�ʵ���ַ�������
//	char arr[] = "abcdefghi";
//	int len = strlen(arr);
//	reverse_str(arr,len);
//	printf("%s", arr);
//	return 0;
//}
//int Fac(int n)
//{
//	//����������nΪ1ʱ����1
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
//	//�ǵݹ�
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
//	//��������������ַ����׵�ַΪ\0ʱ����0,�����ַ�������ƶ�һλ
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
//	//�ݹ�ʵ�����ַ�������
//	char arr[] = "abcdefghi";
//	int ret=my_strlen(arr);
//	printf("%d", ret);
//	return 0;
//}
//void Print(int n)
//{
//	//��������:n>10��ʱ����ô�ӡ�������һλ�������һλ�������һ�δ�ӡ
//	if (n > 10)
//	{
//		Print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	//����һ������ֵ����˳���ӡÿһλ
//	int n;
//	scanf("%d", &n);
//	Print(n);
//	return 0;
//}
//#include <math.h>
//int is_prime(int n)
//{
//	//����1������������0��������
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
//	//ʵ��is_prime()
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
//	//����1�����꣬����0��������
//	return ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0));
//}
//int main()
//{
//	int y;
//	scanf("%d", &y);
//	int ret = is_leap_year(y);
//	if (ret == 1)
//	{
//		printf("%d��������\n",y);
//	}
//	else
//		printf("%d�겻������\n",y);
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
//	printf("����ǰa��b��ֵΪ%d %d\n", a, b);
//	swap(&a, &b);
//	printf("������a��b��ֵΪ%d %d\n", a, b);
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
//	//�˽�������ʮ���������໥ת��
//	int n;
//	printf("������һ���˽�����:>");
//
//	return 0;
//}