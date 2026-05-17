#include <stdio.h>

int i;
int j;
int numberResult;

int main (void)
{
    for(i = 1; i <= 10; ++i)
    {
        printf("Table Of %d\n", i);
        for(j = 1; j <= 10; ++j)
        {
            numberResult = i * j;
            printf("%d x %d = %d\n", i, j, numberResult);
        }
        printf("\n");
    }
    return(0);
}