#include <stdio.h>
#include <Windows.h>
#define Max(a, b) ((a>b)?a:b)
#define Min(a, b) ((a>b)?b:a)
#define MAX_DEGREE 50

typedef struct {

	int degree;
	float coef[MAX_DEGREE];
}polynominal;

polynominal addPoly(polynominal, polynominal);
void printPoly(polynominal);

int main(void)
{
	polynominal A = { 3, {4, 3, 5, 0} };
	polynominal B = { 4, {3, 1, 0, 2, 1} };

	polynominal C;
	C = addPoly(A, B);

	printf("\n A(x) ="); printPoly(A);
	printf("\n B(x) ="); printPoly(B);
	printf("\n C(x) ="); printPoly(C);

	system("pause");

	return 0;
}

void printPoly(polynominal tem)
{
	int i = 0;

	for (i = tem.degree; i >= 0; i--)
	{
		printf("%2.0fx^%d ", tem.coef[tem.degree - i], i);
		if (i != 0)
		{
			printf("+");
		}
	}
	return;
}

polynominal addPoly(polynominal A, polynominal B)
{
	int i = 0, t = 0;
	int Max_temp, Min_temp;
	polynominal C;

	if (A.degree != B.degree)
	{
		C.degree = Max_temp = Max(A.degree, B.degree);
		Min_temp = Min(A.degree, B.degree);
	}

	for (i = 0; i < C.degree + 1; i++)
	{
		if (Max_temp != Min_temp)
		{
			if (Max_temp == A.degree)
			{
				C.coef[i] = A.coef[i];
				Max_temp--;
			}

			else
			{
				C.coef[i] = B.coef[i];
				Max_temp--;
			}
		}

		else
		{
			if (C.degree == A.degree)
			{
				C.coef[i] = A.coef[i] + B.coef[t];
				t++;
			}
			else
			{
				C.coef[i] = A.coef[t] + B.coef[i];
				t++;
			}

		}

	}

	return C;
}
