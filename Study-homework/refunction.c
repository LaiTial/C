//절대값 함수, 최소 최대 구분 함수, 팩토리얼 함수

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