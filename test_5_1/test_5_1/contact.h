#pragma once
#define MAX 1000

#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

#include <stdio.h>
#include <string.h>
struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};

//枚举增加代码的可读性
enum Option
{
	EXIT,//0
	ADD,//1
	DEL,//2
	SEARCH,//3
	MODIFY,//4
	SHOW,//5
	SORT,//6
};

//通讯录类型
struct Contact
{
	struct PeoInfo data[MAX];//存放1000个元素的数的信息
	int size;//记录当前已经有的元素个数
};

//声明函数
//通讯录初始化函数
void InitContact(struct Contact* ps);

//增加联系人信息
void AddContact(struct Contact* ps);

//显示联系人的信息
void ShowContact(const struct Contact* ps);//因为只想显示ps指向的内容，不修改，所以加上const修饰

//删除联系人
void DelContact(struct Contact* ps);

//寻找联系人信息
void SearchContact(const struct Contact* ps);

//修改联系人信息
void ModifyContact(struct Contact* ps);

//排序联系人
void SortContact(struct Contact* ps);
