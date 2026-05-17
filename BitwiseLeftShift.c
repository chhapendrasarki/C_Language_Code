#include <stdio.h>

int numberOne = 10;
int numberTwo = 2;
int numberThree;

int main (void)
{
	numberThree = numberOne << numberTwo;

	printf("%d << %d = %d\n", numberOne, numberTwo, numberThree);
	return(0);
}