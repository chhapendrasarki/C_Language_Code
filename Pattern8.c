#include <stdio.h>

int r;
int c;

int main (void)
{
    for(r = 1; r <= 5; ++r)
    {
        if(r % 2 == 1)
        {
            for(c = 1; c <= 1; ++c)
            {
                printf("*\t");
            }
        }

        else if(r % 2 == 0)
        {
            for(c = 1; c <= 3; ++c)
            {
                printf("*\t");
            }
        }
        printf("\n");
    }

    return(0);
}