#include <stdio.h>
#include <limits.h>

int main(void)
{
	char ch1 = 1;
	char ch2 = 120, b = CHAR_MAX;

	ch2 = ch2 + sizeof(double); //int������ ����� char���� ����[������ȯ]

	printf("%d\n", ch2);
	printf("%d\n", ch1 + b); //������ ���������� ���
	
	return 0;

}