#include <stdio.h>

int startNumber;
int i;
int endNumber;

int main (void)
{
    printf("Enter the Start Number : ");
    scanf("%d", &startNumber);

    printf("Enter the end Number : ");
    scanf("%d", &endNumber);

    for(i = startNumber; i <= endNumber; ++i)
    {
        if(i % 2 == 0)
        {
            printf("%d is Even\n", i);
        }

        else
        {
            printf("%d is Odd\n", i);
        }
    }

    return(0);
}