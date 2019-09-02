#include <stdio.h>

void init(char board[][3]);
extern void get_wh(char board[3][3]);
extern void print_bo(char board[][3]);
extern void check_win(char board[][3]);

int main(void)
{
	char board[3][3];

	init(board);

	while (1)
	{
		get_wh(board);

		print_bo(board);
		check_win(board);

		puts("");
	}

	return 0;
}

void init(char board[][3])
{
	int i, j;

	for ( i = 0; i < 3; i++)
	{
		for ( j = 0; j < 3; j++)
		{
			board[i][j] = '\0';
		}
	}
}




