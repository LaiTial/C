//�ݺ� ������ �̿��Ͽ� ���� ���

#include <stdio.h>

int main(void)
{
	int num, i, j;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &num);

	for (i = 1; i <= num; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d ", j);
		}

		puts("");
	}


	return 0;
}