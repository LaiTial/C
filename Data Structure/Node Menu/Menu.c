#include "Struct.h"

void Menu()
{
	printf("---------------------------------\n");
	printf("|   1) 삽입\t\t\t|\n");
	printf("|   2) 삭제\t\t\t|\n");
	printf("|   3) 검색\t\t\t|\n");
	printf("|   4) 출력\t\t\t|\n");
	printf("|   5) 개수세기\t\t\t|\n");
	printf("|   6) 리스트 비우기\t\t|\n");
	printf("|   7) 종료\t\t\t|\n");
	printf("---------------------------------\n\n");
}

int GetChoice(void)
{
	int choice;

	printf("원하는 메뉴를 선택하시오: ");
	scanf_s("%d", &choice);

	return choice;
}

void switchNode(int choice, LinkedList_h *L)
{
	char x[10];

	switch (choice)
	{
	case 1:
		ChoiceOne(L, x);
		break;

	case 2:
		ChoiceTwo(L, x);
		break;

	case 3:
		ChoiceThird(L, x);
		break;

	case 4:
		printList(L); getchar();
		break;

	case 5:
		count(L);
		break;

	case 6:
		freeLinkedList_h(L);
		break;

	case 7:
		exit(0);

	default:
		printf("메뉴에 없는 주문입니다!\n");
		printf("다시 선택해주세요.\n");
		break;
	}
}

void ControllNode(void)
{
	int choice;
	LinkedList_h *L;
	L = createdLinkedList_h();

	while (1)
	{
		Menu();
		choice = GetChoice();

		switchNode(choice, L);

		puts("\n");
	}
}