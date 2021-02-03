#include <stdio.h>
#define SIZE 16

int binary_search(int grade[], int size, int key);

int main(void)
{
	int key, result;
	int grade[SIZE] = { 2, 6, 11, 13, 18, 20, 22, 27, 29, 30, 34, 38, 41, 42, 45, 47 };

	printf("탐색할 값을 입력하시오: ");
	scanf_s("%d", &key);

	result = binary_search(grade, SIZE, key);


	if (result == -1)
	{
		printf("탐색 실패. 값을 찾을 수 없습니다.\n");
	}

	else
	{
		printf("탐색 결과: %d\n", result);
	}

	return 0;
}

int binary_search(int grade[], int size, int key)
{
	int low, middle, high;

	low = 0;
	high = size - 1;

	while (low <= high)
	{
		printf("[%d %d]\n", low, high);
		middle = (low + high) / 2;

		if (key == grade[middle])
		{
			return middle;
		}

		else if (key < grade[middle])
		{
			high = middle - 1;
		}

		else if (key > grade[middle])
		{
			low = middle + 1;
		}
		
	}

	return -1;
}
