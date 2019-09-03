#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <Windows.h>

int **buildTable(void);
void fillTable(int **table);
void processTable(int **table);

int rowMinimum(int *rowPtr);
int rowMaximum(int *rowPtr);
float rowAverage(int *rowPtr);

int main(void)
{
	int **table;

	table = buildTable();
	fillTable(table);
	processTable(table);

	return 0;
}

int **buildTable(void)
{
	int rowNum;
	int colNum;
	int **table;
	int row;

	printf("\nEnter the number of rows in the table: ");
	scanf("%d", &rowNum);

	table = (int **)calloc(rowNum + 1, sizeof(int *));

	for (row = 0; row < rowNum; row++)
	{
		printf("Enter number of integers in row %d: ", row + 1);
		scanf("%d", &colNum);

		table[row] = (int *)calloc(colNum + 1, sizeof(int));
		table[row][0] = colNum;
	}
	table[row] = NULL;

	return table;
}

void fillTable(int **table)
{
	printf("\n===========================\n");
	printf("Now we fill the table.\n\n");
	printf("For each row enter the data\n");
	printf("and press return:\n");
	printf("===========================\n\n");

	for (int i = 0; table[i] != NULL; i++)
	{
		printf("row %d (%d integers) ====> ", i + 1, table[i][0]);

		for (int j = 1; j <= table[i][0]; j++)
			scanf("%d", &table[i][j]);
	}
}

void processTable(int **table)
{
	for (int i = 0; table[i] != NULL; i++)
	{
		printf("\nThe statistics for row %d\n", i + 1);
		printf("The minimum: %d\n", rowMinimum(table[i]));
		printf("The maximum: %d\n", rowMaximum(table[i]));
		printf("The average: %.1f\n\n", rowAverage(table[i]));
	}
}

int rowMinimum(int *rowPtr)
{
	int minium;

	minium = rowPtr[1];

	for (int i = 1; i < rowPtr[0]; i++)
		if (rowPtr[i] < minium)
			minium = rowPtr[i];

	return minium;
}

int rowMaximum(int *rowPtr)
{
	int maxium;

	maxium = rowPtr[1];

	for (int i = 1; i < rowPtr[0]; i++)
		if (rowPtr[i] > maxium)
			maxium = rowPtr[i];

	return maxium;
}

float rowAverage(int *rowPtr)
{
	float average = 0.0f;

	for (int i = 1; i <= rowPtr[0]; i++)
		average += rowPtr[i];

	average = average / rowPtr[0];

	return average;
}
