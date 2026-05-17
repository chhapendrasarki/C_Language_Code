#include <stdio.h>

int r;
int c;

int main (void)
{
    for( r = 1; r <= 4; ++r)
    {
        for(c = 1; c <= r; ++c)
        {
            printf("*\t");
        }
        printf("\n");
    }

    return(0);
}