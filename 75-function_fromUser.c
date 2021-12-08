#include<stdio.h>
void sum();
void main()
{
    int a,b;
    printf("Enter first number here : ");
    scanf("%d",&a);
    printf("Enter second number here : ");
    scanf("%d",&b);
    sum(a, b);       // argument
}

void sum( int x, int y)   // perameter
{
    printf("sum is : %d",x+y);
}