#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//노드 정의	
typedef struct ListNode {
	char data[4];
	struct ListNode *link;
}ListNode;

//노드를 가르키는 포인터 정의
typedef struct {
	ListNode *head;
}LinkedList_h;

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

//연결 리스트의 전체 메모리를 해제하는 연산
void freeLinkedList_h(LinkedList_h *L)
{
	ListNode *p;
	p = L->head;

	while (p != NULL)
	{
		L->head = p->link; //헤드를 두번째 노드로 변경
		free(p); //첫 번째 노드를 메모리 해제
		p = L->head;
	}
}

ListNode* CreateNode(char *x)
{
	ListNode *newNode;

	newNode = (ListNode *)malloc(sizeof(ListNode));
	strcpy_s(newNode->data, strlen(x) + 1, x);
	newNode->link = NULL;

	return newNode;
}

void insertFirstNode(LinkedList_h *L, char*x)
{
	ListNode *newNode;
	newNode = CreateNode(x);

	newNode->link = L->head;
	L->head = newNode;

}

void insertLastNode(LinkedList_h *L, char*x)
{
	ListNode *temp;
	ListNode *newNode;

	newNode = CreateNode(x);

	if (L->head == NULL)
	{
		L->head = newNode;
		return;
	}

	temp = L->head;

	while (temp->link != NULL)
	{
		temp = temp->link;
	}

	temp->link = newNode; //마지막 노드 p의 link에 newNode를 연결
}

void insertNodeTo(LinkedList_h *L, char*x, ListNode *pre)
{
	ListNode *newNode;
	newNode = CreateNode(x);

	//공백 리스트인 경우 + 포인터 pre가 NULL인 경우
	if ((L->head == NULL) || pre == NULL)
	{
		newNode->link = L->head; //newNode link에 NULL 삽입
		L->head = newNode; //새 노드를 첫번째 노드로 삽입
	}

	else if (pre->link == NULL)
	{
		pre->link = newNode;
		newNode->link = NULL;
	}

	else
	{
		newNode->link = pre->link;
		pre->link = newNode;
	}


}

int main(void)
{
	LinkedList_h *L;
	L = createdLinkedList_h();
	ListNode *pre;

	printf("(1) 공백 리스트 생성하기!\n");
	printList(L); getchar();

	printf("(2) 리스트 중간에 [화] 노드 삽입하기!\n");
	insertNodeTo(L, "화", L->head);
	printList(L); getchar();

	printf("(3) 리스트 중간에 [수] 노드 삽입하기!\n");
	pre = searchNode(L, "화");
	if (pre)
	{
		insertNodeTo(L, "수", pre);
	}
	else
	{
		printf("찾는 노드가 없어서 넣지 못합니다.\n");
	}
	printList(L); getchar();

	printf("(4) 리스트 중간에 [목] 노드 삽입하기!\n");
	pre = searchNode(L, "수");
	if (pre)
	{
		insertNodeTo(L, "목", pre);
	}
	else
	{
		printf("찾는 노드가 없어서 넣지 못합니다.\n");
	}
	printList(L); getchar();

	printf("(5) 리스트 맨 앞에 [월] 노드 삽입하기!\n");
	insertNodeTo(L, "월", NULL);
	printList(L); getchar();

	printf("(6) 리스트 맨 뒤에 [금] 노드 삽입하기!\n");
	pre = searchNode(L, "목");
	if (pre)
	{
		insertNodeTo(L, "금", pre);
	}
	else
	{
		printf("찾는 노드가 없어서 넣지 못합니다.\n");
	}
	printList(L); getchar();

	printf("(7) 리스트 맨 뒤에 [토] 노드 삽입하기!\n");
	pre = searchNode(L, "금");
	if (pre)
	{
		insertNodeTo(L, "토", pre);
	}

	else
	{
		printf("찾는 노드가 없어서 넣지 못합니다.\n");
	}
	printList(L); getchar();

	printf("(8) 리스트 공간을 해제하여 공백 리스트로 만들기!\n");
	freeLinkedList_h(L);
	printList(L); getchar();

	return 0;
}
