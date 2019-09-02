//오버플로우와 언더플로우

#include <stdio.h>

int main(void)
{
	/*float x = 1e39;
	printf("x = %e\n\n", x);*/

	float x = 1.23456e-38;
	float y = 1.23456e-40;
	float z = 1.23456e-46;

	printf("x = %e\n", x);
	printf("y = %e\n", y);
	printf("z = %e\n", z);


	return 0;
}