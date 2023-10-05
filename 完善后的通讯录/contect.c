#include "contect.h"
//����ʵ��ͨѶ¼�ĸ��ֹ���
//1.��ʼ��ͨѶ¼
void InitContect(struct Contect* con)
{
	//1.Ϊcon����һ����ʼ����Ϊ3�����鲢��ʼ��Ϊ0
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
		//��������
		PeoInfo* ptr = (PeoInfo*)realloc(con->data, (con->capacity) * sizeof(PeoInfo));
		if (ptr == NULL) {
			printf("����ʧ��\n");
			return;
		}
		else
		{
			con->data = ptr;
			con->capacity += 2;
			printf("���ݳɹ�\n");
		}
	}
}
//��ȡͨѶ¼�ļ����Ԫ��
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
//�Ƚ��������ֵĴ�С
int Cmp_by_name(const void*p1, const void*p2)
{
	return strcmp(((PeoInfo*)p1)->name, ((PeoInfo*)p2)->name);
}
//����ͨѶ¼����ָ����Ԫ��
static int Findname(const struct Contect* con, char name[MAX_NAME])
{
	for (int i = 0; i < con->size; i++)
	{
		if (0 == strcmp(con->data[i].name, name))
		{
			return i;//�ҵ��˷����±�
		}
	}
	return -1;
}
//���Ԫ��
void ADDContect(struct Contect* con)
{
	CheckCapacity(con);
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
//ɾ��Ԫ��
void DELContect(struct Contect* con)
{
	char name[MAX_NAME];
	printf("������Ҫɾ����Ϣ������:>");
	scanf("%s", &name);
	int ret=Findname(con, name);
	if (-1 == ret)
	{
		printf("Ҫɾ������Ϣ������\n");
	}
	else {
		//ɾ���ú����Ԫ�ظ������Ԫ��
		for (int i = ret; i < con->size - 1; i++)
		{
			con->data[i] = con->data[i + 1];
		}
		con->size--;
		printf("ɾ���ɹ�\n");
	}
}
//����Ԫ��
void SEARCHContect(const struct Contect* con)
{
	char name[MAX_NAME];
	printf("������Ҫ������Ϣ������:>");
	scanf("%s", &name);
	int ret=Findname(con, name);
	if (-1 == ret)
		printf("Ҫ���ҵ���Ϣ������");
	else {
		printf("����:%s\t", con->data[ret].name);
		printf("�Ա�:%s\t", con->data[ret].sex);
		printf("�绰:%s\t", con->data[ret].tele);
		printf("סַ:%s\t", con->data[ret].addr);
		printf("����:%d\n", con->data[ret].age);
	}
}
//�޸���Ϣ
void MODIFYContect(struct Contect* con)
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
	int age;
	printf("������Ҫ�޸���Ϣ������:>");
	scanf("%s", &name);
	int ret = Findname(con, name);
	if (-1 == ret)
		printf("Ҫ�޸ĵ���Ϣ������");
	else
	{
		printf("�������޸ĺ������:>");
		scanf("%s", &name);
		printf("�������޸ĺ���Ա�:>");
		scanf("%s", &sex);
		printf("�������޸ĺ�ĵ绰:>");
		scanf("%s", &tele);
		printf("�������޸ĺ��סַ:>");
		scanf("%s", &addr);
		printf("�������޸ĺ������:>");
		scanf("%d", &age);
		strcpy(con->data[ret].name, name);
		strcpy(con->data[ret].sex, sex);
		strcpy(con->data[ret].tele, tele);
		strcpy(con->data[ret].addr,addr);
		con->data[ret].age = age;
		printf("�޸ĳɹ�\n");
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
			printf("��%dλ:",i+1);
			printf("����:%s\t", con->data[i].name);
			printf("�Ա�:%s\t", con->data[i].sex);
			printf("�绰:%s\t", con->data[i].tele);
			printf("סַ:%s\t", con->data[i].addr);
			printf("����:%d\n", con->data[i].age);
		}
	}
}
//����
void SORTContect(struct Contect* con)
{
	qsort(con->data, con->size, sizeof(con->data[0]), Cmp_by_name);
}
//����
void SAVEContect(struct Contect* con)
{
	FILE* pfWrite = fopen("contact.txt", "w");
	if (pfWrite == NULL)
	{
		printf("%s\n", strerror(errno));
		return;
	}
	//дͨѶ¼�����ݵ��ļ���
	for (int i = 0; i < con->size; i++)
	{
		fwrite(&con->data[i], sizeof(PeoInfo), 1, pfWrite);
	}
	fclose(pfWrite);
	pfWrite = NULL;
	printf("����ɹ�\n");
}