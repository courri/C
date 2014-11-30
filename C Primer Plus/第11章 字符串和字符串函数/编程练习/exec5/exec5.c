#include <stdio.h>
#define LEN 80
/************************************************************************/
/* 函数声明                                                                     */
/************************************************************************/
int is_within(char *str, char c);

int main(void)
{
	char input[LEN];
	char ch;
	int found;
	printf("Enter a string: ");
	while (gets(input) && input[0] != '\0')
	{
		printf("Enter a character: ");
		ch = getchar();
		while (getchar() != '\n')
		{
			continue;
		}
		found = is_within(input, ch);
		if (found == 0)
		{
			printf("%c is not found in string. \n", ch);
		} 
		else
		{
			printf("%c found in string %s \n", ch, input);
		}
		printf("Next string: ");
	}
	puts("Done. \n");
	return 0;
}

/*
 * @function    : is_within
 * @author   	: ZhangLe
 * @date     	: 2014/11/30 16:03
 * @version  	: ver 1.0
 * @inparam  	: str 字符串指针
 * @inparam  	: c 字符
 * @outparam    : void
 * @description : 函数接受两个参数，一个是字符串指针，另一个是字符。其功能是如果字符在字符串中，就返回一个非0值（真）；如果字符不在字符串中，就返回0值（假）。
 */
int is_within(char *str, char c)
{
	int index = 0;
	while (*str != '\0')
	{
		index++;
		if (*str == c)
		{
			return index;
		}
		else
		{
			str++;
		}
	}
	return 0;
}