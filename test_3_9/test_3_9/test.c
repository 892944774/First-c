#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int k = 3;
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int left = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int right = sz - 1;

	while (left<=right)
	{
		int mid = (left+right)/2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			printf("�ҵ���,�±���%d\n", arr[mid]);
			break;
		}
	}
	if (left > right)
	{
		printf("�Ҳ���\n");
	}
	return 0;
}


 