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
 * @description : ɾ���ַ����еĿո�
 */
char* deleteSpacefromString(char *str)
{
	char *nstr = str;
	char *temp = str;				//��ʱ��ָ�����
	while (*str != '\0')
	{
		if (*str == ' ')
		{
			temp = str;				//ָ���ַ������ַ�Ϊ�ո�ĵ�ַ
			while (*str != '\0')	//���ַ�Ϊ�ո񴦿�ʼ������Ǩ�ƣ�ֱ���ַ���ĩβ������'\0'��
			{
				*str = *(str + 1);
				str++;
			}
			str = temp;				//���ַ������ַ�Ϊ�ո�ĵ�ַ��ֵ��str
		}
		str++;						//ָ����һ���ַ�
	}
	return nstr;
}