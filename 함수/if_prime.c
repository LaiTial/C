#include <stdio.h>

int is_prime(int n)
{
	int i, t = 0;

	for ( i = 1; i <= n; i++)
	{
		if (n%i == 0)
		{
			t++;
			if (t>=3)
			{
				break;
			}
		}
	}

	return t;
}

void print_re(int n, int t)
{
	if (t == 2)
	{
		printf("%d�� �Ҽ��Դϴ�.\n", n);
	}

	else
		printf("%d�� �Ҽ��� �ƴմϴ�.\n", n);
}

int get_integer(void)
{
	int x;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &x);

	return x;
}