#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//��������

//struct S 
//{
//	int n;
//	int arr[];//δ֪��Сͬarr[0] - ���������Ա-�����С�ɵ���
//};
//
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));//4   ��������Ĵ�С����������
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5*sizeof(int));
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;//0 1 2 3 4 
//	}
//	���������ӵ�5���ֽڲ�������malloc���������¿ռ�
//	struct S* ptr = realloc(ps, 44);
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	free(ps->arr);
//	ps->arr = NULL;
//	free(ps);
//	ps = NULL;
//	return 0;
//}

//atoiģ��ʵ��
//int atoi(const char *nptr);  ���ַ���ת������������һ������

#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//	int a;
//	char *ptr1 = "-121";
//
//	a = atoi(ptr1);
//
//	printf("a = %d\n", a);
//
//	return 0;
//}

#include <stdio.h>                                                                                                                            
#include <stdbool.h>

int my_atoi(const char *src)
{
	int s = 0;
	bool isMinus = false;

	while (*src == ' ')  //�����հ׷�
	{
		src++;
	}

	if (*src == '+' || *src == '-')
	{
		if (*src == '-')
		{
			isMinus = true;
		}
		src++;
	}
	else if (*src < '0' || *src > '9')  //�����һλ�Ȳ��Ƿ���Ҳ�������֣�ֱ�ӷ����쳣ֵ
	{
		s = 2147483647;
		return s;
	}

	while (*src != '\0' && *src >= '0' && *src <= '9')
	{
		s = s * 10 + *src - '0';
		src++;
	}
	return s * (isMinus ? -1 : 1);
}

int main()
{
	int num;

	char *str = "a123456";
	num = my_atoi(str);
	printf("atoi num is: %d \r\n", num);

	return 0;
}