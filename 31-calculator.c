#include<stdio.h>
void sum();
void sub();
void mul();
void div();
void sum()
{
    printf("called SUM");
}
void sub()
{
    printf("called SUB");
}
void mul()
{
    printf("called MUL");
}
void div()
{
    printf("called DIV");
}
void main()
{
    int option;
    printf("press 1 for sum\n");
    printf("press 2 for sub\n");
    printf("press 3 for mul\n");
    printf("press 4 for div\n");
    scanf("%d",&option);
    if(option==1)
    {
        sum();
    }
    else if(option==2)
    {
        sub();
    }
    else if (option==3)
    {
        mul();
    }
    else if (option==4)
    {
        div();
    }
    else
    {
        printf("wrong option");
    }
}


