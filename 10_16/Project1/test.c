#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
////ʵ�ֺ�ŵ�������������̨�����⣬��дһƪ����
int Fac(int n)//��n�Ľ׳˺���
{
	int ret = 1;
	for (int i = 1; i <= n; i++)
	{
		ret *= i;
	}
	return ret;
}
int C_n_i(int n, int i)//��������Ϻ���
{
	if (i == 0||i==n)
	{
		return 1;
	}
	else
	{
		return Fac(n) / (Fac(i) * Fac(n - i));
	}
}
int main()
{
	//������̨������
	//��ѧ����������
	//���õݹ�Ľⷨ
	int n;
	scanf("%d", &n);
	int sum = 0;
	for (int i = 0; i <= n / 2; i++)
	{
		sum += C_n_i(n-i,i);
	}
	printf("%d", sum);
	return 0;
}
//void move(char ch1,char ch2)
//{
//	//��һ�����ӵ��������һ�������Ƶ�����һ�����ӵ�������
//	printf("%c->%c\n", ch1, ch2);
//}
//void Hanoi(char a,char b,char c,int n)
//{
//	if (n == 1)
//	{
//		//���ƶ�����������ֻ��һ����ʱ��ֱ��ʹ��move����
//		move(a, c);
//	}
//	else
//	{
//		Hanoi(a, c, b, n - 1);//A������C����n-1�������ƶ���B��
//		move(a, c);//��A��ʣ���һ�������ƶ���C��
//		Hanoi(b,a,c,n-1);//��B����n-1�����ӽ���A���ƶ���C��
//	}
//}
//int main()
//{
//	int n;//Ҫ�ƶ������ӵ�����
//	scanf("%d", &n);
//	
//	Hanoi('A', 'B', 'C', n);//A������B����n�������Ƶ�C����
//
//	return 0;
//}
//void Hanoi(char* arr1, char* arr2, char* arr3,int len,int n)//lenָҪ������ݵĳ��ȣ�nָ����ĳ���
//{
//	//����1���������������涼��0����ô���������һ������Ԫ��Ϊ0��λ�ô�������С����
//	//����2�����Ҫ��ŵ������ڸ������ڵ�һ����Ϊ0������ô��������ܱ��Ž�������
//	//Ҫ��12345��ŵ�arr3�е��Ȱ�1234��ŵ�arr2��Ȼ���ٰ�5��ŵ�arr3������ٰ�1234��ŵ�arr3��
//	int ret1;
//	if (len == 2)
//	{
//		for (int i = 0; i <= n; i++)
//		{
//			if (arr3[i] != '\0'||i==n)
//			{
//				for (int j = 0; j < n; j++)
//				{
//					if (arr1[j] != '\0')
//					{
//						arr3[i - 1] = arr1[j];
//						arr1[j] = '\0';
//						ret1 = i - 1;
//						break;
//					}
//				}
//			}
//		}
//		for (int i = 0; i <= n; i++)
//		{
//			if (arr2[i] != '\0'||i==n)
//			{
//				for (int j = 0; j < n; j++)
//				{
//					if (arr1[j]!='\0')
//					{
//						arr2[i - 1] = arr1[j];
//						arr1[j] = '\0';
//						arr2[i - 2] = arr3[ret1];
//						arr3[ret1] = '\0';
//						break;
//					}
//				}
//			}
//		}
//	}
//	else
//	{
//		len--;
//		Hanoi(arr1, arr3, arr2, len, 5);
//		for (int i = 0; i <= n; i++)
//		{
//			if (arr3[i] != '\0' || i == n)
//			{
//				arr3[i-1] = arr1[len];
//			}
//		}
//		Hanoi(arr2, arr1, arr3, len, 5);
//	}
//}
//int main()
//{
//	//��ŵ������
//	char arr1[5] = "12345";
//	char arr2[5] = {0};
//	char arr3[5] = {0};
//	Hanoi(arr1, arr2, arr3,5,5);//��arr1�����Ԫ�ط���arr3����󷵻�arr3
//	printf("%s", arr3);
//	return 0;
//}
//#include <stdio.h>
//unsigned int count = 0;
//void move(char ch1, char ch2)
//{
//	//��һ�����ӵ��������һ�������Ƶ�����һ�����ӵ�������
//	printf("%c->%c\n", ch1, ch2);
//}
//void Hanoi(char a, char b, char c, int n)
//{
//	if (n == 1)
//	{
//		//���ƶ�����������ֻ��һ����ʱ��ֱ��ʹ��move����
//		move(a, c);
//		count++;
//	}
//	else 
//	{
//		Hanoi(a, c, b, n - 1);//A������C����n-1�������ƶ���B��       
//		move(a, c);//��A��ʣ���һ�������ƶ���C��  
//		count++;
//		Hanoi(b, a, c, n - 1);//��B����n-1�����ӽ���A���ƶ���C��     
//	}
//}
//int main()
//{
//	int n;//Ҫ�ƶ������ӵ�����
//	scanf("%d", &n);
//	Hanoi('A', 'B', 'C', n);//A������B����n�������Ƶ�C����
//	printf("�ܹ��ƶ�����Ϊ%d", count);
//	return 0;
//}