#include "contect.h"
//用于实现通讯录的各种功能
//1.初始化通讯录
void InitContect(struct Contect* con)
{
	//1.为con分配一个初始容量为3的数组并初始化为0
	 con->data = (PeoInfo*)malloc(DSIZE * sizeof(PeoInfo));
	 if (con->data == NULL)
	 {
		 return;
	 }
	con->size = 0;
	con->capacity = DSIZE;
	LOADContect(con);
}
void CheckCapacity(struct Contect* con)
{
	if (con->size == con->capacity)
	{
		//增加容量
		PeoInfo* ptr = (PeoInfo*)realloc(con->data, (con->capacity) * sizeof(PeoInfo));
		if (ptr == NULL) {
			printf("扩容失败\n");
			return;
		}
		else
		{
			con->data = ptr;
			con->capacity += 2;
			printf("增容成功\n");
		}
	}
}
//读取通讯录文件里的元素
void LOADContect(struct Contect* con)
{
	PeoInfo tmp = { 0 };
	FILE* pfRead = fopen("contact.txt", "r");
	if (pfRead == NULL)
	{
		printf("%s\n", strerror(errno));
		return;
	}
	while (fread(&tmp, sizeof(PeoInfo), 1, pfRead))
	{
		CheckCapacity(con);
		con->data[con->size] = tmp;
		con->size++;
	}
	fclose(pfRead);
	pfRead = NULL;
}
//比较两个名字的大小
int Cmp_by_name(const void*p1, const void*p2)
{
	return strcmp(((PeoInfo*)p1)->name, ((PeoInfo*)p2)->name);
}
//遍历通讯录查找指定的元素
static int Findname(const struct Contect* con, char name[MAX_NAME])
{
	for (int i = 0; i < con->size; i++)
	{
		if (0 == strcmp(con->data[i].name, name))
		{
			return i;//找到了返回下标
		}
	}
	return -1;
}
//添加元素
void ADDContect(struct Contect* con)
{
	CheckCapacity(con);
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
//删除元素
void DELContect(struct Contect* con)
{
	char name[MAX_NAME];
	printf("请输入要删除信息的名字:>");
	scanf("%s", &name);
	int ret=Findname(con, name);
	if (-1 == ret)
	{
		printf("要删除的信息不存在\n");
	}
	else {
		//删除用后面的元素覆盖这个元素
		for (int i = ret; i < con->size - 1; i++)
		{
			con->data[i] = con->data[i + 1];
		}
		con->size--;
		printf("删除成功\n");
	}
}
//查找元素
void SEARCHContect(const struct Contect* con)
{
	char name[MAX_NAME];
	printf("请输入要查找信息的名字:>");
	scanf("%s", &name);
	int ret=Findname(con, name);
	if (-1 == ret)
		printf("要查找的信息不存在");
	else {
		printf("名字:%s\t", con->data[ret].name);
		printf("性别:%s\t", con->data[ret].sex);
		printf("电话:%s\t", con->data[ret].tele);
		printf("住址:%s\t", con->data[ret].addr);
		printf("年龄:%d\n", con->data[ret].age);
	}
}
//修改信息
void MODIFYContect(struct Contect* con)
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
	int age;
	printf("请输入要修改信息的名字:>");
	scanf("%s", &name);
	int ret = Findname(con, name);
	if (-1 == ret)
		printf("要修改的信息不存在");
	else
	{
		printf("请输入修改后的名字:>");
		scanf("%s", &name);
		printf("请输入修改后的性别:>");
		scanf("%s", &sex);
		printf("请输入修改后的电话:>");
		scanf("%s", &tele);
		printf("请输入修改后的住址:>");
		scanf("%s", &addr);
		printf("请输入修改后的年龄:>");
		scanf("%d", &age);
		strcpy(con->data[ret].name, name);
		strcpy(con->data[ret].sex, sex);
		strcpy(con->data[ret].tele, tele);
		strcpy(con->data[ret].addr,addr);
		con->data[ret].age = age;
		printf("修改成功\n");
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
			printf("第%d位:",i+1);
			printf("名字:%s\t", con->data[i].name);
			printf("性别:%s\t", con->data[i].sex);
			printf("电话:%s\t", con->data[i].tele);
			printf("住址:%s\t", con->data[i].addr);
			printf("年龄:%d\n", con->data[i].age);
		}
	}
}
//排序
void SORTContect(struct Contect* con)
{
	qsort(con->data, con->size, sizeof(con->data[0]), Cmp_by_name);
}
//保存
void SAVEContect(struct Contect* con)
{
	FILE* pfWrite = fopen("contact.txt", "w");
	if (pfWrite == NULL)
	{
		printf("%s\n", strerror(errno));
		return;
	}
	//写通讯录的数据到文件中
	for (int i = 0; i < con->size; i++)
	{
		fwrite(&con->data[i], sizeof(PeoInfo), 1, pfWrite);
	}
	fclose(pfWrite);
	pfWrite = NULL;
	printf("保存成功\n");
}