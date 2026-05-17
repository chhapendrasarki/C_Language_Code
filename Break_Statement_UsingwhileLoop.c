#include <stdio.h>


int i;
int number;

int main (void)
{
    printf("Enter the number to Stop : ");
    scanf("%d", &number);

    i = 1;

    while(i <= 100)
    {
        printf("%d\n", i);

        if(i == number)
        {
            break;
        }

        ++i;
    }

    return(0);
}