#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void convert(double * grades, double *scores, int size);
void m_rand_num(double seat[], int size);
void print_array(double * grades, double *scores, int size);

int main(void)
{
	double grade[10], score[10];

	m_rand_num(grade, 10);
	convert(grade, score, 10);
	print_array(grade, score, 10);

	return 0;
}

void convert(double * grades, double *scores, int size)
{
	int i;

	for ( i = 0; i < size; i++)
	{
		*scores++ = (*grades++ / 4.3) * 100;
	}

	return;
}

void m_rand_num(double seat[], int size)
{
	int i;

	srand((unsigned)time(NULL));

	for (i = 0; i < size; i++)
	{
		seat[i] = rand() % 430;
		seat[i] /= 100.0;
	}
}

void print_array(double * grades, double *scores, int size)
{
	int i;

	printf("          <4.3만점 평점>      <100점 만점 평점>\n");

	for (i = 0; i < size; i++)
	{
		printf("학생 #%02d      %.2f                 %.2f\n", i + 1, grades[i], scores[i]);
	}

	puts("");

	return;
}

