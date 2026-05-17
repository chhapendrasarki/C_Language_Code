#include <stdio.h>

int numberOne;
int numberTwo;
int numberPosition;
int numberResult;

int main (void)

{
	printf("enter the numbe one : ");
	scanf("%d", &numberOne);

	printf("enter thte position number : ");
	scanf("%d", &numberPosition);

	numberTwo = 1 << (numberPosition - 1);

	numberResult = numberOne | numberTwo;

	printf("number %d Turn On Bit at Position %d Result is : %d\n", numberOne, numberPosition, numberResult);

	return(0);
}