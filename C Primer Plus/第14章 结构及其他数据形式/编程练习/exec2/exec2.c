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
//����һ���ṹ��
struct month {
	char name[20];			//�·ݵ�����
	char abbreviation[5];	//�·����ֵ���д
	int days;				//���·ݵ�����
	int no;					//�·ݺ�
};

//����һ���·�����
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

//������
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
 * @inparam  	: no �·ݺ�
 * @outparam    : 
 * @description : ���·ݺż��㵽��no����Ϊֹ���������·ݣ����ܹ�������
 */
int getDayswithNo(int no)
{
	int total = 0;	//����no����Ϊֹ���������·ݣ����ܹ�������
	int i;	//ѭ�����
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
 * @inparam  	: name	�·���
 * @outparam    : 
 * @description : ���·������㵽name��Ϊֹ���������·ݣ����ܹ�������
 */
int getDayswithName(char *name)
{
	//ͨ���·�����ȡ�·ݺ�
	int no = getNamewithNo(name);
	//ͨ���·ݺŻ�ȡ����
	int total = getDayswithNo(no);
	return total;
}
/*
 * @function    : getNamewithNo
 * @author   	: ZhangLe
 * @date     	: 2014/12/3 20:00
 * @version  	: ver 1.0
 * @inparam  	: name �·���
 * @outparam    : no �����·ݺ�
 * @description : ͨ���·�����ȡ�·ݺ�
 */
int getNamewithNo(char *name)
{
	int i; //ѭ�����
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
 * @outparam    : ��������꣬����1�����򣬷���0
 * @description : �ж������yearʱ��������
 */
int isLeapyear(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) //�ܱ�4�����Ҳ��ܱ�100���������ܱ�400����
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
 * @outparam    : ����һ���е��������ӵ�����
 * @description : ����һ���е��������ӵ�����
 */
int getDayswithDMY(int day, int month, int year)
{
	int total = 0;
	//���ж������year�Ƿ�������
	int leapyear = 0;
	leapyear = isLeapyear(year);
	
	if (leapyear)	//����
	{
		total = getDayswithNo(month) + day;
	} 
	else			//������
	{
		if (month < 2)
		{
			total = getDayswithNo(month) + day;
		} 
		else
		{
			total = getDayswithNo(month) + day + 1; //�����꣬��2������һ��
		}	
	}
	return total;
}