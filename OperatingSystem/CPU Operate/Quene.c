#include "QueneList.h"
#include <stdlib.h>
#include <stdio.h>

//���� ť�� ����� �Լ�
Quene* createData(void)
{
	Quene* head;
	head = (Quene*)malloc(sizeof(Quene));

	head->top = NULL;
	head->end = NULL;
	head->start = 0;

	return head;
}

//�� CPU, Memory, Keyboard���� ���� ����ǰ� �ִ� ���� ��ġ�� ����ų �����͸� �ʱ�ȭ ��Ű�� �޸� ���� �Ҵ��ϴ� �Լ�
Computer* createPin(char ch)
{
	Computer* h;
	h = (Computer*)malloc(sizeof(Computer));

	h->Com = NULL;
	h->DataZero = 0;
	h->dataType = ch;

	return h;
}

//ť�� �����͸� �߰��ϴ� �Լ�
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

//ť�� �����͸� �ϳ� �����ϴ� �Լ�
void deleteOneQ(Quene* Op)
{
	Oper* p;

	p = Op->top;

	if (Op->top == NULL)
		return;

	else if (Op->top->link == NULL)
	{
		printf("%s ����.\n", Op->top->name);
		free(p);
		Op->end = NULL;
	}

	else
	{
		Op->top = Op->top->link;

		free(p);
	}
}