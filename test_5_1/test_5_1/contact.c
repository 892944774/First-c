#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

void InitContact(struct Contact* ps)
{
	memset(ps->data, 0, sizeof(ps->data));//���ṹ��ȫ����ʼ��Ϊ0
	ps->size = 0;//����ͨѶ¼���ֻ��0��Ԫ��
}

void AddContact(struct Contact* ps)
{
	//��ʼ���ж�ͨѶ¼�е���Ϣ�Ƿ�����
	if (ps->size == MAX)
	{
		printf("ͨѶ¼�������޷�����\n");
	}
	else
	{
		printf("����������\n");
		scanf("%s", ps->data[ps->size].name);//���鲻��Ҫȡ��ַ
		printf("����������\n");
		scanf("%d", &(ps->data[ps->size].age));//����Ҫȡ��ַ
		printf("�������Ա�\n");
		scanf("%s", ps->data[ps->size].sex);
		printf("������绰\n");
		scanf("%s", ps->data[ps->size].tele);
		printf("�������ַ\n");
		scanf("%s", ps->data[ps->size].addr); 

		ps->size++;//���һ�γɹ���size��Ҫ��һ
		printf("��ӳɹ�\n");
	}
}

static int FindName(const struct Contact* ps, char name[MAX_NAME])//��static����ֻ����contact.c�п���
{
	//����
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		//�ж�Ҫɾ���˵������Ƿ�����������һ��
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
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		int i = 0;
		//����
		printf("%20s\t%4s\t%5s\t%12s\t%20s\n", "����", "����", "�Ա�", "�绰", "��ַ");//�Ҷ���
		//����
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
	char name[MAX_NAME];//name������ַ�������ǰ��MAX_NAME����
	printf("������Ҫɾ���˵�����\n");
	scanf("%s", &name);
	int i = 0;
	//1����
	int pos = FindName(ps, name);
	if (pos == -1)
	{
		printf("û��ɾ���˵���Ϣ\n");
	}
	//2ɾ���˵���Ϣ
	else
	{
		int j = 0;
		for (j = i; j < ps->size-1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;	
		printf("ɾ���ɹ�\n");
	}
}

void SearchContact(const struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫ�����˵�����\n");
	scanf("%s", name);
	int pos = FindName(ps, name);
	if (pos == -1)
	{
		printf("�Ҳ���������Ϣ\n");
	}
	else
	{
		printf("%20s\t%4s\t%5s\t%12s\t%20s\n", "����", "����", "�Ա�", "�绰", "��ַ");//�Ҷ���			
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
	printf("�������޸���ϵ�˵�����:>");
	scanf("%s", name);
	int pos = FindName(ps, name);
	if (pos == -1)
	{
		printf("����ϵ�˲�����:\n");
	}
	else
	{
		printf("����������\n");
		scanf("%s", ps->data[pos].name);//���鲻��Ҫȡ��ַ
		printf("����������\n");
		scanf("%d", &(ps->data[pos].age));//����Ҫȡ��ַ
		printf("�������Ա�\n");
		scanf("%s", ps->data[pos].sex);
		printf("������绰\n");
		scanf("%s", ps->data[pos].tele);
		printf("�������ַ\n");
		scanf("%s", ps->data[pos].addr);
		printf("�޸����\n");
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