#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <errno.h>
#include <string.h>

//int main()
//{
//	FILE* pf = fopen("text.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//д�ļ� w
//	//fputc('b', pf);//��pf����д��b
//	//fputc('i', pf);
//	//fputc('t', pf);
//
//	//���ļ�
//	int ch = fgetc(pf);//�������ַ�
//	printf("%c", ch);//%c��Ӧint��
//	ch = fgetc(pf);
//	printf("%c", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	char buf[1024] = {0};
//
//	FILE* pf = fopen("text.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//
//	//���ļ�
//	fgets(buf, 1024, pf);
//	printf("%s", buf);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	char buf[1024] = { 0 };
//
//	FILE* pf = fopen("text.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	
//	//д�ļ�
//	//fputs("hello ", pf);
//	//fputs("world", pf);
//
//	fgets(buf, 1024, pf);
//	printf("%s\n", buf);
//	
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	//�Ӽ��̶�ȡһ���ı���Ϣ
//	char buf[1024] = {0};
//	fgets(buf, 1024, stdin);//�ӱ�׼��������ȡ
//	fputs(buf, stdout);//�������׼�����
//	//�ȼ���
//	//gets(buf);
//	//puts(buf);
//
//	return 0;
//}

//int fprintf( FILE *stream, const char *format [, argument ]...);
//int printf( const char *format [, argument]... );
//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = {100, 3.14, "bit"};
//	//FILE* pf = fopen("text.txt", "w");
//	FILE* pf = fopen("text.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//
//	//��ʽ����ʽд�ļ�
//	//fprintf(pf, "%d %f %s", s.n, s.score, s.arr);
//
//	//��ʽ�����ļ� 
//	fscanf(pf, "%d %f %s", &(s.n), &(s.score), &(s.arr));
//	printf("%d %f %s", s.n, s.score, s.arr);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//
//int main()
//{
//	struct S s = {0};
//
//	fscanf(stdin, "%d %f %s", &(s.n), &(s.score), s.arr);
//	fprintf(stdout, "%d %.2f %s", s.n, s.score, s.arr);
//	return 0;
//}

//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = {100, 3.14f, "acbedf"};
//	struct S tmp;
//	char buf[1024] = { 0 };
//
//	//�Ѹ�ʽ��������ת�����ַ����洢��buf
//	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
//	//printf("%s\n", buf);
//	//��buf�ж�ȡ��ʽ�������ݵ�tmp��
//	sscanf(buf, "%d %f %s", &(tmp.n), &(tmp.score), tmp.arr);
//	printf("%d %f %s", tmp.n, tmp.score, tmp.arr);
//
//	return 0;
//}

//struct S
//{
//	char name[20];
//	int age;
//	double score;
//};
//
//int main()
//{
//	struct S s = { "����", 20, 98.7 };
//	struct S tmp = {0};
//	FILE* pf = fopen("text.txt", "rb");//ֻд  ��һ���������ļ�
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//�����Ƶ���ʽд�ļ�
//	//fwrite(&s, sizeof(struct S), 1, pf);//��pf��д��һ���ṹ���Сs������,
//										//д������Զ����Ƶ���ʽд��ȥ���е����ݿ��ܿ�����,����ȡ����
//
//	//�����Ƶ���ʽ���ļ�
//	fread(&tmp, sizeof(struct S), 1, pf);
//	printf("%s %d %lf\n", tmp.name, tmp.age, tmp.score);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("text.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//1 ��λ�ļ�ָ��
//	//fseek(pf, 2, SEEK_CUR);
//	//int pos = ftell(pf);
//	//printf("%d\n", pos);
//	
//	int ch = getc(pf);
//	printf("%c\n", ch);
//	rewind(pf);//�����ļ�ָ�����ʼλ��
//
//	//2 ��ȡ�ļ�
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	//foef();//EOF - end of file �ļ�������־
//	FILE* pf = fopen("text.txt", "r");
//	if (pf == NULL)
//		return 0;
//	int ch = fgetc(pf);
//	printf("%d\n", ch);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	//strerror ���ش������Ӧ�Ĵ�����Ϣ���ַ�����ַ
//	//printf("%s\n", strerror(errno));
//
//	//perror
//	FILE* pf = fopen("text2.txt", "r");
//	if (pf == NULL)
//	{
//		perror("hehe");
//		//���ӡhehe+�ո�+�����Ӧ�Ĵ�����Ϣ
//		//hehe: No such file or directory
//		return 0;
//	}
//	//���ļ�
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

int main()
{
	//strerror ���ش������Ӧ�Ĵ�����Ϣ���ַ�����ַ
	//printf("%s\n", strerror(errno));

	//perror
	FILE* pf = fopen("text2.txt", "r");
	if (pf == NULL)
	{
		perror("hehe");
		//���ӡhehe+�ո�+�����Ӧ�Ĵ�����Ϣ
		//hehe: No such file or directory
		return 0;
	}
	//���ļ�
	int ch = 0;
	while ((ch = fgetc(pf)) != EOF)
	{
		putchar(ch);
	}

	fclose(pf);
	pf = NULL;
	return 0;
}