#include <stdio.h>
void sum();
void main()
{
    int a, b;
    printf("enter the value of a:");
    scanf("%d", &a);
    printf("enter the value of b:");
    scanf("%d", &b);
    int sum = a + b;
    printf("sum of a and b is %d", sum);
}

void sum(int x, int y)
{
    printf("%d,%d", x, y);
}