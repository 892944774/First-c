#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

//int main()
//{
//	/*int *p = malloc(p, 20);
//	if (p == NULL)
//	{
//		return 0;
//	}
//
//	int* p2 = realloc(p, 40);
//	if (p2 != NULL)
//	{
//		p = p2;
//	}*/
//
//	int *p = realloc(NULL, 40);//�ȼ���malloc(40)
//
//	return 0;
//}

//int main()
//{
//	//1 �Կ�ָ��Ľ����ò���
//	int *p = (int*)malloc(40);
//	*p = 12;//���ٿռ�ʧ�ܣ�û�ж�p����NULL���ж�
//
//	//2 �Զ�̬���ٵ��ڴ�Խ�����
//	//int *p = (int*)malloc(40);
//	//if(p == NULL)
//	//{
//	//	return 0;
//	//}
//	//int i = 0;
//	//for (i = 0; i <= 10; i++)
//	//{
//	//	*(p + i) = i;
//	//}
//	//free(p);
//	//p = NULL;
//
//	//3 �ԷǶ�̬�ڴ�ʹ��free�ͷ�
//	//int a = 10;
//	//int *p = &a;
//	//*p = 20;
//	////...
//
//	//free(p);
//	//p = NULL;
//
//	//4 ʹ��free�ͷŶ�̬�����ڴ��һ����
//	//int *p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	*p++ = i;
//	//}
//	//free(p);//p���ָ�����40���ֽڵ�λ�ã����Ƕ�̬���ٳ����ڴ����ʼλ��
//	//p = NULL;
//
//	//5 ��ͬһ��̬�ڴ�Ķ���ͷ�
//	//int *p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	//free(p);
//	////...
//	//free(p);
//
//	//6 �Զ�̬���ٵ��ڴ������ͷ�(�ڴ�й©)
//	while (1)
//	{
//		malloc(1);//һֱ���ã�û�л��տռ�
//	}
//	return 0;
//}

//��������ı�����

//void GetMemory(char *p)
//{
//	p = (char*)malloc(100);
//}
//
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}

//����1
//void GetMemory(char **p)
//{
//	*p = (char*)malloc(100);
//}
//
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//
//	free(str);
//	str = NULL;
//}

//����2
//char* GetMemory(char *p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//
//void Test(void)
//{
//	char *str = NULL;
//	str = GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(p);
//	p = NULL;
//}
//
//int main()
//{
//	Test();
//	//1 str��ֵ���ݵ���ʽ����p,p��GetMemory�������βΣ�ֻ���ں����ڲ���Ч,
//	//��GetMemory�������غ�,��̬���ٵ��ڴ���δ�ͷţ������޷��ҵ�
//	//2 ���г���������ڴ�й©
//	return 0;
//}

//char *GetMemory()
//{
//	char p[] = "hello world";
//	return p;//ջ��
//}
//
//void Test(void) 
//{
//	char *str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//
//int main()
//{
//	Test();//�Ƿ����ʣ�ջ�ռ�ĵ�ַֻ���ڱ�������Χ����Ч�������Ǹ���Χ��û���ˣ���ɷǷ�����
//	return 0;
//}

//int* test()
//{
//	int a = 10;//ջ����������static���Σ�a�ھ�̬�������Ա�����
//	return 0;
//}
//
//int main()
//{
//	int* p = test();
//	*p = 20;
//	return 0;
//}

//int* test()
//{
//	int *ptr = malloc(100);//����   ����
//	return ptr;
//}
//
//int main()
//{
//	int *p = test();
//	return 0;
//}

//void GetMemory(char **p, int num)
//{
//	*p = (char *)malloc(num);
//}
//
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);//�����ͷŶ�̬���ٵĿռ� �����ڴ�й©
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

void Test()
{
	char *str = (char *)malloc(100);
	strcpy(str, "hello");
	free(str);
	if (str != NULL)
	{
		strcpy(str, "world");
		printf(str);//�Ƿ������ڴ�  ��str�Ѿ���ǰ�ͷ��˵�ַ�ռ�
	}
}

int main()
{
	Test();
	return 0;
}