//  [12/3/2014 Happy]
#include <stdio.h>
#define MAX 10
#define LEN 5
struct names {
	char first[MAX];
	char middle[MAX];
	char last[MAX];
};

struct shebaos {
	struct names shebaoren;
	char no[MAX];
};

typedef struct shebaos SheBao;

//��������
void print(SheBao sb[], int n);
int main(void)
{
	//��������ʼ��һ������5�����д���ṹ������
	struct shebaos home[LEN] = {
		{{"Aribble","Aark","Alossie"},
		"302039821"
		},
		{{"Bribble","Aark","Blossie"},
		"302039822"
		},
		{{"Cribble","Aark","Clossie"},
		"302039823"
		},
		{{"Dribble","Aark","Dlossie"},
		"302039824"
		},
		{{"Eribble","Aark","Elossie"},
		"302039825"
		},
	};

	print(home, LEN);

	return 0;
}

void print(SheBao sb[], int n)
{
	//������� Dribble, Flossie M. - 302039823
	//first, last, middle, - no
	//����middleֻ�����һ����ĸ��������Ͼ��
	int i;	//ѭ�����
	for (i=0; i<n; ++i)
	{
		printf("%s, %s %c. - %s \n",sb[i].shebaoren.first, sb[i].shebaoren.last,sb[i].shebaoren.middle[0],sb[i].no);
	}
}