//������������ ���� ���ϴ� ���α׷�

#include <stdio.h>
#include <math.h>

int main(void)
{
	int a, b, c;
	double result1, result2, temp;

	printf("��� a�� �Է��Ͻÿ�: ");
	scanf("%d", &a);
	printf("��� b�� �Է��Ͻÿ�: ");
	scanf("%d", &b);
	printf("��� c�� �Է��Ͻÿ�: ");
	scanf("%d", &c);

	temp = b*b - 4.0*a*c;
	
	if (a == 0)
	{
		result1 = -c / b;
		printf("�������� ���� %f�Դϴ�.\n", result1);
	}

	else
	{
		if ((temp)<0)
			{
				printf("�Ǳ��� �������� �ʴ´�.\n");
			}

		else if (temp == 0)
		{
			result1 = -b / (2 * a);
			printf("�������� ���� %f�Դϴ�.\n", result1);
		}
		

		else
			{
				result1 = (-b + sqrt(temp))/(2*a);
				result2 = (-b - sqrt(temp)) / (2*a);
				printf("�������� ���� %f�Դϴ�.\n", result1);
				printf("�������� ���� %f�Դϴ�.\n", result2);
			}

	}
		
		


	return 0;
}