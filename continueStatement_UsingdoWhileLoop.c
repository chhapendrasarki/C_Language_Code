#include <stdio.h>

int i;
int number;

int main (void)
{
    printf("Enter the number : ");
    scanf("%d", &number);

    i = 1;
    do
    {
        if(i == number)
        {
            ++i;
            continue;
        }
        printf("%d\n", i);

        ++i;        
    }while(i <= 100);

    return(0);
}