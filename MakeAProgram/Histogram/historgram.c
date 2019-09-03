#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

#define MAX_ELMNTS 100
#define ANLYS_RNG 20

int getData(int numbers[], int size, int range);
void printData(int numbers[], int size, int LineNumber);
void makeFrequency(int numbers[], int size, int frequency[], int range);
void makeHistogram(int frequency[], int range);

int main(void)
{
	int size;
	int numbers[MAX_ELMNTS] = { NULL };
	int frequency[ANLYS_RNG] = { 0 };

	size = getData(numbers, MAX_ELMNTS, ANLYS_RNG);
	printData(numbers, size, 10);

	makeFrequency(numbers, size, frequency, ANLYS_RNG);
	makeHistogram(frequency, ANLYS_RNG);

	return 0;
}

int getData(int numbers[], int size, int range)
{
	FILE *f;
	int total = 0, i;
	f = fopen("store.txt", "r");

	for (i = 0; i < size; i++)
	{
		fscanf(f, "%d", &numbers[i]);

		if (numbers[i] == NULL)
			break;
	}

	fclose(f);

	return i;
}

void printData(int numbers[], int size, int LineNumber)
{
	int Ivalid = 0;

	for (int i = 0; i < size; i++)
	{
		if ((numbers[i] < 0) || (numbers[i]) > 19)
		{
			printf("Data point %d invalid. Ignored\n", numbers[i]);
			Ivalid++;
		}
	}

	puts("");

	printf("The number of Total data: %d\n", size);
	printf("The number of valid data: %d\n", size - Ivalid);

	puts("");

	for (int i = 0; i < size; i++)
	{
		printf("%d ", numbers[i]);

		if (i%LineNumber == 9)
			printf("\n");
	}

	puts("");
}

void makeFrequency(int numbers[], int size, int frequency[], int range)
{
	for (int i = 0; i < size; i++)
	{
		if (numbers[i] < range)
			frequency[numbers[i]]++;
	}
}

void makeHistogram(int frequency[], int range)
{
	for (int i = 0; i < range; i++)
	{
		printf("%2d %2d ", i, frequency[i]);

		for (int j = 0; j < frequency[i]; j++)
			printf("■");

		puts("");
	}
}
