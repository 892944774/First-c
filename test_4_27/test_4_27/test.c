#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

struct S
{
	int a;
	char c;
	double d;
};

void Init(struct S* ps)
{
	ps->a = 100;
	ps->c = 'w';
	ps->d = 2.1;
}

//´«µØÖ·
void print(struct S* ps)
{
	printf("%d %c %lf\n", ps->a, ps->c, ps->d);
}

int main()
{
	struct S s = {0};
	Init(&s);
	print(&s);
	//printf("%d %c %lf", s.a, s.c, s.d);
	/*s.a = 100;
	s.c = 'w';
	s.d = 2.3;*/
	return 0;
}