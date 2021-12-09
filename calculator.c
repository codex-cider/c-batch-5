#include <stdio.h>
void add()
{
    int a;
    int b;
    int sum;

    printf("enter first number");
    scanf("%d", &a);
    printf("enter second number");
    scanf("%d", &b);

    sum = a + b;

    printf("Sum of %d and %d is %d", a, b, sum);
}
void sub()
{
    int a;
    int b;
    int sub;

    printf("enter first number");
    scanf("%d", &a);
    printf("enter second number");
    scanf("%d", &b);

    sub = a - b;

    printf("sub of %d and %d is %d", a, b, sub);
}
void mul()
{
    int a;
    int b;
    int mul;

    printf("enter first number");
    scanf("%d", &a);
    printf("enter second number");
    scanf("%d", &b);

    mul = a * b;

    printf("mul of %d and %d is %d", a, b, mul);
}
void div()
{
    int a;
    int b;
    int div;

    printf("enter first number");
    scanf("%d", &a);
    printf("enter second number");
    scanf("%d", &b);

    div = a / b;

    printf("div of %d and %d is %d", a, b, div);
}
void main()
{

    int option;
    printf("press 1 for sum\n");
    printf("press 2 for substraction\n");
    printf("press 3 for multiplication\n");
    printf("press 4 for division\n");
    scanf("%d", &option);
    int a, b;

    if (option == 1)
    {
        add(a, b);
    }
    else if (option == 2)
    {
        sub(a, b);
    }
    else if (option == 3)
    {
        mul(a, b);
    }
    else if (option == 4)
    {
        div(a, b);
    }
    else
    {
        printf("invalid");
    }
}
