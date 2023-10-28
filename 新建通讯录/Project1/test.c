#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"
//初级通讯录版本可以存储1000个人的信息，每个人的信息包括：姓名、性别、年龄、电话、住址
//提供的方法有1.添加联系人信息2.删除指定联系人信息3.查找指定联系人信息4.修改指定联系人信息
//5.显示所有联系人信息6.清空所有联系人信息7.以名字排序所有联系人

void menu()
{
	printf("     1.ADD      2.DEL     \n");
	printf("     3.SEARCH   4.MODIFY  \n");
	printf("     5.SHOW     6.DESTROY \n");
	printf("     7.SORT     0.EXIT    \n");
}
void test()
{
	//创建一个结构体数组里面存放1000个元素
	Contact con;
	InitContact(&con);
	int input;
	do
	{
		menu();
		printf("请选择操作:>");
		scanf("%d", &input);
		switch (input)
		{
		case EXIT:
			printf("退出\n");
			break;
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case DESTROY:
			DestroyContact(&con);
			break;
		case SORT:
			SortContact(&con);
			break;
		default:
			printf("错误输入\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}