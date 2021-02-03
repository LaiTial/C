#include <stdio.h>

long factorial(int n);

int main(void)
{
	int n, result, i;

	printf("정수를 입력하시오:");
	scanf("%d", &n);

	for ( i = 1; i <= n; i++)
	{
		result = factorial(i);
		printf("%d!는 %d입니다.\n", i, result);
	}


	
	return 0;
}

long factorial(int n)
{
	if (n <= 1)
		return 1;
	else return n * factorial(n-1);
}
