#include <stdio.h>

int firstDigit(int num);
int secondDigit(int num);
int addThreeDigits(int num);
int thirdDigit(int num);

int main(void)
{
	int num;

	printf("Enter an integer: ");
	scanf("%d", &num);

	printf("Sum of last three digit is: %d\n", addThreeDigits(num));

	return 0;
}

int addThreeDigits(int num)
{
	int sum;
	
	sum = firstDigit(num) + secondDigit(num) + thirdDigit(num);
	return sum;
}

int firstDigit(int num)
{
	return num % 10;
}

int secondDigit(int num)
{
	return (num / 10)%10;
}

int thirdDigit(int num)
{
	return (num/100)%10;
}