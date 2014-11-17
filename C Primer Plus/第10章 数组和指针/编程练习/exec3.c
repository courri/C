/*----------------------------------------------
File: F:\Study\workspace\C\C Primer Plus\第10章 数组和指针\编程练习\exec3.c
Date: 2014/11/17 17:08:43
Author: iamchuzhiyan@gmail.com
----------------------------------------------*/
#include <stdio.h>
//函数声明
//返回数组中存储的最大值
int getMaxinArray(int array[], int n);

//主函数
int main(void)
{
	int array[8] = {22,8,50,13,55,100,2,4};
	printf("max = %d",getMaxinArray(array, 8));
	return 0;
}

int getMaxinArray(int array[], int n)
{
	int i=0; //循环标记
	int max = 0;
	for ( i = 0; i < n-1; i++) {
		if (array[i] > array[i+1]) {//交换
			int temp = array[i];
			array[i] = array[i+1];
			array[i+1] = temp;
		}
	}
	max = array[n-1];
	return max;
}