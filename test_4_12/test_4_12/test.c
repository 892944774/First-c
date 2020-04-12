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
////假设p的值为0x100000, 如下表达式的值分别是多少？
////已知结构体Test类型变量大小是20个字节
//int main()
//{
//	p = (struct Test*)0x100000;
//	printf("%p\n", p + 0x1);//0x是16进制的1    p加后面的值的步长，取决于p的类型
//	printf("%p\n", (unsigned long)p + 0x1);//先转换成整形1048576+1 = 10485767  再转换成16进制打印  0x100001
//	printf("%p\n", (unsigned int*)p + 0x1);//转换成无符号整形指针 步长为4  所以是0x100004
//	return 0;
//}

//int main()
//{
//	int a[4] = {1,2,3,4};
//	int *ptr1 = (int *)(&a + 1);
//	int *ptr2 = (int *)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);// 4  200000
//	//%p 一般以十六进制整数方式输出容指针的值，附加前缀0x
//	// %X 输出无符号以十六进制表示的整数
//	return 0;
//}

//int main()
//{
//	int a[3][2] = {(0,1),(2,3),(4,5)};//逗号表达式
//	int *p;
//	p = a[0];//a[0]代表的是第一行的地址，但没有sizeof（数组名），没有&（数组名），
//	         //p = a[0]只代表第一个元素的地址
//			//p[0] ==  *(p+0)
//	printf("%d", p[0]);
//	return 0;
//}

int main()
{
	int a[5][5];
	int(*p)[4];
	p = a;//p的类型是int (*) [4]                     a的类型是 int (*) [5]
	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//0xffffffc    -4
	//p[4][2] = *(*(p+4)+2)
	return 0;
}