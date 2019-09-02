//반복 루프를 이용하여 별표로 직각삼각형 출력

#include <stdio.h>

int main(void)
{
	int i, j, t;

	for ( i = 0; i < 7; i++)
	{
		for ( j = 0; j < 7-(i+1); j++)
		{
			printf(" ");
		}

		for ( t = 0; t < i+1; t++)
		{
			printf("*");
		}
		puts("");
	}

	return 0;
}