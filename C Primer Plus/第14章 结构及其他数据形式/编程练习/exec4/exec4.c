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

//函数声明
void print(SheBao sb[], int n);
int main(void)
{
	//创建并初始化一个含有5个含有此类结构的数组
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
	//输出规则 Dribble, Flossie M. - 302039823
	//first, last, middle, - no
	//其中middle只输出第一个字母，后面加上句点
	int i;	//循环标记
	for (i=0; i<n; ++i)
	{
		printf("%s, %s %c. - %s \n",sb[i].shebaoren.first, sb[i].shebaoren.last,sb[i].shebaoren.middle[0],sb[i].no);
	}
}