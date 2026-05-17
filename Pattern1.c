#include <stdio.h>

int i;
int j;

int main (void)
{
    for(i = 1; i <= 2; ++i)
    {
        for(j = 1; j <= 5; ++j)
        {
            printf("*\t");
        }
        printf("\n");
    }
    return(0);
}