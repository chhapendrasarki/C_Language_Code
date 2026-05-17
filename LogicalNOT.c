#include <stdio.h>

int numberOne = 10;
int numberTwo;

int main (void)
{
	numberTwo = !numberOne;

	printf("!%d = %d\n", numberOne, numberTwo);

	numberTwo = !0;

	printf("!0 = %d\n", numberTwo);
	
	return(0);
}