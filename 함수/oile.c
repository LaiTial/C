#include <stdio.h>

double oile(int num);
long int factorial(int n);

int main(void)
{
	int h_mu;

	printf("������ ����ұ��: ");
	scanf_s("%d", &h_mu);

	printf("���Ϸ��� ���� %f�Դϴ�.\n", oile(h_mu));

	return 0;
}

double oile(int num)
{
	int i;
	double sum = 1.0;

	for ( i = 1; i <= num; i++)
	{
		sum += (1.0 / (double)factorial(i));
	}

	return sum;
}

long int factorial(int n)
{
	int i, result = 1;

	for (i = n; i > 0; i--)
	{
		result *= i;
	}

	return result;
}