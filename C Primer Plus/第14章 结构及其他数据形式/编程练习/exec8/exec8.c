//  [12/6/2014 Happy]
#include <stdio.h>
#define LEN1 10
#define LEN2 12

typedef struct Seat {
	char seat_id[LEN1];		//座位的编号
	int seat_mark;			//座位是否已被分配出去的标记
	char last_name[LEN1];	//座位预订人的姓
	char first_name[LEN1];	//座位预订人的名字
} seat;

void showMenu();
void exec(char c);

int main(void)
{
	seat airplane[LEN2];	//定义一个飞机，上面有LEN2个座位
	showMenu();
	return 0;
}

/*
 * @function    : showMenu
 * @author   	: ZhangLe
 * @date     	: 2014/12/6 21:20
 * @version  	: ver 1.0
 * @inparam  	: void
 * @outparam    : void
 * @description : 显示菜单
 */
void showMenu()
{
	puts("To choose a function, enter its letter label;");
	puts("a) Show number of empty seats");
	puts("b) Show list of empty seats");
	puts("c) Show alphabetical list of seats");
	puts("d) Assign a customer to a seat assignment");
	puts("e) Delete a seat assignment");
	puts("f) Quit");
}
/*
 * @function    : exec
 * @author   	: ZhangLe
 * @date     	: 2014/12/6 21:34
 * @version  	: ver 1.0
 * @inparam  	: void
 * @outparam    : void
 * @description : 执行菜单给出的功能
 */
void exec(char c)
{

}