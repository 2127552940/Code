#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
extern char* my_itoa(int num, char* str, int radix);
//int main()
//{
//	//дһ����������һ���ַ����ĳ��ȣ��� main �����������ַ�����������䳤�ȡ�
//	//ָ��������ַ�������
//	char str[50] = { 0 };
//	scanf("%s", str);
//	char* p = str;
//	while (*p)
//	{
//		p++;
//	}
//	printf("%d", p-str);
//	return 0;
//}
//int main()
//{
//	//������ʱ�������ַ�������
//	int count = 0;
//	char str[50] = { 0 };
//	scanf("%s", str);
//	while (str[count])
//	{
//		count++;
//	}
//	printf("%d", count);
//	return 0;
//}
//int my_strlen(char* str)
//{
//	if (*str)
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//		return 0;
//}
//int main()
//{
//	//ʹ�õݹ�����ַ������ȣ���������ʱ������
//	char str[50] = { 0 };
//	scanf("%s", str);
//	int ret=my_strlen(str);
//	printf("%d", ret);
//	return 0;
//}
//typedef struct {
//    char name[20];
//    char sex[5];
//    int  age;
//}Stu;
//void input(Stu* stu)
//{
//    int i;
//    for (i = 0; i < 5; i++)
//        scanf("%s%s%d", stu[i].name, stu[i].sex, &(stu[i].age));
//}
//void output(Stu* stu)
//{
//    int i;
//    for (i = 0; i < 5; i++)
//        printf("%s %s %d\n", stu[i].name, stu[i].sex, stu[i].age);
//}
//int main()
//{
//	//��дinput()��output()�������룬���5��ѧ�������ݼ�¼��
//    Stu stu[5];
//    printf("������5��ѧ������Ϣ������ �Ա� ����:\n");
//    input(stu);
//    printf("5��ѧ������Ϣ���£�\n����  �Ա�  ����\n");
//    output(stu);
//    system("pause");
//	return 0;
//}
//����һ���ṹ�����ڴ��������
//typedef struct Student //����һ��ѧ�����͵Ľṹ�����ڴ��ѧ�����͵ı���
//{
//	char name[20];
//	char stu_num[20];
//	char addr[20];
//	int age;
//}Student;
////����һ������������ָ����Ľṹ��ָ��
//typedef struct Link_list {
//	Student data;//���ѧ����������
//	struct Link_list* next;//ָ�������͵�ָ��
//}Linklist,*Lnode;//��������ΪLinklist��������һ����ΪLnode��ָ�����
//void Linklist_Init()//��������г�ʼ��
//{
//
//}
//int main()
//{
//	//����һ������
//	
//	return 0;
//}
//̫�˷�ʱ��Ϳռ���
//int Fib(int n)
//{
//	if (n == 1||n==2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//����һ�ַ���
//int Fib(int n)
//{
//	int sum = 0;
//	int a = 1, b = 1;
//	for (int i = 2; i < n; i++)
//	{
//		sum = a + b;
//		a = b;
//		b = sum;
//	}
//	if (n > 2)
//		return sum;
//	else
//		return 1;
//}
//int main()
//{
//	//�ŵ����⣨�������̣�����һ�����ӣ��ӳ������3������ÿ���¶���һ�����ӣ�С���ӳ����������º�ÿ��������һ�����ӣ��������Ӷ���������ÿ���µ���������Ϊ���٣������ǰ40���¼��ɣ�
//	//0 0 1 1 2 3 5  8  13
//	//1 1 2 3 5 8 13 21 34
//	//쳲���������
//	//Ҫ���n���µ����Ӿ�ֱ���õݹ���쳲��������о���
//	for (int i = 1; i <= 40; i++)
//	{
//		int sum = Fib(i);
//		printf("%d ", sum);
//		if (i % 10 == 0)
//			printf("\n");
//	}
//	return 0;
//}

//int Reverse(int num)
//{
//
//}
//int main()
//{
//	//����һ�������������䷴ת�������
//	//��һ��������ת����:����12345���54321
//	//12
//	//0000 1010
//	//21
//	//0001 0101
//	//97
//	//0110 0001
//	//79
//	//0100 1111
//	int n;
//	printf("������һ������:>");
//	scanf("%d", &n);
//	int ret = n;
//	int count = 0;
//	while (ret)
//	{
//		ret /= 10;
//		count++;
//	}
//	char* str = (char*)malloc((count+1) * sizeof(char));
//	my_itoa(n, str, 10);
//	int len = strlen(str);
//	int left = 0;
//	int right = len - 1;
//	while (left < right)
//	{
//		char tmp;
//		if (str[left]=='-')
//		{
//			left++;
//			tmp = str[left];
//			str[left] = str[right];
//			str[right] = tmp;
//			left++;
//			right--;
//		}
//		else
//		{
//			tmp = str[left];
//			str[left] = str[right];
//			str[right] = tmp;
//			left++;
//			right--;
//		}
//	}
//	int num = atoi(str);
//	printf("%d", num);
//	return 0;
//}
//int main()
//{
//	char str[] = "-123456";
//	int ret=atoi(str);//ת���ַ���Ϊ����
//	char str2[20];
//	my_itoa(ret,str2,10);//ת������Ϊ�ַ���
//	printf("%d", ret);
//	printf("%s", str2);
//	return 0;
//}
int main()
{
	int n, reversedNumber = 0, remainder;

	printf("����һ������: ");
	scanf("%d", &n);

	while (n != 0)
	{
		remainder = n % 10;
		reversedNumber = reversedNumber * 10 + remainder;
		n /= 10;
	}

	printf("��ת�������: %d", reversedNumber);

	return 0;
}