#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
//���Լ���,��������,���ö�ջ����,const��ʹ�÷�ʽ
#include <assert.h>
int main()
{
	/*int a = 1;
	if (*(char*)&a == 1)
	{
		printf("С�˴洢\n");
	}
	else
	{
		printf("��˴洢\n");
	}*/
	float a = 3.14;
	int b = a*100;
	float c = b / 100.0;
	printf("%d\n", b);
	printf("%.2f", c);
	return 0;
}
//void Adj(int* arr, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		//����ͷ��������ż��ʱͬʱ��β��������������ʱ������������������left>=rightʱ��������
//		if (arr[left] % 2 != 0)
//		{
//			left++;
//		}
//		if (arr[right] % 2 != 1)
//		{
//			right--;
//		}
//		if ((arr[left] % 2 == 0) && arr[right] % 2 == 1)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//int main()
//{
//	//ʵ��������ż��λ�û���
//	int arr[10] = { 0,2,1,5,6,7,8,10,9,14 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Adj(arr,sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//char* my_strcpy(char*dest,const char*src)
//{
//	assert(dest);
//	assert(src);
//	char* str = dest;
//	while (*dest++ = *src++)
//		;
//	return str;
//}
//int main()
//{
//	//ʵ��strcpy
//	//strcpy���ܷ�����
//	//��һ���ַ������Ƶ�����һ�����ַ���������,ͬʱ\0Ҳ�ᱻ���Ƶ�����һ���ַ�����
//	char arr1[] = "abcdef";
//	char arr2[100];
//	my_strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
//int main()
//{
//	char str[] = "abcdef";
//	printf("%3s\n", str);
//	return 0;
//}
//�����ܹ��Ͷ���ƿ��ˮ�ĺ���
//int Fun(int n)
//{
//	//��������Ҫ�����ı���1.ÿ��������ˮ��ƿ��2.����һ����ˮʣ��Ŀ�ƿ��3.�ܹ��ȵ���ˮ��
//	//���Ƶ���������ƿ��ʣ��0����1
//	int blt = n; //��ʼ���������ˮ��Ϊn
//	int nul = n; //��ʼʣ�����ˮƿ��Ϊn
//	int sum = blt; //��ʼ�ܹ��ȵ���ˮ��Ϊn
//	while (nul >= 2)  //����ƿ��Ϊ0��1ֹͣѭ��
//	{
//		blt = nul / 2; //���Զһ�����ˮ����ʣ��Ŀ�ƿ����2
//		nul = blt + nul % 2;  //ʣ��Ŀ�ƿ���Ƕһ�������ˮ��������û�б��һ��Ŀ�ƿ��
//		sum += blt;  
//	}
//	return sum;
//}
//int main()
//{
//	//����ˮ����
//	//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Ժȶ�����ˮ�����ʵ�֣���
//	int n;
//	scanf("%d", &n);
//	int sum=Fun(n);
//	printf("%d", sum);
//	return 0;
//}
//size_t my_strlen(const char* arr)
//{
//	assert(arr != NULL);
//	const char* str = arr;
//	while (*++arr)
//		;
//	return arr - str;
//}
//int main()
//{
//	char arr[] = "abc deght";
//	size_t len=my_strlen(arr);
//	printf("%zd\n", len);
//	return 0;
//}
//int main()
//{
//	//ʵ��strcpy
//	//const����*p������p,const��һ�ֱ���������
//	int m = 0;
//	int n = 0;
//	const int* p = &n; //*p���ܱ��ı���
//	int* const p = &m; //p���ܱ��ı���
//
//	return 0;
//}
//int main()
//{
//	/*int arr[10];
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 10 - i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}*/
//	int a = 0;
//	int b = 10;
//	int c = 0;
//	return 0;
//}
//int main()
//{
//	int n = 8;
//	//�ȴ�ӡ�ϰ벿��
//	for (int i = 1; i <= n; i++)
//	{
//		//�ȴ�ӡ�ո��ٴ�ӡ*��
//		for (int j = 0; j <= n-1-i; j++)
//		{
//			printf(" ");
//		}
//		for (int j = 1; j <= (2 * i - 1); j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//��ӡ�°벿��
//	for (int i = 1; i <= n - 1; i++)
//	{
//		//�ȴ�ӡ�ո��ٴ�ӡ*��
//		for (int j = 1; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (int j = 0; j <= 2*(n - 1 - i); j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//�ж��Ƿ�Ϊˮ�ɻ����ĺ���
//int Nod(int n)
//{
//	int count = 0;
//	int ret = n;
//	int sum = 0;
//	while (ret)//�ж�λ��
//	{
//		count++;
//		ret /= 10;
//	}
//	ret = n;
//	for (int i = 0; i < count; i++)
//	{
//		sum+=(int)pow(ret % 10, count);//ȡ��ÿһλ����������
//		ret /= 10;
//	}
//	if (sum == n)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//
//}
//int main()
//{
//	for (int i = 0; i <= 100000; i++)
//	{
//		if (Nod(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int n,m;
//	scanf("%d%d", &m,&n);//��������m����ǰn���
//	int sum = 0;
//	int ret = m;
//	for (int i = 1; i <= n; i++)
//	{
//		sum += m;
//		m += ret * pow(10, i);
//	}
//	printf("%d", sum);
//	return 0;
//}