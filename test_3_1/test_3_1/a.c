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
//	printf("�������\n");
//	while (line < 20000)
//	{
//		printf("��һ�д���,%d\n", line);
//		line++;
//	}
//	if (line >= 20000)
//	{
//		printf("��offer\n");
//	}
//	return 0;
//}

//int main()
//{
//	int input =  0;
//	printf("��Ҫ�ú�ѧϰ��(1/0)>:");
//	scanf("%d\n", &input);
//
//	if (input == 1)
//		printf("��offer\n");
//	else
//		printf("������\n");
//	return 0;
//}

//int main()
//{
//	printf("%d\n", strlen("c:\test\32\test.c"));
//	// \32������8��������
//	// 32��Ϊ8���ƴ�����Ǹ�ʮ�������֣���ΪASCII��ֵ����Ӧ���ַ�
//	//32 --> 10����  26 --> ��ΪASCIIֵ������ַ�
//	return 0;
//}

//int main()
//{
//	//printf("c:\test\32\test.c\n");
//	//printf("c:\\test\\32\\test.c\n");
//	//printf("%c\n", '\'');//��ӡ������
//	//printf("%s\n", "\"");//��ӡ˫����
//	// \t - ˮƽ�Ʊ��
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";//����3
//	char arr2[] = {'a', 'b', 'c'};//�������ֵ
//	printf("%d\n", strlen(arr1));//strlen - string length - �����ַ�������
//	printf("%d\n", strlen(arr2));
//	return 0;
//}

//int main()
//{
//	//a - 97 A - 65 ASCII����
//	char arr1[] = "abc";//����  
//	//"abc" -- 'a' 'b' 'c' '\0' -- '\0'�ַ����Ľ�����־,�����ַ�����
//	char arr2[] = { 'a', 'b', 'c', 0 };
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//ö�ٳ���  ö�ٹؼ���-enum
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

//#define ����ı�ʶ������
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
//	int arr[n] = {0};//error ������Ӧ���ǳ������ʽ
//	//const int num = 4; //const��ʾ������  const���εĳ�����
//	/*printf("%d\n", num);
//	num = 8;
//	printf("%d\n", num);*/
//
//	return 0;
//}