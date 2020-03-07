#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)//eof--end of file 
	{
		putchar(ch);//ctrl+z结束
	}
	return 0;
	//int ch = getchar();//字符输入

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
//			continue;//continue作用:后面的代码不执行，返回判断是否继续执行
//		printf("%d ", i);//1 2 3 4死循环
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
//		printf("星期1\n");
//	case 2:
//		printf("星期2\n");
//	case 3:
//		printf("星期3\n");
//	case 4:
//		printf("星期4\n");
//	case 5:
//		printf("星期5\n");
//	case 6:
//		printf("星期6\n");
//	case 7:
//		printf("星期天\n");
//	}
//	return 0;
//}

//int main()
//{
//	int num = 4;
//	if (num = 5)//赋值
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int age = 10;
//	if (age < 18)
//		printf("未成年\n");
//	else if (age >= 18 && age < 28)
//		printf("青年\n");
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
//	struct Book b1 = {"c语言程序设计", 55};
//	strcpy(b1.name, "C++");//strcpy-string copy - 字符串拷贝-库函数-string.h
//	printf("%s\n", b1.name);
	//struct Book* pb = &b1;
	//printf("%s\n", pb->name);
	//printf("%s\n", pb->price);
	//利用pb打印出我的书名和价格
	//.  结构体变量.成员
	//->  结构体指针->成员

	//printf("书名:%s\n", b1.name);
	//printf("价钱:%d\n", b1.price);
	//b1.price = 15;
	//printf("修改后的价格是:%d\n", b1.price);

	//double a = 2.22;
	//double* p = &a;
	//*p = 2.42;
	//printf("%d\n", sizeof(p));//32位 4   64位  8
	//printf("a = %lf\n", *p);

	//int a = 0;
	//int* p = &a;

	//*p = 2;
//	printf("%d", a);

//	return 0;
//}