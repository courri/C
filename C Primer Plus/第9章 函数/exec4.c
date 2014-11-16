/*----------------------------------------------
File: F:\Study\workspace\C\C Primer Plus\第9章 函数\exec4.c
Date: 2014/11/16 19:27:23
Author: iamchuzhiyan@gmail.com
----------------------------------------------*/
#include <stdio.h>
//函数声明
//首先对两数值的倒数取平均值，然后再去倒数。
double xiezhi(double d1, double d2);
//测试函数
void test();

int main(void)
{
	test();
	return 0;
}

double xiezhi(double d1, double d2)
{
	double d = 0;
	d1 = 1 / d1;
	d2 = 1 / d2;
	d = (d1 + d2) / 2;
	d = 1 / d;
	return d;
}

void test()
{
	double d1 = 2;
	double d2 = 4;
	printf("xiezhi = %f \n",xiezhi(d1, d2));
}