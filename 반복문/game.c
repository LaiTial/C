//���α׷��� ������ �ִ� ����(1~100)�� ����ڰ� �˾Ƹ����� ����
//����ڰ� ���� �����ϸ� ���α׷��� �ڽ��� ������ ������ ���Ͽ� ���õ� ������ �� ������ ������ ���� �˷��ش�.

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
		printf("������ �����Ͽ� ���ÿ�: ");
		scanf("%d", &choice);

		if (choice<answer)
		{
			printf("������ ������ �����ϴ�.\n");
		}

		else if (choice == answer)
		{
			printf("\n�����մϴ�! ������ ������ϴ�!");
		}
		
		else
		{
			printf("������ ������ �����ϴ�.\n");
		}

		i++;

		puts("");

	} while (choice != answer);

	printf("%d������ ������ ���߼̱���!\n\n", i);

	return 0;
}