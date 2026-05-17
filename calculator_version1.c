#include <stdio.h>

int addition(int numberOne, int numberTwo);
int subtraction(int numberOne, int numberTwo);
int multiplication(int numberOne, int numberTwo);
int division(int numberOne, int numberTwo);

int main (void)
{
    int numberOne;
    int numberTwo;
    int numberResult;
    int numberChoice;

    do
    {
        printf("*********************************Menu*********************************\n");
        printf("1.Addition.\n2.Subtraction.\n3.Multiplication.\n4.Division.\n5.Exit\n\nEnter your Choice : ");
        scanf("%d", &numberChoice);

        

        switch(numberChoice)
        {
            case 1:
            {
                printf("Enter the number One : ");
                scanf("%d", &numberOne);

                printf("Enter the number Two : ");
                scanf("%d", &numberTwo);

                printf("Addition.\n");
                numberResult = addition(numberOne, numberTwo);
                printf("%d + %d = %d\n\n", numberOne, numberTwo, numberResult);
            }
            break;

            case 2:
            {
                printf("Enter the number One : ");
                scanf("%d", &numberOne);

                printf("Enter the number Two : ");
                scanf("%d", &numberTwo);

                printf("Subtraction.\n");
                numberResult = subtraction(numberOne, numberTwo);
                printf("%d - %d = %d\n\n", numberOne, numberTwo, numberResult);
            }
            break;

            case 3:
            {
                printf("Enter the number One : ");
                scanf("%d", &numberOne);

                printf("Entr the numbe Two : ");
                scanf("%d", &numberTwo);

                printf("Multiplication.\n");
                numberResult = multiplication(numberOne, numberTwo);
                printf("%d * %d = %d\n\n", numberOne, numberTwo, numberResult);
            }
            break;

            case 4:
            {
                printf("Enter the number One : ");
                scanf("%d", &numberOne);

                printf("Enter the number Two : ");
                scanf("%d", &numberTwo);

                printf("Division.\n");
                numberResult = division(numberOne, numberTwo);
                printf("%d / %d = %d\n\n", numberOne, numberTwo, numberResult);
            }
            break;

            case 5:
            {
                printf("Thank You...\n");
                return(0);
            }
            break;

            default:
            {
                printf("Wrong Choice..Renter...\n\n");
            }
        }

    }while(1);

    return(0);
}

int addition(int numberOne, int numberTwo)
{
    int numberResult;

    numberResult = numberOne + numberTwo;

    return(numberResult);
}


int subtraction(int numberOne, int numberTwo)
{
    int numberResult;

    numberResult = numberOne - numberTwo;

    return(numberResult);
}

int multiplication(int numberOne, int numberTwo)
{
    int numberResult;

    numberResult = numberOne * numberTwo;

    return(numberResult);
}

int division(int numberOne, int numberTwo)
{
    int numberResult;

    numberResult = numberOne / numberTwo;

    return(numberResult);
}