#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

int  Search(Contact* con, char* name)
{
	for (int i = 0; i < con->size; i++)
	{
		if (strcmp(con->data[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;
}
int cmp_by_name(const void* p1, const void* p2)
{
	return strcmp(((PeoInfo*)p1)->name,((PeoInfo*)p2)->name);
}
void CheckContactCap(Contact* con)//通讯录容量检测
{
	//返回0分配成功，返回1分配失败
	if (con->size == con->cap)
	{
		PeoInfo* p1 = (PeoInfo*)realloc(con->data,(con->cap + 2) * sizeof(con->data[0]));
		if (p1 == NULL)
		{
			perror("CheckContactCap");
			printf("扩容失败\n");
			return ;
		}
		else{
			con->data = p1;
			con->cap += 2;
			printf("扩容成功\n");
			printf("此时通讯录总共有%d的空间\n", con->cap);
			printf("此时通讯录已使用%d的空间\n", con->size);
			return;
		}
	}
}
//初始化通讯录
void InitContact(Contact* con)
{
	
	con->data=(PeoInfo*)malloc(CAP*sizeof(con->data[0]));//为con里面的data指针分配一块空间，大小为cap*sizeof(con->data[0])
	if (con->data == NULL)
	{
		return;
	}
	con->size = 0;
	con->cap = CAP;
}
//添加
//void AddContact(Contact* con)
//{
//	if (con->size == MAX_DATA)
//	{
//		printf("通讯录已满，无法添加\n");
//	}
//	else
//	{
//		int i = con->size;
//		printf("请输入名字:>");
//		scanf("%s", (con->data[i]).name);
//		printf("请输入性别:>");
//		scanf("%s", (con->data[i]).gender);
//		printf("请输入年龄:>");
//		scanf("%d", &(con->data[i]).age);
//		printf("请输入电话:>");
//		scanf("%s", (con->data[i]).tele);
//		printf("请输入住址:>");
//		scanf("%s",(con->data[i]).addr);
//		con->size++;
//	}
//}
//动态添加
void AddContact(Contact* con)
{
	int ret = 0;
	CheckContactCap(con);
	int i = con->size;
	printf("请输入名字:>");
	scanf("%s", (con->data[i]).name);
	printf("请输入性别:>");
	scanf("%s", (con->data[i]).gender);
	printf("请输入年龄:>");
	scanf("%d", &(con->data[i]).age);
	printf("请输入电话:>");
	scanf("%s", (con->data[i]).tele);
	printf("请输入住址:>");
	scanf("%s", (con->data[i]).addr);
	con->size++;
}
//删除
void DelContact(Contact* con)
{
	char name[20];
	printf("请输入要删除的人的名字:>");
	scanf("%s", name);
	if (-1 != Search(con, name))
	{
		int i = Search(con, name);
		for (int j = i; j < con->size - 1; j++)
		{
			con->data[j] = con->data[j + 1];
		}
		con->size--;
		printf("删除成功\n");
	}
	else
	{
		printf("没找到要删除的人的信息\n");
	}
}
//寻找
void SearchContact(Contact* con)
{
	char name[20];
	printf("请输入要查找的人的名字:>");
	scanf("%s", name);
	if (-1 != Search(con, name))
	{
		int i = Search(con, name);
		printf("找到了\n");
		printf("%-20s\t%-5s\t%s\t%-11s\t%-20s\n", "名字", "性别", "年龄", "电话", "住址");
		printf("%-20s\t%-5s\t%d\t%-11s\t%-20s\n", con->data[i].name, con->data[i].gender, con->data[i].age, con->data[i].tele, con->data[i].addr);
	}
	else
	{
		printf("没找到\n");
	}
}
//修改
void ModifyContact(Contact* con)
{
	char name[20];
	printf("请输入要修改的人的名字:>");
	scanf("%s", name);
	if (-1 != Search(con, name))
	{
		int i = Search(con,name);
		printf("请输入名字:>");
		scanf("%s", (con->data[i]).name);
		printf("请输入性别:>");
		scanf("%s", (con->data[i]).gender);
		printf("请输入年龄:>");
		scanf("%d", &(con->data[i]).age);
		printf("请输入电话:>");
		scanf("%s", (con->data[i]).tele);
		printf("请输入住址:>");
		scanf("%s", (con->data[i]).addr);
		printf("修改成功\n");
	}
	else
	{
		printf("没找到要修改的人的信息\n");
	}
}
//显示
void ShowContact(Contact* con)
{
	printf("%-20s\t%-5s\t%s\t%-11s\t%-20s\n","名字","性别","年龄","电话","住址");
	for (int i = 0; i < con->size; i++)
	{
		printf("%-20s\t%-5s\t%d\t%-11s\t%-20s\n", con->data[i].name, con->data[i].gender, con->data[i].age, con->data[i].tele, con->data[i].addr);
	}
}
//销毁
void DestroyContact(Contact* con)
{

	free(con->data);
	con->data = NULL;
	con->size = 0;
	con->cap = 0;
	printf("销毁成功\n");
}
//排序
void SortContact(Contact* con)
{
	qsort(con->data, con->size, sizeof(con->data[0]), cmp_by_name);
}
//结束操作时销毁通讯录并释放空间


