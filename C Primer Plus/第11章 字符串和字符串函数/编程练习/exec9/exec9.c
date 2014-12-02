//  [12/2/2014 Happy]
#include <stdio.h>

char* deleteSpacefromString(char *str);

int main(void)
{
	char str[] = "Hello My World .";
	puts(deleteSpacefromString(str));
	return 0;
}

/*
 * @function    : deleteSpacefromString
 * @author   	: ZhangLe
 * @date     	: 2014/12/2 20:27
 * @version  	: ver 1.0
 * @inparam  	: str
 * @outparam    : nstr
 * @description : 删除字符串中的空格
 */
char* deleteSpacefromString(char *str)
{
	char *nstr = str;
	char *temp = str;				//临时的指针变量
	while (*str != '\0')
	{
		if (*str == ' ')
		{
			temp = str;				//指向字符串中字符为空格的地址
			while (*str != '\0')	//从字符为空格处开始，依次迁移，直至字符串末尾（不含'\0'）
			{
				*str = *(str + 1);
				str++;
			}
			str = temp;				//把字符串中字符为空格的地址赋值给str
		}
		str++;						//指向下一个字符
	}
	return nstr;
}