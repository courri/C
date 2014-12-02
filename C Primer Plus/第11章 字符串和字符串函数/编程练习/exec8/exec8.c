#include <stdio.h>
#include <string.h>

char * reverse(char *str);

int main(void)
{
	char str[] = "Hello World";
	puts(reverse(str));
	return 0;
}

char *reverse(char *str)
{
	//先得到str的长度
	int len = strlen(str);
	//
	char *rstr = str;
	int start = 0;
	int end = len;
	char temp;
	while (start <= end)
	{
		temp = *(rstr+start);
		*(rstr+start) = *(rstr+end-1);
		*(rstr+end-1) = temp;
		start++;
		end--;
	}
	return rstr;
}