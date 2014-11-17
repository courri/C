/*----------------------------------------------
File: F:\Study\workspace\C\C Primer Plus\第10章 数组和指针\编程练习\exec2.c
Date: 2014/11/17 16:59:46
Author: iamchuzhiyan@gmail.com
----------------------------------------------*/
#include <stdio.h>

//函数声明
void copy_arr(double source[], double target[], int n);

void copy_ptr(double source[], double target[], int n);

int main(void)
{
	double source[] = {1.1,2.2,3.3,4.4,5.5};
	double target1[5],target2[5];
	int n = 5;
	copy_arr(source, target1, n);
	copy_ptr(source, target2, n);
	return 0;
}

void copy_arr(double source[], double target[], int n)
{
	int i = 0;	//循环标记
	printf("copy_arr: \n");
	for ( i = 0; i < n; i++) {
		target[i] = source[i];
		printf("%f", target[i]);
	}
	putchar('\n');
}

void copy_ptr(double source[], double target[], int n)
{
	int i = 0;	//循环标记
	printf("copy_ptr: \n");
	for ( i = 0; i < n; i++) {
		*target = *source;
		printf("%f", *target);
		target++;
		source++;
	}
}

