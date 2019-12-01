//프로그램이 가지고 있는 정수(1~100)를 사용자가 알아맞히는 게임
//사용자가 답을 제시하면 프로그램은 자신이 저장한 정수와 비교하여 제시된 정수가 더 높은지 낮은지 만을 알려준다.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int answer, choice, i = 0;

	srand((unsigned int)time(NULL));

	answer = rand() % 100 + 1;

	do
	{
		printf("정답을 추측하여 보시오: ");
		scanf("%d", &choice);

		if (choice<answer)
		{
			printf("제시한 정수가 낮습니다.\n");
		}

		else if (choice == answer)
		{
			printf("\n축하합니다! 정답을 맞췄습니다!");
		}
		
		else
		{
			printf("제시한 정수가 높습니다.\n");
		}

		i++;

		puts("");

	} while (choice != answer);

	printf("%d번만에 정답을 맞추셨군요!\n\n", i);

	return 0;
}
