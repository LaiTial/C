#include <stdio.h>

int gcd(int x, int y)
{
	if (y == 0) return x;
	else return gcd(y, x%y);
}

int main(void)
{
	int x, y;

	printf("두 수를 입력하시오: ");
	scanf("%d %d", &x, &y);

	printf("최대공약수: %d\n", gcd(x, y));


	return 0;
}