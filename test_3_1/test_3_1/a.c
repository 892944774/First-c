#define _CRT_SECURE_NO_WARNINGS 1

# include <stdio.h>
# include <string.h>

int Add(int x, int y)
{
	int z = x + y;
	return z;
}
int main()
{
	//int num1 = 2;
	//int num2 = 3;
	int sum = 0;

	sum = Add(2, 3);
	printf("%d\n", sum);

	return 0;
}

//int main()
//{
//	int line =0;
//	printf("加入比特\n");
//	while (line < 20000)
//	{
//		printf("敲一行代码,%d\n", line);
//		line++;
//	}
//	if (line >= 20000)
//	{
//		printf("好offer\n");
//	}
//	return 0;
//}

//int main()
//{
//	int input =  0;
//	printf("你要好好学习吗？(1/0)>:");
//	scanf("%d\n", &input);
//
//	if (input == 1)
//		printf("好offer\n");
//	else
//		printf("卖红薯\n");
//	return 0;
//}

//int main()
//{
//	printf("%d\n", strlen("c:\test\32\test.c"));
//	// \32是两个8进制数字
//	// 32作为8进制代表的那个十进制数字，作为ASCII码值，对应的字符
//	//32 --> 10进制  26 --> 作为ASCII值代表的字符
//	return 0;
//}

//int main()
//{
//	//printf("c:\test\32\test.c\n");
//	//printf("c:\\test\\32\\test.c\n");
//	//printf("%c\n", '\'');//打印单引号
//	//printf("%s\n", "\"");//打印双引号
//	// \t - 水平制表符
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";//长度3
//	char arr2[] = {'a', 'b', 'c'};//长度随机值
//	printf("%d\n", strlen(arr1));//strlen - string length - 计算字符串长度
//	printf("%d\n", strlen(arr2));
//	return 0;
//}

//int main()
//{
//	//a - 97 A - 65 ASCII编码
//	char arr1[] = "abc";//数组  
//	//"abc" -- 'a' 'b' 'c' '\0' -- '\0'字符串的结束标志,不算字符长度
//	char arr2[] = { 'a', 'b', 'c', 0 };
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//枚举常量  枚举关键字-enum
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	enum Sex s = MALE;
//	printf("%d\n", MALE);//0
//	printf("%d\n", FEMALE);//1
//	printf("%d\n", SECRET);//2
//	return 0;
//}

//#define 定义的标识符常量
//#define MAX 10

//int main()
//{
//	int arr[MAX] = {0};
//	printf("%d\n", MAX);
//	return 0;
//}

//int main()
//{
//	int n = 10;
//	int arr[n] = {0};//error 数组中应该是常量表达式
//	//const int num = 4; //const表示常属性  const修饰的常变量
//	/*printf("%d\n", num);
//	num = 8;
//	printf("%d\n", num);*/
//
//	return 0;
//}