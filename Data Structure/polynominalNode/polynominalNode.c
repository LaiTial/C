#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>

typedef struct Node
{
	float coef;
	int expo;
	struct Node *link;

}Node;

typedef struct Linked_link
{
	Node *head;
}Linked_link;

Linked_link* createdLinkedList_h(void)
{
	Linked_link *L;
	L = (Linked_link *)malloc(sizeof(Linked_link));
	L->head = NULL;

	return L;
}

void printpoly(Linked_link *L, char Name)
{
	Node *p;

	p = L->head;
	printf("%c(x) = ", Name);

	while (p != NULL)
	{
		printf("%.0fx^%d", p->coef, p->expo);

		p = p->link;

		if (p != NULL)
		{
			printf(" + ");
		}
	}
	puts("");
}

Node* CreateNode(float coef, int expo)
{
	Node *p;

	p = (Node *)malloc(sizeof(Node));
	p->coef = coef;
	p->expo = expo;

	p->link = NULL;

	return p;
}

void appendTerm(Linked_link *L, float coef, int expo)
{
	Node *newNode, *p;

	newNode = CreateNode(coef, expo);
	p = L->head;

	if (L->head == NULL)
	{
		L->head = newNode;
		return;
	}

	while (p->link != NULL)
	{
		p = p->link;
	}

	p->link = newNode;
}

void addPoly(const Linked_link *A, Linked_link *B, Linked_link *C)
{
	Node *pA = A->head, *pB = B->head;

	while (pA && pB)
	{
		if (pA->expo == pB->expo)
		{
			appendTerm(C, pA->coef + pB->coef, pA->expo);
			pA = pA->link; pB = pB->link;
		}

		else if (pA->expo < pB->expo)
		{
			appendTerm(C, pA->coef, pA->expo);
			pA = pA->link;
		}

		else {
			appendTerm(C, pB->coef, pB->expo);
			pB = pB->link;
		}
	}

	for (; pA != NULL; pA = pA->link)
	{
		appendTerm(C, pA->coef, pA->expo);
	}

	for (; pB != NULL; pB = pB->link)
	{
		appendTerm(C, pB->coef, pB->expo);
	}
}

//연결 리스트의 전체 메모리를 해제하는 연산
void freeLinkedList_h(Linked_link *L)
{
	Node *p;
	p = L->head;

	while (p != NULL)
	{
		L->head = p->link; //헤드를 두번째 노드로 변경
		free(p);
		p = L->head;
	}
}

int main(void)
{
	Linked_link *A, *B, *C;
	A = createdLinkedList_h();
	B = createdLinkedList_h();
	C = createdLinkedList_h();

	printf("(1) 공백 리스트 생성하기!\n");
	printpoly(A, 'A'); printpoly(B, 'B'); printpoly(C, 'C'); getchar();

	printf("(2) 다항식 A(x)에 값 집어넣기!\n");
	appendTerm(A, 5, 1);
	appendTerm(A, 3, 2);
	appendTerm(A, 4, 3);
	printpoly(A, 'A'); printpoly(B, 'B'); printpoly(C, 'C'); getchar();

	printf("(3) 다항식 B(x)에 값 집어넣기!\n");
	appendTerm(B, 1, 0);
	appendTerm(B, 2, 1);
	appendTerm(B, 1, 3);
	appendTerm(B, 3, 4);
	printpoly(A, 'A'); printpoly(B, 'B'); printpoly(C, 'C'); getchar();

	printf("(4) 두 다항식을 더하여 C(x)에 값 집어넣기!\n");
	addPoly(A, B, C);
	printpoly(A, 'A'); printpoly(B, 'B'); printpoly(C, 'C'); getchar();

	printf("(5) 리스트 공간을 해제하여 공백 리스트로 만들기!\n");
	freeLinkedList_h(A); freeLinkedList_h(B); freeLinkedList_h(C);
	printpoly(A, 'A'); printpoly(B, 'B'); printpoly(C, 'C'); getchar();

	system("pause");
}
