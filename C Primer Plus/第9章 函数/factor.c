//C Primer Plus\第9章 函数\factor.c 利用循环和递归计算阶乘
/*----------------------------------------------
Date: 2014/11/13 20:29:07
Author: ZhangLe
----------------------------------------------*/
#include <stdio.h>
//函数声明
long fact(int n);
long rfact(int n);
//主函数
int main(void)
{
	int num;
	printf("This program calculates factorials. \n");
	num = 4;
	printf("loop: %d factorial = %d\n",num, fact(num));
	printf("recursion: %d factorial = %d\n",num, rfact(num));
}

//函数定义
//利用循环计算阶乘
long fact(int n)
{
	int i = 0;   	//循环标记
	long ans = 1;	//阶乘结果
	for(ans = 1; n > 1; n--)
	{
		ans = ans * n;
	}
	return ans;
}
//利用递归计算阶乘
long rfact(int n)
{
	long ans = 1;
	if (n > 0) 
	{
		ans = n * rfact(n-1);
	}
	return ans;
}