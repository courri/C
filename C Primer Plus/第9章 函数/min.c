/*----------------------------------------------
File: F:\Study\workspace\C\C Primer Plus\第9章 函数\min.c
Date: 2014/11/14 19:39:29
Author: iamchuzhiyan@gmail.com		
----------------------------------------------*/
#include <stdio.h>
//函数声明
//取两个浮点数之间的最小值
double min(double a, double b);
//取三个浮点数之间的最小值
double min3(double a, double b, double c);
//主函数
int main(void)
{
	double d1 = 10.0;
	double d2 = 3.14;
	double d3 = 1;
	printf("The min is %f. \n",min(d1, d2)); //注意%f
	printf("The min is %f. \n",min3(d1, d2, d3)); //注意%f
}
//函数定义
//取两个数字之间的最小值
double min(double a, double b)
{
	return a < b ? a : b;
}
//取三个数字之间的最小值
double min3(double a, double b, double c)
{
	double min = a;
	if (b < min) {
		min = b;
	} 
	if (c < min) {
		min = c;
	}
}
