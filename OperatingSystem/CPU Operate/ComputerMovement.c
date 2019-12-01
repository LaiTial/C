#include <stdio.h>
#include <stdlib.h>
#include "QueneList.h"

int main()
{
	int time = 0; 
	Computer* Cpu, * Memory, * Key; 
	Quene* A[3]; 

	//메모리 공간 동적으로 할당하는 함수 호출해서 포인터를 반환받는다.
	for (int i = 0; i < 3; i++)
		A[i] = createData();

	//각 큐에 데이터 추가
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

	//메모리 공간 동적으로 할당하는 함수 호출해서 포인터를 반환받는다.
	Cpu = createPin('C');
	Key = createPin('K');
	Memory = createPin('M');

	printf("\nTime: %d일때, \n", time);

	//여기서 프로세스 시작
	while (CheckDataNull(A))
	{
		//현재 실행되고 있는 일이 하나라도 끝났을 경우 Time 값 출력
		for (int i = 0; i < 3; i++)
		{
			if (A[i]->top->data == 0)
			{
				printf("\nTime: %d일때, \n", time);
				break;
			}
		}

		//필요한 함수들 각각 다 호출
		SetData(Cpu, A);
		SetData(Key, A);
		SetData(Memory, A);

		Cpu = startTime(A, Cpu);
		Key = startTime(A, Key);
		Memory = startTime(A, Memory);

		//프로세스 시작 후 시간이 얼마 흘렀는지 알려주는 변수 time을 while 루프가 한번 돌 때마다 1을 증가시킨다.
		time++;

		Cpu = CheckAndMinus(Cpu);
		Key = CheckAndMinus(Key);
		Memory = CheckAndMinus(Memory);
	}

	return 0;

}
