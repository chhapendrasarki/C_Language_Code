#include <stdio.h>

int numberOne;
int numberTwo;
int numberPosition;
int numberResult;

int main (void)
{
	printf("Enter the number one : ");
	scanf("%d", &numberOne);

	printf("Enter the position Number : ");
	scanf("%d", &numberPosition);

	numberTwo = 1 << (numberPosition - 1);

	numberResult = numberOne ^ numberTwo;

	printf("Result : %d\n", numberResult);
	
	return(0);
}