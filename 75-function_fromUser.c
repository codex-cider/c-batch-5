#include<stdio.h>
void sum();
void main()
{
    int a,b;
    printf("Enter first number here : ");
    scanf("%d",&a);
    printf("Enter second number here : ");
    scanf("%d",&b);
    int c = a + b;
    printf("Sum of this number is : %d\n",c);
    sum(a, b);       // argument
}

void sum( int x, int y)   // perameter
{
    printf("%d, %d",x, y);
}