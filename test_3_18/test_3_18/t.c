#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//void bubble_sort(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i <= sz - 1; i++)
//	{
//		//ÿһ��ð������
//		int flag = 1;//������һ������������Ѿ�����
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//������������ݲ���ȫ����
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int i = 0;
//	int arr[] = {1, 2, 3, 4, 5, 6, 7 ,8 ,9, 0};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//��arr������������
//	//arr�����飬��arr���д��Σ�ʵ���ϴ��ݵ���������Ԫ�صĵ�ַ &arr[0]
//	bubble_sort(arr,sz);//ð��������
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

int main()
{
	int arr[] = {1,2,3,4,5,6,7};//������������Ԫ�صĵ�ַ,��������
	printf("%p\n", arr);//004FFA50
	printf("%p\n", arr+1);//004FFA54

	printf("%p\n", &arr[0]);//004FFA50
	printf("%p\n", &arr[0]+1);//004FFA54

	printf("%p\n", &arr);//004FFA50
	printf("%p\n", &arr+1);//����ĵ�ַ��ֵһ����������Ǵ����ֵ��ʼ,004FFA6C

	//1.sizeof(������) - ��������ʾ�������飬sizeof(������)���������������Ĵ�С����λ�ֽ�
	//2. &����������������������������飬ȡ��������������Ĵ�С
	//printf("%p\n", arr);//012FF758
	//printf("%p\n", &arr[0]);//012FF758
	//printf("%d\n", *arr);//1
	return 0;
}