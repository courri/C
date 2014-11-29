//  [11/28/2014 Happy]
#include <stdio.h>

/************************************************************************/
/* ��������                                                                     */
/************************************************************************/

int myStrLen(char *pstr);
char* myStrLwr(char str[]);
char* myStrUpr(char str[]);
char* myStrCpy(char *pdst, char *psrc);
char* myStrCat(char *pdst, char *psrc);
char* myStrnCat(char *pdst, char *psrc, size_t count);
char* reverse(char *pstr);
int main(void)
{
	char *str = "Hello, World!";
	char str1[] = "Hello, World!";
	char str2[20];
	char *cpystr;
	char a[20] = "Hello";
	char b[] = "World";
	printf("Length of the string is %d.\n",myStrLen(str));
	printf("Lower of the string is %s.\n",myStrLwr(str1));
	printf("Upper of the string is %s.\n",myStrUpr(str1));
	cpystr = myStrCpy(str2, str1);
	printf("Copy str1 to str2, then str2 is %s.\n",cpystr);
	printf("Cat b to a %s.\n", myStrCat(a,b));
	printf("Cat b to a %s.\n", myStrnCat(a,b,2));
	reverse(b);
	printf("Reverse str %s.\n", b);
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

/*
 * @function    : myStrCat
 * @author   	: ZhangLe
 * @date     	: 2014/11/29 19:15
 * @version  	: ver 1.0
 * @inparam  	: pdst the string to be appended to
 * @inparam		: psrc the string to append to it
 * @outparam    : void
 * @description : 
 */
char *myStrCat(char *pdst, char *psrc)
{
	char *ptmp = pdst;
	//�ҵ�pdst�Ľ�β
	while (*pdst)
	{
		pdst++;
	}
	while (*psrc != '\0')
	{
		*pdst = *psrc;
		psrc++;
		pdst++;
	}
	return ptmp;
}

/*
 * @function    : myStrnCat
 * @author   	: ZhangLe
 * @date     	: 2014/11/29 19:31
 * @version  	: ver 1.0
 * @inparam  	: pdst 
 * @inparam  	: psrc
 * @inparam  	: count
 * @outparam    : void
 * @description : 
 */
char *myStrnCat(char *pdst, char *psrc, size_t count)
{
	char *ptmp = pdst;
	if (count)
	{
		while (*pdst != '\0')
		{
			pdst++;
		}
		while (*psrc != '\0')
		{
			*pdst = *psrc;
			psrc++;
			pdst++;
			count--;
			if (count <= 0)
			{
				*pdst = '\0';
				break;
			}
		}
	}
	return ptmp;
}

/*
 * @function    : reverse
 * @author   	: ZhangLe
 * @date     	: 2014/11/29 20:06
 * @version  	: ver 1.0
 * @inparam  	: pstr
 * @outparam    : void
 * @description : �ַ�����ת World -> dlroW
 */
char* reverse(char *pstr)
{
	char *pstart = pstr;
	char *pend = pstr;
	char tmp;
	while (*pend != '\0')
	{
		pend++;		//pendָ���ַ�����β'\0'��
	}
	pend--;			//pend--ʹpendָ���ַ�����βǰ��һ���ַ�
	//��ʼ��ת
	while (pstart < pend)
	{
		//����
		tmp = *pstart;
		*pstart = *pend;
		*pend = tmp;
		pstart ++;
		pend --;
	}
	return pstr;
}