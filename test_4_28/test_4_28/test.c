#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//位段    目的:节省空间
//位段一般是int型  后面有冒号
//struct S
//{
//	int a : 2;//2个比特位表达4种状态
//	int b : 5;
//	int c : 10;
//	int d : 30;
//};
//
//int main()
//{
//	struct S s = {0};
//	printf("%d\n", sizeof(s));//8 地址先分配4个字节的地址，然后abc各分配2 5 10个比特位，剩下的舍去，在分配4个字节的地址，给d
//	return 0;
//}

//枚举类型
//enum Sex
//{
//	//枚举的可能类型 - 里面叫枚举常量
//	MALE,
//	FEMALE,
//	SECRET
//};

//enum Color
//{
//	//默认是从0 1 2 开始 赋值的话从上一个赋值的地方开始
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

//联合- 联合体-共用体    - 公用一块内存空间，大小至少是最大成员的那个
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
//	printf("%p\n", &(u.i));//共用一块地址，起始地址一样
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
		printf("小端\n");
	else
		printf("大端\n");
	return 0;
}