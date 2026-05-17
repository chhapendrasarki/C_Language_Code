#include <stdio.h>

int i;
int number;

int main (void)
{
    printf("Enter the number to Stop : ");
    scanf("%d", &number);

    for(i = 1; i <= 100; ++i)
    {
        printf("%d\n", i);

        if(i == number)
        {
            break;
        }
    }

    return(0);
}