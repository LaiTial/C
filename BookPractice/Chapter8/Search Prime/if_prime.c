#include <stdio.h>

int is_prime(int n)
{
	int i, t = 0;

	for ( i = 1; i <= n; i++)
	{
		if (n%i == 0)
		{
			t++;
			if (t>=3)
			{
				break;
			}
		}
	}

	return t;
}

void print_re(int n, int t)
{
	if (t == 2)
	{
		printf("%d은 소수입니다.\n", n);
	}

	else
		printf("%d는 소수가 아닙니다.\n", n);
}

int get_integer(void)
{
	int x;

	printf("정수를 입력하시오: ");
	scanf("%d", &x);

	return x;
}
