//  [11/28/2014 Happy]
#include <stdio.h>

/************************************************************************/
/* ��������                                                                     */
/************************************************************************/

int myStrLen(char *str);
char* myStrLwr(char str[]);
char* myStrUpr(char str[]);

int main(void)
{
	char *str = "Hello, World!";
	char str1[]= "Hello, World!";
	printf("Length of the string is %d.\n",myStrLen(str));
	printf("Lower of the string is %s.\n",myStrLwr(str1));
	printf("Upper of the string is %s.\n",myStrUpr(str1));
}

/************************************************************************/
/* ��������                                                                     */
/************************************************************************/

/*
 * @function    : myStrLen
 * @author   	: ZhangLe
 * @date     	: 2014/11/28 19:54
 * @version  	: ver 1.0
 * @inparam  	: void
 * @outparam    : void
 * @description : ͳ���ַ����ĳ���
 */
int myStrLen(char *str)
{
	int len = 0;
	while ('\0' != *str++)
	{
		len++;
	}
	return len;
}

/*
 * @function    : myStrLwr
 * @author   	: ZhangLe
 * @date     	: 2014/11/28 19:59
 * @version  	: ver 1.0
 * @inparam  	: �ַ�����
 * @outparam    : void
 * @description : ���ַ����еĴ�д��ĸת��ΪСд��ĸ
 */
char* myStrLwr(char str[])
{
	char* nstr = str;
	char c;
	while('\0' != (*str)){
		if ((*str) >= 'A' && (*str) <= 'Z')
		{
			(*str) = (*str) + 32;
		}
		str++;
	}
	return nstr;
}

/*
 * @function    : myStrUpr
 * @author   	: ZhangLe
 * @date     	: 2014/11/28 20:22
 * @version  	: ver 1.0
 * @inparam  	: �ַ�����
 * @outparam    : void
 * @description : ���ַ����е�Сд��ĸת��Ϊ��д��ĸ
 */
char* myStrUpr(char str[])
{
	char* nstr = str;
	char c;
	while('\0' != (*str)){
		if ((*str) >= 'a' && (*str) <= 'z')
		{
			(*str) = (*str) - 32;
		}
		str++;
	}
	return nstr;
}