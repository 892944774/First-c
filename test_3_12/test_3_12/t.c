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
//	//1 ����һ�������
//	int ret = 0;//���������
//	int guess = 0;//��ȡ�µ�����
//	//��ʱ������������������������
//
//	//ʱ���
//	// NULL����ָ��
//	//��ǰ�������ʱ��-���������ʼʱ��(1970.1.1.0:0:0) = (****)��
//	//time_t time(time_t *timer)
//	
//	ret = rand()%100+1;
//	
//	//2 ������
//	while (1)
//	{
//		printf("�������:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("�¶���\n");
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
//	//��Ϸ���ٽ���һ����do����while
//	do
//	{
//		menu();
//		printf("��ѡ��>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//				game();//��������Ϸ
//				break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
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
//	printf("���\n");
//	return 0;
//}

#include <string.h>
int main()
{
	int input[20] = { 0 };
	//shutdown -s -t 60�ػ�
	// cmd-������
	//system() --ִ��ϵͳ����
	system("shutdown -s -t 60");
again:
	printf("��ע�⣬��ĵ��Խ���һ�����ڹػ����������:������,��ȡ���ػ�\n������>:");
	scanf("%s", input);
	if (strcmp(input, "������") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}