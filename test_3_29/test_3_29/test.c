#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
 //struct 结构体关键字  Stu -结构体标签   struct Stu - 结构体类型
//struct Stu
//{  
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;//s1,s2,s3是三个全局的结构体变量

//typedef struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;//这是重新定义的类型
//
//int main()
//{
//	Stu s1 = {"张啊", 10, "121212212", "男"};//局部变量
//	return 0;
//}

//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//
//struct T
//{
//	char ch[32];
//	struct S s;
//	char* pc;
//};
//
//int main()
//{
//	char arr[] = { 1 };
//	struct T t = { "hehe", {11, 'w', "adad", 2.1}, arr};
//	printf("%s\n", t.ch);
//	printf("%lf\n",t.s.d);
//	return 0;
//}

struct Stu
{
	char name[20];
	int age;
	char tele[12];
	char sex[4];
};

void print1(struct Stu tmp)
{
	printf("%s\n", tmp.name);
	printf("%d\n", tmp.age);
}

void print2(struct Stu* ps)
{
	printf("%s\n", ps->name);
	printf("%d\n", ps->age);
}

int main()
{
	struct Stu s = {"李四", 20, "12121121", "男"};
	print1(s);
	print2(&s);//更好
	return 0;
}