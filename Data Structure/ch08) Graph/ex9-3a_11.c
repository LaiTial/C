#include <stdio.h>
#include <stdlib.h>
int size=0, i = 0, howDoSwap=0;

int* getNumber()
{
	int *NumberPointer, i=1;

	printf("������ ������ ����: ");
	scanf_s("%d", &size);
	printf("���� ���� �Է�: ");
	NumberPointer = (int*)malloc(sizeof(int)*size);

	for (int i = 0; i < size; i++)
	{
		scanf_s("%d", &NumberPointer[i]);
	}

	return NumberPointer;
}

int partition(int a[], int begin, int end)
{
	int pivot, L, R, t;
	int temp;
	L = begin;
	R = end;
	pivot = (int)((begin + end) / 2.0); // �߰��� ��ġ�� ���Ҹ� �Ǻ� ���ҷ� ����

	printf("\n [�� ���� %d�ܰ� : pivot=%d ] \n", ++i, a[pivot]);

	while (L < R)
	{
		while ((a[L] < a[pivot]) && (L < R))
			L++;
		while ((a[R] >= a[pivot]) && (L < R))
			R--;
		if (L < R)
		{
			temp = a[L];
			a[L] = a[R];
			a[R] = temp;

			howDoSwap++;

			if (L == pivot)
				pivot = R;
		}
	}

	if (pivot != R)
	{
		temp = a[pivot];
		a[pivot] = a[R];
		a[R] = temp;

		howDoSwap++;
	}
	for (t = 0; t < size; t++) printf(" %d", a[t]);

	printf("\n");
	return R;
}

void quickSort(int a[], int begin, int end)
{
	int p;
	if (begin < end)
	{
		p = partition(a, begin, end);
		quickSort(a, begin, p - 1);
		quickSort(a, p + 1, end);
	}
}

void bubbleSort(int a[])
{
	howDoSwap = 0;

	for (int i = size-1; i >= 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (a[j] > a[j+1])
			{
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;

				howDoSwap++;
			}
		}

		printf("\n [���� ���� %d�ܰ�] \n", size-i);
		for (int t = 0; t < size; t++) printf(" %d", a[t]);
		printf("\n");
	}
	printf("��ȯȽ��: %d\n", howDoSwap);
}

int main(void)
{
	int* listQ, *listB;
	
	listQ = getNumber();
	listB = (int*)malloc(sizeof(int) * size);

	printf("\n [ �ʱ� ���� ] \n");
	for (int i = 0; i < size; i++)
	{
		printf(" %d", listQ[i]);
		listB[i] = listQ[i];
	}
	printf("\n");

	quickSort(listQ, 0, size - 1);
	printf("��ȯȽ��: %d\n", howDoSwap);

	printf("\n");
	bubbleSort(listB);

	return 0;
}