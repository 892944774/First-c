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
//	//1 ��str1�ַ�����׷��һ��str1�ַ�
//	//strcat(str1, str1);err
//	strncat(str1, str1, 6);//abcdefabcdef
//	//2 �ж�str2ָ����ַ����Ƿ���str1ָ����ַ������Ӵ�
//	//strstr - ���Ӵ�
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

//���Ͼ��󣬾�������ҵ��������ϵ��µ�������д��������Ƿ����ĳ������

//1 2 3
//4 5 6
//7 8 9

//1 2 3
//2 4 5
//4 5 6

//int Findnum(int arr[3][3], int k, int row, int col)
//{
//	int x = 0;
//	int y = col - 1;//�����Ͻǽ��жԱ�
//
//	while (x <= row - 1 && y >= 0)//�����ϽǶԱȣ����Աȵ����һֱ�����½�������
//		                       //�����ҵ���7�Ļ���3*3�ľ���ͻ������������е�һ�У���Ϊ���Ǽ��˵����
//	{
//		if (arr[x][y] > k)//˵�����Ͻǵ�������Ҫ�ҵ����ִ�Ӧ�ü���������
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)//���Ͻǵ����ֱ�Ҫ�ҵ�����С������������
//		{
//			x++;
//		}
//		else
//		{
//			return 1;
//		}
//	}
//    //ѭ����֮���Ҳ�����ֱ�ӷ���0
//	return 0;
//}

//int main()
//{
//	int arr[3][3] = { { 1,2,3 },{ 4,5,6 },{ 7,8,9 } };
//	int k = 7;
//	int ret = Findnum(arr, k, 3, 3);
//	if (ret == 1)
//	{
//		printf("�ҵ���\n");
//	}
//	else
//	{
//		printf("û�ҵ�\n");
//	}
//	return 0;
//}

//�ܹ�����x y����
//int Findnum(int arr[3][3], int k, int* px, int* py)
//{
//	int x = 0;
//	int y = *py - 1;//�����Ͻǽ��жԱ�
//
//	while (x <= *px - 1 && y >= 0)//�����ϽǶԱȣ����Աȵ����һֱ�����½�������
//								  //�����ҵ���7�Ļ���3*3�ľ���ͻ������������е�һ�У���Ϊ���Ǽ��˵����
//	{
//		if (arr[x][y] > k)//˵�����Ͻǵ�������Ҫ�ҵ����ִ�Ӧ�ü���������
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)//���Ͻǵ����ֱ�Ҫ�ҵ�����С������������
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
//	//ѭ����֮���Ҳ�����ֱ�ӷ���0
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
//	//�����Ͳ���
//	int ret = Findnum(arr, k, &x, &y);
//	if (ret == 1)
//	{
//		printf("�ҵ���,�±���%d %d\n", x, y);
//	}
//	else
//	{
//		printf("û�ҵ�\n");
//	}
//	return 0;
//}

#include <assert.h>

//strlen ��ģ��ʵ��
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
//	//  3  -  6 = -3����strlen���ص����޷�������
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


//strcpy��ģ��ʵ��
//��1
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
//	*str1 = *str2;//��whileѭ��������str2ָ��ľ���'\0',����ٰ�str2��ֵ��ֵ��str1
//}

//��2
//char* my_strcpy(char* str1,const char* str2)//Դͷ�ĵ�ַ�������仯����const����
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	//strcpy���ص���Ŀ�ĵص���ʼλ��,�����ѭ����str1��λ�÷����˱仯��
//	char* ret = str1;
//
//	while (*str1++ = *str2++)//��ʼ��ʱ��b��ֵ��str1,���'\0'��ֵ��str1�����ʽ�Ľ����ascall��ֵΪ0,����ѭ��
//	{
//		;
//	}
//	//����Ŀ�ĵ���ʼλ�õĵ�ַ
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "bit";
//	
//	//ע�����
//	//1 Դͷ�������'\0',���򿽱���ʱ��ᷢ��Խ�����
//	// char arr2 = {'a', 'b', 'c'};û����'\0'
//	//2 Ŀ��ռ�����㹻�󣬰���Դ�ַ���
//	//3 Ŀ��ռ���Ա��޸�
//	// char* p = "abcdef";pָ����ǳ����ַ��������ܱ��޸�
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//char* my_strcat(char* dest, char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	//1 �ҵ�Ŀ�ĵ��ַ�����'\0'
//	while(*dest != '\0')
//	{
//		dest++;
//	}
//	//2 ��ʼ��src���ַ�����ֵ��dest
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[30] = "abcdefg";//arr1 �Ŀռ�����㹻�󣬱���Ҫ��'\0',arr2�Ǵ�'\0'��λ�ÿ�ʼ׷��
//	char arr2[] = "bit";
//	my_strcat(arr1, arr2);
//
//	printf("%s\n", arr1);
//	return 0;
//}

//int my_strcmp(char* str1, char* str2)
//{
//	assert(str1 && str2);
//	//�Ƚ�
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')//��������'\0'
//			return 0;
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//		return 1;//����
//	else
//		return 0;//С��
//}
//
//int main()
//{
//	//��VS��������
//	//>  ����1      ==  0    <  -1
//	//��linux --gcc
//	//>  ���ش���0������    ==  0    <  <0
//	char* p1 = "abcdef";
//	char* p2 = "aqwer";
//
//	int ret = strcmp(p1, p2);//�ȱȽ����ַ������׵�ַ��ASCLL��ֵ������������Ƚ�
//
//	printf("%d\n", ret); 
//	return 0;
//}

//int main()
//{
//	char arr1[10] = "abcdef";
//	char arr2[] = "bit";
//	strncpy(arr1, arr2, 4);
//	strncpy(arr1, arr2, 6);//���Դ�ַ���С�ڿ������ַ�����������ȥ���油'\0'
//
//	return 0;
//}

int main()
{
	char arr1[30] = "hello\0xxxxxx";
	char arr2[] = "world";

	//ָ�����ȵ�����
	strncat(arr1, arr2, 3);//��arr2ǰ3��ֵ������arr1�У��������ϵͳ�Զ���'\n'
	printf("%s\n", arr1);
}