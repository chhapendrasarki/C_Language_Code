#include <stdio.h>

int i;
int number;
int numberOne;

int main (void)
{
    printf("Enter the number : ");
    scanf("%d", &number);

    for(i = 1; i <= 10; ++i)
    {
        if(i % 2 == 0)
        {
            numberOne = number * i;
            printf("%d x %d = %d\n", number, i,  numberOne);
        }
    }

    return(0);
}