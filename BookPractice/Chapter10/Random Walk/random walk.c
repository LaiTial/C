#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <process.h>
#define N 20
#define M 30

int break_check(int tile[N][M]);
int check(int i, int j, int tile[N][M]);
void make_choice(int *i, int *j, int number);
void for_move(int tile[N][M]);

int main(void)
{
	int tile[N][M] = {0};
	
	srand((unsigned)time(NULL));
	for_move(tile);
	
	return 0;
}

void for_move(int tile[N][M])
{
	int number;
	int i = N/2, j = M/2, n = 0;
	tile[i][j] = 1;
	
	srand((unsigned)time(NULL));
	
	while (n <= 100000)
	{
		number = rand() % 8;
		make_choice(&i, &j, number);
		
		n = check(i, j, tile);
		if (n == -1)
		{
			continue;
		}

		if (break_check(tile) != -1)
		{
			printf("딱정벌레의 총 이동수 = %d\n", n);
			exit(0);
		}
	}

	printf("딱정벌레가 모든 타일을 지나지 못했습니다.\n");
	exit(0);
}

void make_choice(int *i, int *j, int number)
{
	switch (number)
	{
	case 0:
		*i = *i - 1;
		break;
	case 1:
		*i = *i - 1, *j = *j + 1;
		break;
	case 2:
		*j = *j + 1;
		break;
	case 3:
		*i = *i + 1, *j = *j + 1;
		break;
	case 4:
		*i = *i + 1;
		break;
	case 5:
		*i = *i + 1, *j = *j - 1;
		break;
	case 6:
		*j = *j - 1;
		break;
	case 7:
		*i = *i - 1, *j = *j - 1;
		break;
	}
	return;
}

int check(int i, int j, int tile[N][M])
{
	static int n = 0;

	if ((i <= N && i >= 0) && (j <= M && j >= 0))
	{
		tile[i][j] = 1;
		n++;
		return n;
	}

	else
	{
		return -1;
	}	
}

int break_check(int tile[N][M])
{
	int i, j;

	/*for (i = 0; i < N; i++)
	{
		for (j = 0; j < M; j++)
		{
			printf("%d ", tile[i][j]);
		}
		puts("");
	}*/

	for ( i = 0; i < N; i++)
	{
		for (j = 0; j < M; j++)
		{
			if (tile[i][j] == 0)
			{
				return -1;
			}
		}
	}

	return 1;
}
