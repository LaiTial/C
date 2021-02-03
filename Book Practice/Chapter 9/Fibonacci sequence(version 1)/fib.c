#include <stdio.h>

int fib(int n);

int main(void)
{
	int i, result, n;

	printf("몇 번째 열까지 피보나치 수열을 출력할까요? ");
	scanf("%d", &n);

	for ( i = 1; i <= n; i++)
	{
		result = fib(i);

		printf("%d ", result);
	}
	
	return 0;
}

int fib(int n)
{
	if (n == 0) return 0;
	else if (n == 1) return 1;

	else return fib(n - 1) + fib(n - 2);
}
