//���� ������ �Է¹޾Ƽ� �Է¹��� �ױ��� �Ǻ���ġ ������ ����ϴ� ���α׷�

#include <stdio.h>

int main(void)
{
	int a, b, c;
	int op, i;

	printf("�� ��° �ױ��� ���ұ��? ");
	scanf("%d", &op);
	
	a = 0, b = 1;
	printf("%d %d ", a, b);
	
	for ( i = 0; i < op-2; i++)
	{
		c = a + b;
		printf("%d ", c);

		a = b;
		b = c;
	}

	puts("");

	return 0;
}