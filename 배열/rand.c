#include <stdio.h>
#define SIZE 10

void wh_seat(int seat[]);
extern void print_nu(int size);
extern void printf_seat(int seat[], int size);

int main(void)
{
	int seat[SIZE] = {0};
	char ch;

	do
	{
		printf("�¼��� �����Ͻðڽ��ϱ�?(y �Ǵ� n) ");
		scanf_s(" %c", &ch, 1);

		if (ch == 'y')
		{
			print_nu(SIZE);
			printf_seat(seat, SIZE);
			wh_seat(seat);
		}

		puts("");

	} while (ch != 'n');
	
	return 0;
}

void wh_seat(int seat[])
{
	int ch;



	do
	{
		printf("\n���° �¼��� �����Ͻðڽ��ϱ�? ");
		scanf(" %d", &ch);

		if (ch >= 1 && ch <= SIZE)
		{
			break;
		}
		
		printf("�߸��� ��ȣ�� �����ϼ̽��ϴ�. �ٽ� �Է����ּ���.\n");
		
	} while (ch < 1 || ch > SIZE);

	if (seat[ch-1] != 1)
	{
		seat[ch-1] = 1;
		printf("����Ǿ����ϴ�.\n");
	}

	else
	{
		printf("�̹� ����� �¼��Դϴ�. �ٸ� �¼��� �����ϼ���.\n");
	}

	return;
}

