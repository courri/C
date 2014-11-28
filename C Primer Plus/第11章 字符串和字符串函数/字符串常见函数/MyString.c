//  [11/28/2014 Happy]
#include <stdio.h>

/************************************************************************/
/* ��������                                                                     */
/************************************************************************/

int myStrLen(char *pstr);
char* myStrLwr(char str[]);
char* myStrUpr(char str[]);
char* myStrCpy(char *pdst, char *psrc);
int main(void)
{
	char *str = "Hello, World!";
	char str1[] = "Hello, World!";
	char str2[20];
	char *cpystr;
	printf("Length of the string is %d.\n",myStrLen(str));
	printf("Lower of the string is %s.\n",myStrLwr(str1));
	printf("Upper of the string is %s.\n",myStrUpr(str1));
	cpystr = myStrCpy(str2, str1);
	printf("Copy str1 to str2, then str2 is %s.\n",cpystr);
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
/*
 * @function    : myStrCpy
 * @author   	: ZhangLe
 * @date     	: 2014/11/28 20:38
 * @version  	: ver 1.0
 * @inparam  	: pdst, psrc
 * @outparam    : void
 * @description : �����ַ���
 */
char* myStrCpy(char *pdst, char *psrc)
{
	char *pstr = pdst;
	while('\0' != *psrc){
		*pdst = *psrc;
		psrc++;
		pdst++;
	}
	*pdst = '\0';
	return pstr;
}