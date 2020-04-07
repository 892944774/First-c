#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	//字符指针
//	char ch = 'w';
//	char* p = &ch;
//	const char* p2 = "abcdef";
//	//指针数组 - 本质数组-存放指针的数组
//	//int* p1;//整形指针 - 指向整形的指针
//	//char* p2;//字符指针 - 指向字符的指针
//	int arr2[5];//数组
//	int(*pa)[5] = &arr2;//取出数组的地址,pa就是一个数组指针
//	return 0;
//}

//void test(int (*arr)[5])//指针传参
//{}
//
//int main()
//{
//	int arr[3][5] = { 0 };
//
//	test(arr);//二维数组传参
//	          //二位数组的数组名是首元素的地址
//	return 0;
//}

//void test(int* p)
//{}
//
//int main()
//{
//	int a;
//	int p = &a;
//	test(&a);
//	test(p);
//	return 0;
//}

//数组指针 - 指向数组的指针
//函数指针 - 指向函数的指针 - 存放函数地址的指针

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int arr[10] = {0};
//	int(*p)[10] = &arr;
//	//函数只有一个，地址不存在首元素一说，数组才有首元素的概念
//	//&函数名 和 函数名 都是函数的地址
//	/*printf("%p\n", &Add);
//	printf("%p\n", Add);*/
//	int(*pa)(int, int) = &Add;
//	printf("%d\n", (*pa)(2, 3));
//	return 0;
//}

//void Print(char* str)
//{
//	printf("%s\n", str);
//}
//
//int main()
//{
//	void(*p)(char*) = Print;//函数指针
//	(*p)("hello");
//	return 0;
//}
//signal是一个函数声明
//signal函数的参数有2个，第一个是int，第二个是函数指针，该函数指针指向的函数的参数是int，返回值是void
//signal函数的返回值也是一个函数指针“该函数指向的函数的参数是int,返回值是void
//void(* signal(int, void(*)(int)))(int);
//
//typedef void(*pfun_t)(int);
//pfun_t signal(int, pfun_t);

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int(*pa)(int, int) = Add;
//	printf("%d\n", (pa)(2, 3));
//	printf("%d\n", (*pa)(2, 3));
//    //2种方式都可以
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	//指针函数
//	int* arr[5];
//	int i = 0;
//	//需要一个数组，可以存放4个函数的地址 - 函数指针的数组
//	int(*pa)(int, int) = Add;
//	int(*parr[4])(int, int) = {Add, Sub, Mul, Div};//函数指针的数组
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](2, 3));
//	}
//	return 0;
//}

//函数指针数组 - -转移表
//void menu()
//{
//	printf("***********************\n");
//	printf("****1.add   2.sub *****\n");
//	printf("****3.mul   4.div *****\n");
//	printf("******* 0.exit ********\n");
//	printf("***********************\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}

//法1
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		printf("请选择：>");
//		scanf("%d", &input);
//	
//		switch (input)
//		{
//		case 1:
//			printf("请输入两个数：>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Add(x, y));
//			break;
//		case 2:
//			printf("请输入两个数：>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("请输入两个数：>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("请输入两个数：>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Div(x, y));
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//}

//法2
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int(*pArr[5])(int, int) = {0, Add, Sub, Mul, Div};
//	do
//	{
//		menu();
//		printf("请选择：>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			int ret = pArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出\n");
//		}
//		else
//		{
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//}

//法3
//void Calc(int(*pf)(int, int))//函数指针
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入两个数:>");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));
//}
//
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择：>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);	
//}

//指向函数指针数值的指针
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int arr[10] = {0};
//	int (*p)[10] = &arr;//取出数组的地址
//
//	int(*pf)(int, int);//函数指针
//	int(*pfArr[4])(int, int);//pfArr是一个数组 - 函数指针的数组
//	int(*(*ppfArr)[4])(int, int) = &pfArr;
//	return 0;
//}

void print(char* str)
{
	printf("hehe:%s\n", str);
}

void test(void(*p)(char*))
{
	printf("test\n");
	p("bit");//print称为回调函数，机制是回调函数机制
}

int main()
{
	test(print);
	return 0;
}