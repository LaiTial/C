//����ڰ� �Է��� Ư���� ������ �ڸ����� �ݴ�� ����ϴ� ���α׷�

#include <stdio.h>

int main(void)
{
	int op, quo = 1, temp;

	printf("������ ���� �Է��Ͻÿ�: ");
	scanf("%d", &op);

	while (1)
	{

		temp = (op/quo) % 10;
				
		printf("%d", temp);

		if ((op/quo)<10)
		{
			break;
		}
		quo *= 10;

	}
	puts("");

	return 0;
}