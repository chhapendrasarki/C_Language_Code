#include <stdio.h>

int numberOne = 5;
int numberTwo = 2;
int numberThree;

int main (void)
{
	numberThree = numberOne | numberTwo;

	printf("%d | %d = %d\n", numberOne, numberTwo, numberThree);

	numberOne = 15;
	numberTwo = 10;

	numberThree = numberOne | numberTwo;

	printf("%d | %d = %d\n", numberOne, numberTwo, numberThree);

	return(0);
}