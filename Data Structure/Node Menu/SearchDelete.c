#include "Struct.h"

void deleteNode(LinkedList_h *L, ListNode *p)
{
	ListNode *pre;

	//1) list�� �����. ���� ��尡 ����.
	if (L->head == NULL || p == NULL)
		return;

	//2) �� ���� ��������.
	if (L->head == p)
	{
		L->head = p->link;
		free(p);
		return;
	}

	//3) �߰��̳� �� �ڸ� ��������.
	{
		pre = L->head;

		while (pre->link != p)
		{
			pre = pre->link;
		}
		pre->link = p->link;
		free(p);
		return;
	}
}

ListNode* searchNode(LinkedList_h *L, char *find)
{
	ListNode *temp;
	temp = L->head;

	while (temp != NULL)
	{
		if (strcmp(temp->data, find) == 0) return temp;
		else
		{
			temp = temp->link;
		}
	}

	return NULL;
}

void count(LinkedList_h *L)
{
	ListNode *p;
	int count = 0;
	p = L->head;

	while (p != NULL)
	{
		count++;
		p = p->link;
	}

	printf("����� ����: %d\n", count);
}