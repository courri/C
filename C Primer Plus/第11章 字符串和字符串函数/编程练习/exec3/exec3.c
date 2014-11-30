#include <stdio.h>

/************************************************************************/
/* ��������                                                                     */
/************************************************************************/
/*
 * @function    : getFirstWord
 * @author   	: ZhangLe
 * @date     	: 2014/11/30 15:35
 * @version  	: ver 1.0
 * @inparam  	: input
 * @outparam    : output
 * @description : ��ȡ��������ĵ�һ�����ʵ����飬�������������������ַ�
 */
void getFirstWord(char *input, char *output);

//������
int main(void)
{
	char *str = "Hello World.";
	char first_word[10];

	getFirstWord(str,first_word);
	puts(first_word);
	//puts("\n");
}

/************************************************************************/
/* ��������                                                                     */
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