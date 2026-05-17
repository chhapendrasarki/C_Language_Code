#include <stdio.h>

int number;

int main (void)
{
    printf("Enter the number : ");
    scanf("%d", &number);

    if(number % 2 == 1)
        printf("Number is Odd.\n");

    else
        printf("Number is Even.\n");

    return(0);
}