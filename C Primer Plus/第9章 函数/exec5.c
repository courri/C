/*----------------------------------------------
File: F:\Study\workspace\C\C Primer Plus\第9章 函数\exec5.c
Date: 2014/11/16 19:33:52
Author: iamchuzhiyan@gmail.com
----------------------------------------------*/
#include <stdio.h>
//函数声明
//将两个 double 类型变量的数字替换成为它们中的较大值。
void larger_of(double *x, double *y);
//测试函数
void test(void);

int main(void)
{
	test();
	return 0;
}

void larger_of(double *x, double *y)
{
	int temp;
	if (*x < *y) {
		temp = *x;
		*x = *y;
		*y = temp;
	}
}

void test(void)
{
	double x = 2;
	double y = 5;
	printf("Before larger_of, x = %f, and y = %f. \n",x,y);
	larger_of(&x, &y);
	printf("After larger_of, x = %f, and y = %f. \n",x,y);
}