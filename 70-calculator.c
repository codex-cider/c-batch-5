#include<stdio.h>
// function declaration

void sum();
void sub();
void mul();
void div();
// function defination
void sum()
{
    printf("called sum");
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
    printf("Enter two for sub\n");
    printf("Enter two for sub\n");
    scanf("%d",&option);
    if (option == 1)
    {
        sum();
    }
}
