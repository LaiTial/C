//�޷� ���

#include <stdio.h>
#define START_DAY 3 //ù��° ���� ������
#define DAYS_OF_MONTH 31

int main(void)
{
	int i, t, day = 3;
	

	printf("===============================\n");
	puts("��  ��  ȭ  ��  ��  ��  �� ");
	printf("===============================\n");

	for ( i = 0; i < START_DAY; i++)
	{
		printf("    ");
	}

	for ( t = 0; t < DAYS_OF_MONTH; t++)
	{
		if (day == 7)
		{
			day = 0;
			puts("");
		}
		day++;
		printf("%2d  ", t+1);
	}
	puts("");


	printf("===============================\n");

	return 0;
}