//2�� 100���̿� �ִ� ��� �Ҽ��� ã�� ���α׷�

#include <stdio.h>

int main(void)
{
	int i, t = 0, j;

	for ( i = 2; i <= 100; i++)
	{
		for ( j = 1; j <= i; j++)
		{
			if (i%j == 0)
			{
				t++;
			}
		}

		if (t == 2)
		{
			printf("%d ", i);
		}

		t = 0;
	}

	puts("");



	return 0;
}