#include <stdio.h>

void sub();

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