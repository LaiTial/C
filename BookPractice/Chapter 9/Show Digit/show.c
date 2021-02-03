#include <stdio.h>

void show_digit(int x);

int main(void)
{
	int n;

	printf("Á¤¼ö¸¦ ÀÔ·ÂÇÏ½Ã¿À: ");
	scanf_s("%d", &n);

	show_digit(n);

	puts("");

	return 0;
} 

void show_digit(int x)
{
	if (x > 0)
	{
		show_digit(x / 10);	
		printf("%d ", x % 10);
	}

	return;
}
