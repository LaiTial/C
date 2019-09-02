//간단한 산술 계산기 프로그램

#include <stdio.h>

int main(void)
{
	int a, b, result;
	char cal;

	while (1)
	{
	printf("수식을 입력하세요.\n");
	printf(">>");
	scanf("%d %c %d", &a, &cal, &b);

	if (cal == '^' || cal == '&' || cal == '|')
	{
		switch (cal)
			{
		case '^': 
			result = a^b;
			break;
		case '&':
			result = a&b;
			break;
		case '|':
			result = a|b;
			break;

		}
		printf("%d %c %d = %#08x\n", a, cal, b, result);
	}

	else
	{
	switch (cal)
	{
	case '+':
		result = a + b;
		break;
	case '-':
		result = a - b;
		break;
	case '%':
		result = a % b;
		break;
	case '/':
		result = a / b;
		break;
	case '*':
		result = a * b;
		break;
	default:
		printf("지원되지 않는 연산자입니다.\n");
		return 0;
	}
		printf("%d %c %d = %d\n", a, cal, b, result);
	}
	
	}
	
	return 0;
}