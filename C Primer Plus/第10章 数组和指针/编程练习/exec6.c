/*----------------------------------------------
File: F:\Study\workspace\C\C Primer Plus\第10章 数组和指针\编程练习\exec6.c
Date: 2014/11/22 21:05:43
Author: iamchuzhiyan@gmail.com
----------------------------------------------*/
#include <stdio.h>

//函数声明
//把source中的元素复制到target中
void copy_ptr(const double *source, double *target, int n);
//测试函数
void test(void);

//主函数
int main(void)
{
	test();
	return 0;
}

//函数定义
void copy_ptr(const double *source, double *target, int n)
{
	int i = 0;	//循环标记
	for ( i = 0; i < n; i++) {
		*target = *source;
		target++;
		source++;
	}
}

//测试函数
void test()
{
	int rows = 2;
	int cols = 5;
	double const a[2][5] = {{0,1,2,3,4},{5,6,7,8,9}};
	double b[2][5];
	int i, j;	//循环标记
	for ( i = 0; i < rows; i++) {	//一行一行地从a中复制元素到b
		copy_ptr(a[i],b[i],cols);	//从a中复制元素到b
	}
	//打印b中的元素
	for ( i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++) {
			printf("%f ",b[i][j]);
		}
		putchar('\n');
	}
}