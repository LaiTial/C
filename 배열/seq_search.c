#include <stdio.h>
#define SIZE 10

int main(void)
{
	int key, i, ch;
	int list[SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	printf("Ž���� ���� �Է��Ͻÿ�: ");
	scanf_s("%d", &key);

	for ( i = 0; i < SIZE; i++)
	{
		if (list[i] == key)
		{
			ch = 1;
			printf("Ž�� ���� �ε��� = %d\n", i);
			break;
		}
	}
	printf("Ž�� ����\n");
	
	if (ch != 1)
	{
		printf("�Է��� ���� �´� �ε��� ���� ã�� ���Ͽ����ϴ�. �ٽ� �Է����ּ���.\n");
	}

	return 0;
}