/*----------------------------------------------
File: F:\Study\workspace\C\C Primer Plus\第10章 数组和指针\编程练习\exec9.c
Date: 2014/11/18 15:03:04
Author: iamchuzhiyan@gmail.com
----------------------------------------------*/
#include <stdio.h>

//函数声明
//数组a,b中的元素分别相加存放到数组c中
//数组中的元素个数
void addArrays(const int a[], const int b[], int c[], int n);
//测试函数
void test(void);

//主函数
int main(void)
{
	test();
	return 0;
}

//函数定义
void addArrays(const int a[], const int b[], int c[], int n)
{
	int i;	//循环标记
	for (i = 0; i < n; i++) {
		c[i] = a[i] + b[i];
	}
}
//测试函数
void test(void)
{
	int n = 8;
	int a[] = {1,2,3,4,5,6,7,8};
	int b[] = {1,1,1,1,1,1,1,1};
	int c[8];
	int i;	//循环标记
	addArrays(a, b, c, n);
	for (i = 0; i < n; i++) {
		printf("%d ",*(c+i));
	}
}
