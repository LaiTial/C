#include <stdio.h>
#include <Windows.h>

#define SIZE 25

int* getData(int *pAry, int arySize);
void selectSort(int *pAry, int *last);
void printData(int *pAry, int *last);
int* smallest(int *pAry, int *pLast);
void exchange(int *current, int *smallest);

int main(void)
{
	int ary[SIZE];
	int *pLast;

	pLast = getData(ary, SIZE);
	selectSort(ary, pLast);
	printData(ary, pLast);

	return 0;
}

int* getData(int *pAry, int arySize)
{
	int i;

	for (i = 0; i < arySize; i++)
	{
		printf("Please Enter the Number or <EOF>: ");
		scanf("%d", pAry++);

		if (*(pAry - 1) == -1)
			break;
	}

	printf("%d data read.\n", i);

	return pAry;
}

void selectSort(int *pAry, int *last)
{
	int *smallCh;

	for (int *i = pAry; i < last - 1; i++)
	{
		smallCh = smallest(i, last);

		exchange(i, smallCh);
	}
}

void exchange(int *current, int *smallest)
{
	int temp;

	temp = *current;
	*current = *smallest;
	*smallest = temp;
}

int* smallest(int *pAry, int *pLast)
{
	int *smallCh;
	smallCh = (pAry);

	for (int* j = pAry + 1; j < pLast; j++)
	{
		if (*j < *smallCh)
		{
			smallCh = j;
		}
	}

	return smallCh;
}

void printData(int *pAry, int *last)
{
	int t = 0;

	printf("\nYour data sorted are: \n");

	for (int *i = pAry; i < last; i++)
	{
		if (*i == -1)
			continue;

		printf("#0%d \t %d\n", t++, *(i));
	}

	printf("\nEnd of List\n");
}
