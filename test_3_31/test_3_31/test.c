#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>

//
////int main()
//{
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//			arr[i] = 0;
//	}
//	return 0;
//}

//计算字符串长度
//#include <stdio.h>
//#include <assert.h>
//
//int my_strlen(const char* str)
//{
//	assert(str != NULL);//保证指针的有效性
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] =  "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//拷贝字符
//void my_strcpy(char* dest, char* src) //法 1
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = *src;//拷贝的'\0'
//}

//void my_strcpy(char* dest, char* src)//法2
//{
//	while (*src != '\0')
//	{
//		*dest++ = *src++;//先是解引用，后++
//	}
//	*dest = *src;//拷贝的'\0'
//}



//void my_strcpy(char* dest, char* src)//法3
//{
//	assert(dest != NULL);//断言
//	assert(src != NULL);//断言
//	{
//		while (*dest++ = *src++)
//		{
//			;
//		}
//	}
//}

//char* my_strcpy(char* dest,const char* src)//优化
//{          
//	char* ret = dest;//返回的是起始地址
//	assert(dest != NULL);//断言
//	assert(src != NULL);//断言
//	//把src指向的字符串拷贝到dest指向的空间里面去，包含'\0'字符
//		while (*dest++ = *src++)
//		{
//			;
//		}
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "##################";
//	char arr2[] = "bit";
//	
//	printf("%s\n", my_strcpy(arr1, arr2));//将函数的返回值，作为另一个函数的参数
//	return 0;
//}

//int main()
//{
//	const int num = 10;
//	const int* p = &num;//const修饰指针变量，不能修改num的地址
//	// const 放在指针变量*左边，修饰的是*p，也就是说：不能通过p改变*p(num)的值
//	// const 放在指针变量*右边，修饰的是指针变量p本身，p不能被改变
//	*p = 20;
//	printf("%d\n", num);
//	return 0;
//}

#include <stdio.h>

void swap_print(int* arr, int sz)
{
	int left = 0;
	int right = sz - 1;
	int tmp = 0;

	while (left < right)
	{
		while ((left < right) && (arr[left] % 2 == 0))
		{
			left++;
		}
		while ((left < right) && (arr[right] % 2 == 1))
		{
			right--;
		}
		if (left < right)
		{
			tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}

int main()
{
	int i = 0;
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int sz = sizeof(arr) / sizeof(arr[0]);
	swap_print(arr,sz);
	
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}