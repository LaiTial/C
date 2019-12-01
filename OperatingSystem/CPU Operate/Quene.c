#include "QueneList.h"
#include <stdlib.h>
#include <stdio.h>

//공백 큐를 만드는 함수
Quene* createData(void)
{
	Quene* head;
	head = (Quene*)malloc(sizeof(Quene));

	head->top = NULL;
	head->end = NULL;
	head->start = 0;

	return head;
}

//각 CPU, Memory, Keyboard에서 현재 실행되고 있는 일의 위치를 가르킬 포인터를 초기화 시키고 메모리 공간 할당하는 함수
Computer* createPin(char ch)
{
	Computer* h;
	h = (Computer*)malloc(sizeof(Computer));

	h->Com = NULL;
	h->DataZero = 0;
	h->dataType = ch;

	return h;
}

//큐에 데이터를 추가하는 함수
void insertData(Quene* Op, char type, int data, char* name)
{
	Oper* newN;

	newN = (Oper*)malloc(sizeof(Oper));

	newN->dataType = type;
	newN->data = data;
	newN->name = name;
	newN->link = NULL;

	if (Op->top == NULL)
	{
		Op->top = newN;
		Op->end = newN;
		return;
	}

	else
	{
		Op->end->link = newN;
		Op->end = newN;
	}
}

//큐의 데이터를 하나 제거하는 함수
void deleteOneQ(Quene* Op)
{
	Oper* p;

	p = Op->top;

	if (Op->top == NULL)
		return;

	else if (Op->top->link == NULL)
	{
		printf("%s 종료.\n", Op->top->name);
		free(p);
		Op->end = NULL;
	}

	else
	{
		Op->top = Op->top->link;

		free(p);
	}
}