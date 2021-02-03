#include <stdio.h>

void disp_car(int car_number, int distance)
{
	int i;

	printf("CAR #%d: ", car_number);

	for ( i = 0; i < distance; i++)
	{
		printf("*");
	}

	puts("");

	return;
}

