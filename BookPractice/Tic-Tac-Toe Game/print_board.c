#include <stdio.h>

void print_bo(char board[][3])
{
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("---|---|---\n");
		printf(" %c | %c | %c\n", board[i][0], board[i][1], board[i][2]);
	}

	printf("---|---|---\n");
}
