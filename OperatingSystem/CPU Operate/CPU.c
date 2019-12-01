#include "QueneList.h"
#include <stdio.h>

//실행되고 있는 일이 없을 경우 각 큐를 검사하여 일을 분배해주는 함수
Computer* startTime(Quene* A[3], Computer* UseType)
{
	//아직 이곳에서 실행되는 일이 없을 경우 or 이미 실행되고 있는 일이 끝났을 경우
	if ((UseType->Com == NULL) || (UseType->DataZero == 1))
	{
		//각 큐에 대해 반복
		for (int i = 0; i < 3; i++)
		{
			//Null이 아닐때, 즉 이 큐에 저장된 일이 있을 경우 실행
			if (A[i]->top != NULL)
			{
				//현재 큐의 맨 처음과 일이 없는 컴퓨터 공간(CPU, Keyboard, Memory)의 데이터 타입이 같을때 그 일을 실행
				if (A[i]->top->dataType == UseType->dataType)
				{
					//이 프로세스가 아직 실행 전일떄
					if (A[i]->start == 0)
					{
						A[i]->start = 1;
						printf("%s 시작.\n", A[i]->top->name);
					}

					UseType->Com = A[i]->top;
					UseType->DataZero = 0;
					printf("%s->%c 시작\n", UseType->Com->name, UseType->dataType);

					return UseType;

				}
			}
		}
	}

	return UseType;
}

//현재 실행되고 있는 일의 남은 시간을 하나 감소시키는 함수
Computer* CheckAndMinus(Computer* UseType)
{
	if ((UseType->Com != NULL))
	{
		UseType->Com->data = UseType->Com->data - 1;
	}

	return UseType;
}

//매개변수로 받은 큐에 노드(일)가 남아있나 확인하는 함수
int CheckDataNull(Quene* A[3])
{
	for (int i = 0; i < 3; i++)
	{
		if (A[i]->end != NULL)
			return 1;
	}

	return 0;
}

/*현재 실행되고 있는 일이 끝나면 
종료 문구를 출력하고,
하나의 일이 종료되었다고 DataZero변수를 1로 세팅하며,
다음 노드를 가르키도록 노드를 제거하는 함수를 호출하는 함수*/
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
					printf("%s->%c 종료\n", UseType->Com->name, UseType->dataType);
					deleteOneQ(A[i]);
				}
	}
}