#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	//指针数组
//	//int* arr[10];
//	//数组指针
//	//int* (*pa)[10] = &arr;
//	//函数指针
//	//int(*pAdd)(int, int) = Add;//&Add也行
//	//int sum = (*pAdd)(1, 2);
//	//int sum = pAdd(1, 2);
//	//printf("%d\n", sum);
//	//函数指针的数组
//	int(*pArr[5])(int, int);
//	//指向函数指针数组的指针
//	int(*(*ppArr[5]))(int, int) = &pArr;
//	return 0;
//}

//冒泡排序,只能排整形
//void bubble_sort(int arr[], int sz)
//{
//	//躺数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟几对比价
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}

#include <stdlib.h>
struct Stu
{
	char name[20];
	int age;
};

//void* 无类型的指针， 可以接收任意类型的地址，不能解引用操作
int cmp_int(const void* e1, const void* e2)//e1 e2接收要比较两个元素比较的地址
{
	//比价两个整形值
	return *(int*)e1 - *(int*)e2;
}

//void test1()
//{
//	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	} 
//}

int cmp_float(const void* e1, const void* e2)
{
	return (int)(*(float*)e1 - *(float*)e2);
}

//void test2()
//{
//	float f[] = {9.0, 8.0, 7.0, 6.0, 5.0, 4.0};
//	int sz = sizeof(f) / sizeof(f[0]);
//	qsort(f, sz, sizeof(f[0]), cmp_float);
//	int j = 0;
//	for (j = 0; j < sz; j++)
//	{
//		printf("%f ", f[j]);
//	}
//}

#include <string.h>
int cmp_stu_by_name(const void* e1, const void* e2)
{
	//名字就是比较字符串，字符串比较用strcmp函数
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}
 
void test3()
{
	struct Stu s[3] = { {"zhangsan", 20}, {"lisi", 30}, {"wangwu", 10} };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
	//第一个参数：待排序数组首元素地址
	//第二个参数：待排序数组的元素个数
	//第三个参数：待排序的每个元素的大小 单位字节
	//第四个参数：函数指针，比较两个元素的所用函数的地址-这个函数使用者自己实现
	//            函数指针的两个参数是：带比较的两个元素的地址
}

//qsort - 库函数 - 快速排序（quick sort）
//void qsort(void *base, 
//		   size_t num,
//		   size_t width,
//		   int( *cmp)(const void *e1, const void *e2)
//           );

void Swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

void bubble_sort(void *base, int sz, int width, int (*cmp)(void*e1, void*e2))
{
	int i = 0;
	//躺数
	for (i = 0; i < sz - 1; i++)
	{
		//每一趟比较的对数
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//两元素比较
			if (cmp((char*)base + j*width, (char*)base + (j + 1)*width) > 0)
			{
				//交换
				Swap((char*)base + j*width, (char*)base + (j + 1)*width, width);
			}
		}
	}
}

void test4()
{
	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
}

void test5()
{
	struct Stu s[3] = { { "zhangsan", 20 },{ "lisi", 30 },{ "wangwu", 10 } };
	int sz = sizeof(s) / sizeof(s[0]);
	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_name);
}

int main()
{
	//test1();
	//test2();
	//test3();
	test4();
	//bubble_sort(arr, sz);
	return 0;
}