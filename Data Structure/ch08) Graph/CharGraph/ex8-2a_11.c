#include <stdio.h>
#include <stdlib.h>
#define MAX_VERTEX 30

typedef struct graphNode {
	char ch;
	struct graphNode* link;
}graphNode;

typedef struct graphType {
	int n;
	graphNode* adjList_H[MAX_VERTEX];
}graphType;

void createGraph(graphType* g)
{
	int v;
	g->n = 0;

	for (v = 0; v < MAX_VERTEX; v++)
	{
		g->adjList_H[v] = NULL;
	}
}

void insertVertex(graphType* g)
{
	if (((g->n) + 1) > MAX_VERTEX)
	{
		printf("\n 그래프 정점의 개수를 초과하였습니다!");
		return;
	}

	g->n++;
}

void insertEdge(graphType* g, int u, char v)
{
	graphNode* node;

	if (u >= g->n || (v-65) >= g->n)
	{
		printf("\n 그래프에 없는 정점입니다!");
		return;
	}
	node = (graphNode*)malloc(sizeof(graphNode));
	node->ch = v;

	node->link = g->adjList_H[u];
	g->adjList_H[u] = node;
}

void print_adjList(graphType* g)
{
	int i;
	graphNode* p;

	for (i = 0; i < g->n; i++)
	{
		printf("\n\t\t정점 %c의 인접 리스트", i+65);
		p = g->adjList_H[i];

		while (p)
		{
			printf(" -> %c", p->ch);
			p = p->link;
		}
	}
}


int main(void)
{
	int i;
	graphType* G1, * G2, * G3, * G4, * G5;

	G1 = (graphType*)malloc(sizeof(graphType));
	G2 = (graphType*)malloc(sizeof(graphType));
	G3 = (graphType*)malloc(sizeof(graphType));
	G4 = (graphType*)malloc(sizeof(graphType));
	G5 = (graphType*)malloc(sizeof(graphType));

	createGraph(G1); createGraph(G2); createGraph(G3); createGraph(G4); createGraph(G5);

	for (i = 0; i < 4; i++)
		insertVertex(G1);
	insertEdge(G1, 0, 'D');
	insertEdge(G1, 0, 'B');
	insertEdge(G1, 1, 'D');
	insertEdge(G1, 1, 'C');
	insertEdge(G1, 1, 'A');
	insertEdge(G1, 2, 'D');
	insertEdge(G1, 2, 'B');
	insertEdge(G1, 3, 'C');
	insertEdge(G1, 3, 'B');
	insertEdge(G1, 3, 'A');
	printf("\n G1의 인접리스트");
	print_adjList(G1);

	for (i = 0; i < 3; i++)
		insertVertex(G2);
	insertEdge(G2, 0, 'C');
	insertEdge(G2, 0, 'B');
	insertEdge(G2, 1, 'C');
	insertEdge(G2, 1, 'A');
	insertEdge(G2, 2, 'B');
	insertEdge(G2, 2, 'A');
	printf("\n G2의 인접리스트");
	print_adjList(G2);

	for (i = 0; i < 4; i++)
		insertVertex(G3);
	insertEdge(G3, 0, 'D');
	insertEdge(G3, 0, 'B');
	insertEdge(G3, 1, 'D');
	insertEdge(G3, 1, 'C');
	insertEdge(G3, 2, 'D');
	printf("\n G3의 인접리스트");
	print_adjList(G3);

	for (i = 0; i < 3; i++)
		insertVertex(G4);
	insertEdge(G4, 0, 'C');
	insertEdge(G4, 0, 'B');
	insertEdge(G4, 1, 'C');
	insertEdge(G4, 1, 'A');
	printf("\n G4의 인접리스트");
	print_adjList(G4);

	for (i = 0; i < 7; i++)
		insertVertex(G5);
	insertEdge(G5, 0, 'C');
	insertEdge(G5, 0, 'B');
	insertEdge(G5, 1, 'E');
	insertEdge(G5, 1, 'D');
	insertEdge(G5, 1, 'A');
	insertEdge(G5, 2, 'A');
	insertEdge(G5, 3, 'G');
	insertEdge(G5, 3, 'B');
	insertEdge(G5, 4, 'G');
	insertEdge(G5, 4, 'B');
	insertEdge(G5, 5, 'G');
	insertEdge(G5, 6, 'F');
	insertEdge(G5, 6, 'E');
	insertEdge(G5, 6, 'D');
	printf("\n G5의 인접리스트");
	print_adjList(G5);

	printf("\n");

	return 0;
}
