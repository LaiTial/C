//��ǻ�Ϳ� ���� ���� ���� �ϴ� ���α׷�

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
	int com, cho;
	srand((unsigned)time(NULL));

	com = rand() % 3 + 1;

	//printf("%d\n", com);

	printf("�����Ͻÿ�(1: ����, 2: ����, 3: ��): ");
	scanf("%d", &cho);

	if (cho == com)
	{
		printf("�����ϴ�.\n");
	}

	else if (cho == 1)
	{
		if (com == 2)
		{
			printf("��ǻ���� �¸��Դϴ�.\n");
		}

		else
		{
			printf("����� �̰���ϴ�!\n");
		}
	}

	else if (cho == 2)
	{
		if (com == 3)
		{
			printf("��ǻ���� �¸��Դϴ�.\n");
		}

		else
		{
			printf("����� �̰���ϴ�!\n");
		}
	}

	else 
	{
		if (com == 1)
		{
			printf("��ǻ���� �¸��Դϴ�.\n");
		}

		else
		{
			printf("����� �̰���ϴ�!\n");
		}
	}
	

	return 0;
}