#include "Struct.h"

//���� ����Ʈ�� ��ü �޸𸮸� �����ϴ� ����
void freeLinkedList_h(LinkedList_h *L)
{
	ListNode *p;
	p = L->head;

	while (p != NULL)
	{
		L->head = p->link; //��带 �ι�° ���� ����
		free(p);
		p = L->head;
	}
}