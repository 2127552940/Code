#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
//用于声明函数结构体以及参数
#define MAX_NAME 20
#define MAX_SEX 12
#define MAX_TELE 12
#define MAX_ADDR 20
//#define MAXSIZE 1000
#define DSIZE 3//构建可变大小初始值为3
//创建单个联系人的具体信息
enum Operate
{
	EXIT,//0
	ADD, //1
	DEL, //2
	SEARCH,//3
	MODIFY,//4
	SHOW,//5
	SORT,//6
	SAVE//7
};
typedef struct PeoInfo
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
	int age;
}PeoInfo;
struct Contect
{
	int size;//通讯录里有效的元素的个数
	int capacity;//通讯录的总容量
	PeoInfo *data;
}Contect;
void InitContect(struct Contect* con);//初始化
void ADDContect(struct Contect* con);//增加
void DELContect(struct Contect* con);//删除
void SEARCHContect(const struct Contect* con);//查找
void MODIFYContect(struct Contect* con);//修改
void SHOWContect(const struct Contect* con);//打印
void SORTContect(struct Contect* con);//排序按名字
void SAVEContect(struct Contect* con);//保存
void LOADContect(struct Contect* con);//加载
void CheckCapacity(struct Contect* con);//扩容
