#include <stdio.h>

int number;
int i;

int main (void)
{
    printf("1 to 10 Cube Print.\n");
    for(i = 1; i <= 10; ++i)
    {
        number = i * i * i;
        printf("%d = %d\n", i, number);
    }

    return(0);
}