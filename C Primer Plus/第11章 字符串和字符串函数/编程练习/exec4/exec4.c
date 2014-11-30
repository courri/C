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
 * @inparam  	: str ָ��char���͵�ָ����� ָ��һ���ַ���
 * @inparam  	: c ָ�����ַ�
 * @outparam    : void
 * @description : 
 */
char myStrChr(char *str, char c)
{
	char tmp = NULL;
	while (*str != '\0')
	{
		//�ж�*strʱ����cһ��
		if (*str == c)
		{
			tmp = *str;
			return tmp;
		}
		str++;
	}
	return ' ';
}