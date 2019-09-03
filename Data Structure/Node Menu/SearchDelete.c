#include "Struct.h"

void deleteNode(LinkedList_h *L, ListNode *p)
{
	ListNode *pre;

	//1) list가 비었다. 지울 노드가 없다.
	if (L->head == NULL || p == NULL)
		return;

	//2) 맨 앞을 삭제하자.
	if (L->head == p)
	{
		L->head = p->link;
		free(p);
		return;
	}

	//3) 중간이나 맨 뒤를 삭제하자.
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

	printf("노드의 개수: %d\n", count);
}