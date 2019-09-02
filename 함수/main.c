#include <stdio.h>
#include <stdlib.h>
#include <time.h>

extern void disp_car(int car_number, int distance);

int main(void)
{
	int dis1, dis2;

	srand((unsigned)time(NULL));

	do
	{
		dis1 = rand() % 50;
		dis2 = rand() % 50;

		disp_car(1, dis1);
		disp_car(2, dis2);

		printf("-------------------------\n");

		getch();

	} while (1);


	return 0;
}
