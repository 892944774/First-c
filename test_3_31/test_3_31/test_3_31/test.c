#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>

//
////int main()
//{
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//			arr[i] = 0;
//	}
//	return 0;
//}

//�����ַ�������
//#include <stdio.h>
//#include <assert.h>
//
//int my_strlen(const char* str)
//{
//	assert(str != NULL);//��ָ֤�����Ч��
//	int count = 0;
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
//	char arr[] =  "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//�����ַ�
//void my_strcpy(char* dest, char* src) //�� 1
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = *src;//������'\0'
//}

//void my_strcpy(char* dest, char* src)//��2
//{
//	while (*src != '\0')
//	{
//		*dest++ = *src++;//���ǽ����ã���++
//	}
//	*dest = *src;//������'\0'
//}



//void my_strcpy(char* dest, char* src)//��3
//{
//	assert(dest != NULL);//����
//	assert(src != NULL);//����
//	{
//		while (*dest++ = *src++)
//		{
//			;
//		}
//	}
//}

//char* my_strcpy(char* dest,const char* src)//�Ż�
//{          
//	char* ret = dest;//���ص�����ʼ��ַ
//	assert(dest != NULL);//����
//	assert(src != NULL);//����
//	//��srcָ����ַ���������destָ��Ŀռ�����ȥ������'\0'�ַ�
//		while (*dest++ = *src++)
//		{
//			;
//		}
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "##################";
//	char arr2[] = "bit";
//	
//	printf("%s\n", my_strcpy(arr1, arr2));//�������ķ���ֵ����Ϊ��һ�������Ĳ���
//	return 0;
//}

//int main()
//{
//	const int num = 10;
//	const int* p = &num;//const����ָ������������޸�num�ĵ�ַ
//	// const ����ָ�����*��ߣ����ε���*p��Ҳ����˵������ͨ��p�ı�*p(num)��ֵ
//	// const ����ָ�����*�ұߣ����ε���ָ�����p����p���ܱ��ı�
//	*p = 20;
//	printf("%d\n", num);
//	return 0;
//}

#include <stdio.h>

void swap_print(int* arr, int sz)
{
	int left = 0;
	int right = sz - 1;
	int tmp = 0;

	while (left < right)
	{
		while ((left < right) && (arr[left] % 2 == 0))
		{
			left++;
		}
		while ((left < right) && (arr[right] % 2 == 1))
		{
			right--;
		}
		if (left < right)
		{
			tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}

int main()
{
	int i = 0;
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int sz = sizeof(arr) / sizeof(arr[0]);
	swap_print(arr,sz);
	
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}