//�޷� ���

#include <stdio.h>

int main(void)
{
	int i, t;
	int x = -2;

	printf("===============================\n");
	puts("��  ��  ȭ  ��  ��  ��  �� ");
	printf("===============================\n");

	for ( i = 0; i < 5; i++)
	{
		for ( t = 0; t < 7; t++)
		{
			if (i == 0 && t < 3)
			{
				printf("    ");
			}

			else if (x>31)
			{
				break;
			}
			
			
			else
			{
				printf("%2d  ", x);
			}
			x++;
		}
		puts("");
		
	}
	printf("===============================\n");

	return 0;
}