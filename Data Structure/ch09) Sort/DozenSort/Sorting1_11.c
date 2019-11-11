/*
SelectionSort And BubbleSort And InsertSort And QuickSort
*/

#include <stdio.h>
#include <stdlib.h>
int i = 0;

int partition(int a[], int begin, int end, int size)
{
	int pivot, L, R, t;
	int temp;
	L = begin;
	R = end;
	pivot = (int)((begin + end) / 2.0); // 중간에 위치한 원소를 피봇 원소로 선택

	printf("pass %d:", ++i);

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


			if (L == pivot)
				pivot = R;
		}
	}

	if (pivot != R)
	{
		temp = a[pivot];
		a[pivot] = a[R];
		a[R] = temp;

	}
	for (t = 0; t < size; t++) printf(" %d", a[t]);

	printf("\n");
	return R;
}

void quickSort(int a[], int begin, int end, int size)
{
	int p;
	if (begin < end)
	{
		p = partition(a, begin, end, size);
		quickSort(a, begin, p - 1, size);
		quickSort(a, p + 1, end, size);
	}
}

void bubbleSort(int a[], int size)
{
	for (int i = size - 1; i >= 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (a[j] > a[j + 1])
			{
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}

		printf("pass %d : ", size - i);
		for (int t = 0; t < size; t++) printf(" %d", a[t]);
		printf("\n");
	}
}

void SelectionSort(int a[], int size)
{
	int min;

	for (int i = 0; i < size-1; i++)
	{
		min = i;

		for (int j = i+1; j < size; j++)
		{
			if (a[min] > a[j])
			{
				min=j;
			}
		}
		int temp = a[i];
		a[i] = a[min];
		a[min] = temp;

		printf("pass %d : ", i+1);
		for (int t = 0; t < size; t++) printf(" %d", a[t]);
		printf("\n");
	}
}

void InsertSort(int a[], int size)
{
	int loc, sortItem;

	for (int i = 1; i < size; i++)
	{
		loc = i - 1;
		sortItem = a[i];

		while (loc >= 0 && sortItem < a[loc])
		{
			int temp = a[loc + 1];
			a[loc + 1] = a[loc];
			a[loc] = temp;

			loc--;
		}
		a[loc + 1] = sortItem;

		printf("pass %d : ", i + 1);
		for (int t = 0; t < size; t++) printf(" %d", a[t]);
		printf("\n");
	}
}

int main(void)
{
	int sortNumSel[7] = { 7, 2, 1, 8, 5, 9, 3 };
	int sortNumQ[7], sortNumBubb[7], sortNumInsert[7];
	int size = 7;

	printf("\n init:");
	for (int i = 0; i < size; i++)
	{
		printf(" %d", sortNumSel[i]);
		sortNumQ[i] = sortNumBubb[i] = sortNumInsert[i] = sortNumSel[i];
	}
	printf("\n");

	printf("\n<Selection Sort>\n");
	SelectionSort(sortNumSel, 7);

	printf("\n<Bubble Sort>\n");
	bubbleSort(sortNumBubb, 7);

	printf("\n<Insertion Sort>\n");
	InsertSort(sortNumInsert, 7);

	printf("\n<Quick Sort>\n");
	quickSort(sortNumQ, 0, size - 1, 7);

	return 0;
}
