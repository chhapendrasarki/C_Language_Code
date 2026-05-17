#include <stdio.h>

int numberAngle;

int main (void)
{
    printf("Enter the Angle : ");
    scanf("%d", &numberAngle);

    if(numberAngle < 90)
    {
        printf("Acute Angle.\n");
    }

    if(numberAngle == 90)
    {
        printf("Right Angle.\n");
    }

    else
    {
        printf("Obtuse Angle.\n");
    }

    return(0);
}