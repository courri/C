//  [12/3/2014 Happy]
#include <stdio.h>
#include <string.h>
#define LEN 12

int getDayswithNo(int no);
int getDayswithName(char *name);
int getNamewithNo(char *name);
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
	int input_no = -1;
	char input_name[20];
	//printf("Please enter no of a month: ");
	//while (scanf("%d",&input_no) > 0)
	//{
	//	printf("There are %d days through %d.\n", getDayswithNo(input_no), input_no);
	//	printf("Next month (empty line to quit): ");
	//}
	printf("Please enter name of a month: ");
	while (gets(input_name) != NULL && input_name[0] != '\0')
	{
		printf("There are %d days through %s.\n", getDayswithName(input_name), input_name);
		printf("Next month (empty line to quit): ");
	}

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
