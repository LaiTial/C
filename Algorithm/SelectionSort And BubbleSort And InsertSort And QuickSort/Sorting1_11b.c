/*
SelectionSort And BubbleSort And InsertSort And QuickSort
*/

#include <stdio.h>
#include <stdlib.h>
int s = 1, size = 7;

int partition(int a[], int begin, int end)
{
	int i = begin - 1;
	int pivot = a[end]; // 끝에 위치한 원소를 피봇 원소로 선택

	for (int j = begin; j <= end - 1; j++)
	{
		if (a[j] <= pivot)
		{
			++i;

			int temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}

	}

	int temp = a[i + 1];
	a[i + 1] = a[end];
	a[end] = temp;

	printf("pass %d : ", s++);
	for (int t = 0; t < size; t++) printf(" %d", a[t]);
	printf("\n");

	return i + 1;
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

void SelectionSort(int a[])
{
	int max;

	for (int i = size - 1; i > 0; i--)
	{
		max = i;

		for (int j = i - 1; j >= 0; j--)
		{
			if (a[max] < a[j])
			{
				max = j;
			}
		}
		int temp = a[i];
		a[i] = a[max];
		a[max] = temp;

		printf("pass %d : ", size - i);
		for (int t = 0; t < size; t++) printf(" %d", a[t]);
		printf("\n");
	}
}

void InsertSort(int a[])
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

		printf("pass %d : ", i);
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
	SelectionSort(sortNumSel);

	printf("\n<Bubble Sort>\n");
	bubbleSort(sortNumBubb);

	printf("\n<Insertion Sort>\n");
	InsertSort(sortNumInsert);

	printf("\n<Quick Sort>\n");
	quickSort(sortNumQ, 0, size - 1);

	return 0;
}
