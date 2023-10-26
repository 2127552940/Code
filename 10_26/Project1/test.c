#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
int* test()
{
	int a=4;
	return &a;
}
int main()
{
	//模拟实现memmove功能：复制一段字符到另一段字符空间中
	//void *memmove( void *dest, const void *src, size_t count );
	return 0;
}
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