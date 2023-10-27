#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <math.h>
//char* my_strncpy(char* dest, const char* src, size_t n)
//{
//	//并不会自动添加\0
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
//	//模拟实现strncpy 功能：C 库函数 char *strncpy(char *dest, const char *src, size_t n) 把 src 所指向的字符串复制到 dest，最多复制 n 个字符。当 src 的长度小于 n 时，dest 的剩余部分将用空字节填充。
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
//	*(dt + 1) = '\0';//最后调试发现是需要另外加\0的
//	return dest;
//}
//int main()
//{
//	//实现strncat函数 功能：C 库函数 char *strncat(char *dest, const char *src, size_t n) 把 src 所指向的字符串追加到 dest 所指向的字符串的结尾，直到 n 字符长度为止。
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
//	//方法：从字符串的首个字符开始判断是否为数字字符，如果是就把数字字符转换成数字并存储起来，自到遇到非数字字符停止
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
//	//实现atoi函数,功能：C 库函数 int atoi(const char *str) 把参数 str 所指向的字符串转换为一个整数（类型为 int 型）
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
//	//实现memcpy功能：复制一段字符串到另外一个空间中,并不会自动添加\0
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
//		//从前向后移动
//		for (size_t i = 0; i < num; i++)
//		{
//			*dt = *sc;
//			dt++;
//			sc++;
//		}
//	}
//	else
//	{
//		//从后向前移动
//		for (int i = num-1; i >= 0; i--)
//		{
//			*(dt + i) = *(sc + i);
//		}
//	}
//	return dest;
//}
//int main()
//{
//	//模拟实现memmove功能：复制一段字符到另一段字符空间中
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
//	//模拟实现strlen功能：求字符串长度
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
//	实现strcpy功能：将一个字符串复制到另外一个字符串上
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
//	实现strcmp函数功能：比较两个字符串是否相同
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
//	//模拟实现strcat功能：在另一个字符串后追加一个字符串并以\0结尾
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
//	const char* st2 = str2;//创建两个字符指针指向这两个字符串首地址用于遍历
//	if (*str2 == '\0')
//	{
//		return (char*)str1;
//	}
//	while(*str1)
//	{
//		while (*st2 && *st1 && *st1 == *st2)//在st1和st2指向的都不是'\0'的前提条件下判断是否相等
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
//	//实现strstr库函数:功能实现在一个字符串中找到子字符串,并返回第一次出现时的位置
//	//char *strstr( const char *string, const char *strCharSet );
//	char str1[] = "abcdefghefgh";
//	char str2[] = "efg";
//	printf("%s\n", strstr(str1, str2));
//	printf("%s\n",my_strstr(str1, str2));
//	return 0;
//}