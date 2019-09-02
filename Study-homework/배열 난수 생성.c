#include <stdlib.h>
#include <time.h>

void m_rand(int seat[], int size)
{
	int i;

	srand((unsigned)time(NULL));

	for (i = 0; i < size; i++)
	{
		seat[i] = rand() % 100;
	}

	return;
}

void m_rand_2array(int *seat, int n, int m)
{
	int i;

	srand((unsigned)time(NULL));

	for (i = 0; i < n * m; i++)
	{
		seat[i] = rand() % 100;
	}

	return;
} 

void m_rand_several(int seat[], int seat_two[], int size)
{
	int i;

	srand((unsigned)time(NULL));

	for (i = 0; i < size; i++)
	{
		seat_two[i] = rand() % 50;
		seat[i] = rand() % 100;
	}

	return;
}

