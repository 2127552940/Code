#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"
//����ͨѶ¼�汾���Դ洢1000���˵���Ϣ��ÿ���˵���Ϣ�������������Ա����䡢�绰��סַ
//�ṩ�ķ�����1.�����ϵ����Ϣ2.ɾ��ָ����ϵ����Ϣ3.����ָ����ϵ����Ϣ4.�޸�ָ����ϵ����Ϣ
//5.��ʾ������ϵ����Ϣ6.���������ϵ����Ϣ7.����������������ϵ��

void menu()
{
	printf("     1.ADD      2.DEL     \n");
	printf("     3.SEARCH   4.MODIFY  \n");
	printf("     5.SHOW     6.DESTROY \n");
	printf("     7.SORT     0.EXIT    \n");
}
void test()
{
	//����һ���ṹ������������1000��Ԫ��
	Contact con;
	InitContact(&con);
	int input;
	do
	{
		menu();
		printf("��ѡ�����:>");
		scanf("%d", &input);
		switch (input)
		{
		case EXIT:
			printf("�˳�\n");
			break;
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case DESTROY:
			DestroyContact(&con);
			break;
		case SORT:
			SortContact(&con);
			break;
		default:
			printf("��������\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}