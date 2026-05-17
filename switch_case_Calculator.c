#include <stdio.h>

char numberChoice;;
int numberIntChoice;
int numberIntOne;
int numberIntTwo;
int numberIntResult;
float numberFloatOne;
float numberFloatTwo;
float numberFloatResult;


int main (void)
{
    printf("*****Menu*****\n1.Addition.\n2.Subtraction.\n3.Multiplication.\n4.Divition.\n5.Modulus.\n\nA. For Addition.\nS. For Subtraction.\nM. For Multiplication.\nD. For Division.\nR. For Modulus.\n");
    printf("Enter The Choice : ");
    scanf("%c", &numberChoice);

    switch(numberChoice)
    {
        case 'A':
        {
            printf("Entered Choice %c For Addition.\n\n", numberChoice);
            printf("****Menu****\nEnterMenu.\n1. For Integer Addition.\n2. For Float Addition.\n");
            printf("Enter The Value ForAddition : ");
            scanf("%d", &numberIntChoice);
        }

        switch(numberIntChoice)
        {
            case 1:
            {
                printf("Entered Value %d For Integer Addition.\n\n", numberIntChoice);
                printf("Enter The Number One : ");
                scanf("%d", &numberIntOne);
                printf("Enter The Number Two : ");
                scanf("%d", &numberIntTwo);

                numberIntResult = numberIntOne + numberIntTwo;

                printf("Integer Addition is : %d.\n", numberIntResult);
            }
            break;

            case 2:
            {
                printf("Entered Value %d For Float Addition.\n\n",numberIntChoice);
                printf("Enter The Number One : ");
                scanf("%f", &numberFloatOne);
                printf("Enter The Number Two : ");
                scanf("%f", &numberFloatTwo);

                numberFloatResult = numberFloatOne + numberFloatTwo;

                printf("Float Addition Is : %f.\n", numberFloatResult);
            }
            break;

        }
        break;

        case 'S':
        {
            printf("Entered Choice %c For Subtraction.\n\n", numberChoice);
            printf("****Menu****\nEnter Menu.\n3. For Integer Subtraction.\n4. For Float Subtraction.\n");
            printf("Enter The Value For Subtraction : ");
            scanf("%d", &numberIntChoice);
        }

        switch(numberIntChoice)
        {
            case 3:
            {
                printf("Entered Value %d For Integer Subtraction.\n\n", numberIntChoice);
                printf("Enter The Number One : ");
                scanf("%d", &numberIntOne);
                printf("Enter The Number Two : ");
                scanf("%d", &numberIntTwo);

                numberIntOne > numberIntTwo ? (numberIntResult = numberIntOne - numberIntTwo) : (numberIntResult = numberIntTwo - numberIntOne);

                printf("Integer Subtraction Is : %d.\n", numberIntResult);
            }
            break;

            case 4:
            {
                printf("Entered Value %d For Float Subtraction.\n\n", numberIntChoice);
                printf("Enter The Number One : ");
                scanf("%f", &numberFloatOne);
                printf("Enter The Number Two : ");
                scanf("%f", &numberFloatTwo);

                numberFloatOne > numberFloatTwo ? (numberFloatResult = numberFloatOne - numberFloatTwo) : (numberFloatTwo - numberFloatOne);

                printf("Float Subtraction Is : %f.\n", numberFloatResult);
            }
            break;
        }
        break;

        case 'M':
        {
            printf("Entered Choice %c For multiplication.\n", numberChoice);
            printf("****Menu****\nEnter Menu.\n5. For Integer Multiplication.\n6. For Float Multiplication.\n");
            printf("Enter The Value For multiplication : ");
            scanf("%d", &numberIntChoice);
        }

        switch(numberIntChoice)
        {
            case 5:
            {
                printf("Entered Value %d For Integer Multiplication.\n\n", numberIntChoice);
                printf("Enter The Number One : ");
                scanf("%d", &numberIntOne);
                printf("Enter The Number Two : ");
                scanf("%d", &numberIntTwo);

                numberIntResult = numberIntOne * numberIntTwo;

                printf("Integer Multiplication Is : %d.\n", numberIntResult);
            }
            break;

            case 6:
            {
                printf("EnteredValue %d ForFloat Multiplication.\n\n", numberIntChoice);
                printf("Enter The Number One : ");
                scanf("%f", &numberFloatOne);
                printf("Enter The Number Two : ");
                scanf("%f", &numberFloatTwo);

                numberFloatResult = numberFloatOne * numberFloatTwo;

                printf("Float multiplication Is : %f.\n", numberFloatResult);
            }
            break;
        }
        break;

        case 'D':
        {
            printf("Entered Choice %c For Division.\n", numberChoice);
            printf("****Menu****\nEnter Menu.\n7. For Integer division.\n8. For Float Division.\n");
            printf("Enter The Value For Division : ");
            scanf("%d", &numberIntChoice);
        }

        switch(numberIntChoice)
        {
            case 7:
            {
                printf("Entered Value %d For Integer Division.\n\n", numberIntChoice);
                printf("Enter The Number One : ");
                scanf("%d", &numberIntOne);
                printf("Enter The Number Two : ");
                scanf("%d", &numberIntTwo);

                numberIntOne > numberIntTwo ? (numberIntResult = numberIntOne / numberIntTwo) : (numberIntResult = numberIntTwo / numberIntOne);

                printf("Integer Division Is : %d.\n", numberIntResult);
            }
            break;

            case 8:
            {
                printf("Entered Value %d For Float Division.\n", numberIntChoice);
                printf("Enter The Number One : ");
                scanf("%f", &numberFloatOne);
                printf("Enter The Number Two : ");
                scanf("%f", &numberFloatTwo);

                numberFloatOne > numberFloatTwo ? (numberFloatResult = numberFloatOne / numberFloatTwo) : (numberFloatResult = numberFloatTwo / numberFloatOne);

                printf("Float Division Is : %f.\n", numberFloatResult);
            }
            break;
        }
        break;

        case 'R':
        {
            printf("Entered Choice %c For Modulus.\n\n", numberChoice);
            printf("Enter The Number One : ");
            scanf("%d", &numberIntOne);
            printf("Enter The number Two : ");
            scanf("%d", &numberIntTwo);

            numberIntResult = numberIntOne % numberIntTwo;

            printf("Integer Modulus Is : %d.\n", numberIntResult);
        }
        break;

        default:
            {
                printf("Default Case.");
            }
    }

    return(0);
}