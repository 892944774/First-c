#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//int strncmp(const char *string1, const char *string2, size_t count);

//int main()
//{
//	//strcmp - �ַ����Ƚ�
//	 const char* p1 = "abcdef";//ָ����ǳ����ַ����������const����
//   const char* p2 = "abcqwer";
//	//int ret = strcmp(p1, p2);//���ص��Ǵ��ڡ�С�ڡ�����0������
//	int ret = strncmp(p1, p2, 3);//�������ƱȽϵ��ַ�����   ���ص��Ǵ��ڡ�С�ڡ�����0�����֣�ͬstrcmp��
//
//	printf("%d\n", ret);
//	return 0;
//}

//strstr - �����ַ���
//char *strstr(const char *string, const char *strCharSet);��Ϊ�ǲ��ң���ϣ���ı������ַ�������const
//int main()
//{
//	//NULL - ��ָ��
//    //NUll/Null - '\0'
//	char* p1 = "abcdefghi";
//	char* p2 = "def";
//	char* ret = strstr(p1, p2);//��p1�������p2�Ƿ����  
//	if (ret == NULL)
//		printf("�Ӵ�������\n");
//	else
//		printf("%s\n", ret);//defghi �ҵ���d��ַ��һ�γ��ֺ�����ַ�����ӡ
//	return 0;
//}

//#include <assert.h>
////kmp - �㷨  Ҳ�����Ӵ�
//char* my_strstr(const char* p1, const char* p2)//��24�ڿΣ�40����
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
//			return cur;//�ҵ��Ӵ�����ӡ����ָ��cur��ַ�����ֵ
//		}
//		if (*s1 == '\0')
//		{ 
//			return NULL;
//		}
//		cur++;
//	}
//	return NULL;//�Ҳ����Ӵ�
//}
//
//int main()
//{
//	char* p1 = "abcdefghi";
//	char* p2 = "def";
//	char* ret = my_strstr(p1, p2);
//	if (ret == NULL)
//		printf("�Ӵ�������\n");
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
//	char* p = ".";//�ѷָ��������� 
//
//	char buf[1024] = {0};
//	//�и�buf�е��ַ���
//	strcpy(buf, arr);
//
//	char* ret = NULL;
//	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))//strtok���ס�ϴηָ��λ�ã��´δ�Ҫ�ָ��λ�ÿ�ʼѰ�ң����Դ���ָ��
//	{
//		printf("%s\n", ret);
//	}
//
//	//�򵥾���
//	//char* ret = strtok(arr, p);
//	//printf("%s\n", ret);//���ص���s�ĵ�ַ������@�ĳ�'\0'
//
//	//char* ret1 = strtok(NULL, p);//�ڶ����Ժ���Ҫ�������ַ������ָ��
//	//printf("%s\n", ret1);//���ص���b�ĵ�ַ������.�ĳ�'\0'
//
//	//char* ret2 = strtok(NULL, p);
//	//printf("%s\n", ret2);
//	return 0;
//}

//strerror - ���ش����룬��Ӧ�Ĵ�����Ϣ
//int main()
//{
//	//char* ret = strerror(1);
//	//printf("%s\n", ret);
//	//������   ������Ϣ
//	//0        No error
//	//1        Operation not permitted
//	//2        No such file or directory
//	//...
//	//erron ��һ��ȫ�ֵĴ�����ı���
//	//��c���ԵĿ⺯����ִ�й����У������˴��󣬾ͻ�Ѷ�Ӧ�Ĵ����룬��ֵ��errno��
//
//	//char* str = strerror(errno);
//	//printf("%s\n", str);
//
//	//���ļ�
//	FILE* pf = fopen("test.txt", "r");//��text.txt�ļ���r�Ƕ��ļ�
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
//	////int ret = islower(ch);//�ж��Ƿ���Сд��ĸ���Ƿ��ش���0������
//	//int ret = isdigit(ch);
//
//	//printf("%d\n", ret);
//
//	//char ch = tolower('q');//��ĸתСд���� 
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


//strcpy ֻ�ܿ����ַ��������ܿ�������  ���鿽����memcpy
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
//	struct S arr3[] = { {"����", "23"}, {"����", "24"} };
//	struct S arr4[4] = {0};
//	memcpy(arr4, arr3, sizeof(arr3));
//
//	//memcpy(arr2, arr1, sizeof(arr1));//����arr1�Ĵ�С��5���ֽ�
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
//	while (num--)//һ������num�Σ���λ�ֽ�
//	{
//		*(char*)dest = *(char*)src;//��Ϊ�����src������õ�����,ͨ��һ��һ���ֽڽ��п���
//		++(char*)dest;//��ת������++
//		++(char*)src;
//	}
//	return ret;//��󷵻���ʼλ�õĵ�ַ
//}
//
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5};
//	int arr2[5] = { 0 };
//	struct S arr3[] = { {"����", "23"}, {"����", "24"} };
//	struct S arr4[4] = {0};
//	memcpy(arr4, arr3, sizeof(arr3));
//
//	return 0;
//}

//c���Ա�׼�涨:
//memcpy ֻҪ���� ���ص����ڴ濽���Ϳ���
//memmove �����ص����ڴ濽��
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	//my_memcpy(arr+2, arr, 20);//�뿽���Ľ����{1,2,1,2,3,4,5,8,9,10}
//	int i = 0;
//	//for (i=0;i<10;i++)
//	//{
//	//	printf("%d ", arr[i]);//�����Ľ����Ԥ�ڲ����������ĵ�ַ��Ŀ�ĵص�ַ�й�����20��45����
//	//}
//	//for (i=0;i<10;i++)
//	//{
//	//	printf("%d ", arr[i]);//�����Ľ����Ԥ�ڲ����������ĵ�ַ��Ŀ�ĵص�ַ�й�����20��45����
//	//}
//
//	memmove(arr + 2, arr, 20);//�����ص����������
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