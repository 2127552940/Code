#include "contect.h"
//满足通讯录的要求有1.创建一个通讯录内部的数据元素
//2.创建一个有足够大小的结构体来存储元素和元素个数
//3.要有增加，删除，查找，修改，显示等功能，在开始的时候能够给用户选择功能使用

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
	InitContect(&con);//初始化通讯录

	//进入菜单让用户选择
	do {
		menu();
		printf("请输入要选择的功能对应的数字:>");
		scanf("%d", &input);
		switch (input) {
		case 1:
			//增加通讯录内的元素
			ADDContect(&con);
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			//打印通讯录列表
			SHOWContect(&con);
			break;
		case 0:
			printf("退出选择\n");
			break;
		default:
			printf("请重新选择\n");
			break;
		}
	} while (input);
	return 0;
}