#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//extern int Add(int x, int y);//外部源文件的引用，用extern
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}

//预定义符号
//int main()
//{
//	printf("%s\n", __FILE__);//进行编译的源文件的绝对路径
//	printf("%d\n", __LINE__);//显示当前代码的行数
//	printf("%s\n", __DATE__);//显示当前的日期
//	printf("%s\n", __TIME__);//显示当前的时间
//
//	//写日志文件
//	int i = 0;
//	int arr[10] = {0};
//	FILE* pf = fopen("text.txt", "w");
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//		fprintf(pf, "file:%s line:%d date:%s time:%s i=%d\n",
//			      __FILE__, __LINE__, __DATE__, __TIME__, i);
//		printf("%d ", arr[i]);
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//#define MAX 100
//#define STR "hehe"
//#define reg register
//#define do_forever for(;;)
//
//int main()
//{
//	//reg int a == register int a;
//	//do_forever;//死循环
//
//	int max = MAX;
//	printf("%d\n", max);//100
//	printf("%s\n", STR);//hehe
//	return 0;
//}

//#define SQUARE(X) X*X
//
//int main()
//{
//	int ret = SQUARE(5+1);
//	printf("%d\n", ret);//这里传过去的是5+1*5+1 = 11
//	return 0;
//}

//#define SQUARE(X) (X)*(X)
//
//int main()
//{
//	int ret = SQUARE(5 + 1);
//	printf("%d\n", ret);//这里传过去的是(5+1)*(5+1) = 36
//	return 0;
//}

//#define DOUBLE(X) X+X
//
//int main()
//{
//	int a = 5;
//	int ret = 10 * DOUBLE(a);//10 * 5+5=55
//	printf("%d\n", ret);
//	return 0;
//}

//#define PRINT(X) printf("the value of "#X" is %d\n", X)
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	PRINT(a);
//	//printf("the value of ""a"" is %d\n", a);
//	PRINT(b);
//	//printf("the value of ""b"" is %d\n", b);
//	return 0;
//}

#define CAT(X, Y) X##Y

int main()
{
	int Class101 = 2019;

	printf("%d\n", CAT(Class, 101));
	//printf("%d\n", Class##101);
	//printf("%d\n", class101);
	return 0;
}
