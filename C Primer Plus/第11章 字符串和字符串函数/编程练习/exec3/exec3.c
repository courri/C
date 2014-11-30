#include <stdio.h>

/************************************************************************/
/* 函数声明                                                                     */
/************************************************************************/
/*
 * @function    : getFirstWord
 * @author   	: ZhangLe
 * @date     	: 2014/11/30 15:35
 * @version  	: ver 1.0
 * @inparam  	: input
 * @outparam    : output
 * @description : 读取输入行里的第一个单词到数组，并丢掉该行中其他的字符
 */
void getFirstWord(char *input, char *output);

//主函数
int main(void)
{
	char *str = "Hello World.";
	char first_word[10];

	getFirstWord(str,first_word);
	puts(first_word);
	//puts("\n");
}

/************************************************************************/
/* 函数定义                                                                     */
/************************************************************************/
void getFirstWord(char *input, char *output)
{
	while (*input != '\0')
	{
		if (*input != ' ')
		{
			*output = *input;
			input++;
			output++;
		}
		else
		{
			*output = '\0';
			break;
		}
	}
}