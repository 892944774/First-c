#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int main()
//{
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	c = a + b;
//	printf("%d %d", a+b, c);//printf在传入参数的时候如果是整形会默认传入四字节
//	00000000 00000000 000000001 00101100‬ 
//	00101100‬ 
//	return 0;
//}

//在屏幕上打印杨辉三角
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	int arr[100][100] = {0};
//	printf("请输入行数:\n");
//	scanf("%d", &n);
//
//	for (i = 0; i < n; i++)
//	{
//		arr[i][0] = 1;
//	}
//	for (i = 1; i < n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			arr[i][j] = arr[i - 1][j - 1] + arr[i-1][j];
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%3d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//猜名次

