#include <stdio.h>

int i;
int number;

int main (void)
{
    printf("Enter the number : ");
    scanf("%d", &number);
    i = 1;
    while(i <= 100)
    {
        if(i == number)
        {
            ++i;
            continue;
        }
        printf("%d\n", i);
        
        ++i;     
    }

    return(0);
}