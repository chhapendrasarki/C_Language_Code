#include <stdio.h>

int rain;
int time;
int light;

int main (void)
{
    printf("Enter the value of rain : ");
    scanf("%d", &rain);

    switch(rain)
    {
        case 0:
        {
            printf("No Rain.\n");
            printf("Enter the value of Time : ");
            scanf("%d", &time);

            switch(time)
            {
                case 0:
                {
                    printf("No Rain -> Day.\n");
                    printf("Enter The Value Of Light : ");
                    scanf("%d", &light);

                    switch(light)
                    {
                        case 0:
                        {
                            printf("Sleep.\n");
                        }
                        break;

                        case 1:
                        {
                            printf("Study.\n");
                        }
                        break;
                    }// switch end of light.
                }
                break;

                case 1:
                {
                    printf("No Rain -> Night.\n");
                    printf("Enter the value of Light : ");
                    scanf("%d", &light);

                    switch(light)
                    {
                        case 0:
                        {
                            printf("Marathi Study.\n");
                        }
                        break;

                        case 1:
                        {
                            printf("Hindi Study.\n");
                        }
                        break;
                    }// switch case end of light.
                }
                break;
            }// switch case end of time.
        }
        break;

        case 1:
        {
            printf("Rain.\n");
            printf("Enter the value of Time : ");
            scanf("%d", &time);

            switch(time)
            {
                case 0:
                {
                    printf("Rain -> Day.\n");
                    printf("Enter the value of Lifht : ");
                    scanf("%d", &light);

                    switch(light)
                    {
                        case 0:
                        {
                            printf("Sleep.\n");
                        }
                        break;

                        case 1:
                        {
                            printf("Study.\n");
                        }
                        break;

                    }// switch case end of light.
                }
                break;

                case 1:
                {
                    printf("Rain -> Night.\n");
                    printf("Enter the value of Light : ");
                    scanf("%d", &light);

                    switch(light)
                    {
                        case 0:
                        {
                            printf("History Study.\n");
                        }
                        break;

                        case 1:
                        {
                            printf("Geography Study.\n");
                        }
                        break;

                    }// switch case end of light.
                }
                break;

            }// switch case end of time.
        }
        break;

        default:
        printf("default Case.\n");
    }// switch case end of Rain.

    return(0);
}