#include <stdio.h>

void init(int binary[], int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		binary[i] = i + 1;
	}
}

int get_num(void)
{
	int ten;

	printf("정수를 입력하시오: ");
	scanf_s("%d", &ten);

	return ten;
}