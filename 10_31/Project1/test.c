#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
char* strtok(char* str, const char* delim)
{

}
int main()
{

	return 0;
}
//char* my_strstr(const char* str1, const char* str2)   //暴力求解法，也可以用KMP算法，但还没搞懂
//{
//	assert(str1 && str2);
//	char* st1 = str1;
//	char* st2 = str2;
//	char* se = str1; //建立一个哨兵
//	while (*se)
//	{
//		while (*st1 == *st2)
//		{
//			st1++;
//			st2++;
//		}
//		if (*st2 == '\0')
//		{
//			return se;
//		}
//		else
//		{
//			st2 = str2;
//			se++;
//			st1 = se;
//		}
//	}
//}
//int main()
//{
//	char str1[] = "abcdabcd";
//	char str3[] = "abcdef";
//	char str2[] = "dab";
//	char*ret1=strstr(str1, str2);
//	char* ret2 = strstr(str1, str3);
//	printf("%s\n", ret1);
//	printf("%s\n", ret2);
//	char* ret3 = my_strstr(str1, str2);
//	char*ret4=my_strstr(str1, str3);
//	printf("%s\n", ret3);
//	printf("%s\n", ret4);
//	return 0;
//}
//int my_strncmp(const char* str1, const char* str2, size_t n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		if (*str1 == *str2)
//		{
//			str1++;
//			str2++;
//		}
//		else
//		{
//			if (*str1 > *str2)
//			{
//				return 1;
//			}
//			else if (*str1 < *str2)
//			{
//				return -1;
//			}
//		}
//	}
//	return 0;
//}
//int main()
//{
//	char str1[] = "abddef";
//	char str2[] = "abcdfe";
//	char str3[] = "abbcef";
//	char str[] = "abcdef";
//	printf("%d\n", strncmp(str1, str,4));
//	printf("%d\n", strncmp(str2, str,4));
//	printf("%d\n", strncmp(str3, str,6));
//	printf("%d\n", my_strncmp(str1, str,4));
//	printf("%d\n", my_strncmp(str2, str,4));
//	printf("%d\n", my_strncmp(str3, str,6));
//	return 0;
//}
//char* my_strncat(char* dest, const char* src, size_t n)
//{
//	assert(dest && src);
//	char* dt = dest + strlen(dest);
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		*(dt + i) = *src++;
//	}
//	*(dt + i) = '\0';
//	return dest;
//}
//int main()
//{
//	char dest1[20] = "abcdef";
//	char dest2[20] = "abcdef";
//	char src[] = "hijk";
//	strncat(dest1, src, 3);
//	my_strncat(dest2, src, 3);
//	printf("%s\n", dest1);
//	printf("%s\n", dest2);
//	return 0;
//}
//char* my_strncpy(char* dest, const char* src, size_t n)
//{
//	assert(dest && src);
//	char* dt = dest;
//	for (int i = 0; i < n; i++)
//	{
//		if (*src != '\0')
//		{
//			*dt++ = *src++;
//		}
//		else
//		{
//			*dt++ = '\0';
//		}
//	}
//	return dest;
//}
//int main()
//{
//	char dest1[20] = "abcdef";
//	char dest2[20] = "abcdef";
//	char src[] = "hijk";
//	strncpy(dest1, src, 8);
//	my_strncpy(dest2, src, 8);
//	printf("%s\n", dest1);
//	printf("%s\n", dest2);
//	return 0;
//}
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1)
//	{
//		if (*str1 == *str2)
//		{
//			str1++;
//			str2++;
//		}
//		else
//		{
//			if (*str1 > *str2)
//			{
//				return 1;
//			}
//			else if (*str1 < *str2)
//			{
//				return -1;
//			}
//		}
//	}
//	return 0;
//}
//int main()
//{
	/*char str1[] = "abcdef";
	char str2[] = "abcdfe";
	char str3[] = "abbcef";
	char str[] = "abcdef";
	printf("%d\n", strcmp(str1, str));
	printf("%d\n", strcmp(str2, str));
	printf("%d\n", strcmp(str3, str));
	printf("%d\n", my_strcmp(str1, str));
	printf("%d\n", my_strcmp(str2, str));
	printf("%d\n", my_strcmp(str3, str));*/
//	return 0;
//}
//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* dt = strlen(dest) + dest;
//	while (*dt++ = *src++);
//	return dest;
//}
//
//int main()
//{
//	char dest1[20] = "abcdef";
//	char dest2[20] = "abcdef";
//	char src[] = "hijk";
//	my_strcat(dest1, src);
//	strcat(dest2, src);
//	printf("%s\n", dest1);
//	printf("%s\n", dest2);
//	return 0;
//}
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* dt = dest;
//	while (*dt++ = *src++);
//	return dest;
//}
//int main()
//{
//	char dest1[20];
//	char dest2[20];
//	char src[] = "abcdef";
//	strcpy(dest1, src);
//	my_strcpy(dest2, src);
//	printf("%s\n", dest1);
//	printf("%s\n", dest2);
//	return 0;
//}
//size_t my_strlen1(const char* str)   //计数器实现求字符串长度
//{
//	assert(str);
//	size_t count = 0;
//	while (*str++)
//	{
//		count++;
//	}
//	return count;
//}
//
//size_t my_strlen2(const char* str)   //递归实现求字符串长度
//{
//	assert(str);
//	if (*str == 0)
//		return 0;
//	else
//		return 1+my_strlen2(str + 1);
//}
//
//size_t my_strlen3(const char* str)   //指针减指针实现求字符串长度
//{
//	assert(str);
//	const char* st = str;
//	while (*++st);
//	return st - str;
//}
//int main()
//{
//	char str[] = "abcdef";
//	size_t len1 = my_strlen1(str);
//	size_t len2 = strlen(str);
//	size_t len3 = my_strlen2(str);
//	size_t len4 = my_strlen3(str);
//	printf("%zd %zd %zd %zd", len1, len2, len3, len4);
//	return 0;
//}

//int main()
//{
//	float v=10.0f;
//	//写成二进制:1010.0,相当于1.01*2^3
//	//按照上面的格式可以得出S=0，M=1.01，E=3。
//	//S：0  E：  127+3=130   1000 0010  M：0100 0000 0000 0000 0000 000
//	//10:  0100 0001 0010 0000 0000 0000 0000 0000
//	//     41 20 00 00 
//	return 0;
//}
//int main()
//{
//	char a = -128;
//	printf("%u\n", a);
//	//1111 1111 1111 1111 1111 1111 1000 0000
//	//11111111111111111111111110000000
//	return 0;
//}
//int main()
//{
//	//整型家族
//	//char:unsigned char,signed char
//	//short:unsigned short,signed short
//	//int:unsigned int,signed int
//	//long:unsigned long,signed long
//	//浮点数家族
//	//float,double
//	int a = 20;
//	//0000 0000 0000 0000 0000 0000 0001 0100  //原码
//	//0000 0000 0000 0000 0000 0000 0001 0100  //反码
//	//0000 0000 0000 0000 0000 0000 0001 0100  //补码
//	//00 00 00 14
//	int b = -10;
//	//1000 0000 0000 0000 0000 0000 0000 1010  //原码
//	//1111 1111 1111 1111 1111 1111 1111 0101  //反码
//	//1111 1111 1111 1111 1111 1111 1111 0110  //补码
//	//ff ff ff f6
//	return 0;
//}