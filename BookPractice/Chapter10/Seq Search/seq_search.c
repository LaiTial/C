#include <stdio.h>
#define SIZE 10

int main(void)
{
	int key, i, ch;
	int list[SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	printf("탐색할 값을 입력하시오: ");
	scanf_s("%d", &key);

	for ( i = 0; i < SIZE; i++)
	{
		if (list[i] == key)
		{
			ch = 1;
			printf("탐색 성공 인덱스 = %d\n", i);
			break;
		}
	}
	printf("탐색 종료\n");
	
	if (ch != 1)
	{
		printf("입력한 값과 맞는 인덱스 값을 찾지 못하였습니다. 다시 입력해주세요.\n");
	}

	return 0;
}
