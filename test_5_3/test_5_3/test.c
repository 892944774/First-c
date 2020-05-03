#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

//int main()
//{
//	/*int *p = malloc(p, 20);
//	if (p == NULL)
//	{
//		return 0;
//	}
//
//	int* p2 = realloc(p, 40);
//	if (p2 != NULL)
//	{
//		p = p2;
//	}*/
//
//	int *p = realloc(NULL, 40);//等价于malloc(40)
//
//	return 0;
//}

//int main()
//{
//	//1 对空指针的解引用操作
//	int *p = (int*)malloc(40);
//	*p = 12;//开辟空间失败，没有对p进行NULL的判断
//
//	//2 对动态开辟的内存越界访问
//	//int *p = (int*)malloc(40);
//	//if(p == NULL)
//	//{
//	//	return 0;
//	//}
//	//int i = 0;
//	//for (i = 0; i <= 10; i++)
//	//{
//	//	*(p + i) = i;
//	//}
//	//free(p);
//	//p = NULL;
//
//	//3 对非动态内存使用free释放
//	//int a = 10;
//	//int *p = &a;
//	//*p = 20;
//	////...
//
//	//free(p);
//	//p = NULL;
//
//	//4 使用free释放动态开辟内存的一部分
//	//int *p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	*p++ = i;
//	//}
//	//free(p);//p最后指向的是40个字节的位置，不是动态开辟出来内存的起始位置
//	//p = NULL;
//
//	//5 对同一动态内存的多次释放
//	//int *p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	//free(p);
//	////...
//	//free(p);
//
//	//6 对动态开辟的内存忘记释放(内存泄漏)
//	while (1)
//	{
//		malloc(1);//一直在用，没有回收空间
//	}
//	return 0;
//}

//几个经典的笔试题

//void GetMemory(char *p)
//{
//	p = (char*)malloc(100);
//}
//
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}

//改正1
//void GetMemory(char **p)
//{
//	*p = (char*)malloc(100);
//}
//
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//
//	free(str);
//	str = NULL;
//}

//改正2
//char* GetMemory(char *p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//
//void Test(void)
//{
//	char *str = NULL;
//	str = GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(p);
//	p = NULL;
//}
//
//int main()
//{
//	Test();
//	//1 str以值传递的形式传给p,p是GetMemory函数的形参，只能在函数内部有效,
//	//当GetMemory函数返回后,动态开辟的内存尚未释放，并且无法找到
//	//2 运行程序崩溃，内存泄漏
//	return 0;
//}

//char *GetMemory()
//{
//	char p[] = "hello world";
//	return p;//栈区
//}
//
//void Test(void) 
//{
//	char *str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//
//int main()
//{
//	Test();//非法访问，栈空间的地址只是在本身函数范围内有效，出了那个范围就没有了，造成非法访问
//	return 0;
//}

//int* test()
//{
//	int a = 10;//栈区，但若用static修饰，a在静态区，可以被返回
//	return 0;
//}
//
//int main()
//{
//	int* p = test();
//	*p = 20;
//	return 0;
//}

//int* test()
//{
//	int *ptr = malloc(100);//堆区   可以
//	return ptr;
//}
//
//int main()
//{
//	int *p = test();
//	return 0;
//}

//void GetMemory(char **p, int num)
//{
//	*p = (char *)malloc(num);
//}
//
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);//忘记释放动态开辟的空间 导致内存泄漏
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

void Test()
{
	char *str = (char *)malloc(100);
	strcpy(str, "hello");
	free(str);
	if (str != NULL)
	{
		strcpy(str, "world");
		printf(str);//非法访问内存  ，str已经提前释放了地址空间
	}
}

int main()
{
	Test();
	return 0;
}