//����ڷκ��� Ű�� �Է¹޾Ƽ� ǥ�� ü���� ����� �Ŀ� ������� ü�߰� ���Ϸ� ��ü������, ǥ������, ��ü�������� �Ǵ��ϴ� ���α׷�
//ǥ�� ü�� = (Ű-100)*0.9

#include <stdio.h>

int main(void)
{
	int heavy, cm;
	double re_heavy;

	printf("ü�߰� Ű�� �Է��Ͻÿ�(Ű, ü��): ");
	scanf("%d %d", &cm, &heavy);

	re_heavy = (cm - 100) * 0.9;

	if (re_heavy> heavy)
	{
		printf("��ü���Դϴ�.\n");
	}

	else if (re_heavy < heavy )
	{
		printf("��ü���Դϴ�.\n");
	}
	
	else
	{
		printf("ǥ��ü���Դϴ�.\n");
	}

	return 0;
}