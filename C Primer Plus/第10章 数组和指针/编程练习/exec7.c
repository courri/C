/*----------------------------------------------
File: F:\Study\workspace\C\C Primer Plus\��10�� �����ָ��\�����ϰ\exec7.c
Date: 2014/11/22 19:24:14
Author: iamchuzhiyan@gmail.com
----------------------------------------------*/
#include <stdio.h>
#include <malloc.h>
//��������
void copy_ptr(double *source, double *target, int n);
//���Ժ���
void test(void);
int main(void)
{
	test();
}

void copy_ptr(double *source, double *target, int n)
{
	int i = 0;	//ѭ�����
	printf("copy_ptr: \n");
	for ( i = 0; i < n; i++) {
		*target = *source;
		printf("%f ", *target);
		target++;
		source++;
	}
}

void test(void)
{
	double source[] = {1.1,2.2,3.3,4.4,5.5,6.6,7.7};
	double *target;
	int n = 3;
	int i;
	target = (double *)malloc(n*sizeof(double));
	
	
	copy_ptr((source+3),target, 3);
	putchar('\n');
	for ( i = 0; i < n; i++) {
		printf("%f ", *target++);
	}
	putchar('\n');
}
