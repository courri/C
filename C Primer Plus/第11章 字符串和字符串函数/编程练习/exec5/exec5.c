#include <stdio.h>
#define LEN 80
/************************************************************************/
/* ��������                                                                     */
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
 * @inparam  	: str �ַ���ָ��
 * @inparam  	: c �ַ�
 * @outparam    : void
 * @description : ������������������һ�����ַ���ָ�룬��һ�����ַ����书��������ַ����ַ����У��ͷ���һ����0ֵ���棩������ַ������ַ����У��ͷ���0ֵ���٣���
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