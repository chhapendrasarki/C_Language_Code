#include <stdio.h>

int numberOne = 10;
int numberTwo = 20;

int main (void)
{
	numberOne > numberTwo ? (numberTwo = 30) : (numberOne = 30);

	printf("numberOne : %d\nnumberTwo : %d\n", numberOne, numberTwo);

	return(0);
}