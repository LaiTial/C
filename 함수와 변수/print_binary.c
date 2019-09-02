//2진수 형식으로 출력

#include <stdio.h>

void print_binary(int x);

int main(void)
{
	int x;

	printf("2진수로 바꿀 10진수를 입력하시오: ");
	scanf("%d", &x);

	print_binary(x);

	puts("");

	return 0;
}

void print_binary(int x)
{
	if (x > 0)
	{
		print_binary(x / 2);
		printf("%d", x % 2);
	}
	
}