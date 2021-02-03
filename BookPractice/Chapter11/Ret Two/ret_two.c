#include <stdio.h>

void get_kcm_gcd(int x, int y, int *p_lcm, int *p_gcd);
extern int get_num(void);

int main(void)
{
	int lcm, gcd;
	int x, y;

	x = get_num();
	y = get_num();

	get_kcm_gcd(x, y, &lcm, &gcd);

	printf("두 수의 최대공약수: %d, 최소공배수: %d\n", gcd, lcm);
	
	return 0;
}

void get_kcm_gcd(int x, int y, int *p_lcm, int *p_gcd)
{
	int r = 0, temp;

	temp = x * y;

	while (y != 0)
	{
		r = x % y;
		x = y;
		y = r;
	}

	*p_gcd = x;

	*p_lcm = temp / *p_gcd;
}
