//  [12/6/2014 Happy]
#include <stdio.h>
#define LEN1 10
#define LEN2 12

typedef struct Seat {
	char seat_id[LEN1];		//��λ�ı��
	int seat_mark;			//��λ�Ƿ��ѱ������ȥ�ı��
	char last_name[LEN1];	//��λԤ���˵���
	char first_name[LEN1];	//��λԤ���˵�����
} seat;

void showMenu();
void exec(char c);

int main(void)
{
	seat airplane[LEN2];	//����һ���ɻ���������LEN2����λ
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
 * @description : ��ʾ�˵�
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
 * @description : ִ�в˵������Ĺ���
 */
void exec(char c)
{

}