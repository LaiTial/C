#include <stdio.h>
#include <stdlib.h>
#include "QueneList.h"

int main()
{
	int time = 0; 
	Computer* Cpu, * Memory, * Key; 
	Quene* A[3]; 

	//�޸� ���� �������� �Ҵ��ϴ� �Լ� ȣ���ؼ� �����͸� ��ȯ�޴´�.
	for (int i = 0; i < 3; i++)
		A[i] = createData();

	//�� ť�� ������ �߰�
	insertData(A[0], 'C', 20, "P1");
	insertData(A[0], 'K', 100, "P1");
	insertData(A[0], 'C', 50, "P1");
	insertData(A[1], 'C', 30, "P2");
	insertData(A[1], 'K', 80, "P2");
	insertData(A[1], 'M', 10, "P2");
	insertData(A[1], 'M', 20, "P2");
	insertData(A[2], 'C', 130, "P3");
	insertData(A[2], 'K', 20, "P3");
	insertData(A[2], 'M', 10, "P3");

	//�޸� ���� �������� �Ҵ��ϴ� �Լ� ȣ���ؼ� �����͸� ��ȯ�޴´�.
	Cpu = createPin('C');
	Key = createPin('K');
	Memory = createPin('M');

	printf("\nTime: %d�϶�, \n", time);

	//���⼭ ���μ��� ����
	while (CheckDataNull(A))
	{
		//���� ����ǰ� �ִ� ���� �ϳ��� ������ ��� Time �� ���
		for (int i = 0; i < 3; i++)
		{
			if (A[i]->top->data == 0)
			{
				printf("\nTime: %d�϶�, \n", time);
				break;
			}
		}

		//�ʿ��� �Լ��� ���� �� ȣ��
		SetData(Cpu, A);
		SetData(Key, A);
		SetData(Memory, A);

		Cpu = startTime(A, Cpu);
		Key = startTime(A, Key);
		Memory = startTime(A, Memory);

		//���μ��� ���� �� �ð��� �� �귶���� �˷��ִ� ���� time�� while ������ �ѹ� �� ������ 1�� ������Ų��.
		time++;

		Cpu = CheckAndMinus(Cpu);
		Key = CheckAndMinus(Key);
		Memory = CheckAndMinus(Memory);
	}

	return 0;

}
