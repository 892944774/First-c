#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));
//	//在32位平台上，指针的大小都是4
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pb = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pb);
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pb = &a;
//	printf("%p\n", pa);//00A4FA9C
//	printf("%p\n", pa+1);//00A4FAA0  增加4个字节
//
//	printf("%p\n", pb);//00A4FA9C
//	printf("%p\n", pb+1);//00A4FA9D  增加4个字节 
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	//int* pa = &arr;//数组名 - 首元素的地址
//	char* pa = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(pa + 1) = 1;
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = {0};
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < 13; i++)
//	{
//		*(p++) = i;//指针越界，成为野指针
//	}
//	return 0;
//}

