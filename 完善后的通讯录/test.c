#include "contect.h"
//满足通讯录的要求有1.创建一个通讯录内部的数据元素
//2.创建一个有足够大小的结构体来存储元素和元素个数
//3.要有增加，删除，查找，修改，显示等功能，在开始的时候能够给用户选择功能使用
//qsort在指针详解6那里
//要完善这个通讯录
//1.将初始化的结构体改为动态分配
//2.将创建后的内容存储到文件里，并从文件中读出来
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
	InitContect(&con);//初始化通讯录

	//进入菜单让用户选择
	do {
		menu();
		printf("请输入要选择的功能对应的数字:>");
		scanf("%d", &input);
		switch (input) {
		case ADD:
			//增加通讯录内的元素
			ADDContect(&con);
			break;
		case DEL:
			//删除通讯录列表的元素
			DELContect(&con);
			break;
		case SEARCH:
			//查找通讯录列表的元素
			SEARCHContect(&con);
			break;
		case MODIFY:
			//修改通讯录列表的元素
			MODIFYContect(&con);
			break;
		case SHOW:
			//打印通讯录列表
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
			printf("退出选择\n");
			break;
		default:
			printf("请重新选择\n");
			break;
		}
	} while (input);
	return 0;
}