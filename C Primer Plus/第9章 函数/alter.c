/*----------------------------------------------
File: F:\Study\workspace\C\C Primer Plus\第9章 函数\alter.c
Date: 2014/11/15 11:10:30
Author: iamchuzhiyan@gmail.com
----------------------------------------------*/
#include <stdio.h>
//函数声明
//将变量的数字改为它们的和及差
void alter(int *a, int *b);
//测试函数
void test();

int main(void)
{
	test();
	return 0;
}
//函数定义
void alter(int* a, int* b)
{
	int sum = *a + *b;	//求和
	int difference = *a - *b;	//求差
	*a = sum;	
	*b = difference;
}

void test()
{
	int i = 10;
	int j = 1;
	printf("Before alter, i = %d, and j = %d. \n",i, j);
	alter(&i, &j);
	printf("After alter, i = %d, and j = %d. \n",i, j);
}
