#include <stdio.h>

int numberStart;
int numberEnd;
int i;
int numberSum;
float numberCount = 0;
float numberAverage;

int main (void)
{
    printf("Enter Teh Start Point : ");
    scanf("%d", &numberStart);

    printf("Enter the End Point : ");
    scanf("%d", &numberEnd);

    for(i = numberStart; i <= numberEnd; ++i)
    {
        numberSum = numberSum + i;

        numberCount = numberCount + 1;
    }

    numberAverage = numberSum / numberCount;

    printf("Avege Of Range %d To %d = %.2f\n", numberStart, numberEnd, numberAverage);    

    return(0);
}