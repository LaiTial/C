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

	printf("�޴��� �����Ͻÿ�: ����(1), ����(2): ");
	scanf_s("%d", &n);

	return n;
}

void save(void)
{
	int amount;

	printf("������ �ݾ�: ");
	scanf_s("%d", &amount);

	h_m_money += amount;

	printf("���� �ܾ��� %d���Դϴ�.\n", h_m_money);

	puts("");

	return;
}

void draw(void)
{
	int amount;

	printf("������ �ݾ�: ");
	scanf_s("%d", &amount);

	h_m_money -= amount;

	printf("���� �ܾ��� %d���Դϴ�.\n", h_m_money);

	puts("");

	return;
}