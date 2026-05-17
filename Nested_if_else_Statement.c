#include <stdio.h>

int Rain;
int Light;
int Time;

int main (void)
{
    printf("Enter the number For Rain : ");
    scanf("%d", &Rain);

    if(Rain == 0)
    {
        printf("Enter the number For Time : ");
        scanf("%d", &Time);

        if(Time == 0)
        {
            printf("Enter the number For Light : ");
            scanf("%d", &Light);

            if(Light == 0)
            {
                printf("Sleep.");
            }

            else{
                printf("Study.");
            }
        }
        
        else
        {
            printf("Enter the number For Light : ");
            scanf("%d", &Light);
            
            if(Light == 0)
            {
                printf("Marathi Study.");
            }

            else
            {
                printf("Hindi Study.");
            }
        }

    }

    else
    {
        printf("Enter the number For Time : ");
        scanf("%d", &Time);

        if(Time == 0)
        {
            printf("Enter the number For Light : ");
            scanf("%d", &Light);

            if(Light == 0)
            {
                printf("Sleep.");
            }

            else
            {
                printf("Study.");
            }
        }

        else
        {
            printf("Enter the number For Light : ");
            scanf("%d", &Light);

            if(Light == 0)
            {
                printf("History Study.");
            }

            else
            {
                printf("Geography Study.");
            }
        }
    }

    return(0);
}