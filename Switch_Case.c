#include <stdio.h>

int signal;

int main (void)
{
    printf("Enter\n1 For Red.\n2 For Yello.\n3 For Green.\n\n");
    printf("Enter the number Of Signal : ");
    scanf("%d", &signal);

    switch(signal)
    {
        case 1:
        {
            printf("Stop.\n");
        }
        break;

        case 2:
        {
            printf("Stop.\n");
        }
        break;

        case 3:
        {
            printf("Go.\n");
        }
        break;

        default:
        {
            printf("Wrong Signal.\n");
        }
    }

    return(0);
}