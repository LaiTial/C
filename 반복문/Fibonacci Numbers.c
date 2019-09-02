//항의 개수를 입력받아서 입력받은 항까지 피보나치 수열을 출력하는 프로그램

#include <stdio.h>

int main(void)
{
	int a, b, c;
	int op, i;

	printf("몇 번째 항까지 구할까요? ");
	scanf("%d", &op);
	
	a = 0, b = 1;
	printf("%d %d ", a, b);
	
	for ( i = 0; i < op-2; i++)
	{
		c = a + b;
		printf("%d ", c);

		a = b;
		b = c;
	}

	puts("");

	return 0;
}