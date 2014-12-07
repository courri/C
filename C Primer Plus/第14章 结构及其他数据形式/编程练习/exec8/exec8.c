//  [12/6/2014 Happy]
#include <stdio.h>
#define LEN1 10
#define LEN2 12

typedef struct Seat {
	int seat_id;		//座位的编号
	int seat_mark;			//座位是否已被分配出去的标记
	char *last_name;	//座位预订人的姓
	char *first_name;	//座位预订人的名字
} seat;

seat airplane[LEN2];	//定义一个飞机，上面有LEN2个座位

void initSeats(seat airplane[], int length);
void showSeatsInfo(seat airplane[], int length);
void showMenu();
void exec(char c);
void showNumofEmptySeats(seat airplane[], int length);
void showListofEmptySeats(seat airplane[], int length);
void showAlphabeticalListofSeats(seat airplane[], int length);
void assignSeatAssignment();
void deleteSeatAssignment();
void quit();
int main(void)
{
	showMenu();
	initSeats(airplane,LEN2);
	showSeatsInfo(airplane,LEN2);
	showNumofEmptySeats(airplane,LEN2);
	showListofEmptySeats(airplane,LEN2);
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
void exec(char ch)
{
	switch (ch)
	{
	case 'a' : 
		//Show number of empty seats
		showNumofEmptySeats(airplane,LEN2);
		break;
	case 'b' : 
		//Show list of empty seats
		showListofEmptySeats(airplane,LEN2);
		break;
	case 'c' : 
		//Show alphabetical list of seats
		showAlphabeticalListofSeats(airplane,LEN2);
		break;
	case 'd' : 
		//Assign a customer to a seat assignment
		assignSeatAssignment();
		break;
	case 'e' : 
		//Delete a seat assignment
		deleteSeatAssignment();
		break;
	case 'f' : 
		//Quit
		quit();
		break;
	}
}

/*
 * @function    : initSeats
 * @author   	: ZhangLe
 * @date     	: 2014/12/6 21:40
 * @version  	: ver 1.0
 * @inparam  	: void
 * @outparam    : void
 * @description : 初始化飞机中的座位
 */
void initSeats(seat airplane[], int length)
{
	int i = 0;	//循环标记
	//初始化飞机上的座位
	for (i=0; i<length; i++)
	{
		airplane[i].first_name = "Dear";
		airplane[i].last_name = "Passenger";
		airplane[i].seat_id = i;	//初始化座位编号
		airplane[i].seat_mark = 0;	//初始化座位状态，均为未被分配出去
	}
}

/*
 * @function    : showSeatsInfo
 * @author   	: ZhangLe
 * @date     	: 2014/12/7 21:12
 * @version  	: ver 1.0
 * @inparam  	: void
 * @outparam    : void
 * @description : 打印飞机内座位的信息
 */
void showSeatsInfo(seat airplane[], int length)
{
	int i = 0;	//循环标记
	//打印飞机内座位的信息
	printf("First name     Last name     Seat id     Seat mark\n");
	for (i=0; i<length; i++)
	{
		printf("%s           %s     %d           %d\n",airplane[i].first_name, airplane[i].last_name, airplane[i].seat_id, airplane[i].seat_mark);
	}
}

/*
 * @function    : showNumofEmptySeats
 * @author   	: ZhangLe
 * @date     	: 2014/12/7 21:31
 * @version  	: ver 1.0
 * @inparam  	: void
 * @outparam    : void
 * @description : 显示空座位的数量
 */
void showNumofEmptySeats(seat airplane[], int length)
{
	int i;	//循环标记
	int num = 0; //空座位的数量
	for (i=0; i<length; i++)
	{
		if (airplane[i].seat_mark == 0)	//seat_mark为0，表示座位空
		{
			num ++;	//加1
		}
	}
	//show num
	if (num == 0)
	{
		printf("There is no seat empty.\n");
	} 
	else
	{
		if (num == 1)
		{
			printf("There is %d seats empty.\n",num);
		} 
		else
		{
			printf("There are %d seats empty.\n",num);
		}
	}
}

void showListofEmptySeats(seat airplane[], int length)
{
	int i;	//循环标记
	//int num = 0; //空座位的数量
	for (i=0; i<length; i++)
	{
		if (airplane[i].seat_mark == 0)	//seat_mark为0，表示座位空
		{
			printf("The %d seat is empty.\n",airplane[i].seat_id);
		}
	}
}

void showAlphabeticalListofSeats(seat airplane[], int length)
{

}

void assignSeatAssignment()
{

}

void deleteSeatAssignment()
{

}

void quit()
{

}