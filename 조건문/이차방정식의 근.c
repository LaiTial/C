//이차방정식의 근을 구하는 프로그램

#include <stdio.h>
#include <math.h>

int main(void)
{
	int a, b, c;
	double result1, result2, temp;

	printf("계수 a를 입력하시오: ");
	scanf("%d", &a);
	printf("계수 b를 입력하시오: ");
	scanf("%d", &b);
	printf("계수 c를 입력하시오: ");
	scanf("%d", &c);

	temp = b*b - 4.0*a*c;
	
	if (a == 0)
	{
		result1 = -c / b;
		printf("방정식의 근은 %f입니다.\n", result1);
	}

	else
	{
		if ((temp)<0)
			{
				printf("실근은 존재하지 않는다.\n");
			}

		else if (temp == 0)
		{
			result1 = -b / (2 * a);
			printf("방정식의 근은 %f입니다.\n", result1);
		}
		

		else
			{
				result1 = (-b + sqrt(temp))/(2*a);
				result2 = (-b - sqrt(temp)) / (2*a);
				printf("방정식의 근은 %f입니다.\n", result1);
				printf("방정식의 근은 %f입니다.\n", result2);
			}

	}
		
		


	return 0;
}