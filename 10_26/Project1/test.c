#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <math.h>
//char* my_strncpy(char* dest, const char* src, size_t n)
//{
//	//�������Զ����\0
//	assert(dest && src);
//	char* dt = dest;
//	for (size_t i = 0; i < n; i++)
//	{
//		*dt++ = *src++;
//	}
//	return dest;
//}
//int main()
//{
//	//ģ��ʵ��strncpy ���ܣ�C �⺯�� char *strncpy(char *dest, const char *src, size_t n) �� src ��ָ����ַ������Ƶ� dest����ิ�� n ���ַ����� src �ĳ���С�� n ʱ��dest ��ʣ�ಿ�ֽ��ÿ��ֽ���䡣
//	//char *strncpy(char *dest, const char *src, size_t n)
//	char str1[20] = "abcdef";
//	char str3[20];
//	char str2[] = "efgh";
//	//printf("%s\n", strncpy(str1, str2, 3));
//	//printf("%s\n", strncpy(str3, str2, 3));
//	printf("%s\n", my_strncpy(str1, str2, 5));
//	printf("%s\n", my_strncpy(str3, str2, 5));
//
//	return 0;
//}
//char* my_strncat(char* dest, const char* src, size_t n)
//{
//	assert(dest && src);
//	int len = strlen(dest);
//	char* dt = dest + len;
//	for (size_t i = 0; i < n; i++)
//	{
//		*dt++ = *src++;
//	}
//	*(dt + 1) = '\0';//�����Է�������Ҫ�����\0��
//	return dest;
//}
//int main()
//{
//	//ʵ��strncat���� ���ܣ�C �⺯�� char *strncat(char *dest, const char *src, size_t n) �� src ��ָ����ַ���׷�ӵ� dest ��ָ����ַ����Ľ�β��ֱ�� n �ַ�����Ϊֹ��
//	//char *strncat(char *dest, const char *src, size_t n)
//	char str1[12] = "abcdefg";
//	char str2[] = "mlnkf";
//	//printf("%s\n", strncat(str1, str2, 4));
//	printf("%s\n", my_strncat(str1, str2, 4));
//
//	return 0;
//}
//int my_atoi(const char* str)
//{
//	//���������ַ������׸��ַ���ʼ�ж��Ƿ�Ϊ�����ַ�������ǾͰ������ַ�ת�������ֲ��洢�������Ե������������ַ�ֹͣ
//	assert(str);
//	int ret = 0;
//	int sum = 0;
//	int i = 0;
//	while (*str>='0'&&*str<='9')
//	{
//		ret = ((*str) - '0');
//		sum *= 10;
//		sum += ret;
//		str++;
//		i++;
//	}
//	return sum;
//}
//int main()
//{
//	//ʵ��atoi����,���ܣ�C �⺯�� int atoi(const char *str) �Ѳ��� str ��ָ����ַ���ת��Ϊһ������������Ϊ int �ͣ�
//	//int atoi(const char *str)
//	char arr1[] = "12045b";
//	int a = 0;
//	int b=0;
//	a = atoi(arr1);
//	b = my_atoi(arr1);
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}
//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	char* dt = (char*)dest;
//	char* sc = (char*)src;
//	for (size_t i = 0; i < num; i++)
//	{
//		*dt = *sc;
//		dt++;
//		sc++;
//	}
//	return dest;
//}
//int main()
//{
//	//ʵ��memcpy���ܣ�����һ���ַ���������һ���ռ���,�������Զ����\0
//	//void *memcpy(void *str1, const void *str2, size_t n)
//	char arr1[] = "abcdefgh";
//	char arr2[20];
//	memcpy(arr2, arr1, 4);
//	printf("%.*s\n",4, arr2);
//	my_memcpy(arr2, arr1, 5);
//	printf("%.*s\n", 5, arr2);
//	int arr[] = { 1,2,3,4,5,6 };
//	int arr3[20] = {0};
//	memcpy(arr3, arr, 20);
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", arr3[i]);
//	}
//	return 0;
//}
//int* test()
//{
//	int a=4;
//	return &a;
//}
//void* my_memmove(void* dest,const void* src, size_t num)
//{
//	char* dt = (char*)dest;
//	char* sc = (char*)src;
//	if (dest < src)
//	{
//		//��ǰ����ƶ�
//		for (size_t i = 0; i < num; i++)
//		{
//			*dt = *sc;
//			dt++;
//			sc++;
//		}
//	}
//	else
//	{
//		//�Ӻ���ǰ�ƶ�
//		for (int i = num-1; i >= 0; i--)
//		{
//			*(dt + i) = *(sc + i);
//		}
//	}
//	return dest;
//}
//int main()
//{
//	//ģ��ʵ��memmove���ܣ�����һ���ַ�����һ���ַ��ռ���
//	//void *memmove( void *dest, const void *src, size_t count );
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[] = { 1,2,3,4,5,6,7,8,9,10 };
//	char arr[] = "abcdef";
//	char arr3[20];
//	my_memmove(arr3, arr, 3);
//	printf("%s\n", arr3);
//	//memmove(arr1, arr1+2, 20);
//	my_memmove(arr1, arr1 + 2, 20);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	my_memmove(arr2+2, arr2, 20);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}
//int main()
//{
//    union
//    {
//        short k;
//        char i[2];
//    }*s, a;
//    s = &a;
//    s->i[0] = 0x39;
//    s->i[1] = 0x38;
//    printf("%x\n", a.k);
//    return 0;
//}
//size_t my_strlen1(const char* str)
//{
//	size_t count = 0;
//	while (*str++)
//	{
//		count++;
//	}
//	return count;
//}
//size_t my_strlen2(const char* str)
//{
//	if (*str)
//	{
//		return my_strlen2(str + 1) + 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//size_t my_strlen3(const char* str)
//{
//	const char* fst = str;
//	while (*str++);
//	return str-fst-1;
//}
//int main()
//{
//	//ģ��ʵ��strlen���ܣ����ַ�������
//	//size_t strlen(const char *str)
//	char str[] = "abcdef";
//	printf("%zd\n", strlen(str));
//	printf("%zd\n", my_strlen1(str));
//	printf("%zd\n", my_strlen2(str));
//	printf("%zd\n", my_strlen3(str));
//	return 0;
//}
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(src&&dest);
//	char* fst = dest;
//	while (*dest++ = *src++);
//	return fst;
//}
//int main()
//{
//	ʵ��strcpy���ܣ���һ���ַ������Ƶ�����һ���ַ�����
//	char *strcpy(char *dest, const char *src)
//	char str1[] = "abcdefgh";
//	char str2[20];
//	printf("%s\n", strcpy(str2, str1));
//	printf("%s\n", my_strcpy(str2, str1));
//	printf("%s\n", str2);
//	return 0;
//}
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2&&*str2&&*str1)
//	{
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//	{
//		return 1;
//	}
//	else if (*str1 < *str2)
//	{
//		return -1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	ʵ��strcmp�������ܣ��Ƚ������ַ����Ƿ���ͬ
//	int strcmp( const char *string1, const char *string2 );
//	char str1[] = "abcdef";
//	char str2[] = "abcdeg";
//	char str3[] = "abcdef";
//	char str4[] = "abcdec";
//
//	printf("%d\n", strcmp(str1, str2));
//	printf("%d\n", strcmp(str1, str3));
//	printf("%d\n", strcmp(str1, str4));
//	printf("%d\n", my_strcmp(str1, str2));
//	printf("%d\n", my_strcmp(str1, str3));
//	printf("%d\n", my_strcmp(str1, str4));
//	return 0;
//}
//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* fst = dest;
//	int len=strlen(dest);
//	char* end = dest + len;
//	while (*end++ = *src++);
//	return fst;
//}
//int main()
//{
//	//ģ��ʵ��strcat���ܣ�����һ���ַ�����׷��һ���ַ�������\0��β
//	//char *strcat( char *strDestination, const char *strSource );
//	char str1[20] = "abcd\0xxxxxxxxxxxx";
//	char str2[] = "efgh";
//	//printf("%s\n", strcat(str1, str2));
//	printf("%s\n", my_strcat(str1, str2));
//	return 0;
//}
//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	const char* st1 = str1;
//	const char* st2 = str2;//���������ַ�ָ��ָ���������ַ����׵�ַ���ڱ���
//	if (*str2 == '\0')
//	{
//		return (char*)str1;
//	}
//	while(*str1)
//	{
//		while (*st2 && *st1 && *st1 == *st2)//��st1��st2ָ��Ķ�����'\0'��ǰ���������ж��Ƿ����
//		{
//			st1++;
//			st2++;
//		}
//		if (*st2 == '\0')
//		{
//			return (char*)str1;
//		}
//		str1++;
//		st2 = str2;
//		st1 = str1;
//	}
//	return NULL;
//}
//int main()
//{
//	//ʵ��strstr�⺯��:����ʵ����һ���ַ������ҵ����ַ���,�����ص�һ�γ���ʱ��λ��
//	//char *strstr( const char *string, const char *strCharSet );
//	char str1[] = "abcdefghefgh";
//	char str2[] = "efg";
//	printf("%s\n", strstr(str1, str2));
//	printf("%s\n",my_strstr(str1, str2));
//	return 0;
//}