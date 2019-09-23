#include "Struct.h"

void ChoiceOne(LinkedList_h *L, char *x)
{
	printf("어떤 문자를 삽입하시겠습니까? ");
	scanf_s(" %s", x, 10);
	insertLastNode(L, x); getchar();
}

void ChoiceTwo(LinkedList_h *L, char *x)
{
	printf("어떤 문자를 삭제하시겠습니까? ");
	scanf_s(" %s", x, 10);
	deleteNode(L, searchNode(L, x)); getchar();
}

void ChoiceThird(LinkedList_h *L, char *x)
{
	printf("어떤 문자를 검색하시겠습니까? ");
	scanf_s(" %s", x, 10);
	printf("%s는 %p번지에 저장되어 있습니다.\n", x, searchNode(L, x)); getchar();
}
