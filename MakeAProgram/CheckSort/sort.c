#include <stdio.h>

int main(void)
{
	int ar[] = { 69, 10, 30, 2, 16, 8, 31, 22 };
	int m;
	int temp;

	for (int i = 0; i < 7; i++)
	{
		m = i;

		for (int j = i + 1; j < 8; j++)
		{
			if (ar[j] < ar[m])
			{
				m = j;
			}
		}

		temp = ar[i];
		ar[i] = ar[m];
		ar[m] = temp;
	}

	for (int i = 0; i < 8; i++)
	{
		printf("%d", ar[i]);

		if (i != 7)
			printf(", ");
	}

	puts("");
}
