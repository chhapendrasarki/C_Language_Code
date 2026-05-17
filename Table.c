#include <stdio.h>

int i;
int number;
int numberTable;

int main (void)
{
    printf("Enter the number toe Calculate Table : ");
    scanf("%d", &number);

    for(i = 1; i <= 10; ++i)
    {
        numberTable = number * i;
        printf("%d x %d = %d\n", number, i, numberTable);
    }
    
    return(0);
}