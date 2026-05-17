#include <stdio.h>

int numberOne;
int numberTwo;
int numberPosition;
int numberResult;

int main (void)
{
	printf("enter the number one : ");
	scanf("%d", &numberOne);

	printf("enter the position number : ");
	scanf("%d", &numberPosition);

	numberTwo = 1 << (numberPosition - 1);

	numberTwo = ~numberTwo;

	numberResult = numberOne & numberTwo;
	
	printf("number %d turn off bit at position %d Result is : %d\n", numberOne, numberPosition, numberResult);

	return(0);
}