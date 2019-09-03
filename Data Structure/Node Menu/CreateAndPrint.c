#include "Struct.h"

//노드를 가르키는 포인터를 만든다.
LinkedList_h* createdLinkedList_h(void)
{
	LinkedList_h *L;
	L = (LinkedList_h *)malloc(sizeof(LinkedList_h));
	L->head = NULL;

	return L;
}

//현재 노드를 모두 출력
void printList(LinkedList_h *L)
{
	ListNode *p;
	printf("L = (");
	p = L->head;

	while (p != NULL)
	{
		printf("%s", p->data);
		p = p->link;

		if (p != NULL)
		{
			printf(", ");
		}
	}

	printf(")\n");
}

