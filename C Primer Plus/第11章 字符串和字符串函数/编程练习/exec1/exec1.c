#include <stdio.h>
#define N 10
//函数声明
//从输入读取n个字符（包括空格、制表符和换行符），把结果存储在一个数组中
char *getnchar(char *str, int n);

//主函数
int main(void)
{
	char input[N];
	char *chk;
	chk = getnchar(input, N-1);
	if (NULL == chk)
	{
		puts("Input failed.");
	} 
	else
	{
		puts(input);
	}
	puts("Done. \n");
	return 0;
}

char *getnchar(char *str, int n)
{
	int i; 
	int ch;
	for (i=0; i<n; ++i)
	{
		ch = getchar();
		if (ch != EOF)
		{
			str[i] = ch;
		}
		else
		{
			break;
		}
	}
	if (ch == EOF)
	{
		return NULL;
	} 
	else
	{
		str[i] = '\0';
		return str;
	}
}