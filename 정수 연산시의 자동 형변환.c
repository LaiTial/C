#include <stdio.h>
#include <limits.h>

int main(void)
{
	char ch1 = 1;
	char ch2 = 120, b = CHAR_MAX;

	ch2 = ch2 + sizeof(double); //int연산의 결과를 char형에 저장[내림변환]

	printf("%d\n", ch2);
	printf("%d\n", ch1 + b); //수식의 연산결과값을 출력
	
	return 0;

}
