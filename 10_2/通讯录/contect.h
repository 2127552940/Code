#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//用于声明函数结构体以及参数
#define MAX_NAME 20
#define MAX_SEX 12
#define MAX_TELE 12
#define MAX_ADDR 20
#define MAXSIZE 1000
//创建单个联系人的具体信息
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
	PeoInfo data[MAXSIZE];
	int size;
};
void InitContect(struct Contect* con);
void ADDContect(struct Contect* con);
void SHOWContect(const struct Contect* con);
