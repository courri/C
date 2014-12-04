//  [12/4/2014 Happy]
#define MAX 10
#define CSIZE 4
typedef struct names {
	char first[MAX];
	char last[MAX];
} Name;

typedef struct students {
	Name name;
	double grade[3];
} Students;

int main(void)
{
	//声明一个长度为4的Students的数组，随意初始化名字部分
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
	return 0;
}