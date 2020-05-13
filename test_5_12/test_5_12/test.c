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
//	//写文件 w
//	//fputc('b', pf);//给pf里面写入b
//	//fputc('i', pf);
//	//fputc('t', pf);
//
//	//读文件
//	int ch = fgetc(pf);//读单个字符
//	printf("%c", ch);//%c对应int型
//	ch = fgetc(pf);
//	printf("%c", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	//关闭文件
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
//	//读文件
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
//	//写文件
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
//	//从键盘读取一行文本信息
//	char buf[1024] = {0};
//	fgets(buf, 1024, stdin);//从标准输入流读取
//	fputs(buf, stdout);//输出到标准输出流
//	//等价于
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
//	//格式化形式写文件
//	//fprintf(pf, "%d %f %s", s.n, s.score, s.arr);
//
//	//格式化读文件 
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
//	//把格式化的数据转换成字符串存储到buf
//	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
//	//printf("%s\n", buf);
//	//从buf中读取格式化的数据到tmp中
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
//	struct S s = { "张三", 20, 98.7 };
//	struct S tmp = {0};
//	FILE* pf = fopen("text.txt", "rb");//只写  打开一个二进制文件
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//二进制的形式写文件
//	//fwrite(&s, sizeof(struct S), 1, pf);//向pf中写入一个结构体大小s的内容,
//										//写入的是以二进制的形式写进去，有的内容可能看不懂,但读取可以
//
//	//二进制的形式读文件
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
//	//1 定位文件指针
//	//fseek(pf, 2, SEEK_CUR);
//	//int pos = ftell(pf);
//	//printf("%d\n", pos);
//	
//	int ch = getc(pf);
//	printf("%c\n", ch);
//	rewind(pf);//返回文件指针的起始位置
//
//	//2 读取文件
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	//foef();//EOF - end of file 文件结束标志
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
//	//strerror 返回错误码对应的错误信息的字符串地址
//	//printf("%s\n", strerror(errno));
//
//	//perror
//	FILE* pf = fopen("text2.txt", "r");
//	if (pf == NULL)
//	{
//		perror("hehe");
//		//会打印hehe+空格+错误对应的错误信息
//		//hehe: No such file or directory
//		return 0;
//	}
//	//读文件
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

int main()
{
	//strerror 返回错误码对应的错误信息的字符串地址
	//printf("%s\n", strerror(errno));

	//perror
	FILE* pf = fopen("text2.txt", "r");
	if (pf == NULL)
	{
		perror("hehe");
		//会打印hehe+空格+错误对应的错误信息
		//hehe: No such file or directory
		return 0;
	}
	//读文件
	int ch = 0;
	while ((ch = fgetc(pf)) != EOF)
	{
		putchar(ch);
	}

	fclose(pf);
	pf = NULL;
	return 0;
}