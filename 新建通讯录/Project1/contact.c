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
void CheckContactCap(Contact* con)//ͨѶ¼�������
{
	//����0����ɹ�������1����ʧ��
	if (con->size == con->cap)
	{
		PeoInfo* p1 = (PeoInfo*)realloc(con->data,(con->cap + 2) * sizeof(con->data[0]));
		if (p1 == NULL)
		{
			perror("CheckContactCap");
			printf("����ʧ��\n");
			return ;
		}
		else{
			con->data = p1;
			con->cap += 2;
			printf("���ݳɹ�\n");
			printf("��ʱͨѶ¼�ܹ���%d�Ŀռ�\n", con->cap);
			printf("��ʱͨѶ¼��ʹ��%d�Ŀռ�\n", con->size);
			return;
		}
	}
}
//��ʼ��ͨѶ¼
void InitContact(Contact* con)
{
	
	con->data=(PeoInfo*)malloc(CAP*sizeof(con->data[0]));//Ϊcon�����dataָ�����һ��ռ䣬��СΪcap*sizeof(con->data[0])
	if (con->data == NULL)
	{
		return;
	}
	con->size = 0;
	con->cap = CAP;
}
//���
//void AddContact(Contact* con)
//{
//	if (con->size == MAX_DATA)
//	{
//		printf("ͨѶ¼�������޷����\n");
//	}
//	else
//	{
//		int i = con->size;
//		printf("����������:>");
//		scanf("%s", (con->data[i]).name);
//		printf("�������Ա�:>");
//		scanf("%s", (con->data[i]).gender);
//		printf("����������:>");
//		scanf("%d", &(con->data[i]).age);
//		printf("������绰:>");
//		scanf("%s", (con->data[i]).tele);
//		printf("������סַ:>");
//		scanf("%s",(con->data[i]).addr);
//		con->size++;
//	}
//}
//��̬���
void AddContact(Contact* con)
{
	int ret = 0;
	CheckContactCap(con);
	int i = con->size;
	printf("����������:>");
	scanf("%s", (con->data[i]).name);
	printf("�������Ա�:>");
	scanf("%s", (con->data[i]).gender);
	printf("����������:>");
	scanf("%d", &(con->data[i]).age);
	printf("������绰:>");
	scanf("%s", (con->data[i]).tele);
	printf("������סַ:>");
	scanf("%s", (con->data[i]).addr);
	con->size++;
}
//ɾ��
void DelContact(Contact* con)
{
	char name[20];
	printf("������Ҫɾ�����˵�����:>");
	scanf("%s", name);
	if (-1 != Search(con, name))
	{
		int i = Search(con, name);
		for (int j = i; j < con->size - 1; j++)
		{
			con->data[j] = con->data[j + 1];
		}
		con->size--;
		printf("ɾ���ɹ�\n");
	}
	else
	{
		printf("û�ҵ�Ҫɾ�����˵���Ϣ\n");
	}
}
//Ѱ��
void SearchContact(Contact* con)
{
	char name[20];
	printf("������Ҫ���ҵ��˵�����:>");
	scanf("%s", name);
	if (-1 != Search(con, name))
	{
		int i = Search(con, name);
		printf("�ҵ���\n");
		printf("%-20s\t%-5s\t%s\t%-11s\t%-20s\n", "����", "�Ա�", "����", "�绰", "סַ");
		printf("%-20s\t%-5s\t%d\t%-11s\t%-20s\n", con->data[i].name, con->data[i].gender, con->data[i].age, con->data[i].tele, con->data[i].addr);
	}
	else
	{
		printf("û�ҵ�\n");
	}
}
//�޸�
void ModifyContact(Contact* con)
{
	char name[20];
	printf("������Ҫ�޸ĵ��˵�����:>");
	scanf("%s", name);
	if (-1 != Search(con, name))
	{
		int i = Search(con,name);
		printf("����������:>");
		scanf("%s", (con->data[i]).name);
		printf("�������Ա�:>");
		scanf("%s", (con->data[i]).gender);
		printf("����������:>");
		scanf("%d", &(con->data[i]).age);
		printf("������绰:>");
		scanf("%s", (con->data[i]).tele);
		printf("������סַ:>");
		scanf("%s", (con->data[i]).addr);
		printf("�޸ĳɹ�\n");
	}
	else
	{
		printf("û�ҵ�Ҫ�޸ĵ��˵���Ϣ\n");
	}
}
//��ʾ
void ShowContact(Contact* con)
{
	printf("%-20s\t%-5s\t%s\t%-11s\t%-20s\n","����","�Ա�","����","�绰","סַ");
	for (int i = 0; i < con->size; i++)
	{
		printf("%-20s\t%-5s\t%d\t%-11s\t%-20s\n", con->data[i].name, con->data[i].gender, con->data[i].age, con->data[i].tele, con->data[i].addr);
	}
}
//����
void DestroyContact(Contact* con)
{

	free(con->data);
	con->data = NULL;
	con->size = 0;
	con->cap = 0;
	printf("���ٳɹ�\n");
}
//����
void SortContact(Contact* con)
{
	qsort(con->data, con->size, sizeof(con->data[0]), cmp_by_name);
}
//��������ʱ����ͨѶ¼���ͷſռ�


