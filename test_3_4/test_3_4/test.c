#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a = 10;
	int* p = 0;
	p = &a;//ȡ��ַ p�������a�ĵ�ַ
	printf("%p\n", p);
	printf("%p\n", &a);
	*p = 20;// * - �����ò�����
	printf("a = %d\n", a);
	//��һ�ֱ�����������ŵ�ַ��--ָ�����
	//printf("%p\n", &a);
	return 0;
}
//#define ����ı�ʶ������
//#define MAX 100
//#define ���Զ����-������
 
//������ʵ��
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
//	//����
//	int max = Max(a, b);
//	printf("max = %d\n", max);
//	//��ķ�ʽ
//	max = MAX(a, b);
//
//	printf("max = %d\n", max);
//	return 0;
//}

//static ���ξֲ�����  �ֲ��������������ڱ䳤
//static ����ȫ�ֱ���  �ı��˱����������� - �þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ��  ����Դ�ļ���û����ʹ��
//static ���κ���  Ҳ�Ǹı��˺����������򣨲�׼ȷ�����ı��˺������������ԣ���ͨ�ĺ������ⲿ�������ԣ�main�����ã�ֻ��Ҫ����
//static ���ⲿ�������ԡ�> �ڲ���������

//�����ⲿ����
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
//	//extern - �����ⲿ���ŵ�
//	extern int g_val;
//	printf("g_val = %d\n", g_val);
//
//	return 0;
//}

//void test()
//{
//	static int a = 1;//a��һ����̬�ľֲ�����
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
//	register int a = 10;//�����a����ɼĴ�������
//	//int����ı������з��ŵ�
//	// signed int  
//	unsigned int num = 1;
//	//struct - �ṹ��ؼ���
//	//union - ������/������
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
//	int sum = Add(a, b);//()--�������ò�����
//	printf("sum = %d\n", sum);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//
//	max = (a > b ? a : b);//a > b������ִ��a,����ִ��b
//	if (a > b)
//		max = a;
//	else
//		max = b;
//	printf("%d\n", max);
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14;//ǿ������ת��
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	//int b = a++;//����++,��ʹ�ã���++ 11 10 
//	int b = ++a;//ǰ��++����++����ʹ��   11 11 
//	int b = a--;//����--����ʹ�ã���--   9 10
//	int b = --a;//ǰ��--����--����ʹ��    9 9
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int a = 0;//4���ֽڣ�32bitλ
//	int b = ~a;
//	//~--����2���ƣ�λȡ��
//    //00000000000000000000000000000000
//	//11111111111111111111111111111111
//	//11111111111111111111111111111110
//	//10000000000000000000000000000001
//	//ԭ�룬���룬����
//  //������ԭ�룬���벹����ͬ
//	//�������ڴ��д洢����ʱ�򣬴洢���Ƕ����ƵĲ���
//	//ԭ�����λ���䣬����λȡ���÷��룬�����һ�ò���
//	//�����һ�����룬����λ���䣬����λȡ����ԭ��
//	printf("%d\n", b);//ʹ�õģ���ӡ��������ǵ�ԭ��
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