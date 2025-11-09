#include <stdio.h>
 

void sum(int a, int b)
{
    printf("sum is : %d", a + b);
}

void sub(int a, int b)
{
    printf("sub is : %d", a - b);
}

void mul(int a, int b)
{
    printf("mul is : %d", a * b);
}

void div(int a, int b)
{
    printf("div is : %d", a / b);
}

void mod(int a, int b)
{
    printf("mod is : %d", a % b);
}

int main()
{
    int a, b, choice;
    printf("Enter a :");
    scanf("%d", &a);
    printf("Enter b :");
    scanf("%d", &b);

    do
    {

        printf(" \n Select Your Choice :");
        printf(" \n 0 for Exit.");
        printf(" \n 1 for Addition.");
        printf(" \n 2 for Subtraction.");
        printf(" \n 3 for Multiplication.");
        printf(" \n 4 for Divison.");
        printf(" \n 5 for Module.");

        printf(" Enter Your Choice :");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            sum(a, b);
            break;
        case 2:
            sub(a, b);
            break;
        case 3:
            mul(a, b);
            break;
        case 4:
            div(a, b);
            break;
        case 5:
            mod(a, b);
            break;
        case 0:
            printf("Exit");
            break;
        default:
            printf("Wrong Choice !");
        }

    } while (choice != 0);

    return 0;
}