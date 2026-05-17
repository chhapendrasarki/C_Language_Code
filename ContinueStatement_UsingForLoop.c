#include <stdio.h>

int number;
int i;

int main (void)
{
    printf("Enter the number : ");
    scanf("%d", &number);

    for(i = 1; i <= 100; ++i)
    {
        if(i == number)
        {
            continue;
        }
        printf("%d\n", i);
    }

    return(0);
}