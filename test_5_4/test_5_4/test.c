#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//柔性数组

//struct S 
//{
//	int n;
//	int arr[];//未知大小同arr[0] - 柔性数组成员-数组大小可调整
//};
//
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));//4   柔型数组的大小不计算在内
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5*sizeof(int));
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;//0 1 2 3 4 
//	}
//	假设再增加的5个字节不够，用malloc继续开辟新空间
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

//atoi模拟实现
//int atoi(const char *nptr);  把字符串转换成整型数的一个函数

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

	while (*src == ' ')  //跳过空白符
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
	else if (*src < '0' || *src > '9')  //如果第一位既不是符号也不是数字，直接返回异常值
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