#include <stdio.h>

int main(void)
{
	int x = 4; //0100

	printf("ºñÆ® << = %#08x\n", x << 1); //1000
	printf("ºñÆ® >> = %#08x\n", x >> 1); //0010

	return 0;
}
