#include <process.h>
#include <stdio.h>

char try_lit(char board[][3], int i, int j);

void check_win(char board[][3])
{
	char win = '\0';
	int i;

	for (i = 0; i < 3; i++)
	{
		if ((board[i][0] == board[i][1]) && (board[i][1] == board[i][2]))
		{
			win = try_lit(board, i, 1);
		}
		else if (board[0][i] == board[1][i] && board[1][i] == board[2][i])
		{
			win = try_lit(board, 1, i);

		}

	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
	{
		win = try_lit(board, 1, 1);
	}
	else if (board[2][0] == board[1][1] && board[1][1] == board[0][2])
	{
		win = try_lit(board, 1, 1);
	}

	if (win != '\0')
	{
		printf("\n축하합니다!\n");
		printf("우승자는 %c입니다!\n", win);

		exit(0);
	}
}

char try_lit(char board[][3], int i, int j)
{
	char win = '\0';

	if (board[i][j] == 'O')
	{
		win = 'O';
	}

	else if (board[i][j] == 'X')
	{
		win = 'X';
	}

	return win;
}
