#include <stdio.h>

int main(void)
{
	int x = 4; //0100

	printf("x << 1 << = %#08x\n", x << 1); //1000
	printf("x >> 1 >> = %#08x\n", x >> 1); //0010

	return 0;
}
