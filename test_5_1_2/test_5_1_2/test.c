#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <assert.h>

//int main()
//{
//	//void *malloc(size_t size);
//	//���ڴ�����10�����εĿռ�
//	int* p = (int*)malloc(10*sizeof(int));//���ص���void*, ǿ������ת��Ϊint*
//	if (p == NULL)
//	{
//		//��ӡһ������ԭ���һ����ʽ
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//			printf("%d ", *(p+i));
//		}
//	}
//	//����̬�ڴ�����Ŀռ䲻��ʹ�õ�ʱ�򣬾�Ӧ�û�������ϵͳ
//	free(p);
//	p = NULL;
//	return 0;   
//}

//int main()
//{
//	//void *calloc(size _t num, size_t size);
//	//��mallocһ��������ʧ�ܷ���һ����ָ��
//	malloc(sizeof(int));
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p+i));
//		}
//	}
//	//free���ͷŶ�̬���ٵĿռ��
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	//����20���ֽڵĿռ䲻����������ʹ��
//	//ϣ����40���ֽڿռ��С
//	//����Ϳ�����realloc��������̬���ٵ��ڴ�
//	//void *realloc(void *memblock, size_t size);
//
//	//realloc���ٿռ���ڲ�ϸ�ڣ�
//	//1 ��Ϊ�ڴ��ڶ����Ŀռ��ǰ���һ����ʽ�ֲ���,��Ҫ��ԭ��malloc���ٿռ�Ļ������ٲ����µĿռ仰�����pָ�����Ŀռ��㹻������������µĿռ䣬����p�ĵ�ַ
//	//2 �������Ŀռ䲻�㣬��realloc�������¿���һ��ռ䣬������malloc+realloc���ٵĿռ��С������ԭ��malloc�Ͽ��ٳ�����ֵ�����µĿռ��ϣ����ص������¿��ٿռ�ĵ�ַ��ԭ���ĵ�ַfree�ͷ�
//	//3 ���realloc����ʧ�ܣ����ص��ǿ�ָ�룬���ԭ���ݶ�ʧ������Ҫ���µı�������realloc�ķ���ֵ
//	int* ptr = realloc(p, 40);
//	if (ptr != NULL)
//	{
//		p = ptr;
//		int i = 0;
//		for (i = 5; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//
//	//�ͷ��ڴ�
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	//1 ��NULL�Ľ����ò���
//	//int *p = (int*)malloc(40);
//	////��һmallocʧ�ܣ�p�ͱ���ֵΪNULL
//	//*p = 0;//err
//
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	*(p+i) = i;
//	//}
//	//free(p);
//	//p = NULL;
//
//	//2 �Զ�̬�ڴ濪�ٵ�Խ�����
//	int *p = (int*)malloc(5 * sizeof(int));
//	if (p == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	free(p);
//	p = NULL;
//
//	//3 �ԷǶ�̬�����ڴ��free
//	int a = 10;
//	int* p = &a;
//	*p = 20;//ջ���ϵ�ָ��
//
//	free(p);//�����ϵ�ָ��
//	p = NULL;
//	return 0;
//}

//int my_strlen(const char* str)
//{
//	assert(str != NULL);
//	int count = 0;
//	while (*str != '\0')
//	{
//		str++;
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "ADD";
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//char* my_strcpy(char* dest, const char* src)
//{
//	assert("dest != NULL");
//	assert("src != NULL");
//	char* ret = dest;
//	while (*src != '\0')
//	{
//		*dest++ = *src++;//�Ƚ��ŵ��Ĵ�����Ȼ��src++����󷵻ؼĴ��������ֵ
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "bit";
//
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//
//	return 0;
//}


char* my_strncpy(char* dest, const char* src, size_t num)
{
	assert(dest != NULL);
	assert(src != NULL);
	char* ret = dest;
	while (num--)
	{
		*dest++ = *src++;
	}
	return ret;
}

int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "haoren";

	my_strncpy(arr1, arr2, 3);
	printf("%s\n", arr1);
	return 0;
}

char* my_strncat(char* dest, char* src, size_t n)
{
	assert("dest != NULL");
	assert("src != NULL");
	char* ret = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (n--)
	{
		*dest++ = *src++;
	}
	return ret;
}

int main()
{
	char arr1[30] = "abcdef";
	char arr2[] = "sorry";

	my_strncat(arr1, arr2, 2);
	printf("%s\n", arr1);
	return 0;
}