/*----------------------------------------------
File: F:\Study\workspace\C\C Primer Plus\第9章 函数\exec10.c
Date: 2014/11/16 20:03:34
Author: iamchuzhiyan@gmail.com
----------------------------------------------*/
//函数声明
//Fibonacci
int Fibonacci(int num);
//Fibonacci2
int Fibonacci2(int num);
//测试函数
void test(void);

//主函数
int main(void)
{
	test();
	return 0;
}

int Fibonacci(int num)
{
	if (1 == num || 2 == num) {
		return 1;
	}
	return Fibonacci(num-1) + Fibonacci(num-2);
}

int Fibonacci2(int num)
{
	int i;	//循环标记
	int fibonacci;
	int f0, f1;
	f0 = f1 = 1;
	for ( i = 0; i < num; i++) {
		if (i == 0) {
			f0 = 1;
			fibonacci = f0;
		}
		else if (i == 1)
		{
			f1 =1;
			fibonacci = f1;
		}
		else
		{
			fibonacci = f0 + f1;
			f0 = f1;
			f1 = fibonacci;
		}
	}
	return fibonacci;
}

void test()
{
	int n = 10;
	printf("%d \n",Fibonacci(n));
	printf("%d \n",Fibonacci2(n));
}