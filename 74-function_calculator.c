#include<stdio.h>
// function declaration

void sum();
void sub();
void mul();
void div();
// function defination
void sum()
{
    int a, b, sum;
    printf("Enetr first digit : ");
    scanf("%d",&a);
    printf("Enetr second digit : ");
    scanf("%d",&b);
    sum = a + b;
    printf("sum is : %d", sum);
}
void sub()
{
    int a, b, sub;
    printf("Enetr first digit : ");
    scanf("%d",&a);
    printf("Enetr second digit : ");
    scanf("%d",&b);
    sub = a - b;
    printf("sub is : %d",sub);
}
void mul()
{
    int a, b, mul;
    printf("Enetr first digit : ");
    scanf("%d",&a);
    printf("Enetr second digit : ");
    scanf("%d",&b);
    mul = a * b;
    printf("mul is : %d",mul);
}
void div()
{
    float a, b, div;
    printf("Enetr first digit : ");
    scanf("%d",&a);
    printf("Enetr second digit : ");
    scanf("%d",&b);
    div = a / b;
    printf("div is : %d", div);
}
//function calling

void start()
{
    int option;
    printf("Enter one for sum\n");
    printf("Enter two for sub\n");
    printf("Enter two for mul\n");
    printf("Enter two for sub\n");
    scanf("%d",&option);
    if (option == 1)
    {
        sum();
    }
    
     else if (option == 2)
    {
        sub();
    }
     else if (option == 3)
    {
        mul();
    }
    
    else if (option == 4)
    {
        div();
    }
    else
    {
        printf("\nThis is out of option");
    }
}
void main()
{
    int a;
    printf("Enetr any number : ");
    scanf("%d", &a);
    do
    {
       start();
    } 
    while (a == 1);
    {
        printf("\n Press one for continue");
    }
}