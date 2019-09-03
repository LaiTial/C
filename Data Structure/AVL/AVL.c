#include <stdio.h>
#include <stdlib.h>

typedef char element;
typedef struct treeNode {
	char key;
	struct treeNode *left;
	struct treeNode *right;
}treeNode;

treeNode* insertNode(treeNode *p, char x)
{
	treeNode* newNode;
	if (p == NULL)
	{
		newNode = (treeNode *)malloc(sizeof(treeNode));
		newNode->key = x;
		newNode->left = NULL;
		newNode->right = NULL;

		return newNode;
	}

	else if (x < p->key) p->left = insertNode(p->left, x);
	else if (x > p->key) p->right = insertNode(p->right, x);

	else printf("\n이미 같은 키가 있습니다! \n");

	return p;
}

treeNode* searchBST(treeNode* root, char x)
{
	treeNode *p;
	p = root;

	if (p == NULL)
		return NULL;

	if (x == p->key)
		return p;

	if (x < p->key)
		return searchBST(p->left, x);

	else return searchBST(p->right, x);
}

int main(void)
{
	treeNode *root = NULL;
	treeNode *foundedNode = NULL;

	root = insertNode(root, 'G');
	insertNode(root, 'A');
	insertNode(root, 'B');
	insertNode(root, 'C');
	insertNode(root, 'D');
	insertNode(root, 'H');

	printf("A의 위치: %p\n", searchBST(root, 'A'));
	printf("B의 위치: %p\n", searchBST(root, 'B'));
	printf("C의 위치: %p\n", searchBST(root, 'C'));
	printf("D의 위치: %p\n", searchBST(root, 'D'));
	printf("E의 위치: %p\n", searchBST(root, 'E'));
	printf("H의 위치: %p\n", searchBST(root, 'H'));
	printf("G의 위치: %p\n", searchBST(root, 'G'));
}
