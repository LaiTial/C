#include <stdio.h>

int main(void)
{
	int i = 0, family_member = 0;
	int time = 0;
	int sum = 0;
	int family_age = 0;
	int money = 0;

	printf("현재 시간 입력 (0~23시): ");
	scanf_s(" %d", &time);
	printf("가족 인원 수 입력: ");
	scanf_s(" %d", &family_member);

	puts("");

	for (i = 0; i < family_member; i++)
	{
	if (time<17)
	{
		printf("%d번째 사람 나이 입력: ", i+1);
		scanf_s(" %d", &family_age);

		if ((family_age >= 3 && family_age < 13) || family_age>=65)
		{
			money = 25000;
			printf("요금은 %d원입니다.\n", money);
		}

		else if(family_age<=3)
		{
			money = 0;
			printf("요금은 %d원입니다.\n", money);
		}
		else
		{
			money = 34000;
			printf("요금은 %d원입니다.\n", money);
		}
		sum += money;
	}



	else
	{
		printf("%d번째 사람 나이 입력: ", i + 1);
		scanf_s("%d", &family_age);
		money = 10000;
		printf("요금은 %d원입니다.\n", money);
		sum += money;
	}

	}

	puts("");
	printf("가족의 요금은 %d원입니다.\n", sum);

	return 0;
}