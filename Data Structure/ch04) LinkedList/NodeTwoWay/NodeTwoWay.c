#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node
{
	struct Node *llist;
	char data[4];
	struct Node *rlist;
}Node;

typedef struct {
	Node *head;
}Linked_List;

Linked_List* createdLinkedList_h(void)
{
	Linked_List *L;
	L = (Linked_List *)malloc(sizeof(Linked_List));
	L->head = NULL;

	return L;
}

void printList(Linked_List *L)
{
	Node *p;

	p = L->head;
	printf("L = (");
	while (p != NULL)
	{
		printf("%s", p->data);
		p = p->rlist;

		if (p != NULL)
		{
			printf(", ");
		}
	}

	printf(")\n");
}

Node* CreateNode(char *x)
{
	Node *p;

	p = (Node *)malloc(sizeof(Node));
	strcpy_s(p->data, strlen(x) + 1, x);
	p->llist = NULL;
	p->rlist = NULL;

	return p;
}

//연결 리스트의 전체 메모리를 해제하는 연산
void freeLinkedList_h(Linked_List *L)
{
	Node *p;
	p = L->head;

	while (p != NULL)
	{
		L->head = p->rlist; //헤드를 두번째 노드로 변경
		free(p);
		p = L->head;
	}
}

//이중 연결 리스트에서 그 전의 노드를 찾는 연산
Node* searchNode(Linked_List *L, char *x)
{
	Node *p;

	p = L->head;

	while (p != NULL)
	{
		if (strcmp(p->data, x) == 0) return p;
		p = p->rlist;
	}

	return NULL;
}

//이중연결리스트에서 old노드를 삭제하는 과정
void deleteNode(Node *p, Linked_List *L)
{

	//p가 공백일 시, 공백리스트일 시
	if (p == NULL || L->head == NULL)
	{
		return;
	}

	//p가 리스트의 첫부분일때
	else if (p->llist == NULL)
	{
		if (p->rlist != NULL) //리스트에 하나만 있을경우!
			p->rlist->llist = NULL;

		L->head = p->rlist; //하나만 있을때는 NULL
	}

	//p가 중간이나 맨 끝일 경우
	else
	{
		p->llist->rlist = p->rlist;

		if (p->rlist != NULL)
		{
			p->rlist->llist = p->llist;
		}
	}

	free(p);

}

void insertFirstNode(Linked_List *L, char*x)
{
	Node *p;

	p = CreateNode(x);

	p->rlist = L->head;
	L->head = p;
}

void insertNode(Linked_List *L, char*x, Node *pre)
{
	Node *newnode;
	newnode = CreateNode(x);


	//공백 리스트인 경우 + 포인터 pre가 NULL인 경우
	if (L->head == NULL)
	{
		L->head = newnode;
		return;
	}

	//리스트의 첫 부분에 node 삽입
	else if (pre == NULL)
	{
		L->head->llist = newnode;
		newnode->rlist = L->head;
		L->head = newnode;
	}

	else
	{
		newnode->rlist = pre->rlist;
		pre->rlist = newnode;
		newnode->llist = pre;

		if (newnode->rlist != NULL)
		{
			newnode->rlist->llist = newnode;
		}
	}
}

int main(void)
{
	Linked_List *L;
	L = createdLinkedList_h();
	Node *pre;

	printf("(1) 공백 리스트 생성하기!\n");
	printList(L); getchar();

	printf("(2) 리스트 앞에 [금] 노드 삽입하기!\n");
	insertNode(L, "금", NULL);
	printList(L); getchar();

	printf("(3) 리스트 앞에 [월] 노드 삽입하기!\n");
	insertNode(L, "월", NULL);
	printList(L); getchar();

	printf("(3) 리스트 [월] 노드 뒤에 [수] 노드 삽입하기!\n");

	pre = searchNode(L, "월");
	if (pre != NULL)
	{
		insertNode(L, "수", L->head);
		printList(L); getchar();
	}

	printf("(4) 리스트 [수] 노드 삭제하기!\n");
	pre = searchNode(L, "수");
	deleteNode(pre, L);
	printList(L); getchar();

	printf("(5) 리스트 맨 앞에 [월] 노드 삭제하기!\n");
	pre = searchNode(L, "월");
	deleteNode(pre, L);
	printList(L); getchar();

	printf("(6) 리스트 맨 뒤에 [금] 노드 삭제하기!\n");
	pre = searchNode(L, "금");
	deleteNode(pre, L);
	printList(L); getchar();

	printf("(7) 리스트 공간을 해제하여 공백 리스트로 만들기!\n");
	freeLinkedList_h(L);
	printList(L); getchar();

	printf("done!\n");


	return 0;
}
