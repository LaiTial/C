#include <stdio.h>

void printf_seat(int seat[], int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		printf("%02d ", seat[i]);
	}

	puts("");

	return;
}

void printf_seat_2(int *seat, int n, int m)
{
	int i;

	for (i = 0; i < n*m; i++)
	{
		printf("%02d ", seat[i]);

		if ((i+1)%m == 0)
		{
			puts("");
		}
	}

	puts("");

	return;
}

