#include <stdio.h>

#define MAX_STACK 100
#define MIRO_SIZE 6

typedef struct  ObjectRec {
	short r;
	short c;
} Object;

Object stack[MAX_STACK];
int  top = -1;
Object here = { 1,0 }, entry = { 1,0 };

char miro[MIRO_SIZE][MIRO_SIZE] = {
	{'1', '1', '1', '1', '1', '1'},
	{'e', '0', '1', '0', '0', '1'},
	{'1', '0', '0', '0', '1', '1'},
	{'1', '0', '1', '0', '1', '1'},
	{'1', '0', '1', '0', '0', 'x'},
	{'1', '1', '1', '1', '1', '1'},
};

void push(Object here)
{
	top++;
	stack[top] = here;
}

Object pop()
{
	return stack[top--];
}

void EndCheck()
{
	int x, y;

	x = here.r;
	y = here.c;

	if ((miro[x][y + 1] == 'x'))
		here.c += 1;


	else if ((miro[x][y - 1] == 'x'))
		here.c -= 1;


	else if (miro[x + 1][y] == 'x')
		here.r += 1;



	else if ((miro[x - 1][y] == 'x'))
		here.r -= 1;

}

void printMiro(void)
{
	int x, y;

	x = here.r;
	y = here.c;

	if ((miro[x][y + 1] == '0'))
	{
		push(here);
		miro[x][y + 1] = 'T';
		here.c += 1;
	}

	else if ((miro[x][y - 1] == '0'))
	{
		push(here);
		miro[x][y - 1] = 'T';
		here.c -= 1;
	}

	else if (miro[x + 1][y] == '0')
	{
		push(here);
		miro[x + 1][y] = 'T';
		here.r += 1;
	}


	else if ((miro[x - 1][y] == '0'))
	{
		push(here);
		miro[x - 1][y] = 'T';
		here.r -= 1;
	}

	else
		here = pop();

	for (int i = 0; i < MIRO_SIZE; i++)
	{
		for (int j = 0; j < MIRO_SIZE; j++)
			printf("%c ", miro[i][j]);
		puts("");
	}
	puts("");

	EndCheck();
}

void main()
{
	here = entry;
	printMiro();
	while (miro[here.r][here.c] != 'x')
	{
		printMiro();
	}
}
