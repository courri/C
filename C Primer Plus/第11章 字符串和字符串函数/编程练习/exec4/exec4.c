#include <stdio.h>

char myStrChr(char *str, char c);

int main(void)
{
	char str[] = "Hello World.";
	char c = 'A';
	putchar(myStrChr(str,c));
	putchar('\n');
	return 0;
}

/*
 * @function    : myStrChr
 * @author   	: ZhangLe
 * @date     	: 2014/11/30 15:59
 * @version  	: ver 1.0
 * @inparam  	: str 指向char类型的指针变量 指向一个字符串
 * @inparam  	: c 指定的字符
 * @outparam    : void
 * @description : 
 */
char myStrChr(char *str, char c)
{
	char tmp = NULL;
	while (*str != '\0')
	{
		//判断*str时候与c一样
		if (*str == c)
		{
			tmp = *str;
			return tmp;
		}
		str++;
	}
	return ' ';
}