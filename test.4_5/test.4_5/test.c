#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	//9.0
//	//1001.0
//	//(-1)^0 * 1.001 * 2^3
//
//	float f = 5.5;
//	//5.5
//	//101.1
//	//(-1)^0 * 1.011 * 2^2 
//	//S=0  M=1.011 E=2
//	//在内存中的存放顺序：SEM
//	//s存0  E存2+127  M存011
//	//0 100000001 01100000000000000000000
//	//0100 0000 1011 0000 0000 0000 0000 0000 
//	//0x40b00000
//	return 0;
//}

//int main()
//{
//	int n = 9;
//	//0 00000000 0000000000000000001001 - 补码
//
//	float *pFloat = (float *)&n;
//	printf("n的值为：%d\n", n);//9
//	printf("*pFloat的值为：%f\n", *pFloat);//0.000000
//	//(-1)^0 * 0000000000000000001001 * 2^-126
//
//	*pFloat = 9.0;
//	//1001.0
//	//(-1)^0 * 1.001 * 2^3
//	//01000001000100000000000000000000
//
//	printf("num的值为：%d\n", n);//‭1091567616‬
//	printf("*pFloat的值为：%f\n", *pFloat);//9.0
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	char* pc = arr;
//	printf("%s\n", arr);
//	printf("%s\n", pc);
//	return 0;
//}

//int main()
//{
//	const char* p = "abcdef";//常量字符串,不能被修改
//	*p = 'w';
//	printf("%s\n", p);//编译崩溃
//
//	//printf("%c\n", *p);//%c字符输出  %s字符串输出
//	//printf("%s\n", p);
//	return 0;
//}

//www.stackover.com
//www.segmentfault.com

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "acbdef";
//	char* p1 = "abcdef";
//	char* p2 = "abcdef";
//
//	if (p1 == p2)
//	{
//		printf("hehe\n");//计算机为了节省空间，abcdef在内存中只会存储一个
//	}
//	else
//	{
//		printf("haha\n");
//	}
//
//	/*if (arr1 == arr2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");//首元素地址不一样
//	}*/
//	return 0;
//}

//指针数组  是数组，用来存放指针的
//int main()
//{ 
//	int arr[10] = {0};//整形数组
//	char ch[5] = {0};//字符数组
//	int* parr[4];//存放整形指针的数组 - 指针数组
//	char* pch[5];//存放字符指针的数组 - 字符数组
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = {&a, &b, &c ,&d};
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", *(arr[i]));
//	}
//	return 0;
//}

//int main()
//{
//	int arr1[] = {1,2,3,4,5};
//	int arr2[] = {2,3,4,5,6};
//	int arr3[] = {3,4,5,6,7};
//
//	int* parr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ",*(parr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int* p = NULL;//p是整形指针 - 指向的是整形指针的数组 - 可以存放整形的地址
//	char* pc = NULL;//pc是字符指针 - 指向字符的指针 -  存放字符的地址
//					//数组指针 - 指向数组的指针 - 存放数组的地址
//	//int arr[10] = {0};
//	//arr - 首元素的地址
//	//arr[0] - 首元素的地址
//	//&arr - 数组的地址
//
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int(*p)[10] = &arr;//数组的地址要存起来  []的优先级高于*
//	int *p[10];//p是一个数组，该数组一共10个元素，每个元素是int*
//	//上面的p就是数组指针 * 表示指针 [10]表示指向数组，其中有10个元素，每个元素的是整形
//	return 0;
//}

//int main()
//{
//	char* arr[5];
//	char* (*pa)[5] = &arr;
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	 
//	//int(*p)[10] = &arr;
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", *(*p+i));
//	//}
//
//	/*for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*p)[i]);
//	}*/
//	return 0;
//}

//参数是数组的形式
//void print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}

//参数是指针的形式
void print2(int (*p)[5], int x, int y)
{
	int i = 0;
	for (i = 0; i < x; i++)
	{
		int j = 0;
		for (j = 0; j < y; j++)
		{
			printf("%d ", p[i][j]);
			printf("%d ", *(p[i] + j));
			printf("%d ", *(*(p + i) + j));
			printf("%d ", (*(p + i))[j]);
		}
		printf("\n");
	}
}

int main()
{
	int arr[3][5] = { {1,2,3,4,5}, {2,3,4,5,6}, {3,4,5,6,7} };
	//print1(arr, 3, 5);
	print2(arr, 3, 5);
	return 0;
}