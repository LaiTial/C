#include "Struct.h"

void ChoiceOne(LinkedList_h *L, char *x)
{
	printf("� ���ڸ� �����Ͻðڽ��ϱ�? ");
	scanf_s(" %s", x, 10);
	insertLastNode(L, x); getchar();
}

void ChoiceTwo(LinkedList_h *L, char *x)
{
	printf("� ���ڸ� �����Ͻðڽ��ϱ�? ");
	scanf_s(" %s", x, 10);
	deleteNode(L, searchNode(L, x)); getchar();
}

void ChoiceThird(LinkedList_h *L, char *x)
{
	printf("� ���ڸ� �˻��Ͻðڽ��ϱ�? ");
	scanf_s(" %s", x, 10);
	printf("%s�� %p������ ����Ǿ� �ֽ��ϴ�.\n", x, searchNode(L, x)); getchar();
}