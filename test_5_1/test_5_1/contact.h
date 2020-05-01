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

//ö�����Ӵ���Ŀɶ���
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

//ͨѶ¼����
struct Contact
{
	struct PeoInfo data[MAX];//���1000��Ԫ�ص�������Ϣ
	int size;//��¼��ǰ�Ѿ��е�Ԫ�ظ���
};

//��������
//ͨѶ¼��ʼ������
void InitContact(struct Contact* ps);

//������ϵ����Ϣ
void AddContact(struct Contact* ps);

//��ʾ��ϵ�˵���Ϣ
void ShowContact(const struct Contact* ps);//��Ϊֻ����ʾpsָ������ݣ����޸ģ����Լ���const����

//ɾ����ϵ��
void DelContact(struct Contact* ps);

//Ѱ����ϵ����Ϣ
void SearchContact(const struct Contact* ps);

//�޸���ϵ����Ϣ
void ModifyContact(struct Contact* ps);

//������ϵ��
void SortContact(struct Contact* ps);
