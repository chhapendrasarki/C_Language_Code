#include <stdio.h>

int numberOne;
int numberTwo;
int numberPosition;
int numberOfBits;
int numberResult;

int main (void)
{
    printf("Enter The number One : ");
    scanf("%d", &numberOne);

    printf("Enter the Position number : ");
    scanf("%d", &numberPosition);

    printf("Enter The number Of Bits : ");
    scanf("%d", &numberOfBits);

    numberTwo = ~0;

    numberTwo = numberTwo << numberOfBits;

    numberTwo = ~numberTwo;

    numberTwo = numberTwo << (numberPosition - numberOfBits);

    numberResult = numberOne | numberTwo;

    printf("Result : %d\n", numberResult);

    return(0);
}
