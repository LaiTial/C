//반복 루프를 이용하여 숫자 출력

#include <stdio.h>

int main(void)
{
	int num, i, j;

	printf("정수를 입력하시오: ");
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