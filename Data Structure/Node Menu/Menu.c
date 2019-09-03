#include "Struct.h"

void Menu()
{
	printf("---------------------------------\n");
	printf("|   1) ����\t\t\t|\n");
	printf("|   2) ����\t\t\t|\n");
	printf("|   3) �˻�\t\t\t|\n");
	printf("|   4) ���\t\t\t|\n");
	printf("|   5) ��������\t\t\t|\n");
	printf("|   6) ����Ʈ ����\t\t|\n");
	printf("|   7) ����\t\t\t|\n");
	printf("---------------------------------\n\n");
}

int GetChoice(void)
{
	int choice;

	printf("���ϴ� �޴��� �����Ͻÿ�: ");
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
		printf("�޴��� ���� �ֹ��Դϴ�!\n");
		printf("�ٽ� �������ּ���.\n");
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