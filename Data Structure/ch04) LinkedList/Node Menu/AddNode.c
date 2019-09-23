#include "Struct.h"

ListNode* CreateNode(char *x)
{
	ListNode *newNode;

	newNode = (ListNode *)malloc(sizeof(ListNode));
	strcpy_s(newNode->data, strlen(x) + 1, x);
	newNode->link = NULL;

	return newNode;
}

void insertLastNode(LinkedList_h *L, char*x)
{
	ListNode *temp;
	ListNode *newNode;

	newNode = CreateNode(x);

	if (L->head == NULL)
	{
		L->head = newNode;
		return;
	}

	temp = L->head;

	while (temp->link != NULL)
	{
		temp = temp->link;
	}

	temp->link = newNode; //마지막 노드 p의 link에 newNode를 연결
}
