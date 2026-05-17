#include <stdio.h>

int i;
int j;
int k;

int main (void)
{
    for(i = 1; i <= 4; ++i)
    {
        // Space print Code.
        for(j = 1; j <= (4 - i); ++j)
        {
            printf(" \t");
        }

        // Star print code.
        for(k = 1; k <= i; ++k)
        {
            printf("*\t");
        }
        printf("\n");
    }

    return(0);
}