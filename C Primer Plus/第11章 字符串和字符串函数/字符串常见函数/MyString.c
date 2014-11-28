//  [11/28/2014 Happy]
#include <stdio.h>

/************************************************************************/
/* 函数声明                                                                     */
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
/* 函数定义                                                                     */
/************************************************************************/

/*
 * @function    : myStrLen
 * @author   	: ZhangLe
 * @date     	: 2014/11/28 19:54
 * @version  	: ver 1.0
 * @inparam  	: void
 * @outparam    : void
 * @description : 统计字符串的长度
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
 * @inparam  	: 字符数组
 * @outparam    : void
 * @description : 将字符串中的大写字母转换为小写字母
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
 * @inparam  	: 字符数组
 * @outparam    : void
 * @description : 将字符串中的小写字母转换为大写字母
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