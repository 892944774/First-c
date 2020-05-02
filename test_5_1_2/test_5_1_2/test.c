#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <assert.h>

//int main()
//{
//	//void *malloc(size_t size);
//	//向内存申请10个整形的空间
//	int* p = (int*)malloc(10*sizeof(int));//返回的是void*, 强制类型转换为int*
//	if (p == NULL)
//	{
//		//打印一个错误原因的一个方式
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
//	//当动态内存申请的空间不再使用的时候，就应该还给操作系统
//	free(p);
//	p = NULL;
//	return 0;   
//}

//int main()
//{
//	//void *calloc(size _t num, size_t size);
//	//和malloc一样，开辟失败返回一个空指针
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
//	//free是释放动态开辟的空间的
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
//	//假设20个字节的空间不能满足我们使用
//	//希望有40个字节空间大小
//	//这里就可以用realloc来调整动态开辟的内存
//	//void *realloc(void *memblock, size_t size);
//
//	//realloc开辟空间的内部细节：
//	//1 因为内存在堆区的空间是按照一定方式分布的,想要在原来malloc开辟空间的基础上再补充新的空间话，如果p指向后面的空间足够大，则继续开辟新的空间，返回p的地址
//	//2 如果后面的空间不足，则realloc函数重新开辟一块空间，能满足malloc+realloc开辟的空间大小，并将原来malloc上开辟出来的值赋到新的空间上，返回的是重新开辟空间的地址，原来的地址free释放
//	//3 如果realloc开辟失败，返回的是空指针，造成原数据丢失，则需要用新的变量接收realloc的返回值
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
//	//释放内存
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	//1 对NULL的解引用操作
//	//int *p = (int*)malloc(40);
//	////万一malloc失败，p就被赋值为NULL
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
//	//2 对动态内存开辟的越界访问
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
//	//3 对非动态开辟内存的free
//	int a = 10;
//	int* p = &a;
//	*p = 20;//栈区上的指针
//
//	free(p);//堆区上的指针
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
//		*dest++ = *src++;//先将放到寄存器，然后src++，最后返回寄存器里面的值
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