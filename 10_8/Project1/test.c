#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
extern char* my_itoa(int num, char* str, int radix);
//#include <stdlib.h>
//int main()
//{
//	//ѧϰʹ�ð�λ��& ��
//    //int a, b;
//    //a = 077;//0��ͷ��һ���˽�������
//    //b = a & 3;
//    //printf("a & b(decimal) Ϊ %d \n", b);
//    //b &= 7;
//    //printf("a & b(decimal) Ϊ %d \n", b);
//	return 0;
//}
//int main()
//{
//	//ѧϰʹ�ð�λ��� ^��
//	/*int a, b;
//	a = 5;
//	b = 3;
//	a ^= b;
//	b ^= a;
//	a ^= b;*/
//	//a 000 111 111
//	//3 000 000 011 
//	//b 000 111 100  60
//	//7 000 000 111
//	//b'000 111 011  59
//	//ȫ1ÿ�ΰ�λ���һλ��ͬλ�õ�1�ͻ���һλ1
//	//d 1111 1111 1111 1111
// 	/*b = a ^ 3;
//	printf("b ��ֵΪ %d \n", b);
//	b ^= 7;
//	printf("b ��ֵΪ %d \n", b);*/
//	/*printf("%d %d", a, b);*/
//	return 0;
//}
//int main()
//{
//	//��λ�����������÷�
//	int a;
//	a = 0x01;
//	int i = 10;
//	int k = 0;
//	char s[11];
//	while (i)
//	{
//		
//		itoa(a, s, 2);
//		printf("��������ʾ:%s\n", s);
//		i--;
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0xff;
//	printf("�˽��� --> %o\n", a);
//	printf("ʮ������ --> %X\n", a);
//	printf("ʮ���� --> %d\n", a);
//	char s[16];
//	my_itoa(a, s, 2);
//	printf("������ --> %s\n", s);
//	my_itoa(a, s, 3);
//	printf("������ --> %s\n", s);
//	return 0;
//}
//int main()
//{
//	//ȡһ������ a ���Ҷ˿�ʼ�� 4��7 λ��
//	int a;
//	int n;
//	printf("���������ݺ�Ҫ��ȡ��λ��:>");
//	scanf("%d%d", &a, &n);
//	//int* str;
//	//char s[10];
//	//str = (int*)malloc(n*sizeof(int));
//	//int ret = a;
//	//for (int i = 0; i < n; i++)
//	//{
//	//	//�ȶ�a�����ƶ�Ȼ���ȡ�ƶ���ĵ�һλ
//	//	str[i] = ret & 1;
//	//	ret >>= 1;
//	//	my_itoa(a, s, 2);
//	//	printf("%s\n", s);
//	//	printf("�������%dλ����Ϊ%d\n", i, str[i]);
//	//}
//	int num = 0;
//	int ret = a;
//	for (int i = 0; i < n; i++)
//	{
//		num = ret & 1;
//		ret >>= 1;
//		printf("%d ", num);
//	}
//	return 0;
//}
//int main()
//{
//	//��ӡ����������Σ�Ҫ���ӡ��10�У���
//	int n;
//	scanf("%d", &n);
//	//��ӡ��ʽ
//	//******1******  5
//	//****1***1****  3 
//	//**1***2***1**  2
//	//1***3***3***1  1
//	//
//	//1:1,2:5,3:9,4:13��n:3*(n-1)+n=4*n-3, (4*n-3-4*i+3)/2=2*(n-i),
//	//��ӡ��������������
//	//���Խ�һ����̬��ά����
//	
//	int** arr = (int**)malloc(n * sizeof(int*));
//	for (int i = 0; i < n; i++)
//	{
//		arr[i] = (int*)calloc(n * sizeof(int),sizeof(int));
//		arr[i][0] = 1;
//	}
//	for (int i = 1; i < n; i++)
//	{
//		for (int j = 1; j < n; j++)
//		{
//			arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//		}
//	}
//	/*for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//
//			printf("%d", arr[i][j]);
//		}
//		printf("\n");
//	}*/
//	//1 0 0 0
//	//1 1 0 0
//	//1 2 1 0
//	//1 3 3 1   a[i][j]=a[]
////
//	for (int i = 0; i < n; i++)
//	{
//		//��ӡn��
//		for (int j = 0; j < 2*(n - i); j++)
//		{
//			printf(" ");
//		}
//		for (int j = 0; j <= i; j++)
//		{
//			if(arr[i][j]<10)
//			{
//				printf("%d", arr[i][j]);
//				printf("   ");
//			}
//			if (arr[i][j] >= 10&&arr[i][j]<100)
//			{
//				printf("%d", arr[i][j]);
//				printf("  ");
//			}
//			if (arr[i][j] >= 100)
//			{
//				printf("%d", arr[i][j]);
//				printf(" ");
//			}
//		}
//
//		//for (int j = 0; j < 4*i-3; j++)
//		//{
//		//	printf("%d", i);
//		//}
//		for (int j = 0; j < 2*(n - i); j++)
//		{
//			printf(" ");
//		}
//		printf("\n");//����
//	}
//	return 0;
//}
//void swap(int* p1, int* p2)
//{
//	int i = 0;
//	i = *p1;
//	*p1 = *p2;
//	*p2 = i;
//}
//int main()
//{
//	//����3����a,b,c������С˳�������
//	//����ָ�뷽����
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	int* p1 = &a;
//	int* p2 = &b;
//	int* p3 = &c;
//	if (a < b)
//	{
//		swap(p1, p2);
//	}
//	if (a < c)
//	{
//		swap(p1, p3);
//	}
//	if (b < c)
//	{
//		swap(p2, p3);
//	}
//	printf("%d %d %d", c, b, a);
//	return 0;
//}
//int main()
//{
//	//�������飬�������һ��Ԫ�ؽ�������С�������һ��Ԫ�ؽ�����������顣
//	int n = 0;
//	printf("������������Ԫ�صĸ���:>");
//	scanf("%d", &n);
//	int* arr = (int*)malloc(n * sizeof(int));
//	for (int i = 0; i < n; i++)
//	{
//		printf("�������%i��Ԫ��:", i+1);
//		scanf("%d", &arr[i]);
//	}
//	printf("ԭ����:\n");
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	/*int arr[10] = { 10,15,9,48,6,89,4,2,17,56 };*/
//	int max = arr[0], min = arr[0];
//	int maxp, minp;
//	for (int i = 0; i < n; i++)
//	{
//		if (arr[i] >= max)
//		{
//			max = arr[i];
//			maxp = i;
//		}
//		if (arr[i] <= min)
//		{
//			min = arr[i];
//			minp = i;
//		}
//	}
//	if (maxp != 0)
//	{
//		arr[0] ^= arr[maxp];
//		arr[maxp] ^= arr[0];
//		arr[0] ^= arr[maxp];
//	}
//	if (minp != n - 1)
//	{
//		arr[n - 1] ^= arr[minp];
//		arr[minp] ^= arr[n - 1];
//		arr[n - 1] ^= arr[minp];
//	}
//	printf("�����������:\n");
//	printf("��:%dС:%d\n", maxp, minp);
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//void offset_arr(int* arr, int offset ,int sz)
//{
//	//����һ����СΪƫ������С���������ڴ洢�����ļ�����
//	//ǰ�������β����ʼ���и���
//	int ret = sz;
//	int* arrmove = (int*)malloc(offset*sizeof(int));
//	for (int i = 0; i < offset; i++)
//	{
//		arrmove[i] = arr[sz - offset + i];
//	}
//	for (int i = 0; i < sz - offset; i++)
//	{
//		arr[i+offset] = arr[i];
//	}
//	for (int i = 0; i < offset; i++)
//	{
//		arr[i] = arrmove[i];
//	}
//}
//int main()
//{
//	//�� n ��������ʹ��ǰ�����˳������� m ��λ�ã����m���������ǰ��� m ������
//	//������������,�������Ԫ��
//	int n,offset;
//	printf("����������Ԫ�ظ���:>");
//	scanf("%d", &n);
//	int* arr = (int*)malloc(n * sizeof(int));
//	for (int i = 0; i < n; i++)
//	{
//		printf("��%d��Ԫ��:",i+1);
//		scanf("%d", &arr[i]);
//	}
//	printf("������ƫ����:>");
//	scanf("%d", &offset);
//	printf("\nԭ����:\n");
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	//��ʼƫ��
//	if (offset > n||offset<0)
//		printf("�޷�ƫ��");
//	else
//	{
//		offset_arr(arr, offset,n);
//		printf("\nƫ�ƺ������:\n");
//		for (int i = 0; i < n; i++)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//	//�����ƶ���С
//
//	return 0;
//}
int main()
{
	//��n����Χ��һȦ��˳���źš��ӵ�һ���˿�ʼ��������1��3��������������3�����˳�Ȧ�ӣ���������µ���ԭ���ڼ��ŵ���λ��
	int n;
	scanf("%d", &n);
	//��������1��3��������3��ȥ����һ�����˴�1��ʼ���±���
	//һ��������ȥn/3����ʣ�µļ���ÿ�μ�ȥ3�ı��ٵ��ˣ����ѵ����ڱ�����ʱ���ס���һ�������˵�λ��
	//1.�ȴ���һ����������װ��n����
	int* arr = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++)
	{
		arr[i] = i+1;
	}
	//��ʼѭ��ǹ��
	//0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 20
	int ret = n;
	int* p = arr;
	int k = 0;
	int i = 0;
	int m=0;
	while (m<n-1)//����Ҫ����һ��
	{
		//��ʼ����
		if (*(p+i) != 0)//���ָ��ָ����˲�Ϊ0��ʼ����
		{
			k++;
		}
		if (k == 3)//��k����ʱpָ������¸�ֵΪ0
		{
			k = 0;
			*(p+i) = 0;
			m++;
		}
		i++;
		if (i==n)//��pָ�����һ��Ԫ��ʱ��pָ���λ��ָ��ͷ
		{
			i=0;
		}
	}
	for (int i = 0; i <n; i++)
	{
		if (arr[i] != 0)
			printf("\n���ʣ�µ�����%d��", arr[i]);
	}
	return 0;
}
////��ӡ����
//void print_arr(int array[], int n)
//{
//    int i;
//    for (i = 0; i < n; ++i)
//        printf("%4d", array[i]);
//    printf("\n");
//}
////��������
//void move(int array[], int n, int offset)
//{
//    int* p, * arr_end;
//    arr_end = array + n;      //�������һ��Ԫ�ص���һ��λ��
//    int last;
//
//    //����ֱ��ƫ����Ϊ0
//    while (offset)
//    {
//        last = *(arr_end - 1);
//        for (p = arr_end - 1; p != array; --p)   //���ҹ���һλ
//            *p = *(p - 1);
//        *array = last;
//        --offset;
//    }
//}
//int main()
//{
//    int arr[20];
//    int i, n, offset;
//    //���������С����������
//    printf("Total numbers?\n");
//    scanf("%d", &n);
//    printf("Input %d numbers.\n", n);
//    for (i = 0; i < n; i++)
//        scanf("%d", &arr[i]);
//    //�������ƫ����
//    printf("Set your offset.\n");
//    scanf("%d", &offset);
//    printf("Offset is %d.\n", offset);
//    //��ӡ����ǰ����
//    print_arr(arr, n);
//    //�������鲢��ӡ
//    move(arr, n, offset);
//    print_arr(arr, n);
//}