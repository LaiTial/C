//사용자로부터 키를 입력받아서 표준 체중을 계산한 후에 사용자의 체중과 비교하려 저체중인지, 표준인지, 과체중인지를 판단하는 프로그램
//표준 체중 = (키-100)*0.9

#include <stdio.h>

int main(void)
{
	int heavy, cm;
	double re_heavy;

	printf("체중과 키를 입력하시오(키, 체중): ");
	scanf("%d %d", &cm, &heavy);

	re_heavy = (cm - 100) * 0.9;

	if (re_heavy> heavy)
	{
		printf("저체중입니다.\n");
	}

	else if (re_heavy < heavy )
	{
		printf("과체중입니다.\n");
	}
	
	else
	{
		printf("표준체중입니다.\n");
	}

	return 0;
}