#include "contect.h"
//����ͨѶ¼��Ҫ����1.����һ��ͨѶ¼�ڲ�������Ԫ��
//2.����һ�����㹻��С�Ľṹ�����洢Ԫ�غ�Ԫ�ظ���
//3.Ҫ�����ӣ�ɾ�������ң��޸ģ���ʾ�ȹ��ܣ��ڿ�ʼ��ʱ���ܹ����û�ѡ����ʹ��
//qsort��ָ�����6����
//Ҫ�������ͨѶ¼
//1.����ʼ���Ľṹ���Ϊ��̬����
//2.������������ݴ洢���ļ�������ļ��ж�����
void menu()
{
	printf("###  1.ADD     2.DEL     ###\n");
	printf("###  3.SEARCH  4.MODIFY  ###\n");
	printf("###  5.SHOW    6.SORT    ###\n");
	printf("###  7.SAVE    0.EXIT    ###\n");
}
int main()
{
	
	int input;
	struct Contect con;
	InitContect(&con);//��ʼ��ͨѶ¼

	//����˵����û�ѡ��
	do {
		menu();
		printf("������Ҫѡ��Ĺ��ܶ�Ӧ������:>");
		scanf("%d", &input);
		switch (input) {
		case ADD:
			//����ͨѶ¼�ڵ�Ԫ��
			ADDContect(&con);
			break;
		case DEL:
			//ɾ��ͨѶ¼�б��Ԫ��
			DELContect(&con);
			break;
		case SEARCH:
			//����ͨѶ¼�б��Ԫ��
			SEARCHContect(&con);
			break;
		case MODIFY:
			//�޸�ͨѶ¼�б��Ԫ��
			MODIFYContect(&con);
			break;
		case SHOW:
			//��ӡͨѶ¼�б�
			SHOWContect(&con);
			break;
		case SORT:
			SORTContect(&con);
			break;
		case SAVE:
			SAVEContect(&con);
			break;
		case 0:
			SAVEContect(&con);
			printf("�˳�ѡ��\n");
			break;
		default:
			printf("������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}