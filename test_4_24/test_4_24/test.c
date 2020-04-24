#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>

//void* my_memcpy(void* dest,const void* src, size_t count)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	void* ret = dest;
//
//	while (count--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr1[] = {1,2,3,4,5};
//	int arr2[10] = {0};
//	//把arr1的内容拷贝到arr2中
//	my_memcpy(arr2, arr1, 20);//不能进行重叠拷贝
//	return 0;
//}

//void* my_memmove(void* dest,const void* src, size_t count)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	void* ret = dest;
//	
//		if (dest < src)
//		{
//			//前向后
//			while(count--)
//			{
//				*(char*)dest = *(char*)src;
//				++(char*)dest;
//				++(char*)src;
//			}
//		}
//		else
//		{
//			//后向前
//			while (count--)
//			{
//				*((char*)dest + count) = *((char*)src + count);
//			}
//		}
//		return ret;
//}
//
//int main()
//{
//	int arr1[] = {1,2,3,4,5,6,7,8,9,10};
//	my_memmove(arr1+2, arr1, 20);
//	return 0;
//}

//内存比较
//int main()
//{
//	//01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00
//	//01 00 00 00 02 00 00 00 05 00 00 00 03 00 00 00 
//	int arr1[] = {1,2,3,4,5};
//	int arr2[] = {1,2,5,4,3};
//
//	//int ret = memcmp(arr1, arr2, 8);//0
//	int ret = memcmp(arr1, arr2, 9);//-1
//	printf("%d\n", ret);
//	return 0;
//}

//内存设置
//void *memset( void *dest, int c, size_t count );
//int main()
//{
//	//char arr[10] = {0};
//	//memset(arr, '#', 10);//10代表的是10个字节
//
//	int arr[10] = {0};
//	//40字节
//	//01 01 01 01 01 01 01 01 01 01 00 00 ……
//	memset(arr, 1, 10);//10代表的是10个字节
//	return 0;
//}

//声明一个结构体类型

//关键字 + 标签
//struct Stu
//{
//	//结构体的成员变量
//	char name[20];
//	char tele[12];
//	char sex[10];
//	int age;
//}s4, s5, s6;//全局变量
//
//struct Stu s3;//全局变量
//int main()
//{
//	//创建结构体变量
//	struct Stu s1;
//	struct Stu s2;
//	return 0;
//}

//结构体的自引用
//struct Note
//{
//	int data;//数据域
//	struct Note* next;//指针域
//};
//
//int main()
//{
//	return 0;
//}

//结构体内存对齐   用空间换取时间
//struct S1
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//struct S2
//{
//	char c1;
//	char c2;
//	int a;
//};
//
//int main()
//{
//	struct S1 s1 = {0};
//	printf("%d\n", sizeof(s1));//12
//
//	struct S2 s2 = {0};
//	printf("%d\n", sizeof(s2));//8
//	return 0;
//}

//设置默认对齐数为4
//#pragma pack(4)
//struct S
//{
//	char c1;//1
//	//7
//	double d;//8
//};
//#pragma pack()
////取消设置的对齐数
//
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));
//	return 0;
//}

#include <stddef.h>
struct S
{
	char c;
	int i;
	double d;
};

int main()
{
	//offsetof();//offset偏移量 of相对于起始位置的偏移量
	printf("%d\n", offsetof(struct S, c));//0
	printf("%d\n", offsetof(struct S, i));//4
	printf("%d\n", offsetof(struct S, d));//8
	return 0;
}