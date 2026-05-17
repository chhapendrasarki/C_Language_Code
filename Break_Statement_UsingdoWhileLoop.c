#include <stdio.h>

int i;
int number;

int main (void)
{
    printf("Enter the number to Stop : ");
    scanf("%d", &number);

    i = 1; 
    do
    {
        printf("%d\n", i);

        if(i == number)
        {
            break;
        }
        ++i;
    }while(i <= 100);

    return(0);
}