/*----------------------------------------------
File: F:\Study\workspace\C\C Primer Plus\第9章 函数\binary.c
Date: 2014/11/14 19:07:19
Author: iamchuzhiyan@gmail.com
----------------------------------------------*/
##include <stdio.h>
//函数声明
void toBinary(unsigned long num);

int main(void)
{
	unsigned long number;
	number = 100;
	toBinary(number);
	putchar('\n');	//换行
	return 0;
}
//函数定义
//把十进制转换为2进制
void toBinary(unsigned long num)
{
	int r;
	r = num % 2;
	if (num >= 2) {
		toBinary(num / 2);
	}
	putchar('0' + r);
	return;
}
