#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double f_rand(void);

int main(void)
{
	int i;

	srand((unsigned)time(NULL));

	for ( i = 0; i < 5; i++)
	{
		printf("%f ", f_rand());
	}

	puts("");

	return 0;
}

double f_rand(void)
{
	return rand() / (double)RAND_MAX;
}