/*----------------------------------------------
File: F:\Study\workspace\C\C Primer Plus\第10章 数组和指针\编程练习\exec5.c
Date: 2014/11/18 14:52:05
Author: iamchuzhiyan@gmail.com
----------------------------------------------*/
#include <stdio.h>

//函数声明
//返回double 数组中最大值与最小值的差值
//double d[] double类型数组
//int n 数组中元素的个数
double getDifferenceBetweenMaxandMin(double d[], int n);
//测试函数
void test(void);
//主函数
int main(void)
{
	test();
	return 0;
}

//函数定义
//返回double 数组中最大值与最小值的差值
double getDifferenceBetweenMaxandMin(double d[], int n)
{
	//变量声明
	double max, min, difference;	//数组中的最大值与最小值
	int i;	//循环标记
	//找出数组中的最大值与最小值
	max = min = d[0];	//将d[0]赋值给max，min。使最大值最小值先等于d[0]
	for ( i = 1; i < n; i++) {
		if (max < d[i]) { 	//寻找最大值
			max = d[i];
		}
		if (min > d[i]) {	//寻找最小值
			min = d[i];
		}
	}
	//循环结束后，返回max与min的差值
	difference = max - min;
	return difference;
}
//测试函数
void test(void)
{
	double d[] = {5.3,1.0,2.4,3.1,8,6.5,6.6,7.8};
	int n = 8;
	int index = getDifferenceBetweenMaxandMin(d, n);
	printf("The difference between max and min in this array is %d.\n", index);
}
