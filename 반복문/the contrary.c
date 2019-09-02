//사용자가 입력한 특정한 정수의 자리수를 반대로 출력하는 프로그램

#include <stdio.h>

int main(void)
{
	int op, quo = 1, temp;

	printf("정수의 값을 입력하시오: ");
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