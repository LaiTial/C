#include <stdio.h>
#include <stdlib.h>

typedef int element;
typedef struct treeNode {
	int key;
	struct treeNode* left;
	struct treeNode* right;
} treeNode;

treeNode* searchBST(treeNode* root, int x)
{
	treeNode* p;
	p = root;
	while (p != NULL)
	{
		if (x < p->key) p = p->left;
		else if (x == p->key) return p;
		else p = p->right;
	}

	printf("\n 찾는 키가 없습니다!");
	return p;
}

treeNode* insertNode(treeNode* p, int x)
{
	treeNode* newNode;
	if (p == NULL) {
		newNode = (treeNode*)malloc(sizeof(treeNode));

		if (newNode != NULL)
		{
			newNode->key = x;
			newNode->left = NULL;
			newNode->right = NULL;
		}

		return newNode;
	}

	else if (x < p->key) p->left = insertNode(p->left, x);
	else if (x > p->key) p->right = insertNode(p->right, x);
	else printf("\n 이미 같은 키가 있습니다!\n");

	return p;
}

void deleteNode(treeNode* root, element key)
{
	treeNode* parent, * p, * succ, * succ_parent;
	treeNode* child;

	parent = NULL;
	p = root;
	while ((p != NULL) && (p->key != key))
	{
		parent = p;
		if (key < p->key) p = p->left;
		else p = p->right;
	}

	if (p == NULL)
	{
		printf("\n찾는 키가 이진 트리에 없습니다!!");
		return;
	}

	if ((p->left == NULL) && (p->right == NULL))
	{
		if (parent != NULL)
		{
			if (parent->left == p)parent->left = NULL;
			else parent->right = NULL;
		}
		else root = NULL;
	}

	else if ((p->left == NULL) || (p->right == NULL))
	{
		if (p->left != NULL) child = p->left;
		else child = p->right;

		if (parent != NULL)
		{
			if (parent->left == p)parent->left = child;
			else parent->right = child;
		}

		else root = child;
	}

	else {
		succ_parent = p;
		succ = p->left;

		while (succ->right != NULL)
		{
			succ_parent = succ;
			succ = succ->right;
		}

		if (succ_parent->left == succ) succ_parent->left = succ->left;
		else succ_parent->right = succ->left;
		p->key = succ->key;
		p = succ;
	}
	free(p);
}

void displayInorder(treeNode* root)
{
	if (root)
	{
		displayInorder(root->left);
		printf("%d_", root->key);
		displayInorder(root->right);
	}
}

void menu() {
	printf("\n*--------------------*");
	printf("\n\t1 : 트리 출력");
	printf("\n\t2 : 문자 삽입");
	printf("\n\t3 : 문자 삭제");
	printf("\n\t4 : 문자 검색");
	printf("\n\t5 : 종료");
	printf("\n*--------------------*");
	printf("\n메뉴 입력 >> ");
}

int main()
{
	treeNode* root = NULL;
	treeNode* foundedNode = NULL;
	char choice;
	int key;

	root = insertNode(root, 8);
	insertNode(root, 3);
	insertNode(root, 10);
	insertNode(root, 2);
	insertNode(root, 5);
	insertNode(root, 14);
	insertNode(root, 11);
	insertNode(root, 16);

	while (1)
	{
		menu();
		scanf_s(" %c", &choice, 1);

		switch (choice - '0')
		{
		case 1: printf("\t[이진 트리 출력] ");
			displayInorder(root); printf("\n");
			break;

		case 2: printf("삽입할 문자를 입력하세요: ");
			scanf_s("%d", &key);
			insertNode(root, key);
			break;

		case 3: printf("삭제할 문자를 입력하세요: ");
			scanf_s("%d", &key);
			deleteNode(root, key);
			break;

		case 4: printf("찾을 문자를 입력하세요: ");
			scanf_s("%d", &key);
			foundedNode = searchBST(root, key);

			if (foundedNode != NULL)
				printf("\n %d를 찾았습니다! \n", foundedNode->key);

			else
			{
				printf("\n 문자를 찾지 못했습니다. \n");
			}
			break;

		case 5: return 0;
		default: printf("없는 메뉴입니다. 메뉴를 다시 선택하세요! \n");
			break;
		}
	}

}
