#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
//�������������ṹ���Լ�����
#define MAX_NAME 20
#define MAX_SEX 12
#define MAX_TELE 12
#define MAX_ADDR 20
//#define MAXSIZE 1000
#define DSIZE 3//�����ɱ��С��ʼֵΪ3
//����������ϵ�˵ľ�����Ϣ
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
	int size;//ͨѶ¼����Ч��Ԫ�صĸ���
	int capacity;//ͨѶ¼��������
	PeoInfo *data;
}Contect;
void InitContect(struct Contect* con);//��ʼ��
void ADDContect(struct Contect* con);//����
void DELContect(struct Contect* con);//ɾ��
void SEARCHContect(const struct Contect* con);//����
void MODIFYContect(struct Contect* con);//�޸�
void SHOWContect(const struct Contect* con);//��ӡ
void SORTContect(struct Contect* con);//��������
void SAVEContect(struct Contect* con);//����
void LOADContect(struct Contect* con);//����
void CheckCapacity(struct Contect* con);//����
