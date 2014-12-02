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
 * @description : 如果第二个字符串被包含在第一个字符串中，函数就返回被包含的字符串开始的地址；否则，返回空指针。
 */
char * string_in(char *str1, char *str2)
{
	//先得到两个字符串的长度
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	int match_count = len1 - len2 + 1;
	int match_flag;
	int i;	//循环标记
	for (i=0; i<match_count; ++i)
	{
		match_flag = strncmp(str1, str2, len2);	//从str1起始位置开始与str2比较
		if (match_flag == 0)	//如果str1包含str2
		{	
			return str1;	//返回str1
		} 
		else				//否则
		{
			str1++;			//str1指向下一个字符
		}
	}
	return NULL;
}