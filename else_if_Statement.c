#include <stdio.h>

int angle;

int main (void)
{
    printf("Enter the angle : ");
    scanf("%d", &angle);

    if(angle == 90)
    {
        printf("Right Angle.\n");
    }

    else if(angle < 90)
    {
        printf("Acute Angle.\n");
    }

    else if(angle > 90)
    {
        printf("Obtuse Angle.\n");
    }

    return(0);
}