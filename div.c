#include <stdio.h>

void div();

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