#include <stdio.h>
#define SIZE 5

void print_array(int image[][5]);
void brigten_image(int image[][SIZE]);

int main(void)
{
	int image[SIZE][SIZE] = {
		{10, 20, 30, 40, 50},
		{ 10, 20, 30, 40, 50 },
		{ 10, 20, 30, 40, 50 },
		{ 10, 20, 30, 40, 50 },
		{ 10, 20, 30, 40, 50 }};

	print_array(image);
	brigten_image(image);
	print_array(image);

	return 0;
}

void print_array(int image[][SIZE])
{
	int i, j;
	
	for ( i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%03d ", image[i][j]);
		}

		puts("");
	}

	puts("\n");

}

void brigten_image(int image[][SIZE])
{
	int i;
	int *p;

	p = &image[0][0];

	for ( i = 0; i < SIZE*SIZE; i++)
	{
		*p += 10;
		p++;
	}

	return;
}