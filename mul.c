#include <stdio.h>

void mul();

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