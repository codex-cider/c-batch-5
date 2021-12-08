#include <stdio.h>
void sum();
void main()
{
    int a, b;
    printf("enter the value of a:");
    scanf("%d", &a);
    printf("enter the value of b:");
    scanf("%d", &b);
    sum(a, b);
}

void sum(int x, int y)
{

    printf("sum is:%d", x + y);
}