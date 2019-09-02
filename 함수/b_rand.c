//간단한 동전 던지기 게임 시뮬레이션

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int b_rand(void);

int main(void)
{
	int a, cho;
	char alo;



	do
	{
		printf("앞면 또는 뒷면(1 또는 0): ");
		scanf_s("%d", &cho);

		srand((unsigned)time(NULL));
		a = b_rand();
		
		if (cho == a)
		{
			printf("맞았습니다.\n");
		}

		else
		{
			printf("틀렸습니다.\n");
		}

		printf("계속하시겠습니까?(y 또는 n): ");
		scanf(" %c", &alo);

		puts("");

	} while (alo == 'y');

	return 0;
}

int b_rand(void)
{
	return rand() % 2;
}