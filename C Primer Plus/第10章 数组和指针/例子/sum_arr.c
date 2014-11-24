/*----------------------------------------------
File: F:\Study\workspace\C\C Primer Plus\第10章 数组和指针\例子\sum_arr1.c
Date: 2014/11/24 19:16:04
Author: iamchuzhiyan@gmail.com
----------------------------------------------*/
//sum_arr1.c --对一个数组的所有元素求和
#include <stdio.h>
#define SIZE 10

//函数声明
// arr[] 整型数组
// n 数组元素个数
int sum(int arr[], int n);

//start 数组的起始地址
//end 数组的结束地址
int sump(int *start, int *end);

//主函数
int main(void)
{
	int marbles[SIZE] = {
		20, 10, 5, 39, 4, 16, 19, 26, 31, 20	
	};
	int answer = sum(marbles, SIZE);
	int answer2 = sump(marbles, marbles+SIZE);
	
	printf("The total number of marbles is %d. \n", answer);
	printf("The total number of marbles is %d. \n", answer2);
	printf("The size of marbles is %u bytes. \n", sizeof(marbles)); //%u 无符号十进制数
	return 0;
}
//求数组中元素之和
int sum(int a[], int n)
{
	int i = 0; //循环标记
	int total = 0; //和
	for ( i = 0; i < n; i++) {	//求和
		total += a[i];
	}
	printf("The size of a is %u bytes. \n", sizeof(a));
	return total;	//返回 和
}

//求数组元素之和
int sump(int *start, int *end)
{
	int total = 0;	//和
	while (start < end) {
		total += (*start);//把值累加的total上
		start++;	//把指针指向下一个元素
	}
	return total;
}