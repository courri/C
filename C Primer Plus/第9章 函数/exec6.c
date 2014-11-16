/*----------------------------------------------
File: F:\Study\workspace\C\C Primer Plus\第9章 函数\exec6.c
Date: 2014/11/16 19:40:01
Author: iamchuzhiyan@gmail.com
----------------------------------------------*/
//函数声明
//得到字母 letter 在字母表中的位置
int getLetterLocation(char letter);
//将字母变为小写字母
void lower(char c[], int n);
//测试函数
void test(void);
//主函数
int main(void)
{
	test();
	return 0;
}

//函数定义
int getLetterPosition(char letter)
{
	int position = 0;
	return letter-'a' + 1;
}

//将字母变为小写字母
void lower(char c[], int n)
{
	int i; //循环标记
	for ( i = 0; i < n; i++) {
		//判断 c[i] 是大写字母还是小写字母
		if (c[i] >= 'A' && c[i] <= 'Z') {
			c[i] = c[i] + 32; //将大写字母变换为小写字母
		}
	}
}

void test(void)
{
	char c[] = {'H','e','l','l','o','W','o','r','l','d'};
	int n = 10;
	int i;
	lower(c, n);
	for ( i = 0; i < n; i++) {
		printf("%d ", getLetterPosition(c[i]));
	}
}