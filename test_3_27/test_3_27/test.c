#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	//int* p;//局部变量不初始化,里面放的是随机值
//	int a[10] = { 0 };
//	int i = 0;
//	int* p = a;
//	for (i = 0; i <= 12; i++) 
//	{
//		*p = i;
//		p++;//p越界访问，变为野指针
//	}
//	return 0;
//}

//int* test()
//{
//	int a = 10;
//	return &a;
//}
//
//int main()
//{
//	int* p = test(); 
//	printf("%d\n", *p);
//	return 0;
//}

//int main()
//{
//	/*int a = 10;
//	int* pa = &a;
//	int* p = NULL;*/// NULL-用来初始化指针的，给指针赋值
//
//	//int a = 10;
//	//int* pa = &a;
//	//*pa = 20;
//
//	//pa = NULL;//不需要指针时将指针置为空指针
//	//*pa = 10;//error
//	return 0; 
//}

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	/*int* pa = arr;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *pa);
//		pa++;
//	}*/
//
//	int* pa = &arr[9];
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *pa);
//		pa--;
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] - &arr[0]);//9
//	return 0;
//}

//int my_strlen(char* str)
//{
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
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//int main()
//{
//	int arr[10] = {0};
//	printf("%p\n", arr);//地址-首元素的地址
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr);
//	//1 &arr - &数组名 - 取出来的是整个数组的地址
//	//2 sizeof(arr) - sizeof(数组名) - 数组名计算的是整个数组的大小
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(p+i));
//	}
//	/*for (i = 0; i < 10; i++)
//	{
//		printf("%p  =====   %p\n", p + i, &arr[i]);
//	}*/
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;//*代表指针，代表指向的对象是int
//	int** ppa = &pa;//二级指针
//	printf("%d\n", **ppa);
//	return 0;
//}

int main()
{
	int a = 1;
	int b = 2;
	int c = 3;
	int* arr[3] = {&a, &b, &c};
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *arr[i]);
	}
	return 0;
}
