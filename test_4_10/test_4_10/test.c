#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	//ָ������
//	//int* arr[10];
//	//����ָ��
//	//int* (*pa)[10] = &arr;
//	//����ָ��
//	//int(*pAdd)(int, int) = Add;//&AddҲ��
//	//int sum = (*pAdd)(1, 2);
//	//int sum = pAdd(1, 2);
//	//printf("%d\n", sum);
//	//����ָ�������
//	int(*pArr[5])(int, int);
//	//ָ����ָ�������ָ��
//	int(*(*ppArr[5]))(int, int) = &pArr;
//	return 0;
//}

//ð������,ֻ��������
//void bubble_sort(int arr[], int sz)
//{
//	//����
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//һ�˼��Աȼ�
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

//void* �����͵�ָ�룬 ���Խ����������͵ĵ�ַ�����ܽ����ò���
int cmp_int(const void* e1, const void* e2)//e1 e2����Ҫ�Ƚ�����Ԫ�رȽϵĵ�ַ
{
	//�ȼ���������ֵ
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
	//���־��ǱȽ��ַ������ַ����Ƚ���strcmp����
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}
 
void test3()
{
	struct Stu s[3] = { {"zhangsan", 20}, {"lisi", 30}, {"wangwu", 10} };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
	//��һ��������������������Ԫ�ص�ַ
	//�ڶ��������������������Ԫ�ظ���
	//�������������������ÿ��Ԫ�صĴ�С ��λ�ֽ�
	//���ĸ�����������ָ�룬�Ƚ�����Ԫ�ص����ú����ĵ�ַ-�������ʹ�����Լ�ʵ��
	//            ����ָ������������ǣ����Ƚϵ�����Ԫ�صĵ�ַ
}

//qsort - �⺯�� - ��������quick sort��
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
	//����
	for (i = 0; i < sz - 1; i++)
	{
		//ÿһ�˱ȽϵĶ���
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//��Ԫ�رȽ�
			if (cmp((char*)base + j*width, (char*)base + (j + 1)*width) > 0)
			{
				//����
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