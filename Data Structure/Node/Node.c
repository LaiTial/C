#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct ListNode {
	char data[10];
	struct ListNode* link;
}ListNode;

typedef struct Linked_list {
	ListNode *head;
}Linked_list;

Linked_list* CreatedLinkedList(void) 
{
	Linked_list *L;
	L = (Linked_list *)malloc(sizeof(Linked_list));
	L->head = NULL;

	return L;
}

void printNode(Linked_list *L)
{
	ListNode *p;
	p = L->head;

	printf("L = (");

	while (p != NULL)
	{
		printf("%s", p->data);
		p = p->link;

		if (p!= NULL)
		{
			printf(", ");
		}
	}

	printf(")\n");
}

ListNode *NewNode(char *x)
{
	ListNode *p;
	p = (ListNode *)malloc(sizeof(ListNode));
	strcpy_s(p->data, strlen(x)+1, x);

	p->link = NULL;
	return p;
}

void insertFirstNode(Linked_list *L, char *x)
{
	ListNode *newNode;
	newNode = NewNode(x);

	newNode->link = L->head;
	L->head = newNode;
}

void insertLastNode(Linked_list *L, char *x)
{
	ListNode *newNode, *p;
	newNode = NewNode(x);

	p = L->head;

	if (L->head == NULL)
	{
		L->head = newNode;
		return;
	}

	while (p->link!=NULL)
	{
		p = p->link;
	}
	p->link = newNode;
}

int main(void)
{
	Linked_list *L;
	L = CreatedLinkedList();

	printf("(1) 공백 리스트 생성하기!\n");
	printNode(L); getchar();

	printf("(2) 리스트 처음에 [월] 노드 삽입하기!\n");
	insertFirstNode(L, "월");
	printNode(L); getchar();

	printf("(3) 리스트 마지막에 [금] 노드 삽입하기!\n");
	insertLastNode(L, "금");
	printNode(L); getchar();
}
