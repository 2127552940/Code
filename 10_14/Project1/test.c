#define _CRT_SECURE_NO_WARNINGS 1
//��������ֵ����ֵ,time,rand,srand,���������,����дһ������
//��ɲ�������Ϸ,�ػ�����,cmd�ػ�ָ��
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
void game()
{
	//��Ϸ�����������һ��������������������֣��Ƚ�����
	int ret = rand()%100+1;//�����ɵ�������浽ret����,����������ķ�ΧΪ1-100
	int guess;
	while (1)
	{
		printf("����������:>");
		scanf("%d", &guess);//�������²������
		if (guess == 0)
		{
			printf("�����˳���������Ϸ\n");
			Sleep(1000);
			printf("\n");
			break;
		}
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess < ret)
		{
			printf("��С��\n");
		}
		else if(ret==guess)
		{
			printf("�¶���\n");
			break;
		}
			
	}
}
void menu()
{
	printf("�����¿�ʼ��������Ϸ������0\n");
	printf("���ɵ��������ΧΪ1-100\n");
	printf("******1.Play  0.Exit******\n");
}
int main()
{
	//��������Ϸ
	//1.�˵���ѡ���Ƿ�����������Ϸ�����������,������
	srand((unsigned int)time(NULL));//����һ�������
	int input;
	do {
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("�˳���Ϸ\n");
			break;
		case 1:
			printf("��ʼ��Ϸ\n");
			game();//��Ϸ����
			break;
		default:
			printf("�������,���������\n");
			break;
		}
	} while (input);
	return 0;
}
//int main()
//{
//	//��������:��ɵ�Ƭ��ʵ�飬���ţ������������Ŀ����ɼ��ڿδ���и�3,4�ڿ�
//	char letter;
//	scanf("%c", &letter);
//	switch (letter)
//	{
//	case 'A':
//		printf("hehe\n");
//		break;
//	case 'B':
//		printf("haha\n");
//		break;
//	default:
//		printf("����\n");
//		break;
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	//շת�����
//	int num1, num2;
//	scanf("%d%d", &num1, &num2);
//	int max = num1 > num2 ? num1 : num2;
//	int min = num1 < num2 ? num1 : num2;
//	int mid = 1;
//	while (mid)
//	{
//		mid = max % min;
//		max = min;
//		min = mid;
//		if (mid == 0)
//		{
//			printf("���Լ��Ϊ%d", max);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	//��9�ĸ���
//	int count = 0;
//	for (int i = 0; i <= 100; i++)
//	{
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}
//int main()
//{
//	for (int i = 1; i < 10; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int num=9,flag=0;
//	int left = 0,mid;
//	int right = sizeof(arr) / sizeof(arr[0]);
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] == num)
//		{
//			printf("�ҵ���,�±�Ϊ%d\n", mid);
//			flag = 1;
//			break;
//		}
//		else if (arr[mid] > num)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			left = mid + 1;
//		}
//	}
//	if (flag == 0)
//	{
//		printf("û�ҵ�\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main() {
//    int a;
//    a=intput();
//    output(a);
//    return 0;
//}
//#include <stdio.h>
//
//int main() {
//    int a;
//    a = getchar();
//    printf("  %c\n", a);
//    printf(" %c%c%c\n", a, a, a);
//    printf("%c%c%c%c%c\n", a, a, a, a, a);
//    printf(" %c%c%c\n", a, a, a);
//    printf("  %c\n", a);
//    return 0;
//}
//time_t;
//int main()
//{
//
//	float a = 14.58;
//	printf("%d", (int)a);
//}