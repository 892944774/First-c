#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//void bubble_sort(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i <= sz - 1; i++)
//	{
//		//每一趟冒泡排序
//		int flag = 1;//假设这一趟排序的数据已经有序
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//本趟排序的数据不完全有序
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
//	//对arr进行升序排列
//	//arr是数组，对arr进行传参，实际上传递的是数组首元素的地址 &arr[0]
//	bubble_sort(arr,sz);//冒泡排序函数
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

int main()
{
	int arr[] = {1,2,3,4,5,6,7};//数组名就是首元素的地址,两个例外
	printf("%p\n", arr);//004FFA50
	printf("%p\n", arr+1);//004FFA54

	printf("%p\n", &arr[0]);//004FFA50
	printf("%p\n", &arr[0]+1);//004FFA54

	printf("%p\n", &arr);//004FFA50
	printf("%p\n", &arr+1);//数组的地址，值一样，代表的是从这个值开始,004FFA6C

	//1.sizeof(数组名) - 数组名表示整个数组，sizeof(数组名)计算的是整个数组的大小，单位字节
	//2. &数组名，数组名代表的是整个数组，取出的是整个数组的大小
	//printf("%p\n", arr);//012FF758
	//printf("%p\n", &arr[0]);//012FF758
	//printf("%d\n", *arr);//1
	return 0;
}