#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int a[5] = {1,2,3,4,5};
//	int *ptr = (int *)(&a + 1);
//	printf("%d,%d", *(a+1), *(ptr - 1));// 2  5
//	return 0;
//}

//struct Test
//{
//	int Num;
//	char *pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
//
////����p��ֵΪ0x100000, ���±��ʽ��ֵ�ֱ��Ƕ��٣�
////��֪�ṹ��Test���ͱ�����С��20���ֽ�
//int main()
//{
//	p = (struct Test*)0x100000;
//	printf("%p\n", p + 0x1);//0x��16���Ƶ�1    p�Ӻ����ֵ�Ĳ�����ȡ����p������
//	printf("%p\n", (unsigned long)p + 0x1);//��ת��������1048576+1 = 10485767  ��ת����16���ƴ�ӡ  0x100001
//	printf("%p\n", (unsigned int*)p + 0x1);//ת�����޷�������ָ�� ����Ϊ4  ������0x100004
//	return 0;
//}

//int main()
//{
//	int a[4] = {1,2,3,4};
//	int *ptr1 = (int *)(&a + 1);
//	int *ptr2 = (int *)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);// 4  200000
//	//%p һ����ʮ������������ʽ�����ָ���ֵ������ǰ׺0x
//	// %X ����޷�����ʮ�����Ʊ�ʾ������
//	return 0;
//}

//int main()
//{
//	int a[3][2] = {(0,1),(2,3),(4,5)};//���ű��ʽ
//	int *p;
//	p = a[0];//a[0]������ǵ�һ�еĵ�ַ����û��sizeof������������û��&������������
//	         //p = a[0]ֻ�����һ��Ԫ�صĵ�ַ
//			//p[0] ==  *(p+0)
//	printf("%d", p[0]);
//	return 0;
//}

int main()
{
	int a[5][5];
	int(*p)[4];
	p = a;//p��������int (*) [4]                     a�������� int (*) [5]
	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//0xffffffc    -4
	//p[4][2] = *(*(p+4)+2)
	return 0;
}