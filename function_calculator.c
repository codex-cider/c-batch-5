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
    printf("called sub");
}
void mul()
{
    printf("called mul");
}
void div()
{
    printf("called div");
}
//function calling

void main()
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