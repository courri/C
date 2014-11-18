/*----------------------------------------------
File: F:\Study\workspace\C\C Primer Plus\第10章 数组和指针\编程练习\exec4.c
Date: 2014/11/18 14:42:06
Author: iamchuzhiyan@gmail.com
----------------------------------------------*/
#include <stdio.h>
//函数声明
int getIndexofMaxinArray(double d[], int n);
//测试函数
void test(void);
//主函数
int main(void)
{
	test();
	return 0;
}

//函数定义
int getIndexofMaxinArray(double d[], int n)
{
	int i; //循环标记
	int index = -1;	//返回的索引
	int max;
	max = d[0];		//d[0]赋值给最大值max
	for (i = 1; i < n; i++) {
		if (max < d[i]) {	//如果最大值小于d[i]
			max = d[i];		//将d[i]赋值给max
			index = i;		//将最大值的对应的索引i赋值给index
		} 
	}
	return index;
}

void test(void)
{
	double d[] = {5.3,1.0,2.4,3.1,8,6.5,6.6,7.8};
	int n = 8;
	int index = getIndexofMaxinArray(d, n);
	printf("The index of max in array is %d.\n", index);
}