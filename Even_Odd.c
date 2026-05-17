#include <stdio.h>

int numberOne;

int main (void)
{
    printf("Enter the number : ");
    scanf("%d", &numberOne);

    if(numberOne % 2 == 1)

        printf("%d Number is Odd.\n", numberOne);
        
    if(numberOne % 2 == 0)
        printf("%d Number is Even.\n", numberOne);    

    return(0);
}