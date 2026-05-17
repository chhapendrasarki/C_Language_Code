#include <stdio.h>

int r;
int c;

int main (void)
{
    for(r = 1; r <= 5; ++r)
    {
        for(c = 1; c <= 2; ++c)
        {
            printf("*\t");
        }
        printf("\n");
    }

    return(0);
}