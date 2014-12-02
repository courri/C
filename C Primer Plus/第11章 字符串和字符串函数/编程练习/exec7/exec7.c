#include <stdio.h>
#include <string.h>

char * string_in(char *str1, char *str2);

int main(void)
{
	char str1[] = "Helloworld";
	char str2[] = "low";
	char str3[] = "lol";
	if (string_in(str1, str2))
	{
		puts(string_in(str1, str2));
	} 
	else
	{
		puts("Not found.");
	}
	
}
/*
 * @function    : string_in
 * @author   	: ZhangLe
 * @date     	: 2014/12/2 19:26
 * @version  	: ver 1.0
 * @inparam  	: str1
 * @inparam  	: str2
 * @outparam    : str1 or NULL
 * @description : ����ڶ����ַ����������ڵ�һ���ַ����У������ͷ��ر��������ַ�����ʼ�ĵ�ַ�����򣬷��ؿ�ָ�롣
 */
char * string_in(char *str1, char *str2)
{
	//�ȵõ������ַ����ĳ���
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	int match_count = len1 - len2 + 1;
	int match_flag;
	int i;	//ѭ�����
	for (i=0; i<match_count; ++i)
	{
		match_flag = strncmp(str1, str2, len2);	//��str1��ʼλ�ÿ�ʼ��str2�Ƚ�
		if (match_flag == 0)	//���str1����str2
		{	
			return str1;	//����str1
		} 
		else				//����
		{
			str1++;			//str1ָ����һ���ַ�
		}
	}
	return NULL;
}