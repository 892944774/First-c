#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	int a = 0;
	int b = 0;

	printf("������������:\n");
	scanf("%d %d", &a, &b);

	if (a > b)
	{
		printf("��%d�Ƚϴ�\n", a);
	}
	else
	{
		printf("��%d�Ƚϴ�\n", b);
	}
	return 0;

}