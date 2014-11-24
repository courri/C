/*----------------------------------------------
File: F:\Study\workspace\C\C Primer Plus\第10章 数组和指针\编程练习\exec1.c
Date: 2014/11/17 15:39:50
Author: iamchuzhiyan@gmail.com
----------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#define MONTHS 12
#define YEARS 5

//函数声明
//统计所有年份的总降水量
float getYearsTotalRainfall(float rain[][MONTHS]);
//统计所有年份每年的降水量
float* getYearlyTotalRainfall(float rain[][MONTHS]);
//统计所有年份中每年的平均降水量
float getYearlyAverageRainfall(float total);
//统计所有年份中每个月份的总降水量
float* getMonthlyTotalRainfall(float rain[][MONTHS]);
//统计每个月份的平均降水量
float* getMonthlyAverageRainfall(float monthlyTotal[]);
//打印每年的降水量
void printYearlyTotalRainfall(float rain[][MONTHS]);
//打印年平均降水量
void printYearlyAverageRainfall(float rain[][MONTHS]);
//打印每月的平均降水量
void printMonthlyAverageRainfall(float rain[][MONTHS]);

//主函数
int main(void)
{
	//把数组初始化为2000年到2004年的降水量数据
	float rain[YEARS][MONTHS] = {
		{4.3f,4.3f,4.3f,3.0f,2.0f,1.2f,0.2f,0.2f,0.4f,2.4f,3.5f,6.6f},
		{8.5f,8.2f,1.2f,1.6f,2.4f,0.0f,5.2f,0.9f,0.3f,0.9f,1.4f,7.3f},
		{9.1f,8.5f,6.7f,4.3f,2.1f,0.8f,0.2f,0.2f,1.1f,2.3f,6.1f,8.4f},
		{7.2f,9.9f,8.4f,3.3f,1.2f,0.8f,0.4f,0.0f,0.6f,1.7f,4.3f,6.2f},
		{7.6f,5.6f,3.8f,2.8f,3.8f,0.2f,0.0f,0.0f,0.0f,1.3f,2.6f,5.2f}	
	};
	printYearlyTotalRainfall(rain);
	printYearlyAverageRainfall(rain);
	printMonthlyAverageRainfall(rain);
	return 0;
}

//函数定义
//统计所有年份的总降水量
float getYearsTotalRainfall(float rain[][MONTHS])
{
	int year,month;	//循环标记
	float total = 0;
	for (year = 0; year < YEARS; year++) {
		for (month = 0; month < MONTHS; month++) {
			total += rain[year][month];
		}
	}
	return total;
}

//统计所有年份中每年的降水量
float *getYearlyTotalRainfall(float rain[][MONTHS])
{
	int year,month;	//循环标记
	float total = 0;
	float *yearlyTotal = (float *)malloc(YEARS*sizeof(float));
	for (year = 0; year < YEARS; year++) {
		total = 0;
		for (month = 0; month < MONTHS; month++) {
			total += rain[year][month];
		}
		yearlyTotal[year] = total;
	}
	return yearlyTotal;
}

//统计所有年份中每年的平均降水量
float getYearlyAverageRainfall(float total)
{
	return total / YEARS;
}

float* getMonthlyTotalRainfall(float rain[][MONTHS])
{
	int year,month;	//循环标记
	float total = 0;
	float *monthlyTotal = (float *)malloc(MONTHS*sizeof(float));
	
	for (month = 0; month < MONTHS; month++) {
		total = 0;
		for (year = 0; year < YEARS; year++) {
			total += rain[year][month];
		}
		monthlyTotal[month] = total;
	}
	return monthlyTotal;
}

float* getMonthlyAverageRainfall(float monthlyTotal[MONTHS])
{
	int month;	//循环标记
	float *monthlyAverage = (float *)malloc(MONTHS*sizeof(float));
	for (month = 0; month < MONTHS; month++) {
		monthlyAverage[month] = monthlyTotal[month] / YEARS;
	}
	return monthlyAverage;
}

//打印每年的降水量
void printYearlyTotalRainfall(float rain[][MONTHS])
{
	int year = 0;
	float *yearlyTotal = (float *)malloc(YEARS*sizeof(float));
	printf(" YEAR	RAINFALL (inched) \n");
	yearlyTotal = getYearlyTotalRainfall(rain);
	for (year = 0; year < YEARS; year++) {
		printf("%5d %15.1f\n",2000 + year, yearlyTotal[year]);
	}
}
//打印年平均降水量
void printYearlyAverageRainfall(float rain[][MONTHS])
{
	//求总降水量
	float total = getYearsTotalRainfall(rain);
	float average = getYearlyAverageRainfall(total);
	printf("The yearly average is %.1f inches.\n",average);
}
//打印每月的平均降水量
void printMonthlyAverageRainfall(float rain[][MONTHS])
{
	int month = 0;
	float* monthlyTotal = getMonthlyTotalRainfall(rain);
	float* monthAverage = getMonthlyAverageRainfall(monthlyTotal);
	printf("MONTHLY AVERAGES: \n");
	printf(" Jan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec \n");

	for (month = 0; month < MONTHS; month++) {
		printf("%4.1f",monthAverage[month]);
	}
	putchar('\n');
}