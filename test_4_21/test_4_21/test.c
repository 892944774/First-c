#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//int strncmp(const char *string1, const char *string2, size_t count);

//int main()
//{
//	//strcmp - 字符串比较
//	 const char* p1 = "abcdef";//指向的是常量字符串，最好用const修饰
//   const char* p2 = "abcqwer";
//	//int ret = strcmp(p1, p2);//返回的是大于、小于、等于0的数字
//	int ret = strncmp(p1, p2, 3);//可以限制比较的字符个数   返回的是大于、小于、等于0的数字（同strcmp）
//
//	printf("%d\n", ret);
//	return 0;
//}

//strstr - 查找字符串
//char *strstr(const char *string, const char *strCharSet);因为是查找，不希望改变两个字符串，用const
//int main()
//{
//	//NULL - 空指针
//    //NUll/Null - '\0'
//	char* p1 = "abcdefghi";
//	char* p2 = "def";
//	char* ret = strstr(p1, p2);//在p1里面查找p2是否存在  
//	if (ret == NULL)
//		printf("子串不存在\n");
//	else
//		printf("%s\n", ret);//defghi 找的是d地址第一次出现后面的字符串打印
//	return 0;
//}

//#include <assert.h>
////kmp - 算法  也是找子串
//char* my_strstr(const char* p1, const char* p2)//见24节课，40分钟
//{
//	assert(p1 != NULL);
//	assert(p2 != NULL);
//	char *s1 = (char*)p1;
//	char *s2 = (char*)p2;
//	char *cur = (char*)p1;
//	if (*p2 == '\0')
//	{
//		return (char*)p1;
//	}
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = (char*)p2;
//
//		while (*s1 && *s2 && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if(*s2 == '\0')
//		{
//			return cur;//找到子串，打印的是指向cur地址后面的值
//		}
//		if (*s1 == '\0')
//		{ 
//			return NULL;
//		}
//		cur++;
//	}
//	return NULL;//找不到子串
//}
//
//int main()
//{
//	char* p1 = "abcdefghi";
//	char* p2 = "def";
//	char* ret = my_strstr(p1, p2);
//	if (ret == NULL)
//		printf("子串不存在\n");
//	else
//		printf("%s\n", ret);
//	return 0;
//}

//int main()
//{
//	//zpw@bitedu.tech
//	//char arr[] = "zpw@bitedu.tech";
//	char* p = "@.";
//
//	char arr[] = "192.168.1.3";
//	char* p = ".";//把分隔符传过来 
//
//	char buf[1024] = {0};
//	//切割buf中的字符串
//	strcpy(buf, arr);
//
//	char* ret = NULL;
//	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))//strtok会记住上次分割的位置，下次从要分割的位置开始寻找，所以传空指针
//	{
//		printf("%s\n", ret);
//	}
//
//	//简单举例
//	//char* ret = strtok(arr, p);
//	//printf("%s\n", ret);//返回的是s的地址，并将@改成'\0'
//
//	//char* ret1 = strtok(NULL, p);//第二次以后不需要传数组地址，传空指针
//	//printf("%s\n", ret1);//返回的是b的地址，并将.改成'\0'
//
//	//char* ret2 = strtok(NULL, p);
//	//printf("%s\n", ret2);
//	return 0;
//}

//strerror - 返回错误码，对应的错误信息
//int main()
//{
//	//char* ret = strerror(1);
//	//printf("%s\n", ret);
//	//错误码   错误信息
//	//0        No error
//	//1        Operation not permitted
//	//2        No such file or directory
//	//...
//	//erron 是一个全局的错误码的变量
//	//当c语言的库函数在执行过程中，发生了错误，就会把对应的错误码，赋值到errno中
//
//	//char* str = strerror(errno);
//	//printf("%s\n", str);
//
//	//打开文件
//	FILE* pf = fopen("test.txt", "r");//打开text.txt文件，r是读文件
//
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//		printf("open file sccess\n");
//
//	return 0;
//}

//#include <ctype.h>
//int main()
//{
//	//char ch = '1';
//	////int ret = islower(ch);//判断是否是小写字母，是返回大于0的数字
//	//int ret = isdigit(ch);
//
//	//printf("%d\n", ret);
//
//	//char ch = tolower('q');//字母转小写函数 
//	//putchar(ch);
//
//	char arr[] = "I AM A Student";
//	int i = 0;
//	while (arr[i])
//	{
//		if (isupper(arr[i]))
//		{
//			arr[i] = tolower(arr[i]);
//		}
//		i++;
//	}
//	printf("%s\n", arr);
//	return 0;
//}


//strcpy 只能拷贝字符串，不能拷贝数组  数组拷贝用memcpy
//void *memcpy(void *dest, const void *src, size_t count);

//struct S 
//{
//	char name[20];
//	int age;
//};
//
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5};
//	int arr2[5] = { 0 };
//	struct S arr3[] = { {"张三", "23"}, {"李四", "24"} };
//	struct S arr4[4] = {0};
//	memcpy(arr4, arr3, sizeof(arr3));
//
//	//memcpy(arr2, arr1, sizeof(arr1));//拷贝arr1的大小，5个字节
//	return 0;
//}

//#include <stdio.h>
//#include <assert.h>
//struct S 
//{
//	char name[20];
//	int age;
//};
//
//void* my_memcpy(void* dest, void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (num--)//一共拷贝num次，单位字节
//	{
//		*(char*)dest = *(char*)src;//因为不清楚src里面放置的内容,通过一个一个字节进行拷贝
//		++(char*)dest;//先转换，再++
//		++(char*)src;
//	}
//	return ret;//最后返回起始位置的地址
//}
//
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5};
//	int arr2[5] = { 0 };
//	struct S arr3[] = { {"张三", "23"}, {"李四", "24"} };
//	struct S arr4[4] = {0};
//	memcpy(arr4, arr3, sizeof(arr3));
//
//	return 0;
//}

//c语言标准规定:
//memcpy 只要处理 不重叠的内存拷贝就可以
//memmove 处理重叠的内存拷贝
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	//my_memcpy(arr+2, arr, 20);//想拷贝的结果是{1,2,1,2,3,4,5,8,9,10}
//	int i = 0;
//	//for (i=0;i<10;i++)
//	//{
//	//	printf("%d ", arr[i]);//拷贝的结果和预期不符，拷贝的地址和目的地地址有关联，20课45分钟
//	//}
//	//for (i=0;i<10;i++)
//	//{
//	//	printf("%d ", arr[i]);//拷贝的结果和预期不符，拷贝的地址和目的地地址有关联，20课45分钟
//	//}
//
//	memmove(arr + 2, arr, 20);//处理重叠拷贝的情况
//	for (i=0;i<10;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int i = 0;
	memmove(arr+2, arr, 20);

	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}