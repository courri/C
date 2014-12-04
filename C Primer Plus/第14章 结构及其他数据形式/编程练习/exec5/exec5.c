//  [12/4/2014 Happy]
#include <stdio.h>
#define MAX 10
#define CSIZE 4
#define LEN 3
typedef struct names {
	char first[MAX];
	char last[MAX];
} Name;

typedef struct students {
	Name name;
	double grade[3];
	double average;
} Students;

void input(Students s[], int len);
double calculateAverage(Students s[], int len);
void print(Students s[], int len);
int main(void)
{
	//����һ������Ϊ4��Students�����飬�����ʼ�����ֲ���
	Students s[CSIZE] = {
		{
			{"Jim","Green"}
		},
		{
			{"Lei","Li"}
		},
		{
			{"Meimei","Han"}
		},
		{
			{"Bob","Green"}
		},
	};
	input(s,CSIZE);
	calculateAverage(s,CSIZE);
	print(s,CSIZE);
	return 0;
}

/*
 * @function    : input
 * @author   	: ZhangLe
 * @date     	: 2014/12/4 21:37
 * @version  	: ver 1.0
 * @inparam  	: void
 * @outparam    : void
 * @description : ��������
 */
void input(Students s[], int len)
{
// 	int i;	//ѭ�����
// 	puts("Please enter data for students.");
// 	for (i=0; i<len; ++i)
// 	{
// 		puts("Please enter name(last first) and grade(1 2 3).");
// 		scanf("%s %s %.2f %.2f %.2f",&s[i].name.first, &s[i].name.last, &s[i].grade[0], &s[i].grade[1], &s[i].grade[2]);
// 	}

	int i,j;
	for (i = 0; i < len; i++)
	{
		printf ("Please enter scores for %s %s:\n",
			s[i].name.first, s[i].name.last);
		for (j = 0; j < LEN; j++)
		{
			while (scanf("%f", &s[i].grade[j]) != 1)
			{
				scanf("%f");
				puts("Please use numeric input.");
			}
		}
	}

}
/*
 * @function    : calculateAverage
 * @author   	: ZhangLe
 * @date     	: 2014/12/4 21:37
 * @version  	: ver 1.0
 * @inparam  	: void
 * @outparam    : void
 * @description : ����ƽ����
 */
double calculateAverage(Students s[], int len)
{
	int i, j;	//ѭ�����
	double total;	//ÿ���˵��ܷ�
	double avg;
	puts("Claculate Average...");
	for (i=0; i<len; ++i)
	{
		//����ܷ�
		total = 0;
		for (j=0; j<LEN; ++j)	
		{
			total += s[i].grade[i];
		}
		//���ƽ����
		avg = total / (LEN * 1.0);
		//��ƽ���ָ�ֵ����Ӧ����
		s[i].average = avg;
	}
}
/*
 * @function    : print
 * @author   	: ZhangLe
 * @date     	: 2014/12/4 21:41
 * @version  	: ver 1.0
 * @inparam  	: void
 * @outparam    : void
 * @description : ���ÿ���ṹ����Ϣ
 */
void print(Students s[], int len)
{
	int i, j;	//ѭ�����
	puts("Output info...");
	for (i=0; i<len; ++i)
	{
		//�������
		printf("%s %s : ",s[i].name.last,s[i].name.first);
		//�������
		for (j=0; j<LEN; ++j)	
		{
			printf("%.2f ",s[i].grade[i]);
		}
		//���ƽ����
		printf("%.2f \n",s[i].average);
	}
	
}