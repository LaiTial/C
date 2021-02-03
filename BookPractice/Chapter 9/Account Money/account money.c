int h_m_money;

#include <stdio.h>

int choice(void);
void save(void);
void draw(void);

int main(void)
{
	int n;

	while (1)
	{
		do
		{
			n = choice();

		} while (n < 1 || n > 2);


		if (n == 1)
		{
			save();
		}

		else
		{
			draw();
		}

		}

	return 0;
}

int choice(void)
{
	int n;

	printf("메뉴를 선택하시오: 저축(1), 인출(2): ");
	scanf_s("%d", &n);

	return n;
}

void save(void)
{
	int amount;

	printf("저축할 금액: ");
	scanf_s("%d", &amount);

	h_m_money += amount;

	printf("현재 잔액은 %d원입니다.\n", h_m_money);

	puts("");

	return;
}

void draw(void)
{
	int amount;

	printf("인출할 금액: ");
	scanf_s("%d", &amount);

	h_m_money -= amount;

	printf("현재 잔액은 %d원입니다.\n", h_m_money);

	puts("");

	return;
}
