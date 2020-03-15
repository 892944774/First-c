#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>

//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//
//	return 0;
//}

//#include <string.h>
//int main()
//{
//	//strcpy -- string copy 
//	//strlen - string length
//	char arr1[] = "bit";//"bit\0"
//	char arr2[20] = "##########";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//
//	return 0;
//}

//memset  memory-内存 set-设置
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//
//	return 0;
//}

//int get_max(int x, int y)  //x , y形式参数，
                             //只有在调用的过程中才会实例化，分配内存单元，调用完后自动销毁
//{                          //当实参传递给形参时，形参实际上是实参的一份临时拷贝
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("%d\n", max);
//	return 0;
//}

//void Swap(int* pa, int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	/*int tmp = 0;
//	tmp = a;
//	a = b;
//	b = tmp;*/
//	Swap(&a, &b);
//	printf("a=%d b=%d\n", a , b);
//	return 0;
//}

//用函数打印100-200之间的素数
//#include <math.h>
//
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n%j == 0)
//			return 0;
//	}
//		return 1;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//is_prime(i)函数专门判断是否为素数
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}

//int is_leap_year(int n)
//{
//	if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断year是否为闰年
//		if (is_leap_year(year) == 1)
//			printf("%d ", year);
//	}
//	return 0;
//}

//             本质上arr是一个指针
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = (right + left)/2;//不能在循环外面
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 7;
//	//                    传递过去的是首元素的地址
//	int ret = binary_search(arr, k, sz);//在数组arr中查找，找k的下标
//	if (ret == -1)
//	{
//		printf("找不到指定的数字\n");
//	}
//	else
//	{
//		printf("找到了，下标是%d\n", ret);
//	}
//	return 0;
//}

//int Add(int* p)
//{
//	(*p)++;//++的优先级高
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	return 0;
//}

//链式访问
//int main()
//{
//	/*int len = 0;
//	len = strlen("abc");*/
//	printf("%d\n", strlen("abc"));
//	return 0;
//}

int main()
{
	printf("%d", printf("%d", printf("%d", 43)));//printf的返回值是打印在屏幕上字符的个数

	return 0;
}
