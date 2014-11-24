/*----------------------------------------------
File: F:\Study\workspace\C\C Primer Plus\��10�� �����ָ��\�����ϰ\exec11.c
Date: 2014/11/23 19:23:12
Author: iamchuzhiyan@gmail.com
----------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#define MONTHS 12
#define YEARS 5

//��������
//ͳ��������ݵ��ܽ�ˮ��
float getYearsTotalRainfall(float rain[][MONTHS]);
//ͳ���������ÿ��Ľ�ˮ��
void getYearlyTotalRainfall(float rain[][MONTHS], int years, int months, float *yearlyTotal);
//ͳ�����������ÿ���ƽ����ˮ��
float getYearlyAverageRainfall(float total);
//ͳ�����������ÿ���·ݵ��ܽ�ˮ��
void getMonthlyTotalRainfall(float rain[][MONTHS], int months, float *monthlyTotal);
//ͳ��ÿ���·ݵ�ƽ����ˮ��
void getMonthlyAverageRainfall(float *monthlyTotal, int months, float *monthlyAverage);
//��ӡÿ��Ľ�ˮ��
void printYearlyTotalRainfall(float rain[][MONTHS]);
//��ӡ��ƽ����ˮ��
void printYearlyAverageRainfall(float rain[][MONTHS]);
//��ӡÿ�µ�ƽ����ˮ��
void printMonthlyAverageRainfall(float rain[][MONTHS]);

//������
int main(void)
{
	//�������ʼ��Ϊ2000�굽2004��Ľ�ˮ������
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

//��������
//ͳ��������ݵ��ܽ�ˮ��
float getYearsTotalRainfall(float rain[][MONTHS])
{
	int y,m;	//ѭ�����
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

//ͳ�����������ÿ��Ľ�ˮ��
void getYearlyTotalRainfall(float rain[][MONTHS], int years, int months, float *yearlyTotal)
{
	int y,m;	//ѭ�����
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

//ͳ�����������ÿ���ƽ����ˮ��
float getYearlyAverageRainfall(float total)
{
	return total / YEARS;
}

void getMonthlyTotalRainfall(float rain[][MONTHS], int months, float *monthlyTotal)
{
	int y,m;	//ѭ�����
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
	int month;	//ѭ�����
	for (month = 0; month < n; month++) {
// 		*monthlyAverage = (*monthlyTotal) / YEARS;
// 		monthlyTotal++;
// 		monthlyAverage++;
		*monthlyAverage++ = (*monthlyTotal++) / YEARS;
	}
}

//��ӡÿ��Ľ�ˮ��
void printYearlyTotalRainfall(float rain[][MONTHS])
{
	int year = 0;
	float yearlyTotal[YEARS];
	printf(" YEAR	RAINFALL (inched) \n");
	getYearlyTotalRainfall(rain, YEARS, MONTHS, yearlyTotal);//��ÿ�꣨ʮ�����£����ܽ�ˮ��
	for (year = 0; year < YEARS; year++) {
		printf("%5d %15.1f\n",2000 + year, yearlyTotal[year]);
	}
}
//��ӡ��ƽ����ˮ��
void printYearlyAverageRainfall(float rain[][MONTHS])
{
	//���ܽ�ˮ��
	float total = getYearsTotalRainfall(rain);
	float average = getYearlyAverageRainfall(total);
	printf("The yearly average is %.1f inches.\n",average);
}
//��ӡÿ�µ�ƽ����ˮ��
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