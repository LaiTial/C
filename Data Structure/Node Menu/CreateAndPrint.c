#include "Struct.h"

//��带 ����Ű�� �����͸� �����.
LinkedList_h* createdLinkedList_h(void)
{
	LinkedList_h *L;
	L = (LinkedList_h *)malloc(sizeof(LinkedList_h));
	L->head = NULL;

	return L;
}

//���� ��带 ��� ���
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

