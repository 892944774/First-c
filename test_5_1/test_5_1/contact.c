#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

void InitContact(struct Contact* ps)
{
	memset(ps->data, 0, sizeof(ps->data));//将结构体全部初始化为0
	ps->size = 0;//设置通讯录最初只有0个元素
}

void AddContact(struct Contact* ps)
{
	//开始先判断通讯录中的信息是否满了
	if (ps->size == MAX)
	{
		printf("通讯录以满，无法增加\n");
	}
	else
	{
		printf("请输入名字\n");
		scanf("%s", ps->data[ps->size].name);//数组不需要取地址
		printf("请输入年龄\n");
		scanf("%d", &(ps->data[ps->size].age));//年龄要取地址
		printf("请输入性别\n");
		scanf("%s", ps->data[ps->size].sex);
		printf("请输入电话\n");
		scanf("%s", ps->data[ps->size].tele);
		printf("请输入地址\n");
		scanf("%s", ps->data[ps->size].addr); 

		ps->size++;//添加一次成功后，size需要加一
		printf("添加成功\n");
	}
}

static int FindName(const struct Contact* ps, char name[MAX_NAME])//用static修饰只能在contact.c中看到
{
	//查找
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		//判断要删除人的姓名是否和数组里面的一致
		if (0 == strcmp(ps->data[i].name, name))
		{
			return i;;
		}
	}

	return -1;
}

void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		int i = 0;
		//标题
		printf("%20s\t%4s\t%5s\t%12s\t%20s\n", "名字", "年龄", "性别", "电话", "地址");//右对齐
		//数据
		for (i = 0; i < ps->size; i++)
		{
			printf("%20s\t%4d\t%5s\t%12s\t%20s\n",
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].tele,
				ps->data[i].addr);
		}
	}
}

void DelContact(struct Contact* ps)
{
	char name[MAX_NAME];//name的最大字符可以用前面MAX_NAME代替
	printf("请输入要删除人的名字\n");
	scanf("%s", &name);
	int i = 0;
	//1查找
	int pos = FindName(ps, name);
	if (pos == -1)
	{
		printf("没有删除人的信息\n");
	}
	//2删除人的信息
	else
	{
		int j = 0;
		for (j = i; j < ps->size-1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;	
		printf("删除成功\n");
	}
}

void SearchContact(const struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要查找人的名字\n");
	scanf("%s", name);
	int pos = FindName(ps, name);
	if (pos == -1)
	{
		printf("找不到此人信息\n");
	}
	else
	{
		printf("%20s\t%4s\t%5s\t%12s\t%20s\n", "名字", "年龄", "性别", "电话", "地址");//右对齐			
		printf("%20s\t%4d\t%5s\t%12s\t%20s\n",
			ps->data[pos].name,
			ps->data[pos].age,
			ps->data[pos ].sex,
			ps->data[pos].tele,
			ps->data[pos].addr);
	}
}

void ModifyContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入修改联系人的名字:>");
	scanf("%s", name);
	int pos = FindName(ps, name);
	if (pos == -1)
	{
		printf("此联系人不存在:\n");
	}
	else
	{
		printf("请输入名字\n");
		scanf("%s", ps->data[pos].name);//数组不需要取地址
		printf("请输入年龄\n");
		scanf("%d", &(ps->data[pos].age));//年龄要取地址
		printf("请输入性别\n");
		scanf("%s", ps->data[pos].sex);
		printf("请输入电话\n");
		scanf("%s", ps->data[pos].tele);
		printf("请输入地址\n");
		scanf("%s", ps->data[pos].addr);
		printf("修改完成\n");
	}
}

void SortContact(struct Contact* ps)
{
	int i = 0;
	struct PeoInfo tmp;
	for (i = 0; i < ps->size - 1; i++)
	{
		int j = 0;
		for (j = 0; i < ps->size - 1 - i; i++)
		{
			if (0<strcmp(ps->data[j].name, ps->data[j + 1].name))
			{
			    tmp = ps->data[j];
				ps->data[j] = ps->data[j + 1];
				ps->data[j + 1] = tmp;
			}
		}
	}
}