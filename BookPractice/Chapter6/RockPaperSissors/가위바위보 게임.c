//컴퓨터와 가위 바위 보를 하는 프로그램

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
	int com, cho;
	srand((unsigned)time(NULL));

	com = rand() % 3 + 1;

	//printf("%d\n", com);

	printf("선택하시오(1: 가위, 2: 바위, 3: 보): ");
	scanf("%d", &cho);

	if (cho == com)
	{
		printf("비겼습니다.\n");
	}

	else if (cho == 1)
	{
		if (com == 2)
		{
			printf("컴퓨터의 승리입니다.\n");
		}

		else
		{
			printf("당신이 이겼습니다!\n");
		}
	}

	else if (cho == 2)
	{
		if (com == 3)
		{
			printf("컴퓨터의 승리입니다.\n");
		}

		else
		{
			printf("당신이 이겼습니다!\n");
		}
	}

	else 
	{
		if (com == 1)
		{
			printf("컴퓨터의 승리입니다.\n");
		}

		else
		{
			printf("당신이 이겼습니다!\n");
		}
	}
	

	return 0;
}
