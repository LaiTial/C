#include <stdio.h>

void hanoi_tower(int n, char from, char temp, char to)
{
	if (n==1)
	{
		printf("원판 1을 %c에서 %c으로 옮긴다.\n",from, to);
	}

	else
	{
		hanoi_tower(n - 1, from, to, temp);
		printf("원판 %d을 %c에서 %c으로 옮긴다.\n", n, from, to);
		hanoi_tower(n - 1, temp, from, to);
		
	}
}

int main(void)
{
	int n;

	printf("몇 개의 원판을 옮길까요? ");
	scanf("%d", &n);

	hanoi_tower(n, 'A', 'B', 'C');

	return 0;
}
