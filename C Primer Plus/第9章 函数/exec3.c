/*----------------------------------------------
File: F:\Study\workspace\C\C Primer Plus\第9章 函数\exec3.c
Date: 2014/11/15 11:24:21
Author: iamchuzhiyan@gmail.com
----------------------------------------------*/
#include <stdio.h>

//函数声明
//字符参数是要输出的字符
//第二个参数是每行中该字符输出的个数
//第三个参数是要输出的行数
void show(char c, int m, int n);
//测试
void test(void);
//主函数
int main(void)
{
	test();
	return 0;
}

//函数定义
void show(char c, int m, int n)
{
	int i,j;//循环标记
	for ( i = 0; i < n; i++) {
		for ( j = 0; j < m; j++) {
			putchar(c);
		}
		putchar('\n');
	}
}

void test(void)
{
	char c = '$';
	int m = 5;
	int n = 10;
	show(c, m, n);
}
