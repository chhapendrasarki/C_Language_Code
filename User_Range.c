#include <stdio.h>

int startPoint;
int endPoint;
int i;
int numberSum;

int main (void)
{
    printf("Entre the Start Point : ");
    scanf("%d", &startPoint);

    printf("Enter the End Point : ");
    scanf("%d", &endPoint);

    for(i = startPoint; i <= endPoint; ++i)
    {
        printf("%d\n", i);

        numberSum = i + numberSum;
    }

    printf("number Sum = %d\n", numberSum);

    return(0);
}