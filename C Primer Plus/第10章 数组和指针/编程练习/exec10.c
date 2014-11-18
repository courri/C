/*----------------------------------------------
File: F:\Study\workspace\C\C Primer Plus\第10章 数组和指针\编程练习\exec10.c
Date: 2014/11/18 15:13:44
Author: iamchuzhiyan@gmail.com
----------------------------------------------*/
#include <stdio.h>
#define ROWS 3	//行
##define COLS 5	//列

//函数声明
//初始化数组
void init(int a[ROWS][COLS]);
//显示数组内容
void print(int a[ROWS][COLS]);
//数组翻番
void fanfan(int a[ROWS][COLS]);
//测试函数
void test(void);
//主函数
int main(void)
{
	int a[ROWS][COLS];
	init(a);
	print(a);
	fanfan(a);
	putchar('\n');
	print(a);
	return 0;
}

void print(int a[ROWS][COLS])
{
	int i, j;	//循环标记
	for ( i = 0; i < ROWS; i++) {
		for ( j = 0; j < COLS; j++) {
			printf("%d ",a[i][j]);
		}
		putchar('\n');
	}
}

void fanfan(int a[ROWS][COLS])
{
	int i, j;	//循环标记
	for ( i = 0; i < ROWS; i++) {
		for ( j = 0; j < COLS; j++) {
			a[i][j] *= 2;
		}
	}
}

void init(int a[ROWS][COLS])
{
		int i, j;	//循环标记
	for ( i = 0; i < ROWS; i++) {
		for ( j = 0; j < COLS; j++) {
			a[i][j] = i + j;
		}
	}
}