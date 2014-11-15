/*----------------------------------------------
File: F:\Study\workspace\C\C Primer Plus\第9章 函数\swap.c
Date: 2014/11/15 10:46:51
Author: iamchuzhiyan@gmail.com
----------------------------------------------*/
##include <stdio.h>

//函数声明
//交换a,b
void swap(int *a, int *b);
//测试
void test(void);
//主函数
int main(void)
{
	//测试
	test();
}

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void test(void)
{
	int i = 20;
	int j = 100;
	printf("Before swaping, i = %d, and j = %d. \n",i,j);
	swap(&i, &j);
	printf("After swaping, i = %d, and j = %d. \n",i,j);
}