//������ ���� ������ ���� �ùķ��̼�

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int b_rand(void);

int main(void)
{
	int a, cho;
	char alo;



	do
	{
		printf("�ո� �Ǵ� �޸�(1 �Ǵ� 0): ");
		scanf_s("%d", &cho);

		srand((unsigned)time(NULL));
		a = b_rand();
		
		if (cho == a)
		{
			printf("�¾ҽ��ϴ�.\n");
		}

		else
		{
			printf("Ʋ�Ƚ��ϴ�.\n");
		}

		printf("����Ͻðڽ��ϱ�?(y �Ǵ� n): ");
		scanf(" %c", &alo);

		puts("");

	} while (alo == 'y');

	return 0;
}

int b_rand(void)
{
	return rand() % 2;
}