#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	//�ַ�ָ��
//	char ch = 'w';
//	char* p = &ch;
//	const char* p2 = "abcdef";
//	//ָ������ - ��������-���ָ�������
//	//int* p1;//����ָ�� - ָ�����ε�ָ��
//	//char* p2;//�ַ�ָ�� - ָ���ַ���ָ��
//	int arr2[5];//����
//	int(*pa)[5] = &arr2;//ȡ������ĵ�ַ,pa����һ������ָ��
//	return 0;
//}

//void test(int (*arr)[5])//ָ�봫��
//{}
//
//int main()
//{
//	int arr[3][5] = { 0 };
//
//	test(arr);//��ά���鴫��
//	          //��λ���������������Ԫ�صĵ�ַ
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

//����ָ�� - ָ�������ָ��
//����ָ�� - ָ������ָ�� - ��ź�����ַ��ָ��

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
//	//����ֻ��һ������ַ��������Ԫ��һ˵�����������Ԫ�صĸ���
//	//&������ �� ������ ���Ǻ����ĵ�ַ
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
//	void(*p)(char*) = Print;//����ָ��
//	(*p)("hello");
//	return 0;
//}
//signal��һ����������
//signal�����Ĳ�����2������һ����int���ڶ����Ǻ���ָ�룬�ú���ָ��ָ��ĺ����Ĳ�����int������ֵ��void
//signal�����ķ���ֵҲ��һ������ָ�롰�ú���ָ��ĺ����Ĳ�����int,����ֵ��void
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
//    //2�ַ�ʽ������
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
//	//ָ�뺯��
//	int* arr[5];
//	int i = 0;
//	//��Ҫһ�����飬���Դ��4�������ĵ�ַ - ����ָ�������
//	int(*pa)(int, int) = Add;
//	int(*parr[4])(int, int) = {Add, Sub, Mul, Div};//����ָ�������
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](2, 3));
//	}
//	return 0;
//}

//����ָ������ - -ת�Ʊ�
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

//��1
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��>");
//		scanf("%d", &input);
//	
//		switch (input)
//		{
//		case 1:
//			printf("��������������>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Add(x, y));
//			break;
//		case 2:
//			printf("��������������>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("��������������>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("��������������>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Div(x, y));
//			break;
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//}

//��2
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int(*pArr[5])(int, int) = {0, Add, Sub, Mul, Div};
//	do
//	{
//		menu();
//		printf("��ѡ��>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			int ret = pArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�\n");
//		}
//		else
//		{
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//}

//��3
//void Calc(int(*pf)(int, int))//����ָ��
//{
//	int x = 0;
//	int y = 0;
//	printf("������������:>");
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
//		printf("��ѡ��>");
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
//			printf("�˳�\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);	
//}

//ָ����ָ����ֵ��ָ��
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int arr[10] = {0};
//	int (*p)[10] = &arr;//ȡ������ĵ�ַ
//
//	int(*pf)(int, int);//����ָ��
//	int(*pfArr[4])(int, int);//pfArr��һ������ - ����ָ�������
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
	p("bit");//print��Ϊ�ص������������ǻص���������
}

int main()
{
	test(print);
	return 0;
}