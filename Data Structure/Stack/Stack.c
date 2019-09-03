#include <stdio.h>
#include <stdlib.h>
#define STACK_SIZE 100

typedef struct {
	int stack[STACK_SIZE];
	int top;
}Stack;

Stack createStack()
{
	Stack s;

	for (int i = 0; i < STACK_SIZE; i++)
	{
		s.stack[i] = 0;
	}

	s.top = -1;

	return s;
}

int isEmpty(Stack *s)
{
	if (s->top == -1)
	{
		printf("**스택에 아무것도 존재하지 않습니다!**\n\n");
		return 1;
	}

	else return 0;
}

int peek(Stack s)
{
	if (isEmpty(&s))
	{
		return 0;
	}

	else return s.stack[s.top];
}

int isFull(Stack *s)
{
	if (s->top == STACK_SIZE - 1)
	{
		printf("**스택이 다 찼습니다. 더 이상 추가할 수 없습니다!**\n\n");
		return 1;
	}

	else return 0;
}

void printStack(Stack s)
{
	printf("STACK [ ");

	for (int i = 0; i < s.top + 1; i++)
	{
		printf("%d ", s.stack[i]);
	}

	printf("]");
}

void push(Stack *s, int data)
{
	if (isFull(s))
	{
		return;
	}

	else
	{
		s->top++;
		s->stack[s->top] = data;
	}
}

int pop(Stack *s)
{
	if (isEmpty(s))
	{
		return 0;
	}

	else
	{
		return s->stack[s->top--];
	}
}

int main(void)
{
	Stack s;
	int po;
	s = createStack();

	printf("**순차 스택연산**\n\n");
	printStack(s); getchar();

	push(&s, 1);
	printStack(s); getchar();

	push(&s, 2);
	printStack(s); getchar();

	push(&s, 3);
	printStack(s); getchar();

	printStack(s);
	printf("\t peek => %d", peek(s)); getchar();

	po = pop(&s);
	printStack(s);
	printf("\t pop => %d", po); getchar();

	po = pop(&s);
	printStack(s);
	printf("\t pop => %d", po); getchar();

	po = pop(&s);
	printStack(s);
	printf("\t pop => %d", po); getchar();

	return 0;
}
