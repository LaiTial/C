#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10



extern void m_rand(int seat[], int size);
extern void print_nu(int size);
extern void printf_seat(int seat[], int size);
extern void range(int seat[], int size);

int main(void)
{
	int seat[SIZE];

	m_rand(seat, SIZE);
	print_nu(SIZE);
	printf_seat(seat, SIZE);

	puts("");

	range(seat, SIZE);
	printf("ÃÖ¼Ò°ª: %d\n\n", seat[0]);

	return 0;
}

