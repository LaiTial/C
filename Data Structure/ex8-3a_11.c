#include <stdio.h>
#include <memory.h>
#include <stdlib.h>
#define MAX_VERTEX 10
#define False 0
#define True 1

typedef struct graphNode {
	int vertex;
	struct graphNode* link;
}graphNode;

typedef struct graphType {
	int n;
	graphNode* adjList_H[MAX_VERTEX];
	int visited[MAX_VERTEX];
}graphType;

typedef int element;

typedef struct Node
{
	int data;
	struct Node* link;
}Node;

typedef struct
{
	Node* front, * rear;
}LQueueType;

int isEmpty(LQueueType* LQ)
{
	if (LQ->front == NULL)
	{
		return 1;
	}
	else return 0;
}

LQueueType* createLinkedQueue()
{
	LQueueType* LQ;
	LQ = (LQueueType*)malloc(sizeof(LQueueType));
	LQ->front = NULL;
	LQ->rear = NULL;

	return LQ;
}

void push(int item, LQueueType* LQ)
{
	Node* temp = (Node*)malloc(sizeof(Node));
	temp->data = item;
	temp->link = LQ->front;
	LQ->front = temp;
}

int pop(LQueueType* LQ)
{
	int item;
	Node* temp = LQ->front;

	if (isEmpty(LQ))
	{
		printf("\n\nStack is empty!\n");
		return 0;
	}

	else
	{
		item = temp->data;
		LQ->front = temp->link;
		free(temp);

		return item;
	}
}

void enQueue(LQueueType* LQ, int item)
{
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->data = item;
	newNode->link = NULL;

	if (LQ->front == NULL)
	{
		LQ->front = newNode;
		LQ->rear = newNode;
	}

	else
	{
		LQ->rear->link = newNode;
		LQ->rear = newNode;
	}
}

int deQueue(LQueueType* LQ)
{
	Node* old = LQ->front;
	int item;

	if (isEmpty(LQ)) return 0;

	else
	{
		item = old->data;
		LQ->front = LQ->front->link;

		if (LQ->front == NULL)
			LQ->rear = NULL;
		free(old);

		return item;
	}
}

void initVisited(graphType* g)
{
	int v;

	for (v = 0; v < MAX_VERTEX; v++)
	{
		g->visited[v] = False;
	}
}

void createGraph(graphType* g)
{
	int v;
	g->n = 0;

	for (v = 0; v < MAX_VERTEX; v++)
	{
		g->visited[v] = False;
		g->adjList_H[v] = NULL;
	}
}

void insertVertex(graphType* g, int v)
{
	if (((g->n) + 1) > MAX_VERTEX)
	{
		printf("\n 그래프 정점의 개수를 초과하였습니다!");
		return;
	}

	g->n++;
}

void insertEdge(graphType* g, int u, int v)
{
	graphNode* node;

	if (u >= g->n || v >= g->n)
	{
		printf("\n 그래프에 없는 정점입니다!");
		return;
	}
	node = (graphNode*)malloc(sizeof(graphNode));
	node->vertex = v;
	node->link = g->adjList_H[u];
	g->adjList_H[u] = node;
}

void print_adjList(graphType* g)
{
	int i;
	graphNode* p;

	for (i = 0; i < g->n; i++)
	{
		printf("\n\t\t정점 %c의 인접 리스트", i + 65);
		p = g->adjList_H[i];

		while (p)
		{
			printf(" -> %c", p->vertex + 65);
			p = p->link;
		}
	}
}

void DFS_adjList(graphType* g, int v)
{
	graphNode* w;
	LQueueType* LQ;


	LQ = createLinkedQueue();
	LQ->front = NULL;
	push(v, LQ);
	g->visited[v] = True;
	printf("\n깊이 우선 탐색 >> ");
	printf(" %c", v + 65);

	while (!isEmpty(LQ))
	{
		v = pop(LQ);
		w = g->adjList_H[v];

		while (w)
		{
			if (!g->visited[w->vertex])
			{
				if (isEmpty(LQ)) push(v, LQ);
				push(w->vertex, LQ);
				g->visited[w->vertex] = True;
				printf(" %c", w->vertex + 65);
				v = w->vertex;
				w = g->adjList_H[v];
			}

			else w = w->link;
		}
	}
}

void BFS_adjList(graphType* g, int v)
{
	graphNode* w;
	LQueueType* Q;

	Q = createLinkedQueue();
	g->visited[v] = True;
	printf("\n넓이 우선 탐색 >> ");
	printf(" %c", v + 65);
	enQueue(Q, v);

	while (!isEmpty(Q))
	{
		v = deQueue(Q);

		for (w = g->adjList_H[v]; w; w = w->link)
		{
			if (!g->visited[w->vertex])
			{
				g->visited[w->vertex] = True;
				printf(" %c", w->vertex + 65);
				enQueue(Q, w->vertex);
			}
		}
	}
}


int main(void)
{
	int i;
	graphType* G9;

	G9 = (graphType*)malloc(sizeof(graphType));

	createGraph(G9);

	for (i = 0; i < 7; i++)
		insertVertex(G9, i);
	insertEdge(G9, 0, 2);
	insertEdge(G9, 0, 1);
	insertEdge(G9, 1, 4);
	insertEdge(G9, 1, 3);
	insertEdge(G9, 1, 0);
	insertEdge(G9, 2, 4);
	insertEdge(G9, 2, 0);
	insertEdge(G9, 3, 6);
	insertEdge(G9, 3, 1);
	insertEdge(G9, 4, 6);
	insertEdge(G9, 4, 2);
	insertEdge(G9, 4, 1);
	insertEdge(G9, 5, 6);
	insertEdge(G9, 6, 5);
	insertEdge(G9, 6, 4);
	insertEdge(G9, 6, 3);
	printf("\n G9의 인접리스트");
	print_adjList(G9);

	printf("\n");

	DFS_adjList(G9, 0);

	initVisited(G9);
	BFS_adjList(G9, 0);

	printf("\n");

	return 0;
}