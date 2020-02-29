#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	int a = 0;
	int b = 0;

	printf("请输入两个数:\n");
	scanf("%d %d", &a, &b);

	if (a > b)
	{
		printf("数%d比较大\n", a);
	}
	else
	{
		printf("数%d比较大\n", b);
	}
	return 0;

}