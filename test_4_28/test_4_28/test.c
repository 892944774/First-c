#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//λ��    Ŀ��:��ʡ�ռ�
//λ��һ����int��  ������ð��
//struct S
//{
//	int a : 2;//2������λ���4��״̬
//	int b : 5;
//	int c : 10;
//	int d : 30;
//};
//
//int main()
//{
//	struct S s = {0};
//	printf("%d\n", sizeof(s));//8 ��ַ�ȷ���4���ֽڵĵ�ַ��Ȼ��abc������2 5 10������λ��ʣ�µ���ȥ���ڷ���4���ֽڵĵ�ַ����d
//	return 0;
//}

//ö������
//enum Sex
//{
//	//ö�ٵĿ������� - �����ö�ٳ���
//	MALE,
//	FEMALE,
//	SECRET
//};

//enum Color
//{
//	//Ĭ���Ǵ�0 1 2 ��ʼ ��ֵ�Ļ�����һ����ֵ�ĵط���ʼ
//	red,
//	green,
//	blue
//};
//
//int main()
//{
//	//enum Sex s = MALE;
//	//enum Color c = blue;
//
//	printf("%d %d %d\n", red, green, blue);
//	return 0;
//}

//����- ������-������    - ����һ���ڴ�ռ䣬��С����������Ա���Ǹ�
//union Un
//{
//	char c;//1
//	int i;//4
//};
//
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));//4
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));//����һ���ַ����ʼ��ַһ��
//	return 0;
//}

int check_sys()
{
	union Un
	{
		char c;
		int i;
	}u;
	u.i = 1;
	return u.c;
}

int main()
{
	int a = 1;
	int ret = check_sys();
	if (ret == 1)
		printf("С��\n");
	else
		printf("���\n");
	return 0;
}