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
//	//��arr1�����ݿ�����arr2��
//	my_memcpy(arr2, arr1, 20);//���ܽ����ص�����
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
//			//ǰ���
//			while(count--)
//			{
//				*(char*)dest = *(char*)src;
//				++(char*)dest;
//				++(char*)src;
//			}
//		}
//		else
//		{
//			//����ǰ
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

//�ڴ�Ƚ�
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

//�ڴ�����
//void *memset( void *dest, int c, size_t count );
//int main()
//{
//	//char arr[10] = {0};
//	//memset(arr, '#', 10);//10�������10���ֽ�
//
//	int arr[10] = {0};
//	//40�ֽ�
//	//01 01 01 01 01 01 01 01 01 01 00 00 ����
//	memset(arr, 1, 10);//10�������10���ֽ�
//	return 0;
//}

//����һ���ṹ������

//�ؼ��� + ��ǩ
//struct Stu
//{
//	//�ṹ��ĳ�Ա����
//	char name[20];
//	char tele[12];
//	char sex[10];
//	int age;
//}s4, s5, s6;//ȫ�ֱ���
//
//struct Stu s3;//ȫ�ֱ���
//int main()
//{
//	//�����ṹ�����
//	struct Stu s1;
//	struct Stu s2;
//	return 0;
//}

//�ṹ���������
//struct Note
//{
//	int data;//������
//	struct Note* next;//ָ����
//};
//
//int main()
//{
//	return 0;
//}

//�ṹ���ڴ����   �ÿռ任ȡʱ��
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

//����Ĭ�϶�����Ϊ4
//#pragma pack(4)
//struct S
//{
//	char c1;//1
//	//7
//	double d;//8
//};
//#pragma pack()
////ȡ�����õĶ�����
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
	//offsetof();//offsetƫ���� of�������ʼλ�õ�ƫ����
	printf("%d\n", offsetof(struct S, c));//0
	printf("%d\n", offsetof(struct S, i));//4
	printf("%d\n", offsetof(struct S, d));//8
	return 0;
}