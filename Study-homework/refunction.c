//���밪 �Լ�, �ּ� �ִ� ���� �Լ�, ���丮�� �Լ�

double f_abs(double x)
{
	if (x < 0)
	{
		x = -x;
	}

	return x;
}

double f_min(double x, double y)
{
	return x > y ? x : y;
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