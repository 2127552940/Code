#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
//extern int ADD(int x, int y);
//Ԥ����ָ��,
//int main()
//{
//	printf("%s\n", __FILE__);
//	printf("%d\n", __LINE__);
//	printf("%s\n", __DATE__);
//	printf("%s\n", __TIME__);
//	/*int a = 10, b = 20;
//	int arr[10] = { 0 };
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	int c=ADD(a, b);
//	printf("\n%d", c);*/
//	return 0;
//}
//#������
//##������
//��������ָ��
//#define PRINT(X) printf("the value of "#X" is %d\n",X)
//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//struct S
//{
//	char c1;
//	int a;
//	char c2;
//};
//#define OFFSETOF(struct_name,struct_member) (int)&(((struct_name*)0)->struct_member)
//int main()
//{
//	struct S s;
//	printf("%d\n", &s);
//	printf("%d\n", OFFSETOF(struct S, c1));
//	printf("%d\n", OFFSETOF(struct S, a));
//	printf("%d\n", OFFSETOF(struct S, c2));
//
//	return 0;
//}
//�ҳ�����
//#define NUM 10
//int cmp_num(const void* p1, const void* p2)
//{
//	return *(int*)p1 - *(int*)p2;
//}
//int main()
//{
//	//1.����һ������
//	int arr[30] = { 0 };
//	for (int i = 0; i < NUM; i++)
//	{
//		int ret = 0;
//		arr[i] = getchar(ret) - '0';
//	}
//	/*for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");*/
//	//2.�������������,������qsort��������
//	qsort(arr, NUM, sizeof(arr[0]), cmp_num);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//3.��������λ�������Ϊ0��ָ������λ��Ϊ1�������ָ����һλ
//	printf("������:");
//	int j = 0;
//	while(j<sz)
//	{
//		if ((arr[j] ^ arr[j + 1]) == 0)
//		{
//			j += 2;
//		}
//		else
//		{
//			printf("%d ", arr[j]);
//			j++;
//		}
//	}
//	/*for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}*/
//	return 0;
//}
//ʵ��һ���ַ����Ƚϵĺ���my_strcmp
//������ȷ���0�����ڷ���һ������0������С�ڷ���һ��С��0����
//int my_strlen(const char* arr)
//{
//	assert(arr);
//	int i = 0;
//	while (arr[i])
//	{
//		i++;
//	}
//	return i;
//}
//int my_strcmp(const char* p1, const char* p2)
//{
//	int len1 = my_strlen(p1);
//	int len2 = my_strlen(p2);
//	if (len1 == len2)
//	{
//		for (int i = 0; i < len1; i++)
//		{
//			if (p1[i] != p2[i])
//			{
//				return (int)(p1[i] - p2[i]);
//			}
//		}
//		return 0;
//	}
//	else
//	{
//		for (int i = 0; i <=len1; i++)
//		{
//			if (p1[i] != p2[i])
//			{
//				return (int)(p1[i] - p2[i]);
//			}
//		}
//	}
//}
//int main()
//{
//	char arr1[] = "skdwu";
//	char arr2[] = "skdw";
//	int ret = my_strcmp(arr1, arr2);
//	if (ret == 0)
//	{
//		printf("arr1��arr2���");
//	}
//	else if (ret > 0)
//	{
//		printf("arr1����arr2");
//	}
//	else
//		printf("arr1С��arr2");
//	return 0;
//}
int main()
{
	char arr[] = "abcdef";
	printf("%c", arr[7]);
	return 0;
}