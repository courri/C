/*----------------------------------------------
File: F:\Study\workspace\C\C Primer Plus\第9章 函数\exec7.c
Date: 2014/11/16 20:19:19
Author: iamchuzhiyan@gmail.com
----------------------------------------------*/
//函数声明
//返回n的p次幂
double power(double n, int p);
//测试函数
void test(void);

//主函数
int main(void)
{
	test();
	return 0;
}

//返回n的p次幂
double power(double n, int p)
{
	double pow = 1;	//返回值
	int i;	//循环标记
	if (n - 0 == 0.00000000000001) { //当n逼近0时，n的p次幂为0
		return 0;
	}
	if (p > 0) {	//当p > 0, 求n的p次幂
		for ( i = 0; i < p; i++) {
			pow = pow * n;
		}
	}
	else if (p < 0) {	//当p < 0, 求n的p次幂
		p = -p;
		n = 1 / n;
		for ( i = 0; i < p; i++) {
			pow = pow * n;
		}
	}
	else {	//当p = 0, 直接返回1
		return 1;
	}
	return pow;
}

void test(void)
{
	double n = 4.0;
	int p = -2;
	printf("%f",power(n, p));
}