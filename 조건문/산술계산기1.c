//������ ��� ���� ���α׷�

#include <stdio.h>
#include <math.h>

int main(void)
{
	int a, b;
	char sen = 0;
	int result;


	do
	{
		printf("������ �Է��Ͻÿ�.\n");
		printf(">>");
		scanf("%d %c %d", &a, &sen, &b);

		if (sen == '+')
		{
			result = a + b;
		}
	
		else if (sen == '-')
		{
			result = a - b;
		}

		else if (sen == '*')
		{
			result = a * b;
		}

		else if (sen == '/')
		{
			if (b==0)
			{
				puts("\n0���� ���� �� �����ϴ�.");
				break;
			}
			result = a / b;
		}

		else if (sen=='%')
		{
			result = a % b;
		}

		else if (sen == '&')
		{
			result = a & b;
		}

		else if (sen == '|')
		{
			result = a | b;
		}

		else if (sen == '^')
		{
			result = a ^ b;
		}

		else
		{
			printf("\n�������� �ʴ� �������Դϴ�.\n");
			break;
		}

		printf("%d %c %d = %d\n", a, sen, b, result);

	} while (1);
	


	return 0;
}