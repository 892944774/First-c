#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//int is_left_move(char* str1, char* str2)
//{
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2)
//		return 0;
//
//	//1 在str1字符串中追加一个str1字符
//	//strcat(str1, str1);err
//	strncat(str1, str1, 6);//abcdefabcdef
//	//2 判断str2指向的字符串是否是str1指向的字符串的子串
//	//strstr - 找子串
//	char * ret = strstr(str1, str2);
//	if (ret == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//}
//
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//	return 0;
//}

//#include <string.h>
//int main()
//{
//	char arr1[30] = "abc";
//	char arr2[] = "def";
//	strcat(arr1, arr2);
//	printf("%s\n", arr1);//abcdef 
//}

//杨氏矩阵，矩阵从左到右递增，从上到下递增，编写程序查找是否存在某个数字

//1 2 3
//4 5 6
//7 8 9

//1 2 3
//2 4 5
//4 5 6

//int Findnum(int arr[3][3], int k, int row, int col)
//{
//	int x = 0;
//	int y = col - 1;//找右上角进行对比
//
//	while (x <= row - 1 && y >= 0)//找右上角对比，最后对比的情况一直向左下角收缩，
//		                       //假设找的是7的话，3*3的矩阵就会收缩到第三行第一列，因为这是极端的情况
//	{
//		if (arr[x][y] > k)//说明右上角的数比想要找的数字大，应该继续向左找
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)//右上角的数字比要找的数字小，继续向下找
//		{
//			x++;
//		}
//		else
//		{
//			return 1;
//		}
//	}
//    //循环完之后找不到，直接返回0
//	return 0;
//}

//int main()
//{
//	int arr[3][3] = { { 1,2,3 },{ 4,5,6 },{ 7,8,9 } };
//	int k = 7;
//	int ret = Findnum(arr, k, 3, 3);
//	if (ret == 1)
//	{
//		printf("找到了\n");
//	}
//	else
//	{
//		printf("没找到\n");
//	}
//	return 0;
//}

//能够返回x y坐标
//int Findnum(int arr[3][3], int k, int* px, int* py)
//{
//	int x = 0;
//	int y = *py - 1;//找右上角进行对比
//
//	while (x <= *px - 1 && y >= 0)//找右上角对比，最后对比的情况一直向左下角收缩，
//								  //假设找的是7的话，3*3的矩阵就会收缩到第三行第一列，因为这是极端的情况
//	{
//		if (arr[x][y] > k)//说明右上角的数比想要找的数字大，应该继续向左找
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)//右上角的数字比要找的数字小，继续向下找
//		{
//			x++;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return 1;
//		}
//	}
//	//循环完之后找不到，直接返回0
//	return 0;
//}
//
//int main()
//{
//	int arr[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
//	int k = 7;
//	int x = 3;
//	int y = 3;
//	
//	//返回型参数
//	int ret = Findnum(arr, k, &x, &y);
//	if (ret == 1)
//	{
//		printf("找到了,下标是%d %d\n", x, y);
//	}
//	else
//	{
//		printf("没找到\n");
//	}
//	return 0;
//}

#include <assert.h>

//strlen 的模拟实现
//size_t == unsigned int
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
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
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("len = %d\n", len);
//
//	//  3  -  6 = -3但是strlen返回的是无符号整形
//	if (strlen("abc") - strlen("abcdef") > 0)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}


//strcpy的模拟实现
//法1
//void my_strcpy(char* str1, char* str2)
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//
//	while (*str2 != '\0')
//	{
//		*str1 = *str2;
//		str1++;
//		str2++;
//	}
//	*str1 = *str2;//当while循环结束后str2指向的就是'\0',最后再把str2的值赋值给str1
//}

//法2
//char* my_strcpy(char* str1,const char* str2)//源头的地址不发生变化，用const修饰
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	//strcpy返回的是目的地的起始位置,后面的循环将str1的位置发生了变化，
//	char* ret = str1;
//
//	while (*str1++ = *str2++)//开始的时候将b赋值给str1,最后将'\0'赋值给str1，表达式的结果的ascall码值为0,跳出循环
//	{
//		;
//	}
//	//返回目的地起始位置的地址
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "bit";
//	
//	//注意事项：
//	//1 源头必须包含'\0',否则拷贝的时候会发生越界访问
//	// char arr2 = {'a', 'b', 'c'};没包含'\0'
//	//2 目标空间必须足够大，包含源字符串
//	//3 目标空间可以被修改
//	// char* p = "abcdef";p指向的是常量字符串，不能被修改
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//char* my_strcat(char* dest, char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	//1 找到目的地字符串的'\0'
//	while(*dest != '\0')
//	{
//		dest++;
//	}
//	//2 开始将src的字符串赋值给dest
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[30] = "abcdefg";//arr1 的空间必须足够大，必须要有'\0',arr2是从'\0'的位置开始追加
//	char arr2[] = "bit";
//	my_strcat(arr1, arr2);
//
//	printf("%s\n", arr1);
//	return 0;
//}

//int my_strcmp(char* str1, char* str2)
//{
//	assert(str1 && str2);
//	//比较
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')//两个都是'\0'
//			return 0;
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//		return 1;//大于
//	else
//		return 0;//小于
//}
//
//int main()
//{
//	//在VS编译器下
//	//>  返回1      ==  0    <  -1
//	//在linux --gcc
//	//>  返回大于0的数字    ==  0    <  <0
//	char* p1 = "abcdef";
//	char* p2 = "aqwer";
//
//	int ret = strcmp(p1, p2);//先比较两字符串的首地址的ASCLL码值，相等向后延伸比较
//
//	printf("%d\n", ret); 
//	return 0;
//}

//int main()
//{
//	char arr1[10] = "abcdef";
//	char arr2[] = "bit";
//	strncpy(arr1, arr2, 4);
//	strncpy(arr1, arr2, 6);//如果源字符串小于拷贝的字符串，拷贝过去后面补'\0'
//
//	return 0;
//}

int main()
{
	char arr1[30] = "hello\0xxxxxx";
	char arr2[] = "world";

	//指定长度的增加
	strncat(arr1, arr2, 3);//将arr2前3个值拷贝到arr1中，拷贝完后系统自动加'\n'
	printf("%s\n", arr1);
}