#include <stdio.h>
#include <stdlib.h>

int main() 
{
    float num1, num2;
    char cal, opr;

    printf("Want to use calculator?(Y/N) : \n");
    scanf("%c", &cal);
    

    if (cal == 'n' || cal == 'N')
    {
        printf("\nThank You !\n");
        exit(0);

    }

    else if (cal == 'y' || cal == 'Y')
    {
        printf("Chosse an operator ( + , - , * , /) : \n");
        scanf(" %c", &opr);

        printf("Enter the value of Number 1 : \n");
        scanf(" %f", &num1);
        printf("Enter the value of Number 2: \n");
        scanf(" %f", &num2);


        switch (opr)
        {
            case '+':
                printf("Addition of Two Numbers: \n\n %.2f = %.2f\n", num1, num2, (num1 + num2));
                break;
            case '-':
                printf("Substraction of Two Numbers : \n\n %.2f - %2.f = %.2f\n", num1, num2, (num1, num2));
                break;
            case '*':
                printf("Multiplication of Two Numbers : \n\n %2.f * %2.f = %.2f\n", num1, num2, (num1 * num2));
            case '/':
                if (num2 == 0)
                {
                    printf("Cannot Divide by Zero !\n");
                    break;
                }
                else
                {
                    printf("Division of Two Numbers : \n\n %2.f / %2.f = %.2f = %.2f\n", num1, num2, (num1 / num2));
                    break;
                }

            default:
                printf("Invalid Operator \n");
                break;
        }

    }

    else if (cal != 'n' && cal != 'N' && cal != 'y' && cal != 'Y')
        {
            printf("Invalid input!\n");
        }

        printf("\n Thank You ! \n");

        return 0;
}