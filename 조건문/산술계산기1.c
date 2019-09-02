//간단한 산술 계산기 프로그램

#include <stdio.h>
#include <math.h>

int main(void)
{
	int a, b;
	char sen = 0;
	int result;


	do
	{
		printf("수식을 입력하시오.\n");
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
				puts("\n0으로 나눌 수 없습니다.");
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
			printf("\n지원되지 않는 연산자입니다.\n");
			break;
		}

		printf("%d %c %d = %d\n", a, sen, b, result);

	} while (1);
	


	return 0;
}