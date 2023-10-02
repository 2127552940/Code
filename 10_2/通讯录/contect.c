#include "contect.h"
//用于实现通讯录的各种功能
//1.初始化通讯录
void InitContect(struct Contect* con)
{
	//把con的数据域和长度都置为0
	memset(con->data,0, sizeof(con->data));
	con->size = 0;
}
//添加元素
void ADDContect(struct Contect* con)
{
	if (con->size == MAXSIZE)
		printf("通讯录已满\n");
	else
	{
		printf("请输入名字：>");
		scanf("%s", con->data[con->size].name);
		printf("请输入性别：>");
		scanf("%s", con->data[con->size].sex);
		printf("请输入电话：>");
		scanf("%s", con->data[con->size].tele);
		printf("请输入住址：>");
		scanf("%s", con->data[con->size].addr);
		printf("请输入年龄：>");
		scanf("%d", &con->data[con->size].age);
		con->size++;
		printf("添加成功\n");
	}
}
//打印
void SHOWContect(const struct Contect* con)
{
	if (con->size == 0)
		printf("通讯录列表为空\n");
	else
	{
		for (int i = 0; i < con->size; i++)
		{
			printf("第%d位:\n",i+1);
			printf("名字:%s\t", con->data[i].name);
			printf("性别:%s\t", con->data[i].sex);
			printf("电话:%s\t", con->data[i].tele);
			printf("住址:%s\t", con->data[i].addr);
			printf("年龄:%d\n", con->data[i].age);
		}
	}
}