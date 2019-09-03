#include <stdio.h>
#define N 3
#define A 2
#define M 3

int main(void)
{
	int a[N][A] = {
		{-1, 2},
		{0, 1},
		{4, -3}
	};

	int b[A][M] = {
		{3, 4, 0},
		{1, -2, -5}
	};

	int c[N][M] = {0};
	int i, j, k;

	for ( i = 0; i < N; i++)
	{
		for (j = 0; j < M; j++)
		{
			for ( k = 0; k < A; k++)
			{
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}

	for ( i = 0; i < N; i++)
	{
		for (j = 0; j < M; j++)
		{
			if (j == 0)
			{
				printf("|");
			}

			printf("%3d ", c[i][j]);

			if (j == M-1)
			{
				printf("|");
			}
		}

		puts("");
	}

	return 0;
}

