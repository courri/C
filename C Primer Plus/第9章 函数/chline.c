/*----------------------------------------------
File: F:\Study\workspace\C\C Primer Plus\第9章 函数\chline.c
Date: 2014/11/14 19:52:39
Author: iamchuzhiyan@gmail.com
----------------------------------------------*/
##include <stdio.h>
//函数声明
//实现指定字符在i列到j列的输出
void chline(char *ch, int i, int j);
//测试函数
void test();
//主函数
int main(void)
{
	test();
}

//函数定义
void chline(char *ch, int i, int j)
{
	int c = 0;	//循环标记
	for (c = i; c < j; ++c) {
		putchar(ch[c]);
	}
}

void test()
{
	char *c = "HelloWorld";
	chline(c, 1, 5);
}