#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)//eof--end of file 
	{
		putchar(ch);//ctrl+z����
	}
	return 0;
	//int ch = getchar();//�ַ�����

	//putchar(ch);
	//printf("%c\n", ch);
}

//int main()
//{
//	int i = 1;
//
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;//continue����:����Ĵ��벻ִ�У������ж��Ƿ����ִ��
//		printf("%d ", i);//1 2 3 4��ѭ��
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("����1\n");
//	case 2:
//		printf("����2\n");
//	case 3:
//		printf("����3\n");
//	case 4:
//		printf("����4\n");
//	case 5:
//		printf("����5\n");
//	case 6:
//		printf("����6\n");
//	case 7:
//		printf("������\n");
//	}
//	return 0;
//}

//int main()
//{
//	int num = 4;
//	if (num = 5)//��ֵ
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int age = 10;
//	if (age < 18)
//		printf("δ����\n");
//	else if (age >= 18 && age < 28)
//		printf("����\n");
//	return 0;
//}

//#include <string.h>
//struct Book
//{
//	char name[20];
//	short price;
//};
//int main()
//{
//	struct Book b1 = {"c���Գ������", 55};
//	strcpy(b1.name, "C++");//strcpy-string copy - �ַ�������-�⺯��-string.h
//	printf("%s\n", b1.name);
	//struct Book* pb = &b1;
	//printf("%s\n", pb->name);
	//printf("%s\n", pb->price);
	//����pb��ӡ���ҵ������ͼ۸�
	//.  �ṹ�����.��Ա
	//->  �ṹ��ָ��->��Ա

	//printf("����:%s\n", b1.name);
	//printf("��Ǯ:%d\n", b1.price);
	//b1.price = 15;
	//printf("�޸ĺ�ļ۸���:%d\n", b1.price);

	//double a = 2.22;
	//double* p = &a;
	//*p = 2.42;
	//printf("%d\n", sizeof(p));//32λ 4   64λ  8
	//printf("a = %lf\n", *p);

	//int a = 0;
	//int* p = &a;

	//*p = 2;
//	printf("%d", a);

//	return 0;
//}