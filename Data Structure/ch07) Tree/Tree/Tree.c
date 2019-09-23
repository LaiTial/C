#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

int i = 0;

typedef struct treeNode
{
	struct treeNode *llink;
	struct treeNode *rlink;
	char data;
}treeNode;

treeNode* CreateNode(treeNode* leftNode, treeNode *rightNode, char data)
{
	treeNode *root;
	root = (treeNode *)malloc(sizeof(treeNode));

	root->data = data;
	root->llink = leftNode;
	root->rlink = rightNode;

	return root;
}

int PlusNode(treeNode* root)
{
	if (root)
	{
		PlusNode(root->llink);
		PlusNode(root->llink);

		i++;
	}

	return i;
}

int main(void)
{
	treeNode *seven = CreateNode(NULL, NULL, '7');
	treeNode *six = CreateNode(NULL, NULL, '6');
	treeNode *five = CreateNode(NULL, NULL, '5');
	treeNode *four = CreateNode(NULL, NULL, '4');
	treeNode *three = CreateNode(six, seven, '3');
	treeNode *two = CreateNode(four, five, '2');
	treeNode *one = CreateNode(two, three, '1');

	PlusNode(one);

	printf("%d\n", i);
}
