#include <stdio.h>

int get_num(void);
void change(int binary[], int x);
void print_array(int binary[]);
void init(int binary[]);

int main(void)
{
	int binary[32];
	int x;

	init(binary);

	while (1)
	{
		x = get_num();
		change(binary, x);
		print_array(binary);
	}

	return 0;
}

int get_num(void)
{
	int ten;

	printf("10진수를 입력하시오: ");
	scanf_s("%d", &ten);

	return ten;
}

void change(int binary[], int x)
{
	int i;

	for ( i = 0; i < 32 && x > 0; i++)
	{
		binary[i] = x % 2;
		x /= 2;
	}
}

void print_array(int binary[])
{
	int i;

	for ( i = 31; i >= 0; i--)
	{
		printf("%d", binary[i]);

		if (i%4 == 0)
		{
			printf(" ");
		}
	}

	puts("\n");
}

void init(int binary[])
{
	int i;

	for ( i = 0; i < 32; i++)
	{
		binary[i] = 0;
	}
}