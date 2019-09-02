#include <stdio.h>
#define SIZE 10

void wh_seat(int seat[]);
extern void print_nu(int size);
extern void printf_seat(int seat[], int size);

int main(void)
{
	int seat[SIZE] = {0};
	char ch;

	do
	{
		printf("좌석을 예약하시겠습니까?(y 또는 n) ");
		scanf_s(" %c", &ch, 1);

		if (ch == 'y')
		{
			print_nu(SIZE);
			printf_seat(seat, SIZE);
			wh_seat(seat);
		}

		puts("");

	} while (ch != 'n');
	
	return 0;
}

void wh_seat(int seat[])
{
	int ch;



	do
	{
		printf("\n몇번째 좌석을 예약하시겠습니까? ");
		scanf(" %d", &ch);

		if (ch >= 1 && ch <= SIZE)
		{
			break;
		}
		
		printf("잘못된 번호를 선택하셨습니다. 다시 입력해주세요.\n");
		
	} while (ch < 1 || ch > SIZE);

	if (seat[ch-1] != 1)
	{
		seat[ch-1] = 1;
		printf("예약되었습니다.\n");
	}

	else
	{
		printf("이미 예약된 좌석입니다. 다른 좌석을 선택하세요.\n");
	}

	return;
}

