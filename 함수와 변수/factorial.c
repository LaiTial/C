#include <stdio.h>

long factorial(int n);

int main(void)
{
	int n, result, i;

	printf("������ �Է��Ͻÿ�:");
	scanf("%d", &n);

	for ( i = 1; i <= n; i++)
	{
		result = factorial(i);
		printf("%d!�� %d�Դϴ�.\n", i, result);
	}


	
	return 0;
}

long factorial(int n)
{
	if (n <= 1)
		return 1;
	else return n * factorial(n-1);
}