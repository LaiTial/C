#include "Struct.h"

//연결 리스트의 전체 메모리를 해제하는 연산
void freeLinkedList_h(LinkedList_h *L)
{
	ListNode *p;
	p = L->head;

	while (p != NULL)
	{
		L->head = p->link; //헤드를 두번째 노드로 변경
		free(p);
		p = L->head;
	}
}