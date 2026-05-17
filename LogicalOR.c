#include <stdio.h>

int numberOne = 10;
int numberTwo = 20;
int numberThree;

int main (void)
{
	numberThree = numberOne || numberTwo;

	printf("%d || %d = %d\n", numberOne, numberTwo, numberThree);

	numberThree = 0 || 0;

	printf("0 || 0 = %d\n", numberThree);
	
	return(0);
}