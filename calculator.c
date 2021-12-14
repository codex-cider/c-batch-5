#include <stdio.h>
void add();
void sub();
void mul();
void div();
void main()
{

    int option;
    printf("press 1 for sum\n");
    printf("press 2 for substraction\n");
    printf("press 3 for multiplication\n");
    printf("press 4 for division\n");
    scanf("%d", &option);
    int a, b;
    printf("enter the value of a:");
    scanf("%d", &a);
    printf("enter the value of b:");
    scanf("%d", &b);

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
void add(int x, int y)
{

    printf("Sum of %d and %d is %d", x + y);
}
void sub(int x, int y)
{

    printf("sub of %d and %d is %d", x - y);
}
void mul(int x, int y)
{

    printf("mul of %d and %d is %d", x * y);
}
void div(int x, int y)
{

    printf("div of %d and %d is %d", x / y);
}
