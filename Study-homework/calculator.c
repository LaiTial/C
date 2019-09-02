//������ ��� ���� ���α׷�

#include <stdio.h>
#include <process.h>

int t;
int n1, n2, n3, n4, n5;
int n6, n7, n8;

void check(int a, int b, char cal);
int extra(int a, int b, char cal);
int regular(int a, int b, char cal);
void print(void);

void scan_f(void)
{
	int a, b;
	char cal;

	while (1)
	{

		printf("������ �Է��ϼ���.\n");
		printf(">>");
		scanf("%d %c %d", &a, &cal, &b);

		check(a, b, cal);

	}
	return;
}

void check(int a, int b, char cal)
{
	int result;

	if (cal == '^' || cal == '&' || cal == '|')
	{
		result = extra(a, b, cal);
		printf("%d %c %d = %#08x\n", a, cal, b, result);
	}

	else
	{
		result = regular(a, b, cal);
		printf("%d %c %d = %d\n", a, cal, b, result);
	}
}

int extra(int a, int b, char cal)
{
	int result;

	t++;

	switch (cal)
	{
	case '^':
		n6++;
		result = a ^ b;
		break;
	case '&':
		n7++;
		result = a & b;
		break;
	case '|':
		n8++;
		result = a | b;
		break;
	}

	return result;
}

int regular(int a, int b, char cal)
{
	int result;

	t++;

	switch (cal)
	{
	case '+':
		n1++;
		result = a + b;
		break;
	case '-':
		n2++;
		result = a - b;
		break;
	case '%':
		n3++;
		result = a % b;
		break;
	case '/':
		n4++;
		result = a / b;
		break;
	case '*':
		n5++;
		result = a * b;
		break;
	default:
		printf("�������� �ʴ� �������Դϴ�.\n");
		print();
	}
	return result;
}

void print(void)
{
	puts("\n");

	printf("\'%c\'�� �� %d�� ���Ǿ����ϴ�.\n", '+', n1);
	printf("\'%c\'�� �� %d�� ���Ǿ����ϴ�.\n", '-', n2);
	printf("\'%c\'�� �� %d�� ���Ǿ����ϴ�.\n", '%', n3);
	printf("\'%c\'�� �� %d�� ���Ǿ����ϴ�.\n", '/', n4);
	printf("\'%c\'�� �� %d�� ���Ǿ����ϴ�.\n", '*', n5);
	printf("\'%c\'�� �� %d�� ���Ǿ����ϴ�.\n", '^', n6);
	printf("\'%c\'�� �� %d�� ���Ǿ����ϴ�.\n", '&', n7);
	printf("\'%c\'�� �� %d�� ���Ǿ����ϴ�.\n", '|', n8);
	printf("\n���� ���: %d\n", t);

	exit(0);
}

