#include <stdio.h>

void add();

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