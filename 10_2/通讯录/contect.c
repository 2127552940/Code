#include "contect.h"
//����ʵ��ͨѶ¼�ĸ��ֹ���
//1.��ʼ��ͨѶ¼
void InitContect(struct Contect* con)
{
	//��con��������ͳ��ȶ���Ϊ0
	memset(con->data,0, sizeof(con->data));
	con->size = 0;
}
//���Ԫ��
void ADDContect(struct Contect* con)
{
	if (con->size == MAXSIZE)
		printf("ͨѶ¼����\n");
	else
	{
		printf("���������֣�>");
		scanf("%s", con->data[con->size].name);
		printf("�������Ա�>");
		scanf("%s", con->data[con->size].sex);
		printf("������绰��>");
		scanf("%s", con->data[con->size].tele);
		printf("������סַ��>");
		scanf("%s", con->data[con->size].addr);
		printf("���������䣺>");
		scanf("%d", &con->data[con->size].age);
		con->size++;
		printf("��ӳɹ�\n");
	}
}
//��ӡ
void SHOWContect(const struct Contect* con)
{
	if (con->size == 0)
		printf("ͨѶ¼�б�Ϊ��\n");
	else
	{
		for (int i = 0; i < con->size; i++)
		{
			printf("��%dλ:\n",i+1);
			printf("����:%s\t", con->data[i].name);
			printf("�Ա�:%s\t", con->data[i].sex);
			printf("�绰:%s\t", con->data[i].tele);
			printf("סַ:%s\t", con->data[i].addr);
			printf("����:%d\n", con->data[i].age);
		}
	}
}