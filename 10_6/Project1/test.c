#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
#include <math.h>
//int main()
//{
//	//���������ڼ��ĵ�һ����ĸ���ж�һ�������ڼ��������һ����ĸһ����������жϵڶ�����ĸ��
//	char arr[7][20] = {"monday","tuesday","wednesday","thursday","friday","saturday","sunday"};
//	char fst,scd;
//	scanf("%c", &fst);
//	getchar();
//	/*for (int i = 0; i < 7; i++)
//	{
//		if (fst == arr[i][0])
//		{
//			printf("������ڶ����ַ�:>");
//			scanf("%c", &scd);
//			getchar();
//			if (scd == arr[i][1])
//			{
//				printf("%s\n", arr[i]);
//				break;
//			}
//		}
//	}*/
//	switch (fst)
//	{
//	case 'm':
//		printf("%s", arr[0]);
//		break;
//	case 't':
//		printf("������ڶ����ַ�:>");
//		scanf("%c", &scd);
//		getchar();
//		if (scd == 'u')
//			printf("%s", arr[1]);
//		if (scd == 'h')
//			printf("%s", arr[3]);
//		break;
//	case 'w':
//		printf("%s", arr[2]);
//		break;
//	case 'f':
//		printf("%s", arr[4]);
//		break;
//	case 's':
//		printf("������ڶ����ַ�:>");
//		scanf("%c", &scd);
//		getchar();
//		if (scd == 'a')
//			printf("%s", arr[5]);
//		if (scd == 'u')
//			printf("%s", arr[6]);
//		break;
//	default:
//		printf("error");
//		break;
//	}
//	return 0;
//}
//int C_letter(char* str,char letter)
//{
//	int count = 0;
//	int i = 0;
//	while (str[i])
//	{
//		if (str[i] == letter)
//			count++;
//		i++;
//	}
//	return count;
//}
//char* delete_letter(const char* str, char* arr, char letter)
//{
//	int i=0;
//	int j = 0;
//	while (str[i])
//	{
//		if (str[i] != letter)
//		{
//			arr[j] = str[i];
//			j++;
//		}
//		i++;
//	}
//	return arr;
//}
//int main()
//{
//	//ɾ��һ���ַ����е�ָ����ĸ���磺�ַ��� "aca"��ɾ�����е� a ��ĸ��
//	char str[] = "aca";
//	char letter='a';
//	char* arr;
//	//˼·���ȼ�������ַ������ض��ַ�������
//	//����һ�����������ڽ���ʣ�µ��ַ�Ȼ�󷵻�
//	/*printf("������Ҫ��ȥ���ַ�:>");
//	scanf("%c", &letter);
//	getchar();*/
//	int len = strlen(str);
//	int count = C_letter(str,letter);//�����ض��ַ����ַ����е�����
//	arr = (char*)malloc(((unsigned long long)len - count) * sizeof(char));
//	delete_letter(str, arr, letter);
//	printf("%s", arr);
//	return 0;
//}
//int Is_prime(int num)
//{
//	int flag = 1;
//	if (num == 1||num==2)
//		return 1;
//	for (int i = 2; i <=sqrt(num); i++)
//	{
//		if (num%i==0)
//		{
//			flag = 0;
//			break;
//		}
//	}
//	return flag;
//}
//int main()
//{
//	�ж�һ�������Ƿ�Ϊ������
//	int num;
//	/*scanf("%d", &num);
//	int ret=Is_prime(num);*/
//	for (int i = 1; i < 100; i++)
//	{
//		if (Is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	/*if (ret == 1)
//		printf("%d������",num);
//	else
//		printf("%d��������", num);*/
//	return 0;
//}
//void hello_world(void)
//{
//    printf("Hello, world!\n");
//}
//void three_hellos(void)
//{
//    int counter;
//    for (counter = 1; counter <= 3; counter++)
//        hello_world();/*���ô˺���*/
//}
//int main()
//{
//    three_hellos();/*���ô˺���*/
//	return 0;
//}
//void reverse_string(char* str)
//{
//	int len = strlen(str);
//	int right = len - 1;
//	int left = 0;
//	char tmp;
//	while (left < right)
//	{
//		tmp = str[left];
//		str[left] = str[right];
//		str[right] = tmp;
//		right--;
//		left++;
//	}
//}
//int main()
//{
//	//�ַ�����ת���罫�ַ��� "www.runoob.com" ��תΪ "moc.boonur.www"��
//	char str[] = "www.runoob.com";
//	reverse_string(str);
//	printf("%s", str);
//	return 0;
//}
//int cmp_num(const void* p1, const void* p2)
//{
//	return (*(int*)p1) - (*(int*)p2);
//}
//int main()
//{
//	//��10������������
//	//ʹ��qsort����
//	int arr[10] = { 0 };
//	int num;
//	printf("������10������:\n");
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &num);
//		arr[i] = num;
//	}
//	qsort(arr, 10, sizeof(int), cmp_num);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	//��һ��3*3����Խ���Ԫ��֮��
//	int arr[3][3] = { 0 };
//	int num,count=0;
//	printf("������9�������һ��3X3����");
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			scanf("%d", &num);
//			arr[i][j] = num;
//		}
//	}
//	for (int i = 0; i < 3; i++)
//		count += arr[i][i];
//	printf("%d", count);
//	return 0;
//}
//Bubble_sort(int arr[], int sz)
//{
//	//ð������
//	for (int i = 0; i < sz; i++)
//	{
//		//����sz��
//		int flag = 0;
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			//�Ƚ�sz-1-i��
//			if (arr[j] > arr[j + 1])
//			{
//				arr[j+1] ^= arr[j];
//				arr[j] ^= arr[j+1];
//				arr[j+1] ^= arr[j];
//				flag = 1;
//			}
//		}
//		if (flag == 0)
//			break;
//	}
//}
//int main()
//{
//	//��һ���Ѿ��ź�������顣������һ������Ҫ��ԭ���Ĺ��ɽ������������С�
//	int arr[10] = { 18,25,42,55,61,65,78,87,98,100 };
//	int input;
//	printf("������һ����:>");
//	scanf("%d", &input);
//	////��һ�����ҵ��µ����ʺϵ�λ��
//	//int location;
//	//for (int i = 0; i < 9; i++)
//	//{
//	//	if (input < arr[0])
//	//	{
//	//		location = 0;
//	//		break;
//	//	}
//	//	else if (input > arr[9])
//	//	{
//	//		location = 10;
//	//		break;
//	//	}
//	//	else if (input >= arr[i] && input <= arr[i + 1])
//	//	{
//	//		location = i;
//	//		break;
//	//	}
//	//}
//	int arr_new[11] = {input};
//	for (int i = 1; i < 11; i++)
//	{
//		arr_new[i] = arr[i - 1];
//	}
//	Bubble_sort(arr_new,11);
//	for (int i = 0; i < 11; i++)
//		printf("%d ", arr_new[i]);
//	return 0;
//}
//int main()
//{
//	//��һ���������������
//	int arr[10] = { 54,32,64,85,95,14,54,24,63,78 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0])-1;
//	while (left < right)
//	{
//		arr[left] ^= arr[right];
//		arr[right] ^= arr[left];
//		arr[left] ^= arr[right];
//		left++;
//		right--;
//	}
//	for (int i = 0; i < 10; i++)
//			printf("%d ", arr[i]);
//	return 0;
//}
int main()
{
	return 0;
}