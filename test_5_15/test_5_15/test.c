#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//#define MAX(X, Y)  (X)>(Y)?(X):(Y)
//
//int main()
//{
//	int a = 10;
//	int b = 11;
//
//	int max = MAX(a++, b++);
//	//��ס����Ĳ������滻�����Ǽ���ú����ȥ
//	//int max = ((a++)>(b++)?(a++):(b++));
//	//��ִ��(a++)>(b++),aΪ11��bΪ12,
//	//��ִ��(a++)>(b++)������(a++)��ִ�У�(b++)��ֵ�ȸ���max��Ȼ��b��++Ϊ13
//
//	printf("%d %d %d\n", max, a, b);//12 11 13
//	return 0;
//}

//#define SIZEOF(type) sizeof(type)
//
//int main()
//{
//	int ret = SIZEOF(int);
//	//int ret = sizeof(int);
//	printf("%d\n", ret);
//	return 0;
//}

//#define MALLOC(num, type) (type*)malloc(num*sizeof(type))
//
//int main()
//{
//	//������ʾ
//	int* p = (int*)malloc(10*sizeof(int));
//	//���ʾ
//	int* p = MALLOC(10, int);
//	//int* p = (int*)malloc(10 * sizeof(int));
//	return 0;
//}

//#define DEBUG
//
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//#ifdef DEBUG
//		printf("%d ", arr[i]);
//#endif
//	}
//	return 0;
//}

//int main()
//{
//#if 1==2
//	printf("haha\n");
//#elif 2==2
//	printf("hehe\n");
//#else
//	printf("xixi\n");
//#endif
//
//	return 0;
//}

//#define DEBUG 0
//
//int main()
//{
////#if defined(DEBUG)
////	printf("hehe\n");//hehe
////#endif
//
//#if !defined(DEBUG)
//	printf("hehe\n");//����ӡ
//#endif
//	return 0;
//}

#include <stddef.h>
//offsetof(�ṹ������, Ԫ����)����ṹ��ָ���ƫ����

//struct S
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//int main()
//{
//	printf("%d\n", offsetof(struct S, c1));//0
//	printf("%d\n", offsetof(struct S, a));//4
//	printf("%d\n", offsetof(struct S, c2));//8
//	return 0;
//}

struct S
{
	char c1;
	int a;
	char c2;
};

#define my_offsetof(struct_name, member_name) (int)&(((struct_name*)0)->member_name)

int main()
{
	printf("%d\n", my_offsetof(struct S, c1));//0
	printf("%d\n", my_offsetof(struct S, a));//4
	printf("%d\n", my_offsetof(struct S, c2));//8
	return 0;
}
