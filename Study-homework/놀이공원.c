#include <stdio.h>

int main(void)
{
	int i = 0, family_member = 0;
	int time = 0;
	int sum = 0;
	int family_age = 0;
	int money = 0;

	printf("���� �ð� �Է� (0~23��): ");
	scanf_s(" %d", &time);
	printf("���� �ο� �� �Է�: ");
	scanf_s(" %d", &family_member);

	puts("");

	for (i = 0; i < family_member; i++)
	{
	if (time<17)
	{
		printf("%d��° ��� ���� �Է�: ", i+1);
		scanf_s(" %d", &family_age);

		if ((family_age >= 3 && family_age < 13) || family_age>=65)
		{
			money = 25000;
			printf("����� %d���Դϴ�.\n", money);
		}

		else if(family_age<=3)
		{
			money = 0;
			printf("����� %d���Դϴ�.\n", money);
		}
		else
		{
			money = 34000;
			printf("����� %d���Դϴ�.\n", money);
		}
		sum += money;
	}



	else
	{
		printf("%d��° ��� ���� �Է�: ", i + 1);
		scanf_s("%d", &family_age);
		money = 10000;
		printf("����� %d���Դϴ�.\n", money);
		sum += money;
	}

	}

	puts("");
	printf("������ ����� %d���Դϴ�.\n", sum);

	return 0;
}