#include <stdio.h>

int numberOne;
int numberTwo;
int numberPosition;
int numberResult;
int numberOfBits;

int main (void)
{
	printf("Enter the number one : ");
	scanf("%d", &numberOne);

	printf("Enter the Position Number : ");
	scanf("%d", &numberPosition);

	printf("Enter the number Of Bits : ");
	scanf("%d", &numberOfBits);

	numberTwo = ~0;

	numberTwo = numberTwo << numberOfBits;

	numberTwo = ~numberTwo;

	numberTwo = numberTwo << (numberPosition - numberOfBits);

	numberResult = numberOne ^ numberTwo;

	printf("Result : %d\n", numberResult);

	return(0);
}
