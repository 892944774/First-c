#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a = 10;
	int* p = 0;
	p = &a;//取地址 p用来存放a的地址
	printf("%p\n", p);
	printf("%p\n", &a);
	*p = 20;// * - 解引用操作符
	printf("a = %d\n", a);
	//有一种变量是用来存放地址的--指针变量
	//printf("%p\n", &a);
	return 0;
}
//#define 定义的标识符常量
//#define MAX 100
//#define 可以定义宏-带参数
 
//函数的实现
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//#define MAX(X, Y) (X>Y?X:Y)
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数
//	int max = Max(a, b);
//	printf("max = %d\n", max);
//	//宏的方式
//	max = MAX(a, b);
//
//	printf("max = %d\n", max);
//	return 0;
//}

//static 修饰局部变量  局部变量的生命周期变长
//static 修饰全局变量  改变了变量的作用域 - 让静态的全局变量只能在自己所在的源文件内部使用  出了源文件就没法再使用
//static 修饰函数  也是改变了函数的作用域（不准确），改变了函数的链接属性，普通的函数有外部链接属性，main函数用，只需要声明
//static 将外部链接属性—> 内部链接属性

//声明外部函数
//extern int Add(int, int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}

//int main()
//{
//	//extern - 声明外部符号的
//	extern int g_val;
//	printf("g_val = %d\n", g_val);
//
//	return 0;
//}

//void test()
//{
//	static int a = 1;//a是一个静态的局部变量
//	a++;
//	printf("a = %d\n", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i<5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//int mian()
//{
//	register int a = 10;//建议吧a定义成寄存器变量
//	//int定义的变量是有符号的
//	// signed int  
//	unsigned int num = 1;
//	//struct - 结构体关键字
//	//union - 联合体/共用体
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);//()--函数调用操作符
//	printf("sum = %d\n", sum);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//
//	max = (a > b ? a : b);//a > b成立，执行a,否则执行b
//	if (a > b)
//		max = a;
//	else
//		max = b;
//	printf("%d\n", max);
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14;//强制类型转换
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	//int b = a++;//后置++,先使用，再++ 11 10 
//	int b = ++a;//前置++，先++，再使用   11 11 
//	int b = a--;//后置--，先使用，再--   9 10
//	int b = --a;//前置--，先--，再使用    9 9
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int a = 0;//4个字节，32bit位
//	int b = ~a;
//	//~--按（2进制）位取反
//    //00000000000000000000000000000000
//	//11111111111111111111111111111111
//	//11111111111111111111111111111110
//	//10000000000000000000000000000001
//	//原码，反码，补码
//  //正数的原码，反码补码相同
//	//负数在内存中存储的是时候，存储的是二进制的补码
//	//原码符号位不变，其他位取反得反码，反码加一得补码
//	//补码减一到反码，符号位不变，其他位取反得原码
//	printf("%d\n", b);//使用的，打印的是这个是的原码
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int arr[] = {1, 2, 3, 4, 5, 6};
//	printf("%d\n", sizeof(arr));//24
//	printf("%d\n", sizeof(arr)/sizeof(arr)[0]);
//
//	return 0;
//
//}