#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//ʵ�ֶ�̬����ͨѶ¼
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

//�����˵���Ϣ�Ľṹ��
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
//	PeoInfo data[MAX_DATA];//�����ܴ��1000���˵���Ϣ
//	int size;//��¼�����Ϣ�ĸ���
// }Contact;
typedef struct Contact
{
	PeoInfo* data;//����Ҫ���һ��ָ������Ϣ�Ľṹ��ָ�����
	int cap;  //���ڴ�����������
	int size; //��¼�����Ϣ�ĸ���
 }Contact;

//��ʼ��ͨѶ¼
void InitContact(Contact* con);
//����Ԫ��
void AddContact(Contact* con);
//ɾ��Ԫ��
void DelContact(Contact* con);
//Ѱ��Ԫ��
void SearchContact(Contact* con);
//�޸�Ԫ��
void ModifyContact(Contact* con);
//��ʾ
void ShowContact(Contact*con);
//����
void DestroyContact(Contact* con);
//����
void SortContact(Contact* con);
