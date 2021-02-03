#include <stdio.h>

int fib_iter(int n);

int main(void)
{
	int i, result, n;

	printf("몇 번째 열까지 피보나치 수열을 출력할까요? ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		result = fib_iter(i);

		printf("%d ", result);
	}

	return 0;
}

int fib_iter(int n)
{
	if (n < 2) return n;
	else
	{
		int i, tmp, f1 = 1, f0 = 0;

		for ( i = 2; i <= n; i++)
		{
			tmp = f1;
			f1 += f0;
			f0 = tmp;
		}
		return f1;

	}

}
