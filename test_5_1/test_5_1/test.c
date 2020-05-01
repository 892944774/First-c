#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"
#include <stdio.h>
void menu()
{
	printf("**************************************\n");
	printf("*******1.add           2.del    ******\n");
	printf("*******3.search        4.modify ******\n");
	printf("*******5.show          6.sort   ******\n");
	printf("*******0.exit                   ******\n");
	printf("**************************************\n");
}

int main()
{
	int input = 0;
	//创建通讯录
	struct Contact con;//con就是通讯录，包含1000个元素的数和size
	//初始化通讯录
	InitContact(&con);//结构体传参,传地址效率高，节省空间，能改变想要改变的值
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);//开始给通讯录里面加联系人信息，将通讯录的地址传过来
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
		case SORT:
			SortContact(&con);
			break;
		case EXIT:
			printf("退出通讯录\n ");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	}while(input);
	return 0;
}