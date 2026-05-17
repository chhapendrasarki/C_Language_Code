#include <stdio.h>

int main (void)
{
    for(int r = 1; r <= 3; ++r)
    {
        for(int c = 1; c <= 4; ++c)
        {
            printf("*\t");
        }
        printf("\n");
    }

    return(0);
}