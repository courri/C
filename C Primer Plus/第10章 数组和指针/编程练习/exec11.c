/*----------------------------------------------
File: F:\Study\workspace\C\C Primer Plus\第10章 数组和指针\编程练习\exec11.c
Date: 2014/11/23 19:23:12
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
void getYearlyTotalRainfall(float rain[][MONTHS], int years, int months, float *yearlyTotal);
//统计所有年份中每年的平均降水量
float getYearlyAverageRainfall(float total);
//统计所有年份中每个月份的总降水量
void getMonthlyTotalRainfall(float rain[][MONTHS], int months, float *monthlyTotal);
//统计每个月份的平均降水量
void getMonthlyAverageRainfall(float *monthlyTotal, int months, float *monthlyAverage);
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
	int y,m;	//循环标记
	float total = 0;
	float temp;
	for (y = 0; y < YEARS; y++) {
		for (m = 0; m < MONTHS; m++) {
			//temp = rain[y][m];
			//temp = *(&rain[0][0] + y*MONTHS + m);
			temp = *(*(rain+y)+m);
			total += temp;
		}
	}
	return total;
}

//统计所有年份中每年的降水量
void getYearlyTotalRainfall(float rain[][MONTHS], int years, int months, float *yearlyTotal)
{
	int y,m;	//循环标记
	float total = 0;
	//float *yearlyTotal = (float *)malloc(YEARS*sizeof(float));
	for (y = 0; y < years; y++) {
		total = 0;
		for (m = 0; m < months; m++) {
			total += *(*(rain+y)+m);
		}
		*yearlyTotal++ = total;
	}
}

//统计所有年份中每年的平均降水量
float getYearlyAverageRainfall(float total)
{
	return total / YEARS;
}

void getMonthlyTotalRainfall(float rain[][MONTHS], int months, float *monthlyTotal)
{
	int y,m;	//循环标记
	float total = 0;
/*	float *monthlyTotal = (float *)malloc(MONTHS*sizeof(float));*/

	for (m = 0; m < months; m++) {
		total = 0;
		for (y = 0; y < YEARS; y++) {
			total += *(*(rain+y)+m);
		}
		*monthlyTotal++ = total;
	}
}

void getMonthlyAverageRainfall(float *monthlyTotal, int n, float *monthlyAverage)
{
	int month;	//循环标记
	for (month = 0; month < n; month++) {
// 		*monthlyAverage = (*monthlyTotal) / YEARS;
// 		monthlyTotal++;
// 		monthlyAverage++;
		*monthlyAverage++ = (*monthlyTotal++) / YEARS;
	}
}

//打印每年的降水量
void printYearlyTotalRainfall(float rain[][MONTHS])
{
	int year = 0;
	float yearlyTotal[YEARS];
	printf(" YEAR	RAINFALL (inched) \n");
	getYearlyTotalRainfall(rain, YEARS, MONTHS, yearlyTotal);//求每年（十二个月）的总降水量
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
	float monthlyTotal[MONTHS];
	float monthlyAverage[MONTHS];
	getMonthlyTotalRainfall(rain, MONTHS, monthlyTotal);
	getMonthlyAverageRainfall(monthlyTotal, MONTHS, monthlyAverage);
	printf("MONTHLY AVERAGES: \n");
	printf(" Jan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec \n");

	for (month = 0; month < MONTHS; month++) {
		printf("%4.1f",monthlyAverage[month]);
	}
	putchar('\n');
}