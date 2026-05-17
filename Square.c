#include <stdio.h>

int numberSquare;
int i;

int main (void)
{
    printf("1 to 10 Square Print.\n");
    for(i = 1; i <= 10; ++i)
    {
        numberSquare = i * i;
        printf("%d = %d\n", i, numberSquare);
    }

    return(0);
}