#include <stdio.h>

int division(int numberOne, int numberTwo);

int main (void)
{
    int numberOne;
    int numberTwo;
    int numberResult;

    printf("Enter the number One : ");
    scanf("%d", &numberOne);

    printf("Enter the number Two : ");
    scanf("%d", &numberTwo);

    numberResult = division(numberOne, numberTwo);

    printf("%d / %d = %d\n", numberOne, numberTwo, numberResult);

    return(0);
}

int division(int numberOne, int numberTwo)
{
    int numberResult;

    numberResult = numberOne / numberTwo;

    return(numberResult);
}