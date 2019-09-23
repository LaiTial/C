#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <process.h>

//노드 정의	
typedef struct ListNode {
	char data[4];
	struct ListNode *link;
}ListNode;

//노드를 가르키는 포인터 정의
typedef struct {
	ListNode *head;
}LinkedList_h;

extern void Menu();
extern int GetChoice(void);
extern void printList(LinkedList_h *L);
extern LinkedList_h* createdLinkedList_h(void);
extern ListNode* searchNode(LinkedList_h *L, char *find);
extern void deleteNode(LinkedList_h *L, ListNode *p);
extern ListNode* CreateNode(char *x);
extern void insertLastNode(LinkedList_h *L, char*x);
extern void freeLinkedList_h(LinkedList_h *L);
extern void count(LinkedList_h *L);
void ChoiceOne(LinkedList_h *L, char *x);
void ControllNode(void);
void switchNode(int choice, LinkedList_h *L);
void ChoiceThird(LinkedList_h *L, char *x);
void ChoiceTwo(LinkedList_h *L, char *x);

