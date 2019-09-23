#include <stdio.h>

int main(void)
{
	int x = 9;
	int y = 10;

	printf("x&y AND: %08X\n", x&y);
	printf("x|y OR: %08X\n", x|y);
	printf("x^y XOR: %08X\n", x^y);
	printf("~x NOT: %08X\n", ~x);


	return 0;
}
