#include <stdio.h>

int Rain;
int Time;
int Light;

int main (void)
{
    printf("Enter 0 For No Rain.\nEnter 1 For Rain.\n\n");
    printf("Enter the Value For Rain : ");
    scanf("%d", &Rain);

    if(Rain == 0)
    {
        printf("Enter 1 For Morning.\nEnter 0 For Night.\n\n");

        printf("Enter The Value for Time : ");
        scanf("%d", &Time);

        if(Time == 0)
        {
            printf("Enter 0 For Sleep.\nEnter 1 For Study.\n\n");

            printf("Enter the value for Sleep and Study : ");
            scanf("%d", &Light);

            if(Light == 0)
            {
                printf("Sleep.\n");
            }

            if(Light == 1)
            {
                printf("Study.\n");
            }
        }

        if(Time == 1)
        {
            printf("Enter 0 For Study Marathi.\nEnter 1 For Study Hindi.\n\n");

            printf("Enter the value for Study : ");
            scanf("%d", Light);

            if(Light == 0)
            {
                printf("Study Marathi.\n");
            }

            if(Light == 1)
            {
                printf("Study Hindi.\n");
            }
        }
    }

    if(Rain == 1)
    {
        if(Time == 0)
        {
            printf("Enter 0 For Sleep.\nEnter 1 For Studt.\n\n");

            printf("Enter The value For Sleep and Study : ");
            scanf("%d", &Light);

            if(Light == 0)
            {
                printf("Sleep.\n");
            }

            if(Light == 1)
            {
            printf("Study.\n");
            }
        }

        if(Time == 1)
        {
            printf("Enter 0 For Study History.\nEnter 1 For Study Geography.\n\n");

            printf("Enter the value For Study : ");
            scanf("%d", &Light);

            if(Light == 0)
            {
                printf("Study History.\n");
            }

            if(Light == 1)
            {
                printf("Study Geography.\n");
            }
        }
    }

    return(0);
}