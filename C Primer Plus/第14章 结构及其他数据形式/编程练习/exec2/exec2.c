//  [12/3/2014 Happy]
//  [12/3/2014 Happy]
#include <stdio.h>
#include <string.h>
#define LEN 12

int getDayswithNo(int no);
int getDayswithName(char *name);
int getNamewithNo(char *name);
int isLeapyear(int year);
int getDayswithDMY(int day, int month, int year);
//定义一个结构体
struct month {
	char name[20];			//月份的名字
	char abbreviation[5];	//月份名字的缩写
	int days;				//该月份的天数
	int no;					//月份号
};

//定义一个月份数组
struct month months[LEN] = {
	{"January", "Jan", 31, 1},
	{"February", "Feb", 28, 2},
	{"March", "Mar", 31, 3},
	{"April", "Apr", 30, 4},
	{"May", "May", 31, 5},
	{"June", "Jun", 30, 6},
	{"July", "Jul", 31, 7},
	{"August", "Aug", 31, 8},
	{"September", "Sep", 30, 9},
	{"October", "Oct", 31, 10},
	{"November", "Nov", 30, 11},
	{"December", "Dec", 31, 12}
};

//主函数
int main(void)
{
	int input_day = -1;
	int input_month = -1;
	int input_year = -1;
	puts("Please enter day, month and year:");
	scanf("%d, %d, %d", &input_day, &input_month, &input_year);
	printf("There are %d days through .\n", getDayswithDMY(input_day,input_month,input_year));
	return 0;
}

/*
 * @function    : getDayswithNo
 * @author   	: ZhangLe
 * @date     	: 2014/12/3 19:56
 * @version  	: ver 1.0
 * @inparam  	: no 月份号
 * @outparam    : 
 * @description : 用月份号计算到第no个月为止（包含该月份）中总共的天数
 */
int getDayswithNo(int no)
{
	int total = 0;	//到第no个月为止（包含该月份）中总共的天数
	int i;	//循环标记
	if (no > LEN || no <= 0)
	{
		return -1;
	}

	for (i=0; i<no; i++)
	{
		total += months[i].days;
	}
	return total;
}

/*
 * @function    : getDayswithName
 * @author   	: ZhangLe
 * @date     	: 2014/12/3 19:57
 * @version  	: ver 1.0
 * @inparam  	: name	月份名
 * @outparam    : 
 * @description : 用月份名计算到name月为止（包含该月份）中总共的天数
 */
int getDayswithName(char *name)
{
	//通过月份名获取月份号
	int no = getNamewithNo(name);
	//通过月份号获取天数
	int total = getDayswithNo(no);
	return total;
}
/*
 * @function    : getNamewithNo
 * @author   	: ZhangLe
 * @date     	: 2014/12/3 20:00
 * @version  	: ver 1.0
 * @inparam  	: name 月份名
 * @outparam    : no 返回月份号
 * @description : 通过月份名获取月份号
 */
int getNamewithNo(char *name)
{
	int i; //循环标记
	int no = -1;
	for (i=0; i<LEN; i++)
	{
		if (strcmp(name,months[i].name) == 0 )
		{
			no = months[i].no;
		}
	}
	return no;
}

/*
 * @function    : isLeapyear
 * @author   	: ZhangLe
 * @date     	: 2014/12/3 21:05
 * @version  	: ver 1.0
 * @inparam  	: year
 * @outparam    : 如果是闰年，返回1；否则，返回0
 * @description : 判断输入的year时候是闰年
 */
int isLeapyear(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) //能被4整除且不能被100整除，或能被400整除
	{
		return 1;
	} 
	else
	{
		return 0;
	}
}
/*
 * @function    : getDayswithDMY
 * @author   	: ZhangLe
 * @date     	: 2014/12/3 21:09
 * @version  	: ver 1.0
 * @inparam  	: day
 * @inparam  	: month
 * @inparam  	: year
 * @outparam    : 返回一年中到给定日子的天数
 * @description : 返回一年中到给定日子的天数
 */
int getDayswithDMY(int day, int month, int year)
{
	int total = 0;
	//先判断输入的year是否是闰年
	int leapyear = 0;
	leapyear = isLeapyear(year);
	
	if (leapyear)	//闰年
	{
		total = getDayswithNo(month) + day;
	} 
	else			//非闰年
	{
		if (month < 2)
		{
			total = getDayswithNo(month) + day;
		} 
		else
		{
			total = getDayswithNo(month) + day + 1; //非闰年，从2月起会多一天
		}	
	}
	return total;
}