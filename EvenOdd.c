#include <stdio.h>

int numberOne;

int main (void)
{
    printf("Enter the number one : ");
    scanf("%d", &numberOne);

    if(numberOne % 2 == 0)
    {
        printf("%d is Even number.\n", numberOne);
    }

    if(numberOne % 2 == 1)
    {
        printf("%d is Odd Number.\n", numberOne);
    }
}