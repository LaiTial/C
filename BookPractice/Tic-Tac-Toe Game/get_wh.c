#include <stdio.h>

void check(int x, int y, char board[][3]);

void get_wh(char board[3][3])
{
	int x, y;

	printf("(x, y)ÁÂÇ¥: ");
	scanf_s("%d %d", &x, &y);

	check(x, y, board);
}

void check(int x, int y, char board[][3])
{
	static int t = 0;
	
	if (board[x][y] == '\0')
	{
		if (t % 2 == 0)
		{
			board[x][y] = 'X';
		}

		else
		{
			board[x][y] = 'O';
		}

		t++;
	}

	else
	{
		printf("Àß¸øµÈ À§Ä¡ÀÔ´Ï´Ù.\n");

	}
}
