#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}

//����1234���õ�1 2 3 4
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//		printf("%d ", n%10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}

//��д��������������ʱ���������ַ�������
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')//�ҵ����ַ�
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = { "bit2" };
//	//int len = strlen(arr);
//	//printf("%d\n", len);
//	int len = my_strlen(arr);//����ȥ������Ԫ�صĵ�ַ
//	printf("len = %d\n", len);
//	return 0;
//}

//n�Ľ׳�
//int Fac1(int n)//ѭ��
//{
//	int j = 0;
//	int ret = 1;
//	for (j = 1; j <= n; j++)
//	{
//		ret *= j;
//	}
//	return ret;
//}

//int Fac2(int n)//�ݹ�
//{
//	
//	if (n > 1) 
//		return n * Fac2(n - 1);
//	else
//		return 1;	
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac2(n);
//	printf("%d\n", ret);
//	return 0;
//}
//int fib(int n)
//{
//	if (n > 2)
//		return fib(n - 1) + fib(n - 2);
//	else
//		return 1;
//}

//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	//TDD-������������
//	ret = fib(n);
//	printf("%d\n", ret);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1, 2, 3 };//����ȫ��ʼ����ʣ�µ�Ԫ��Ĭ��Ϊ0
//	char arr2[5] = "ab";//ok������������õ���ab\0
//	char arr3[] = "abcdef";//7��Ԫ��
//
//	printf("%d\n", sizeof(arr3));//7
//	printf("%d\n", strlen(arr3));//6
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = {'a', 'b', 'c'};
//	printf("%d\n", sizeof(arr1));//4
//	printf("%d\n", sizeof(arr2));//3
//	printf("%d\n", strlen(arr1));//3
//	printf("%d\n", strlen(arr2));//���ֵ
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9 ,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//	return 0;
//}
int main()
{
	int arr[3][4] = { {1,2,3},{4,5} };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}