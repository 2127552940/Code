#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//实现动态创建通讯录
#define MAX_NAME 20
#define MAX_GENDER 5
#define MAX_TELE 11
#define MAX_ADDR 20
#define MAX_DATA 1000
#define CAP 3

enum OPERATE
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	DESTROY,
	SORT
};

//创建人的信息的结构体
typedef struct PeoInfo
{
	char name[MAX_NAME];
	char gender[MAX_GENDER];
	int age;
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;

//typedef struct Contact
//{
//	PeoInfo data[MAX_DATA];//里面能存放1000个人的信息
//	int size;//记录存放信息的个数
// }Contact;
typedef struct Contact
{
	PeoInfo* data;//这里要存放一个指向人信息的结构体指针变量
	int cap;  //用于存放数组的容量
	int size; //记录存放信息的个数
 }Contact;

//初始化通讯录
void InitContact(Contact* con);
//增加元素
void AddContact(Contact* con);
//删除元素
void DelContact(Contact* con);
//寻找元素
void SearchContact(Contact* con);
//修改元素
void ModifyContact(Contact* con);
//显示
void ShowContact(Contact*con);
//销毁
void DestroyContact(Contact* con);
//排序
void SortContact(Contact* con);
