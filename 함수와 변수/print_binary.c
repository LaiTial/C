//2���� �������� ���

#include <stdio.h>

void print_binary(int x);

int main(void)
{
	int x;

	printf("2������ �ٲ� 10������ �Է��Ͻÿ�: ");
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