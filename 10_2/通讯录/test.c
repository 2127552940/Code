#include "contect.h"
//����ͨѶ¼��Ҫ����1.����һ��ͨѶ¼�ڲ�������Ԫ��
//2.����һ�����㹻��С�Ľṹ�����洢Ԫ�غ�Ԫ�ظ���
//3.Ҫ�����ӣ�ɾ�������ң��޸ģ���ʾ�ȹ��ܣ��ڿ�ʼ��ʱ���ܹ����û�ѡ����ʹ��

void menu()
{
	printf("###  1.ADD     2.DEL     ###\n");
	printf("###  3.SEARCH  4.REVISE  ###\n");
	printf("###  5.SHOW    0.EXIT    ###\n");
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
		case 1:
			//����ͨѶ¼�ڵ�Ԫ��
			ADDContect(&con);
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			//��ӡͨѶ¼�б�
			SHOWContect(&con);
			break;
		case 0:
			printf("�˳�ѡ��\n");
			break;
		default:
			printf("������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}