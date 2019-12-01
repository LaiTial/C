#include "QueneList.h"
#include <stdio.h>

//����ǰ� �ִ� ���� ���� ��� �� ť�� �˻��Ͽ� ���� �й����ִ� �Լ�
Computer* startTime(Quene* A[3], Computer* UseType)
{
	//���� �̰����� ����Ǵ� ���� ���� ��� or �̹� ����ǰ� �ִ� ���� ������ ���
	if ((UseType->Com == NULL) || (UseType->DataZero == 1))
	{
		//�� ť�� ���� �ݺ�
		for (int i = 0; i < 3; i++)
		{
			//Null�� �ƴҶ�, �� �� ť�� ����� ���� ���� ��� ����
			if (A[i]->top != NULL)
			{
				//���� ť�� �� ó���� ���� ���� ��ǻ�� ����(CPU, Keyboard, Memory)�� ������ Ÿ���� ������ �� ���� ����
				if (A[i]->top->dataType == UseType->dataType)
				{
					//�� ���μ����� ���� ���� ���ϋ�
					if (A[i]->start == 0)
					{
						A[i]->start = 1;
						printf("%s ����.\n", A[i]->top->name);
					}

					UseType->Com = A[i]->top;
					UseType->DataZero = 0;
					printf("%s->%c ����\n", UseType->Com->name, UseType->dataType);

					return UseType;

				}
			}
		}
	}

	return UseType;
}

//���� ����ǰ� �ִ� ���� ���� �ð��� �ϳ� ���ҽ�Ű�� �Լ�
Computer* CheckAndMinus(Computer* UseType)
{
	if ((UseType->Com != NULL))
	{
		UseType->Com->data = UseType->Com->data - 1;
	}

	return UseType;
}

//�Ű������� ���� ť�� ���(��)�� �����ֳ� Ȯ���ϴ� �Լ�
int CheckDataNull(Quene* A[3])
{
	for (int i = 0; i < 3; i++)
	{
		if (A[i]->end != NULL)
			return 1;
	}

	return 0;
}

/*���� ����ǰ� �ִ� ���� ������ 
���� ������ ����ϰ�,
�ϳ��� ���� ����Ǿ��ٰ� DataZero������ 1�� �����ϸ�,
���� ��带 ����Ű���� ��带 �����ϴ� �Լ��� ȣ���ϴ� �Լ�*/
void SetData(Computer* UseType, Quene* A[3])
{
	if (UseType->Com == NULL)
		return;

	if (UseType->Com->data == 0)
	{
		UseType->DataZero = 1;

		for (int i = 0; i < 3; i++)
			if (A[i]->top != NULL)
				if (A[i]->top == UseType->Com)
				{
					printf("%s->%c ����\n", UseType->Com->name, UseType->dataType);
					deleteOneQ(A[i]);
				}
	}
}