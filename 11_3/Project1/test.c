#define _CRT_SECURE_NO_WARNINGS 1
#include "SqList.h"
int main()
{
	SL sl;
	SqListInit(&sl);
	for (int i = 10; i < 16; i++)
	{
		SqListpushback(&sl, i);
	}
	SqListShow(&sl);
	for (int i = 0; i < 6; i++)
	{
		SLPushFront(&sl,i);
		SqListShow(&sl);
	}
	for (int i = 0; i < 6; i++)
	{
		SLPopBack(&sl);
		SqListShow(&sl);
	}
	for (int i = 0; i < 6; i++)
	{
		SLPopFront(&sl);
		SqListShow(&sl);
	}
	for (int i = 0; i < 6; i++)
	{
		SLInsert(&sl, i, i);
		SqListShow(&sl);
	}
	SqListShow(&sl);
	return 0;
}

//轮转数组
//void reversal(int* nums, int left, int right)
//{
//    while (left < right)
//    {
//        int tmp = nums[left];
//        nums[left] = nums[right];
//        nums[right] = tmp;
//        right--;
//        left++;
//    }
//}
//void rotate(int* nums, int numsSize, int k) {
//    k = k % numsSize;
//    k = numsSize - k;
//    reversal(nums, 0, k - 1);
//    reversal(nums, k, numsSize - 1);
//    reversal(nums, 0, numsSize - 1);
//}
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7 };
//    rotate(arr, 7, 4);
//    for (int i = 0; i < 7; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//}
//void reversal(char* str)
//{
//	int len = strlen(str);
//	for (int i = 0; i < len-1; i++)
//	{
//		char tmp = str[i];
//		str[i] = str[i + 1];
//		str[i + 1] = tmp;
//	}
//}
//int main()
//{
//	//实现一个函数，可以左旋字符串中的k个字符。
//	//ABCD左旋一个字符得到BCDA
//	//ABCD左旋两个字符得到CDAB
//	char str[] = "abcdefghijklmn";
//	int k = 0;
//	scanf("%d", &k);
//	//单次旋转法
//	for (int i = 0; i < k; i++)
//	{
//		reversal(str);
//	}
//	printf("%s\n", str);
//	return 0;
//}
//void reversal(char* str, int k)
//{
//	int len = strlen(str);
//	k = k % len;
//	char* tmp = (char*)malloc(len);
//	memcpy(tmp+len-k, str, k);
//	memcpy(tmp, str + k, len - k);
//	memcpy(str, tmp, len);
//}
//int main()
//{
//	//实现一个函数，可以左旋字符串中的k个字符。
//	//ABCD左旋一个字符得到BCDA
//	//ABCD左旋两个字符得到CDAB
//	char str[] = "abcdef";
//	int k = 0;
//	scanf("%d", &k);
//	//空间换时间法
//	reversal(str,k);
//	printf("%s\n", str);
//	return 0;
//}
//void reversal(char* str, int k)
//{
//	int len = strlen(str);
//	//abcdef   假设k为2
//	//abcdef -> cbadef -> cdabef -> cdebaf -> adefab 要交换len-k次
//	//abcdef  假设k为4
//	//abcdef -> abcfed -> abefcd -> afebcd -> efabcd 要交换k次
//	if (k <= len / 2)
//	{
//		for (int i = k; i < len; i++)
//		{
//			char tmp = str[i];
//			str[i] = str[i - k];
//			str[i - k] = tmp;
//		}
//	}
//	else
//	{
//		for (int i = 0; i < k; i++)
//		{
//			char tmp = str[k - i - 1];
//			str[k - i - 1] = str[len - 1 - i];
//			str[len - 1 - i] = tmp;
//		}
//	}
//}
//void reversal(char*str,int left,int right)
//{
//	while (left < right)
//	{
//		char tmp = str[left];
//		str[left] = str[right];
//		str[right] = tmp;
//		right--;
//		left++;
//	}
//}
//int main()
//{
//	//实现一个函数，可以左旋字符串中的k个字符。
//	//ABCD左旋一个字符得到BCDA
//	//ABCD左旋两个字符得到CDAB
//	char str[] = "abcdefghijklmn";
//	int k = 0;
//	scanf("%d", &k);
//	int len = strlen(str);
//	//三次反转法
//	reversal(str, 0,k-1);
//	reversal(str, k, len - 1);
//	reversal(str, 0, len - 1);
//	printf("%s\n", str);
//	return 0;
//}
//int* sockCollocation(int* sockets, int socketsSize, int* returnSize) {
//    int dog1 = 0;
//    int dog2 = 0;
//    int i;
//    int ret;
//    for (i = 0; i < socketsSize; i++)
//    {
//        dog1 ^= sockets[i];
//    }
//    for (i = 0; i < 32; i++)
//    {
//        if (((dog1 >> i) & 1) == 1)
//        {
//            ret = i;
//            break;
//        }
//    }
//    for (i = 0; i < socketsSize; i++)
//    {
//        if (((sockets[i] >> ret) & 1) == 1)
//        {
//            dog2 ^= sockets[i];
//        }
//    }
//    dog1 = dog1 ^ dog2;
//    returnSize[0] = dog1;
//    returnSize[1] = dog2;
//    return returnSize;
//}
//int main()
//{
//    int sockets[8] = { 1,2,4,1,4,3,12,3 };
//    int* b[2];
//
//    sockCollocation(sockets, 8, b);
//    for (int i = 0; i < 2; i++)
//    {
//        printf("%d ", b[i]);
//    }
//	return 0;
//}
//