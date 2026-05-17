#include <stdio.h>

int numberOddSum = 0;
int numberEvenSum = 0;
int numberStart;
int numberEnd;
int i;

int main (void)
{
    printf("Enter the Start Point : ");
    scanf("%d", &numberStart);

    printf("Enter the End Point : ");
    scanf("%d", &numberEnd);

    for(i = numberStart; i <= numberEnd; ++i)
    {
        if(i % 2 == 0)
        {
            numberEvenSum = i + numberEvenSum;
        }
        else
        {
            numberOddSum = i + numberOddSum;
        }
    }

    printf("Sum Of Even = %d\n", numberEvenSum);
    printf("Sum Of Odd = %d\n", numberOddSum);

    return(0);
}