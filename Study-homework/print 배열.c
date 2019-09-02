#include <stdio.h>

void print_nu(int size);
void printf_seat(int seat[], int size);

void print_nu(int size)
{
	int i;

	printf("-----------------------------------------\n");

	for (i = 1; i <= size; i++)
	{
		printf(" %2d ", i);
	}

	printf("\n-----------------------------------------\n");

}

void printf_seat(int seat[], int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		printf(" %2d ", seat[i]);
	}

	puts("");

	return;
}

