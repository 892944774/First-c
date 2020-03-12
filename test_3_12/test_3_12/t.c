#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//void menu()
//{
//	printf("**************************\n");
//	printf("****  1.play   0.exit  ***\n");
//	printf("**************************\n");
//}
//
////Rand_MAX-32767
//void game()
//{
//	//1 生成一个随机数
//	int ret = 0;//生成随机数
//	int guess = 0;//获取猜的数字
//	//拿时间戳随机设置随机数的生成起点
//
//	//时间戳
//	// NULL—空指针
//	//当前计算机的时间-计算机的起始时间(1970.1.1.0:0:0) = (****)秒
//	//time_t time(time_t *timer)
//	
//	ret = rand()%100+1;
//	
//	//2 猜数字
//	while (1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("猜对了\n");
//			break;
//		}
//	}
//
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	//游戏至少进行一次用do……while
//	do
//	{
//		menu();
//		printf("请选择>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//				game();//猜数字游戏
//				break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//
//	} while (input);
//	return 0;
//}

//int main()
//{
//	printf("hello bit\n");
//	goto again;
//	printf("hehe\n");
//again:
//	printf("你好\n");
//	return 0;
//}

#include <string.h>
int main()
{
	int input[20] = { 0 };
	//shutdown -s -t 60关机
	// cmd-命令行
	//system() --执行系统命令
	system("shutdown -s -t 60");
again:
	printf("请注意，你的电脑将在一分钟内关机，如果输入:我是猪,就取消关机\n请输入>:");
	scanf("%s", input);
	if (strcmp(input, "我是猪") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}