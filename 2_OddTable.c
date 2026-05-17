#include <stdio.h>

int number;
int numberOne;
int i;

int main (void)
{
    printf("Enter the number : ");
    scanf("%d", &number);

    for(i = 1; i <= 10; ++i)
    {
        if(i % 2 == 1)
        {
            numberOne = number * i;
            printf("%d x %d = %d\n", number, i, numberOne);
        }
    }

    return(0);
}